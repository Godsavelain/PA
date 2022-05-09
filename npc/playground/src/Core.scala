package patchouli

import chisel3._
import chisel3.util._
//import chisel3.util.experimental._
//import difftest._


class Wb_Dpi extends BlackBox {
  val io = IO(new Bundle {
    val clk = Input(Clock())
    val inst = Input(UInt(32.W))
    val pc = Input(UInt(32.W))
    val ebreak = Input(Bool())
  })
}

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
      val imem = new CacheBusIO()
      val dmem = new CacheBusIO()
      val commit_pc = Output(UInt(32.W))
//for difftest
      val regs_out = Vec(32,Output(UInt(64.W)))
      val commit      = Output(Bool())
  })

  val fetch = Module(new InstFetch)
  fetch.io.imem.resp.valid := true.B
  fetch.io.imem.req.ready := true.B
  fetch.io.imem.resp.bits.rdata := io.imem.rdata(31,0)
  fetch.io.imem.resp.bits.old_pc := RegNext(fetch.io.imem.req.bits.araddr)
  fetch.io.imem.resp.bits.rvalid := io.imem.read_ok


  io.imem.req.raddr := fetch.io.imem.req.bits.araddr
  io.imem.req.ren := fetch.io.imem.req.bits.arvalid
  io.imem.req.waddr := 0.U
  io.imem.req.wdata := 0.U
  io.imem.req.wen := false.B
  io.imem.req.wmask := 0.U

  val decode = Module(new Decode)

  decode.io.in <> fetch.io.out
  decode.io.p_npc_i := fetch.io.p_npc

  val regfile = Module(new RegFile)
  regfile.io.ren1 := decode.io.ren1
  regfile.io.ren2 := decode.io.ren2
  regfile.io.raddr1 := decode.io.raddr1
  regfile.io.raddr2 := decode.io.raddr2

  decode.io.rs1_data_i := regfile.io.rdata1
  decode.io.rs2_data_i := regfile.io.rdata2

  val execute = Module(new Execute)
  execute.io.in <> decode.io.out
  execute.io.ex_rs1_i := decode.io.rs1_data_o
  execute.io.ex_rs2_i := decode.io.rs2_data_o
  execute.io.is_ebreak_i := decode.io.is_ebreak
  execute.io.p_npc_i := decode.io.p_npc_o

  fetch.io.jmp_packet_i := execute.io.jmp_packet_o

  val mem = Module(new Mem)

  mem.io.mem_mduout_i := execute.io.ex_mduout_o
  mem.io.mem_mduready_i := execute.io.ex_mduready_o

  //bypass
  regfile.io.ex_rd_en          := execute.io.ex_rd_en
  regfile.io.ex_rd_addr        := execute.io.ex_rd_addr
  regfile.io.ex_rd_data        := execute.io.ex_data_o
  regfile.io.ex_is_load_i      := execute.io.ex_is_load
  regfile.io.mem_is_load_i     := mem.io.mem_is_load
  regfile.io.ex_is_mdu_i       := execute.io.ex_is_mdu
  decode.io.decode_rf_stall_i  := regfile.io.rf_stall

  mem.io.in <> execute.io.out
  mem.io.mem_data_i := execute.io.ex_data_o
  mem.io.is_ebreak_i := execute.io.is_ebreak_o
  mem.io.out.ready := true.B

  mem.io.mem_rwaddr_i  := execute.io.ex_rwaddr_o
  mem.io.mem_rvalid_i  := execute.io.ex_rvalid_o
  mem.io.mem_wvalid_i  := execute.io.ex_wvalid_o
  mem.io.mem_wdata_i   := execute.io.ex_wdata_o
  mem.io.mem_wsize_i   := execute.io.ex_wsize_o
  mem.io.reg_mem_addr_i := mem.io.dmem.req.bits.arwaddr

  regfile.io.waddr := mem.io.waddr_o
  regfile.io.wen := mem.io.wen_o
  regfile.io.wdata := mem.io.wdata_o

  io.regs_out := regfile.io.regs
  io.commit_pc := RegNext(mem.io.out.bits.pc)
  io.commit := RegNext(mem.io.out.bits.valid)

  io.dmem.req.raddr := Cat(mem.io.dmem.req.bits.arwaddr(31, 3), Fill(3, 0.U))
  io.dmem.req.ren := mem.io.dmem.req.bits.rvalid
  io.dmem.req.waddr := Cat(mem.io.dmem.req.bits.arwaddr(31, 3), Fill(3, 0.U))
  io.dmem.req.wdata := mem.io.dmem.req.bits.wdata
  io.dmem.req.wen := mem.io.dmem.req.bits.wvalid
  io.dmem.req.wmask := mem.io.dmem.req.bits.wmask

  mem.io.dmem.resp.bits.rdata := io.dmem.rdata
  mem.io.dmem.resp.bits.rready := io.dmem.read_ok
  mem.io.dmem.resp.bits.wready := io.dmem.write_ok

  mem.io.dmem.req.ready := true.B
  mem.io.dmem.resp.valid := true.B
  //bypass
  regfile.io.mem_rd_en   := mem.io.mem_rd_en
  regfile.io.mem_rd_addr := mem.io.mem_rd_addr
  regfile.io.mem_rd_data := mem.io.mem_rd_data


//  io.is_break := RegNext(mem.io.is_ebreak_o)

  val wb_dpi = Module(new Wb_Dpi)
  wb_dpi.io.clk  := clock
  wb_dpi.io.inst := mem.io.out.bits.inst
  wb_dpi.io.pc := mem.io.out.bits.pc
  wb_dpi.io.ebreak := mem.io.is_ebreak_o

  //flush control
  fetch.io.if_flush := execute.io.jmp_packet_o.mis
  decode.io.id_flush := execute.io.jmp_packet_o.mis
  execute.io.ex_flush := false.B
  mem.io.mem_flush_i := false.B
  fetch.io.flush_pc_i := 0.U
}