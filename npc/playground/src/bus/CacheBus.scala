package patchouli

import chisel3._
import chisel3.util._

class CacheBusIO extends Bundle{
  val req = Decoupled(new CacheBusReq)
  val resp = Flipped(Decoupled(new CacheBusResp))
}

class CacheBusReq extends Bundle{
  val raddr = Output(UInt(32.W))
  val waddr = Output(UInt(32.W))
  val wdata = Output(UInt(64.W))
  val ren = Output(Bool())
  val wen = Output(Bool())
  val wmask = Output(UInt(8.W))
}

class CacheBusResp extends Bundle{
  val rdata = Output(UInt(64.W))
  val read_ok = Output(Bool())
  val write_ok = Output(Bool())
}