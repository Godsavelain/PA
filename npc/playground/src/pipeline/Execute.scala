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
    //for bypass
    val ex_rd_en = Output(Bool())
    val ex_rd_addr = Output(UInt(32.W))

    val p_npc_i = Input(UInt(32.W))
    val jmp_packet_o = Output(new Jmp_Packet())
  })
  val stall = !io.out.fire()
  io.in.ready := !stall
  io.out.valid := true.B
  io.is_ebreak_o := RegNext(io.is_ebreak_i)
  val ex_reg_decodeop = RegInit(0.U.asTypeOf(new DecodeOp()))

  when(io.in.fire()){
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
  //for bypass
  io.ex_rd_en   := ex_reg_decodeop.rd_en
  io.ex_rd_addr := ex_reg_decodeop.rd_addr
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
  out0 := Mux(((io.jmp_code === JMP_JALR) || (io.jmp_code === JMP_JAL)), io.jmp_pc ,MuxLookup(io.aluop_i, 0.U, Array(
    ALU_ADD  -> (in1 + in2).asUInt(),
    ALU_SUB  -> (in1 - in2).asUInt(),
    ALU_SLT  -> (in1.asSInt() < in2.asSInt()).asUInt(),
    ALU_SLTU -> (in1 < in2).asUInt(),
    ALU_XOR  -> (in1 ^ in2).asUInt(),
    ALU_OR   -> (in1 | in2).asUInt(),
    ALU_AND  -> (in1 & in2).asUInt()
//    ALU_SLL  -> ((in1 << shamt)(63, 0)).asUInt(),
//    ALU_SRL  -> (in1.asUInt() >> shamt).asUInt(),
//    ALU_SRA  -> (in1.asSInt() >> shamt).asUInt()
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

