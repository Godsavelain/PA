package patchouli
import chisel3._
import chisel3.util._
import patchouli.Constant._

class Div extends Module{
  val io = IO(new Bundle{
    val in1 = Input(UInt(64.W)) //被除数
    val in2 = Input(UInt(64.W)) //除数
    val out_div = Output(UInt(64.W))
    val out_rem = Output(UInt(64.W))
    val is_signed = Input(Bool())
    val div_valid = Input(Bool())
    val div_ready = Output(Bool())
  })
  val s_idle :: s_divon :: s_divend :: s_div_zero :: Nil = Enum(4)
  val state = RegInit(s_idle)
  val reg_in1 = RegInit(0.U(128.W)) //被除数
  val reg_in2 = RegInit(0.U(65.W)) //除数

  val quo_out = RegInit(0.U(64.W)) //商
  val rem_out = RegInit(0.U(64.W)) //余数

  val quo_neg = RegInit(0.B)//得到的商应为负数
  val rem_neg = RegInit(0.B)//得到的余数应为负数

  val minus_value = Wire(UInt(65.W))

  io.out_div := quo_out
  io.out_rem := rem_out
  io.div_ready := (state === s_idle)

  //参与每一次减法的被除数部分与除数部分
  val temp_minus1 = reg_in1(127,63)
  val temp_minus2 = reg_in2
  minus_value := temp_minus1 - temp_minus2

  val cnt = RegInit(0.U(6.W)) //计数器

  val in1_num = Mux(io.is_signed, Mux(io.in1(63), (~io.in1 + 1.U), io.in1) , io.in1)
  val in2_num = Mux(io.is_signed, Mux(io.in2(63), (~io.in2 + 1.U), io.in2) , io.in2)

  switch(state) {
    is(s_idle) {
      when(io.div_valid) {
        state := Mux((io.in2 === 0.U) ,s_div_zero ,s_divon)
        reg_in1 := Cat(Fill(64 ,"b0".U) , in1_num)
        reg_in2 := Cat("b0".U, in2_num)
        quo_neg := io.in1(63) ^ io.in2(63)
        rem_neg := io.in1(63)
      }
    }
    is(s_divon) {
      when(cnt === 63.U) {
        state := s_divend
        cnt := 0.U
        rem_out := Mux(minus_value(64), temp_minus1(63,0) ,minus_value(63,0))
        quo_out := Mux(minus_value(64), Cat(quo_out(62,0) ,"b0".U), Cat(quo_out(62,0) ,"b1".U))
      }otherwise{
        state := s_divon
        cnt := cnt + 1.U
        reg_in1 := Mux(minus_value(64), Cat(reg_in1(126,0),"b0".U) , Cat(Cat(minus_value, reg_in1(62,0))(126,0),"b0".U))
        quo_out := Mux(minus_value(64), Cat(quo_out(62,0) ,"b0".U), Cat(quo_out(62,0) ,"b1".U))
      }
    }
    is(s_divend) {
      when(true.B) {
        state := s_idle
        rem_out := Mux(rem_neg, ~rem_out+1.U , rem_out)
        quo_out := Mux(quo_neg, ~quo_out+1.U , quo_out)
      }
    }
    is(s_div_zero) {
      when(true.B) {
        state := s_idle
        //remains to be done
      }
    }
  }

}