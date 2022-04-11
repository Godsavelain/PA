//package patchouli

import chisel3._
import chisel3.util._

class Inst_Packet extends Bundle{
  val pc    = Output(UInt(32.W))
  val inst  = Output(UInt(32.W))
  val inst_valid = Output(Bool())
}

class IF_Req extends Bundle{
  val araddr  = Output(UInt(32.W))
  val arvalid = Output(Bool())
  val rready  = Output(Bool())
//  val awaddr  = Output(UInt(64.W))
//  val awvalid = Output(Bool())
//  val wvalid  = Output(Bool())
//  val wdata   = Output(UInt(64.W))
}

class IF_Resp extends Bundle{
  val rdata   = Output(UInt(32.W))
//  val arready = Output(Bool())
  val rvalid  = Output(Bool())
  val old_pc   = Output(UInt(32.W))
//  val awready = Output(Bool())
//  val wready  = Output(Bool())
}

class IF_IO extends Bundle{
  val req  = Decoupled(new IF_Req())
  val resp = Flipped(Decoupled(new IF_Resp()))
}

class InstFetch extends Module{
  val io = IO(new Bundle{
    val imem = new IF_IO()
    val out  = Decoupled(new Inst_Packet())
  })

  val req = io.imem.req
  val resp = io.imem.resp

  val pc = RegInit("h80000000".U(32.W))
  //val pc_valid = RegInit("b1".U(1.W))
  val pc_base = Cat(pc(31, 2), Fill(2, 0.U))
  val npc_s = pc_base + 4.U

  val stall = (!resp.bits.rvalid || !io.out.ready)
  val npc = npc_s
  when(!stall){
    pc := npc
  }

  io.out.bits.pc := resp.bits.old_pc
  io.out.bits.inst := resp.bits.rdata
  io.out.bits.inst_valid := resp.bits.rvalid

  req.bits.araddr  := pc_base
  req.bits.arvalid := true.B
  req.bits.rready := true.B

  req.valid      := io.out.ready
  resp.ready     := true.B
  io.out.valid   := true.B
}



