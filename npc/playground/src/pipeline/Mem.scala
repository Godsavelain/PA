package patchouli

import chisel3._
import chisel3.util._

class Mem extends Module{
  val io = IO(new Bundle{
    val in = Flipped(Decoupled(new DecodeOp()))
    val out = Decoupled(new DecodeOp())
    val mem_data_i = Input(UInt(64.W))
    val mem_flush_i = Input(Bool())
    val waddr_o = Output(UInt(5.W))
    val wen_o   = Output(Bool())
    val wdata_o = Output(UInt(64.W))
    val is_ebreak_i = Input(Bool())
    val is_ebreak_o = Output(Bool())
    //for bypass
    val mem_rd_en = Output(Bool())
    val mem_rd_addr = Output(UInt(32.W))
    val mem_rd_data = Output(UInt(64.W))
  })
  io.is_ebreak_o := RegNext(io.is_ebreak_i)

  val stall = false.B
  io.in.ready := !stall
  val mem_reg_decodeop = RegInit(0.U.asTypeOf(new DecodeOp()))
  val waddr = RegInit(0.U(5.W))
  val wen   = RegInit(0.U(1.W))
  val wdata = RegInit(0.U(64.W))
  when(io.in.fire()){
    mem_reg_decodeop := Mux(io.mem_flush_i ,0.U.asTypeOf(new DecodeOp()), io.in.bits)
    waddr := io.in.bits.rd_addr
    wen   := Mux(io.mem_flush_i , 0.B ,io.in.bits.rd_en)
    wdata := io.mem_data_i
  }

  io.waddr_o := RegNext(waddr)
  io.wen_o   := RegNext(wen)
  io.wdata_o := RegNext(wdata)

  io.out.bits := RegNext(Mux(io.mem_flush_i ,0.U.asTypeOf(new DecodeOp()), mem_reg_decodeop))
  io.out.valid := true.B

  //for bypass
  io.mem_rd_en   := mem_reg_decodeop.rd_en
  io.mem_rd_addr := mem_reg_decodeop.rd_addr
  io.mem_rd_data := wdata
}