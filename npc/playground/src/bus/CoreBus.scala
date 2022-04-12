//package patchouli

import chisel3._
import chisel3.util._

class CoreBusIO extends Bundle{
  val req = Decoupled(new CoreBusReq)
  val resp = Flipped(Decoupled(new CoreBusResp))
}

class CoreBusReq extends Bundle{
  val araddr  = Output(UInt(64.W))
  val arvalid = Output(Bool())
  val rready  = Output(Bool())
  val awaddr  = Output(UInt(64.W))
  val awvalid = Output(Bool())
  val wvalid  = Output(Bool())
  val wdata   = Output(UInt(64.W))
}

class  CoreBusResp extends Bundle{
  val rdata   = Output(UInt(64.W))
  val arready = Output(Bool())
  val rvalid  = Output(Bool())
  val awready = Output(Bool())
  val wready  = Output(Bool())
}