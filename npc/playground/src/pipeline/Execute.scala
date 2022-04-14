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
  })
  val stall = !io.out.fire()
  io.in.ready := !stall
  io.out.valid := true.B
  val ex_reg_decodeop = RegInit(0.U.asTypeOf(new DecodeOp()))
  val rs1 = RegInit(0.U(64.W))
  val rs2 = RegInit(0.U(64.W))

  val rs1_temp = 0.U
  val rs2_temp = 0.U

  rs1_temp := MuxLookup(io.in.bits.rs1_src, 0.U, Array(
    RS_FROM_RF  -> io.ex_rs1_i,
    RS_FROM_IMM -> Sext32_64(io.in.bits.imm),
    RS_FROM_PC  -> Zext32_64(io.in.bits.pc),
    RS_FROM_NPC -> Zext32_64(io.in.bits.pc + 4.U)
  ))(63, 0)

  rs2_temp := MuxLookup(io.in.bits.rs2_src, 0.U, Array(
    RS_FROM_RF  -> io.ex_rs2_i,
    RS_FROM_IMM -> Sext32_64(io.in.bits.imm),
    RS_FROM_PC  -> Zext32_64(io.in.bits.pc),
    RS_FROM_NPC -> Zext32_64(io.in.bits.pc + 4.U)
  ))(63, 0)

  when(io.in.fire()){
    ex_reg_decodeop := Mux(io.ex_flush ,0.U.asTypeOf(new DecodeOp()), io.in.bits)
    rs1 := Mux(io.ex_flush , 0.U(64.W) , rs1_temp)
    rs2 := Mux(io.ex_flush , 0.U(64.W) , rs2_temp)
  }

  val alu = Module(new Alu)
  alu.io.in1 := rs1
  alu.io.in2 := rs2
  alu.io.aluop_i := ex_reg_decodeop.alu_code
  alu.io.wtype_i := ex_reg_decodeop.w_type
  io.ex_data_o := alu.io.alu_out

  io.out.bits := ex_reg_decodeop
}

class Alu extends Module{
  val io = IO(new Bundle{
    val in1 = Input(UInt(64.W))
    val in2 = Input(UInt(64.W))
    val aluop_i = Input(UInt(4.W))
    val wtype_i = Input(Bool())
    val alu_out = Output(UInt(64.W))
  })

  val out0 = Wire(UInt(64.W))
  val out1 = Wire(UInt(64.W))
  val in1 = io.in1
  val in2 = io.in2
  out0 := MuxLookup(io.aluop_i, 0.U, Array(
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
  ))

  out1 := Mux(io.wtype_i, Sext32_64(out0(31, 0)), out0)
  io.alu_out := out1
}

