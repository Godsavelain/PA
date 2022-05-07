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

    //to Mem without register
    val ex_mduout_o = Output(UInt(64.W))
    val ex_mduready_o = Output(Bool())

    //for bypass
    val ex_rd_en = Output(Bool())
    val ex_rd_addr = Output(UInt(5.W))
    val ex_is_load = Output(Bool())
    val ex_is_mdu = Output(Bool())

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
  io.jmp_packet_o.mis := (real_npc =/= io.p_npc_i) && ex_reg_decodeop.valid && !stall
  io.jmp_packet_o.jmp_npc := real_npc
  io.ex_data_o := alu.io.alu_out

  io.out.bits := ex_reg_decodeop

  //mdu
  val mdu = Module(new Mdu)
  val mdu_op = ex_reg_decodeop.mdu_code
  mdu.io.in1 := rs1
  mdu.io.in2 := rs2
  mdu.io.mduop_i := mdu_op
  mdu.io.mdu_valid := (mdu_op =/= MDU_X) && ex_reg_decodeop.valid && !stall

  io.ex_mduout_o := mdu.io.out
  io.ex_mduready_o := mdu.io.mdu_ready

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
  io.ex_is_mdu  := (mdu_op =/= MDU_X)

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
