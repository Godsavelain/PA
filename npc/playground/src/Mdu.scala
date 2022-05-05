package patchouli
import chisel3._
import chisel3.util._
import patchouli.Constant._
import patchouli.Instructions._

//refer to UltraMIPS

class Booth extends Module{
  val io = IO(new Bundle{
    val x = Input(UInt(65.W))
    val y = Input(UInt(3.W))
    val z = Output(UInt(128.W)) //部分积
    val c = Output(UInt(2.W)) //进位
  })
  val x_neg = ~io.x
  io.z := MuxLookup(io.y, 0.U(129.W), Array(
    "b000".U -> 0.U,
    "b001".U -> Cat( Fill(63, io.x(64)), io.x),
    "b010".U -> Cat( Fill(63, io.x(64)), io.x),
    "b011".U -> Cat( Fill(62, io.x(64)), io.x ,"b0".U),
    "b100".U -> Cat( Fill(62, x_neg(64)), x_neg ,"b0".U),
    "b101".U -> Cat( Fill(63, x_neg(64)), x_neg),
    "b110".U -> Cat( Fill(63, x_neg(64)), x_neg),
    "b111".U -> 0.U
  ))

  io.c := MuxLookup(io.y, 0.U(2.W), Array(
    "b000".U -> 0.U,
    "b001".U -> 0.U,
    "b010".U -> 0.U,
    "b011".U -> 0.U,
    "b100".U -> "b10".U,
    "b101".U -> "b01".U,
    "b110".U -> "b01".U,
    "b111".U -> 0.U
  ))
}

class Csa extends Module{
  val io = IO(new Bundle{
    val x = Input(UInt(128.W))
    val y = Input(UInt(128.W))
    val z = Input(UInt(128.W))
    val s = Output(UInt(128.W)) //和
    val c = Output(UInt(128.W)) //进位
  })
    io.s := io.x ^ io.y ^io.z
    io.c := Cat(((io.x & io.y) | (io.y & io.z) | (io.z & io.x))(126,0) , "b0".U)
}

class Mul extends Module {
  val io = IO(new Bundle {
    val in1 = Input(UInt(65.W))
    val in2 = Input(UInt(65.W))
    val out = Output(UInt(128.W))
    val mul_valid = Input(Bool())
    val mul_ready = Output(Bool())
  })

  val s_idle :: s_1 :: s_2 :: s_3 :: Nil = Enum(4)
  val state = RegInit(s_idle)
  val reg_in1 = RegInit(0.U(65.W))
  val reg_in2 = RegInit(0.U(67.W))

  val c = Vec(66, UInt(1.W))

  val pp = for (i <- 0 until 33) yield {
    val pp = RegInit(0.U(128.W))
    pp
  }
  //level 2
  //  2
  //  3
  //  4
  //  6
  //cut from here
  //  8
  //  11
  //  16
  //  23
  //  34
  //total 32 csas

  val pp_l2 = for (i <- 0 until 8) yield {
    val pp_l2 = RegInit(0.U(128.W))
    pp_l2
  }

  val booth = for (i <- 0 until 33) yield {
    val booth = Module(new Booth)
    booth
  }

  for (i <- 0 until 33) {
    booth(i).io.x := reg_in1
    booth(i).io.y := reg_in2(i * 2 + 2, i * 2)
    c(i * 2 + 1) := booth(i).io.c(1)
    c(i * 2) := booth(i).io.c(0)
//    c(i * 2 + 1, i * 2) := booth(i).io.c
  }

  val pp33 = RegInit(0.U(128.W))
  val reg_out = RegInit(0.U(128.W))

  val csa = for (i <- 0 until 32) yield {
    val csa = Module(new Csa)
    csa
  }

  val s_l1 = for (i <- 0 until 11) yield {
    val s_l1 = Wire(UInt(128.W))
    s_l1
  }
  val c_l1 = for (i <- 0 until 11) yield {
    val c_l1 = Wire(UInt(128.W))
    c_l1
  }

  val s_l2 = for (i <- 0 until 7) yield {
    val s_l2 = Wire(UInt(128.W))
    s_l2
  }
  val c_l2 = for (i <- 0 until 7) yield {
    val c_l2 = Wire(UInt(128.W))
    c_l2
  }

  val s_l3 = for (i <- 0 until 5) yield {
    val s_l3 = Wire(UInt(128.W))
    s_l3
  }
  val c_l3 = for (i <- 0 until 5) yield {
    val c_l3 = Wire(UInt(128.W))
    c_l3
  }

  val s_l4 = for (i <- 0 until 3) yield {
    val s_l4 = Wire(UInt(128.W))
    s_l4
  }
  val c_l4 = for (i <- 0 until 3) yield {
    val c_l4 = Wire(UInt(128.W))
    c_l4
  }

  val s_l5 = for (i <- 0 until 2) yield {
    val s_l5 = Wire(UInt(128.W))
    s_l5
  }
  val c_l5 = for (i <- 0 until 2) yield {
    val c_l5 = Wire(UInt(130.W))
    c_l5
  }

  val s_l6 = for (i <- 0 until 2) yield {
    val s_l6 = Wire(UInt(128.W))
    s_l6
  }
  val c_l6 = for (i <- 0 until 2) yield {
    val c_l6 = Wire(UInt(128.W))
    c_l6
  }

  val s_l7 = Wire(UInt(128.W))
  val c_l7 = Wire(UInt(128.W))
  val s_l8 = Wire(UInt(128.W))
  val c_l8 = Wire(UInt(128.W))

  val temp_out = Wire(UInt(128.W))

  for (i <- 0 until 11) {
    csa(i).io.x := Cat(pp(i * 3)(127 - 6 * i, 0), Fill(6 * i, 0.U))
    csa(i).io.y := Cat(pp(i * 3 + 1)(125 - 6 * i, 0), Fill(6 * i + 2, 0.U))
    csa(i).io.z := Cat(pp(i * 3 + 2)(123 - 6 * i, 0), Fill(6 * i + 4, 0.U))
    s_l1(i) := csa(i).io.s
    c_l1(i) := csa(i).io.c
  }
  //level 2
  csa(11).io.x := s_l1(0);
  csa(11).io.y := c_l1(0);
  csa(11).io.z := c_l1(1);
  csa(12).io.x := s_l1(1);
  csa(12).io.y := c_l1(2);
  csa(12).io.z := s_l1(2);
  csa(13).io.x := s_l1(3);
  csa(13).io.y := c_l1(3);
  csa(13).io.z := c_l1(4);
  csa(14).io.x := s_l1(4);
  csa(14).io.y := c_l1(5);
  csa(14).io.z := s_l1(5);
  csa(15).io.x := s_l1(6);
  csa(15).io.y := c_l1(6);
  csa(15).io.z := c_l1(7);
  csa(16).io.x := s_l1(7);
  csa(16).io.y := c_l1(8);
  csa(16).io.z := s_l1(8);
  csa(17).io.x := s_l1(9);
  csa(17).io.y := c_l1(9);
  csa(17).io.z := pp33;

  s_l2(0) := csa(11).io.s;
  c_l2(0) := csa(11).io.c
  s_l2(1) := csa(12).io.s;
  c_l2(1) := csa(12).io.c
  s_l2(2) := csa(13).io.s;
  c_l2(2) := csa(13).io.c
  s_l2(3) := csa(14).io.s;
  c_l2(3) := csa(14).io.c
  s_l2(4) := csa(15).io.s;
  c_l2(4) := csa(15).io.c
  s_l2(5) := csa(16).io.s;
  c_l2(5) := csa(16).io.c
  s_l2(6) := csa(17).io.s;
  c_l2(6) := csa(17).io.c

  //level 3
  csa(18).io.x := s_l1(10);
  csa(18).io.y := c_l1(10);
  csa(18).io.z := s_l2(0);
  csa(19).io.x := c_l2(0);
  csa(19).io.y := s_l2(1);
  csa(19).io.z := c_l2(1);
  csa(20).io.x := s_l2(2);
  csa(20).io.y := c_l2(2);
  csa(20).io.z := s_l2(3);
  csa(21).io.x := c_l2(3);
  csa(21).io.y := s_l2(4);
  csa(21).io.z := c_l2(4);
  csa(22).io.x := s_l2(5);
  csa(22).io.y := c_l2(5);
  csa(22).io.z := s_l2(6);

  s_l3(0) := csa(18).io.s;
  c_l3(0) := csa(18).io.c;
  s_l3(1) := csa(19).io.s;
  c_l3(1) := csa(19).io.c;
  s_l3(2) := csa(20).io.s;
  c_l3(2) := csa(20).io.c;
  s_l3(3) := csa(21).io.s;
  c_l3(3) := csa(21).io.c;
  s_l3(4) := csa(22).io.s;
  c_l3(4) := csa(22).io.c;

  //level 4
  csa(23).io.x := c_l2(6);
  csa(23).io.y := s_l3(0);
  csa(23).io.z := c_l3(0);
  csa(24).io.x := s_l3(1);
  csa(24).io.y := c_l3(1);
  csa(24).io.z := s_l3(2);
  csa(25).io.x := c_l3(2);
  csa(25).io.y := s_l3(3);
  csa(25).io.z := s_l3(3);

  s_l4(0) := csa(23).io.s;
  c_l4(0) := csa(23).io.c;
  s_l4(1) := csa(24).io.s;
  c_l4(1) := csa(24).io.c;
  s_l4(2) := csa(25).io.s;
  c_l4(2) := csa(25).io.c;

  //register these 8 values in pp_l2

  //level 5
  csa(26).io.x := pp_l2(0);
  csa(26).io.y := pp_l2(1);
  csa(26).io.z := pp_l2(2);
  csa(27).io.x := pp_l2(3);
  csa(27).io.y := pp_l2(4);
  csa(27).io.z := pp_l2(5);

  s_l5(0) := csa(26).io.s;
  c_l5(0) := csa(26).io.c;
  s_l5(1) := csa(27).io.s;
  c_l5(1) := csa(27).io.c;

  //level 6
  csa(28).io.x := pp_l2(6);
  csa(28).io.y := pp_l2(7);
  csa(28).io.z := s_l5(0);
  csa(29).io.x := s_l5(1);
  csa(29).io.y := c_l5(0);
  csa(29).io.z := c_l5(0);

  s_l6(0) := csa(28).io.s;
  c_l6(0) := csa(28).io.c;
  s_l6(1) := csa(29).io.s;
  c_l6(1) := csa(29).io.c;

  //level 7
  csa(30).io.x := s_l6(0);
  csa(30).io.y := s_l6(1);
  csa(30).io.z := c_l6(0);

  s_l7 := csa(30).io.s;
  c_l7 := csa(30).io.c;

  //level 8
  csa(31).io.x := s_l7;
  csa(31).io.y := c_l7;
  csa(31).io.z := c_l6(1);

  s_l8 := csa(31).io.s;
  c_l8 := csa(31).io.c;
  temp_out := s_l8 + c_l8

  //csas

  //  val pp0 = RegInit(0.U(130.W))
  //  val pp1 = RegInit(0.U(130.W))
  //  val pp2 = RegInit(0.U(130.W))
  //  val pp3 = RegInit(0.U(130.W))
  //  val pp4 = RegInit(0.U(130.W))
  //  val pp5 = RegInit(0.U(130.W))
  //  val pp6 = RegInit(0.U(130.W))
  //  val pp7 = RegInit(0.U(130.W))
  //  val pp8 = RegInit(0.U(130.W))
  //  val pp9 = RegInit(0.U(130.W))
  //  val pp10 = RegInit(0.U(130.W))
  //  val pp11 = RegInit(0.U(130.W))
  //  val pp12 = RegInit(0.U(130.W))
  //  val pp13 = RegInit(0.U(130.W))
  //  val pp14 = RegInit(0.U(130.W))
  //  val pp15 = RegInit(0.U(130.W))
  //  val pp16 = RegInit(0.U(130.W))
  //  val pp17 = RegInit(0.U(130.W))
  //  val pp18 = RegInit(0.U(130.W))
  //  val pp19 = RegInit(0.U(130.W))
  //  val pp20 = RegInit(0.U(130.W))
  //  val pp21 = RegInit(0.U(130.W))
  //  val pp22 = RegInit(0.U(130.W))
  //  val pp23 = RegInit(0.U(130.W))
  //  val pp24 = RegInit(0.U(130.W))
  //  val pp25 = RegInit(0.U(130.W))
  //  val pp26 = RegInit(0.U(130.W))
  //  val pp27 = RegInit(0.U(130.W))
  //  val pp28 = RegInit(0.U(130.W))
  //  val pp29 = RegInit(0.U(130.W))
  //  val pp30 = RegInit(0.U(130.W))
  //  val pp31 = RegInit(0.U(130.W))
  //  val pp32 = RegInit(0.U(130.W))


  io.mul_ready := (state === s_idle)
  io.out := reg_out

  switch(state) {
    is(s_idle) {
      when(io.mul_valid) {
        state := s_1
        reg_in1 := io.in1
        reg_in2 := Cat(io.in2(64), io.in2, "b0".U)
      }
    }
    is(s_1) {
      when(true.B) {
        state := s_2
        pp33 := Cat(Fill(62, 0.U), c.asUInt)
        for (i <- 0 until 33) {
          pp(i) := booth(i).io.z
        }
      }
    }
    is(s_2) {
      when(true.B) {
        state := s_2
        pp_l2(0) := s_l4(0)
        pp_l2(1) := s_l4(1)
        pp_l2(2) := s_l4(2)
        pp_l2(3) := c_l4(0)
        pp_l2(4) := c_l4(1)
        pp_l2(5) := c_l4(2)
        pp_l2(6) := s_l3(4)
        pp_l2(7) := c_l3(4)
      }
    }
    is(s_3) {
      when(true.B) {
        state := s_idle
        reg_out := temp_out
      }
    }
  }

}

class Div extends Module{
  val io = IO(new Bundle{
    val in1 = Input(UInt(64.W))
    val in2 = Input(UInt(64.W))
    val out_div = Output(UInt(64.W))
    val out_rem = Output(UInt(64.W))
    val is_signed = Input(Bool())
    val div_valid = Input(Bool())
    val div_ready = Output(Bool())
  })

}

  class Mdu extends Module{
    val io = IO(new Bundle{
      val in1 = Input(UInt(64.W))
      val in2 = Input(UInt(64.W))
      val is_sign = Input(Bool())
      val mdu_valid = Input(Bool())
      val mdu_ready = Output(Bool())
      val out = Output(UInt(64.W))
    })
    val mul = Module(new Mul)
    val is_sign = io.is_sign
    mul.io.in1 := Mux( is_sign, Cat(io.in1(63) , io.in1) ,Cat( "b0".U , io.in1) )
    mul.io.in2 := Mux( is_sign, Cat(io.in2(63) , io.in2) ,Cat( "b0".U , io.in2) )
    mul.io.mul_valid := io.mdu_valid
    io.out := mul.io.out
  }

//  class Mdu extends Module{
//    val io = IO(new Bundle{
//      val in1 = Input(UInt(64.W))
//      val in2 = Input(UInt(64.W))
//      val mduop_i = Input(UInt(4.W))
//      val mdu_valid = Input(Bool())
//      val mdu_ready = Output(Bool())
//    })
//
//    //mul   div   divu
//    val s_idle :: s_start :: s_wait_m :: s_wait_d :: Nil = Enum(4)
//    val state = RegInit(s_idle)
//    val reg_mduop = RegInit(0.U(4.W))
//    val is_mul = Wire(Bool())
//    val is_div = Wire(Bool())
//    val is_divu = Wire(Bool())
//    val in1_sign = Wire(Bool())
//    val in2_sign = Wire(Bool())
//
//    val x = RegInit(0.U(65.W))
//    val y = RegInit(0.U(66.W))
//
//    is_div := (reg_mduop === MDU_DIV) || (reg_mduop === MDU_REM) || (reg_mduop === MDU_DIVW) || (reg_mduop === MDU_REMW)
//
//    is_divu := (reg_mduop === MDU_DIVU) || (reg_mduop === MDU_REMU) || (reg_mduop === MDU_DIVUW) || (reg_mduop === MDU_REMUW)
//
//    is_mul := !(is_div || is_divu || (reg_mduop === MDU_X))
//
//    in1_sign := Mux(((reg_mduop === MDU_MUL) || (reg_mduop === MDU_MULH) || (reg_mduop === MDU_MULHSU)) , io.in1(63) ,0.B)
//
//    in2_sign := Mux(((reg_mduop === MDU_MUL) || (reg_mduop === MDU_MULH) ) , io.in2(63) ,0.B)
//
//    io.mdu_ready := !( ((state == s_idle) && io.mdu_valid )                                                                                                                                                      || ((state == s_start) || (state == s_wait_m) || (state == s_wait_d)) )
//
//    switch(state){
//      is(s_idle){
//        when(io.mdu_valid){
//          reg_mduop := io.mduop_i
//          state := s_start
//        }
//      }
//      is(s_start){
//
//      }
//    }
//
//  }