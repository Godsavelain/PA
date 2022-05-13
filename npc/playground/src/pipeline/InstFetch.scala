package patchouli

import chisel3._
import chisel3.util._

class Jmp_Packet extends Bundle{
//  val jump = Output(Bool())
//  val fetch_npc = Output(UInt(32.W))
  val jmp_npc = UInt(32.W)
  val mis = Bool()
}

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
    val if_flush = Input(Bool())
    val p_npc = Output(UInt(32.W))
    val jmp_packet_i = Input(new Jmp_Packet())
    val flush_pc_i = Input(Bool())
  })

  val req = io.imem.req
  val resp = io.imem.resp

  val pc_out    = RegInit(0.U(32.W))
  val inst_out  = RegInit(0.U(32.W))
  val valid_out = RegInit(false.B)

  val reg_pnpc = RegInit(0.U(32.W))
  val pc = RegInit("h80000000".U(32.W))
  //val pc_valid = RegInit("b1".U(1.W))
  val pc_base = Cat(pc(31, 2), Fill(2, 0.U))
  val npc_s = Mux(io.jmp_packet_i.mis ,io.jmp_packet_i.jmp_npc + 4.U, Mux(use_reg_npc ,reg_npc + 4.U, pc_base + 4.U))

  val imem_stall = !resp.bits.rvalid
  val stall = (imem_stall || !io.out.fire())
  val npc = npc_s

  val flush_pc = Mux(io.jmp_packet_i.mis , io.jmp_packet_i.jmp_npc , io.flush_pc_i)
  //flush更改npc时，若取指段处于等待指令数据的状态，写入这些寄存器
  val use_reg_npc = RegInit(false.B)
  val reg_npc   = RegInit(0.U(32.W))
  when(io.if_flush && stall){
    use_reg_npc := true.B
    reg_npc := flush_pc
  }

  when(!stall){
    pc := npc
    reg_pnpc := req.bits.araddr
    use_reg_npc := false.B
  }
  io.p_npc := reg_pnpc

  when(!stall || io.if_flush){
    pc_out    := Mux( use_reg_npc , 0.U , pc_base)
    inst_out  := Mux( use_reg_npc , 0.U , resp.bits.rdata)
    valid_out := Mux( use_reg_npc , 0.B , resp.bits.rvalid)
  }

  io.out.bits.pc := pc_out
  io.out.bits.inst := Mux(imem_stall , 0.U , inst_out)
  io.out.bits.inst_valid := Mux(imem_stall , false.B , valid_out)

  req.bits.araddr  := Mux(use_reg_npc ,reg_npc ,Mux(io.if_flush ，flush_pc ，pc_base))
  req.bits.arvalid := true.B
  req.bits.rready := true.B

  req.valid      := io.out.ready
  resp.ready     := true.B
  io.out.valid   := true.B
}

