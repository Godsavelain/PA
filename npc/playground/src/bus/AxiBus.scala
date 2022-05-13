package patchouli

import chisel3._
import chisel3.util._

class AxiBusIO extends Bundle{
  val req = Decoupled(new AxiBusReq)
  val resp = Flipped(Decoupled(new AxiBusResp))
}

class AxiBusReq extends Bundle{
  val arid    = Output(UInt(4.W))
  val araddr  = Output(UInt(32.W))
  val arlen   = Output(UInt(4.W))
  val arsize  = Output(UInt(3.W))
  val arburst = Output(UInt(2.W))
  val arlock  = Output(UInt(2.W))
  val arcache  = Output(UInt(4.W))
  val arprot  = Output(UInt(3.W))
  val arvalid = Output(Bool())

  val rready  = Output(Bool())

  val awid    = Output(UInt(4.W))
  val awaddr  = Output(UInt(32.W))
  val awlen   = Output(UInt(4.W))
  val awsize  = Output(UInt(3.W))
  val awburst = Output(UInt(2.W))
  val awlock  = Output(UInt(2.W))
  val awcache  = Output(UInt(4.W))
  val awprot  = Output(UInt(3.W))
  val awvalid = Output(Bool())

  val wwid    = Output(UInt(4.W))
  val wdata   = Output(UInt(64.W))
  val wwstrb  = Output(UInt(4.W))
  val wmask   = Output(UInt(8.W))
  val wlast   = Output(Bool())
  val wvalid  = Output(Bool())

  val bready  = Output(Bool())
}

class AxiBusResp extends Bundle{
  val arready = Output(Bool())
  val rid   = Output(UInt(4.W))
  val rdata   = Output(UInt(64.W))
  val rresp   = Output(UInt(2.W))
  val rlast  = Output(Bool())
  val rvalid  = Output(Bool())
  val awready = Output(Bool())
  val wready  = Output(Bool())

  val bid   = Output(UInt(4.W))
  val bresp   = Output(UInt(2.W))
  val bvalid  = Output(Bool())
}