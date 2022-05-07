package patchouli
import chisel3._
import chisel3.util._
import patchouli.Constant._

  class Mdu extends Module{
    val io = IO(new Bundle{
      val in1 = Input(UInt(64.W))
      val in2 = Input(UInt(64.W))
      val out = Output(UInt(64.W))
      val mduop_i = Input(UInt(4.W))
      val mdu_valid = Input(Bool())
      val mdu_ready = Output(Bool())
    })

    //mul   div   divu
    val s_idle :: s_start :: s_wait_m :: s_wait_d :: Nil = Enum(4)
    val state = RegInit(s_idle)
    val reg_mduop = RegInit(0.U(4.W))
    val is_mul = Wire(Bool())
    val is_div = Wire(Bool())
    val is_divu = Wire(Bool())
    val in1_sign = Wire(Bool())
    val in2_sign = Wire(Bool())
    val mul_high = Wire(Bool())
    val is_word = Wire(Bool())
    val want_div = Wire(Bool())
    val want_rem = Wire(Bool())

    val reg_x = RegInit(0.U(64.W))
    val reg_y = RegInit(0.U(64.W))
    val reg_out = RegInit(0.U(64.W))

    val completed = RegInit(false.B)

    val mul = Module(new Mul)
    val div = Module(new Div)

    is_div := (reg_mduop === MDU_DIV) || (reg_mduop === MDU_REM) || (reg_mduop === MDU_DIVW) || (reg_mduop === MDU_REMW)

    is_divu := (reg_mduop === MDU_DIVU) || (reg_mduop === MDU_REMU) || (reg_mduop === MDU_DIVUW) || (reg_mduop === MDU_REMUW)

    is_mul := !(is_div || is_divu || (reg_mduop === MDU_X))

    in1_sign := Mux(((reg_mduop === MDU_MUL) || (reg_mduop === MDU_MULH) || (reg_mduop === MDU_MULHSU)) , io.in1(63) ,0.B)

    in2_sign := Mux(((reg_mduop === MDU_MUL) || (reg_mduop === MDU_MULH) ) , io.in2(63) ,0.B)

    mul_high := (reg_mduop === MDU_MULH) || (reg_mduop === MDU_MULHSU) || (reg_mduop === MDU_MULHU)

    is_word := (reg_mduop === MDU_MULW) || (reg_mduop === MDU_DIVW) || (reg_mduop === MDU_DIVUW) || (reg_mduop === MDU_REMW) || (reg_mduop === MDU_REMUW)

    want_div := (reg_mduop === MDU_DIV) || (reg_mduop === MDU_DIVU) || (reg_mduop === MDU_DIVW) || (reg_mduop === MDU_DIVUW)

    want_rem := (reg_mduop === MDU_REM) || (reg_mduop === MDU_REMU) || (reg_mduop === MDU_REMW) || (reg_mduop === MDU_REMUW)

    io.mdu_ready := completed
    io.out := reg_out

    val temp_x = Mux(is_word ,Sext32_64(reg_x(31,0)) , reg_x)
    val temp_y = Mux(is_word ,Sext32_64(reg_y(31,0)) , reg_y)

    mul.io.in1 := Mux(in1_sign , Cat(temp_x(63), temp_x) , Cat("b0".U, temp_x))
    mul.io.in2 := Mux(in2_sign , Cat(temp_y(63), temp_y) , Cat("b0".U, temp_y))
    mul.io.mul_valid := ((state === s_start) && is_mul)

    div.io.in1 := temp_x
    div.io.in2 := temp_y
    div.io.is_signed := is_div
    div.io.div_valid := ((state === s_start) && (is_div || is_divu))

    val mul_ready = mul.io.mul_ready
    val div_ready = div.io.div_ready

    switch(state){
      is(s_idle){
        when(io.mdu_valid ){
          reg_mduop := io.mduop_i
          state := s_start
          completed := false.B
          reg_x := io.in1
          reg_y := io.in2
        }
      }
      is(s_start){
        when(is_mul){
          state := s_wait_m
        }otherwise{
          state := s_wait_d
        }
      }
      is(s_wait_m){
        when(mul_ready){
          state := s_idle
          completed := true.B
          reg_out := Mux(is_word ,Sext32_64(mul.io.out1(31,0))  , Mux(mul_high , mul.io.out2 ,mul.io.out1))
        }
      }
      is(s_wait_d){
        when(div_ready){
          state := s_idle
          completed := true.B
          reg_out := Mux(is_word ,Sext32_64(Mux(want_div , div.io.out_div ,div.io.out_rem)), Mux(want_div , div.io.out_div ,div.io.out_rem) )
        }
      }
    }

  }