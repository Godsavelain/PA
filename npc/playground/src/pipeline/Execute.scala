package patchouli

import chisel3._
import chisel3.util._
import patchouli.Constant._

class Execute extends Module{
  val io = IO(new Bundle{
    val in  = Flipped(Decoupled(new DecodeOp()))
    val out = Decoupled(new DecodeOp())
    val ex_rs1_i = Input(UInt(64.W))
    val ex_rs2_i = Input(UInt(64.W))
    val ex_data_o = Output(UInt(64.W))
    val ex_flush = Input(Bool())
    val is_ebreak_i = Input(Bool())
    val is_ebreak_o = Output(Bool())
    //for dmem
    //these signals should be transfered to MEM stage without RegNext()
    val ex_rwaddr_o  = Output(UInt(32.W))
    val ex_rvalid_o  = Output(Bool())
    val ex_wvalid_o  = Output(Bool())
    val ex_wdata_o   = Output(UInt(64.W))
    val ex_wsize_o   = Output(UInt(2.W))

    //for bypass
    val ex_rd_en = Output(Bool())
    val ex_rd_addr = Output(UInt(5.W))
    val ex_is_load = Output(Bool())

    val p_npc_i = Input(UInt(32.W))
    val jmp_packet_o = Output(new Jmp_Packet())
  })
  val stall = !io.out.fire()
  io.in.ready := !stall
  io.out.valid := true.B
  io.is_ebreak_o := RegNext(Mux(io.ex_flush , false.B ,io.is_ebreak_i))
  val ex_reg_decodeop = RegInit(0.U.asTypeOf(new DecodeOp()))

  when(io.in.fire() || io.ex_flush){
    ex_reg_decodeop := Mux(io.ex_flush ,0.U.asTypeOf(new DecodeOp()), io.in.bits)
  }

  val rs1_temp = MuxLookup(ex_reg_decodeop.rs1_src, 0.U, Array(
    RS_FROM_RF  -> io.ex_rs1_i,
    RS_FROM_IMM -> Sext32_64(ex_reg_decodeop.imm),
    RS_FROM_PC  -> Zext32_64(ex_reg_decodeop.pc),
    RS_FROM_NPC -> Zext32_64(ex_reg_decodeop.pc + 4.U)
  ))(63, 0)

  val rs2_temp = MuxLookup(ex_reg_decodeop.rs2_src, 0.U, Array(
    RS_FROM_RF  -> io.ex_rs2_i,
    RS_FROM_IMM -> Sext32_64(ex_reg_decodeop.imm),
    RS_FROM_PC  -> Zext32_64(ex_reg_decodeop.pc),
    RS_FROM_NPC -> Zext32_64(ex_reg_decodeop.pc + 4.U)
  ))(63, 0)

  val rs1 = Mux(io.ex_flush , 0.U , rs1_temp)
  val rs2 = Mux(io.ex_flush , 0.U , rs2_temp)

  val alu = Module(new Alu)
  alu.io.in1 := rs1
  alu.io.in2 := rs2
  alu.io.aluop_i := ex_reg_decodeop.alu_code
  alu.io.wtype_i := ex_reg_decodeop.w_type
  alu.io.jmp_code := ex_reg_decodeop.jmp_code
  alu.io.imm := ex_reg_decodeop.imm
  alu.io.pc_i := ex_reg_decodeop.pc

  val real_npc = Mux(alu.io.jmp , alu.io.jmp_pc ,(ex_reg_decodeop.pc + 4.U))
  io.jmp_packet_o.mis := (real_npc =/= io.p_npc_i) && ex_reg_decodeop.valid
  io.jmp_packet_o.jmp_npc := real_npc
  io.ex_data_o := alu.io.alu_out

  io.out.bits := ex_reg_decodeop

  //for mem

  val is_load = ((ex_reg_decodeop.mem_code === MEM_LD) || (ex_reg_decodeop.mem_code === MEM_LDU)) && ex_reg_decodeop.valid
  val is_store = (ex_reg_decodeop.mem_code === MEM_ST) && ex_reg_decodeop.valid

  io.ex_wdata_o  := io.ex_rs2_i
  io.ex_rwaddr_o := alu.io.alu_out(31, 0)
  io.ex_rvalid_o := is_load
  io.ex_wvalid_o := is_store
  io.ex_wsize_o  := ex_reg_decodeop.mem_size

  //for bypass
  io.ex_rd_en   := Mux(!ex_reg_decodeop.valid, false.B, ex_reg_decodeop.rd_en)
  io.ex_rd_addr := ex_reg_decodeop.rd_addr
  io.ex_is_load := ((ex_reg_decodeop.mem_code === MEM_LD) || (ex_reg_decodeop.mem_code === MEM_LDU))
}

class Alu extends Module{
  val io = IO(new Bundle{
    val in1 = Input(UInt(64.W))
    val in2 = Input(UInt(64.W))
    val aluop_i = Input(UInt(4.W))
    val wtype_i = Input(Bool())
    val alu_out = Output(UInt(64.W))
    val jmp = Output(Bool())
    val jmp_code = Input(UInt(4.W))
    val imm = Input(UInt(32.W))
    val pc_i = Input(UInt(32.W))
    val jmp_pc = Output(UInt(32.W))
  })

  val out0 = Wire(UInt(64.W))
  val out1 = Wire(UInt(64.W))
  val in1 = io.in1
  val in2 = io.in2
//  val in1 = Mux(io.wtype_i, Zext32_64(io.in1(31, 0)), io.in1)
//  val in2 = Mux(io.wtype_i, Zext32_64(io.in2(31, 0)), io.in2)

  val shamt = Mux(io.wtype_i, in2(4, 0).asUInt(), in2(5, 0))

  out0 := Mux(((io.jmp_code === JMP_JALR) || (io.jmp_code === JMP_JAL)), (io.pc_i + 4.U) ,MuxLookup(io.aluop_i, 0.U, Array(
    ALU_ADD  -> (in1 + in2).asUInt(),
    ALU_SUB  -> (in1 - in2).asUInt(),
    ALU_SLT  -> (in1.asSInt() < in2.asSInt()).asUInt(),
    ALU_SLTU -> (in1 < in2).asUInt(),
    ALU_XOR  -> (in1 ^ in2).asUInt(),
    ALU_OR   -> (in1 | in2).asUInt(),
    ALU_AND  -> (in1 & in2).asUInt(),
    ALU_SLL  -> ((in1 << shamt)(63, 0)).asUInt(),
    ALU_SRL  -> Mux(io.wtype_i , (Zext32_64(in1(31, 0)).asUInt() >> shamt).asUInt() , (in1.asUInt() >> shamt).asUInt()),
    ALU_SRA  -> (in1.asSInt() >> shamt).asUInt()
  )))

  io.jmp := MuxLookup(io.jmp_code, false.B, Array(
    JMP_JAL  -> true.B,
    JMP_JALR -> true.B,
    JMP_BEQ  -> (in1 === in2),
    JMP_BNE  -> (in1 =/= in2),
    JMP_BLT  -> (in1.asSInt() < in2.asSInt()),
    JMP_BGE  -> (in1.asSInt() >= in2.asSInt()),
    JMP_BLTU -> (in1.asUInt() < in2.asUInt()),
    JMP_BGEU -> (in1.asUInt() >= in2.asUInt())
  ))

  io.jmp_pc := Mux(io.jmp_code === JMP_JALR, in1(31, 0), io.pc_i) + io.imm

  out1 := Mux(io.wtype_i, Sext32_64(out0(31, 0)), out0)
  io.alu_out := out1
}

class Mdu extends Module{
  val io = IO(new Bundle{
    val in1 = Input(UInt(64.W))
    val in2 = Input(UInt(64.W))
    val mduop_i = Input(UInt(4.W))
    val mdu_valid = Input(Bool())
    val mdu_ready = Output(Bool())
  })

  //mul   div   divu
  val s_idle :: s_wait_m :: s_wait_d :: s_wait_du:: Nil = Enum(4)
  val state = RegInit(s_idle)
  val reg_mduop = RegInit(0.U(4.W))
  val is_mul = Wire(Bool())
  val is_div = Wire(Bool())
  val is_divu = Wire(Bool())
  val in1_sign = Wire(Bool())
  val in2_sign = Wire(Bool())

  is_div := (reg_mduop === MDU_DIV) || (reg_mduop === MDU_REM) || (reg_mduop === MDU_DIVW) || (reg_mduop === MDU_REMW)

  is_divu := (reg_mduop === MDU_DIVU) || (reg_mduop === MDU_REMU) || (reg_mduop === MDU_DIVUW) || (reg_mduop === MDU_REMUW)

  is_mul := !(is_div || is_divu || (reg_mduop === MDU_X))

  in1_sign := Mux(((reg_mduop === MDU_MUL) || (reg_mduop === MDU_MULH) || (reg_mduop === MDU_MULHSU)) , io.in1(63) ,0.B)

  in2_sign := Mux(((reg_mduop === MDU_MUL) || (reg_mduop === MDU_MULH) ) , io.in2(63) ,0.B)

  switch(state){
    is(s_idle){
      when(io.mdu_valid){
        reg_mduop := io.mduop_i
      }
    }
  }

}

class Mul extends Module{
  val io = IO(new Bundle{
    val in1 = Input(UInt(64.W))
    val in2 = Input(UInt(64.W))
    val in1_sign = Input(Bool())
    val in2_sign = Input(Bool())
    val out = Output(UInt(64.W))
    val mul_valid = Input(Bool())
    val mul_ready = Output(Bool())
  })

  val s_idle :: s_1 :: s_2 :: s_3:: Nil = Enum(4)
  val state = RegInit(s_idle)
  val reg_in1 = RegInit(0.U(64.W))
  val reg_in2 = RegInit(0.U(64.W))
  val reg_in1_sign = RegInit(0.B)
  val reg_in2_sign = RegInit(0.B)
  val ready_o = WireDefault(false.B)
  val out_o = WireDefault(0.U(64.W))
  io.mul_ready := ready_o
  io.out := out_o

  switch(state){
    is(s_idle){
      when(io.mul_valid){
        state := s_1
        ready_o := false.B
        reg_in1 := io.in1
        reg_in2 := io.in2
        reg_in1_sign := io.in1_sign
        reg_in2_sign := io.in2_sign
      }
    }
    is(s_1){
      state := s_2
      ready_o := false.B
    }
    is(s_2){
      state := s_2
      ready_o := false.B
    }
    is(s_3){
      state := s_idle
      ready_o := true.B
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