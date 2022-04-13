package patchouli

import chisel3._
import chisel3.util._
//import chisel3.util.experimental._
//import difftest._

class TestIO extends Bundle{
  val raddr = Output(UInt(32.W))
  val waddr = Output(UInt(32.W))
  val wdata = Output(UInt(64.W))
  val ren = Output(Bool())
  val wen = Output(Bool())
  val wmask = Output(UInt(8.W))
  val rdata = Input(UInt(64.W))
  val read_ok = Input(Bool())
  val write_ok = Input(Bool())
}

class Core extends Module{
  val io = IO(new Bundle{
//    val imem = new CoreBusIO()
//    val dmem = new CoreBusIO()
      val imem = new TestIO()
      val dmem = new TestIO()
  })

  val fetch = Module(new InstFetch)
  fetch.io.imem.resp.valid := true.B
  fetch.io.imem.req.ready := true.B
  fetch.io.imem.resp.bits.rdata := io.imem.rdata
  fetch.io.imem.resp.bits.old_pc := RegNext(fetch.io.imem.req.bits.araddr)
  fetch.io.imem.resp.bits.rvalid := io.imem.read_ok
  io.imem.raddr := fetch.io.imem.req.bits.araddr
  io.imem.ren := fetch.io.imem.req.bits.arvalid
  io.imem.waddr := 0.U
  io.imem.wdata := 0.U
  io.imem.wen := false.B
  io.imem.wmask := 0.U

  io.dmem.raddr := 0.U
  io.dmem.ren := false.B
  io.dmem.waddr := 0.U
  io.dmem.wdata := 0.U
  io.dmem.wen := false.B
  io.dmem.wmask := 0.U

  fetch.io.if_flush := false.B

  val decode = Module(new Decode)

  fetch.io.out <> decode.io.in
  decode.io.id_flush := false.B

  val regfile = Module(new RegFile)
  regfile.io.ren1 := decode.io.ren1
  regfile.io.ren2 := decode.io.ren2
  regfile.io.raddr1 := decode.io.raddr1
  regfile.io.raddr2 := decode.io.raddr2

  val execute = Module(new Execute)
  decode.io.out <> execute.io.in
  execute.io.ex_rs1_i := RegNext(regfile.io.rdata1)
  execute.io.ex_rs2_i := RegNext(regfile.io.rdata2)
  execute.io.ex_flush := false.B

  val mem = Module(new Mem)
  execute.io.out <> mem.io.in
  mem.io.mem_data_i := execute.io.ex_data_o
  mem.io.mem_flush_i := false.B
  regfile.io.waddr := mem.io.waddr_o
  regfile.io.wen := mem.io.wen_o
  regfile.io.wdata := mem.io.wdata_o
}