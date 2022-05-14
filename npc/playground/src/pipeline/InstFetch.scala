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
  val pc = RegInit("h7FFFFFFC".U(32.W))
  //val pc_valid = RegInit("b1".U(1.W))
  val pc_base = Cat(pc(31, 2), Fill(2, 0.U))

  val imem_stall = !resp.bits.rvalid
  val stall = (imem_stall || !io.out.fire())

  val flush_pc = Mux(io.jmp_packet_i.mis , io.jmp_packet_i.jmp_npc , io.flush_pc_i)
  //flush更改npc时，若取指段处于等待指令数据的状态，写入这些寄存器
  val use_reg_npc = RegInit(false.B)
  val reg_npc   = RegInit(0.U(32.W))
  when(io.if_flush && stall){
    use_reg_npc := true.B
    reg_npc := flush_pc
  }

  //表明传送给ID级的instfetch信息的来源
  val use_reg_info = RegInit(false.B)
  when(stall && !imem_stall){
    use_reg_info := true.B
  }

  val npc_s = Mux(io.jmp_packet_i.mis ,io.jmp_packet_i.jmp_npc , Mux(use_reg_npc ,reg_npc, pc_base + 4.U))
  val npc = npc_s

  when(!stall){
    pc := npc
    reg_pnpc := req.bits.araddr
    use_reg_npc := false.B
    use_reg_info := false.B
  }
  io.p_npc := reg_pnpc

  when(!imem_stall){
    //pc_out    := Mux( use_reg_npc , 0.U , req.bits.araddr)
    inst_out  := resp.bits.rdata
    valid_out := resp.bits.rvalid
  }

  when(!stall){
    pc_out    := Mux( use_reg_npc , 0.U , req.bits.araddr)
  }

//  io.out.bits.pc := Mux(use_reg_info ,pc_out ,resp.bits.old_pc)
  io.out.bits.pc := Mux((io.if_flush || use_reg_npc || imem_stall ) ,0.B, pc_out)
  io.out.bits.inst := Mux((io.if_flush || use_reg_npc ) , 0.B ,Mux(imem_stall , 0.U ,Mux(use_reg_info ,inst_out ,resp.bits.rdata)))
  io.out.bits.inst_valid := Mux( (io.if_flush || use_reg_npc),0.B, Mux(imem_stall ,false.B ,Mux(use_reg_info ,valid_out, resp.bits.rvalid)))

  req.bits.araddr  := Mux(use_reg_npc ,reg_npc ,Mux(io.if_flush ,flush_pc ,pc_base + 4.U))
  req.bits.arvalid := true.B
//  req.bits.arvalid := !stall
  req.bits.rready := true.B

  req.valid      := io.out.ready
  resp.ready     := true.B
  io.out.valid   := true.B
}

