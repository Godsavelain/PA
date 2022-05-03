package patchouli

import chisel3._
import chisel3.util._
import patchouli.Constant._

class MEM_Req extends Bundle{
  val arwaddr  = Output(UInt(32.W))
//  val arvalid = Output(Bool())
  val rvalid  = Output(Bool())
  val wvalid  = Output(Bool())
  val wdata   = Output(UInt(64.W))
  val wmask = Output(UInt(8.W))
}

class MEM_Resp extends Bundle{
  val rdata   = Output(UInt(64.W))
  val rready = Output(Bool())
  val wready = Output(Bool())
}

class MEM_IO extends Bundle{
  val req  = Decoupled(new MEM_Req())
  val resp = Flipped(Decoupled(new MEM_Resp()))
}

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
    //for dmem
    val dmem = new MEM_IO()
    val mem_rwaddr_i  = Input(UInt(32.W))
    val mem_rvalid_i  = Input(Bool())
    val mem_wvalid_i  = Input(Bool())
    val mem_wdata_i   = Input(UInt(64.W))
    val mem_wsize_i   = Input(UInt(2.W))
    val reg_mem_addr_i = Input(UInt(32.W))

    //for bypass
    val mem_rd_en = Output(Bool())
    val mem_rd_addr = Output(UInt(5.W))
    val mem_rd_data = Output(UInt(64.W))
    val mem_is_load = Output(Bool())
  })

  val req = io.dmem.req
  val resp = io.dmem.resp

  io.is_ebreak_o := RegNext(io.is_ebreak_i)

  val mem_reg_decodeop = RegInit(0.U.asTypeOf(new DecodeOp()))
  val waddr = RegInit(0.U(5.W))
  val wen   = RegInit(0.U(1.W))
  val wdata = RegInit(0.U(64.W))

  val reg_mem_addr = RegInit(0.U(32.W))

  when(io.in.fire() || io.mem_flush_i){
    mem_reg_decodeop := Mux(io.mem_flush_i ,0.U.asTypeOf(new DecodeOp()), io.in.bits)
    waddr := io.in.bits.rd_addr
    wen   := Mux(io.mem_flush_i , 0.B ,io.in.bits.rd_en)
    wdata := io.mem_data_i
    reg_mem_addr := io.reg_mem_addr_i
  }

  //Mem
  val is_load  = ((mem_reg_decodeop.mem_code === MEM_LD) || (mem_reg_decodeop.mem_code === MEM_LDU))
  val is_store = (mem_reg_decodeop.mem_code === MEM_ST)

  val req_wait = (((is_load && !resp.bits.rready ) || (is_store && !resp.bits.wready)) && mem_reg_decodeop.valid)
  val stall = req_wait

  //pre MEM stage

  val addr_offset = io.mem_rwaddr_i(2, 0)
  val reg_addr_offset = reg_mem_addr(2, 0)

  val mask = MuxLookup(addr_offset, 0.U, Array(
    "b000".U -> "b11111111".U(8.W),
    "b001".U -> "b11111110".U(8.W),
    "b010".U -> "b11111100".U(8.W),
    "b011".U -> "b11111000".U(8.W),
    "b100".U -> "b11110000".U(8.W),
    "b101".U -> "b11100000".U(8.W),
    "b110".U -> "b11000000".U(8.W),
    "b111".U -> "b10000000".U(8.W)
  ))
  val wmask = MuxLookup(io.mem_wsize_i, 0.U, Array(
    MEM_BYTE  -> "b00000001".U(8.W),
    MEM_HALF  -> "b00000011".U(8.W),
    MEM_WORD  -> "b00001111".U(8.W),
    MEM_DWORD -> "b11111111".U(8.W)
  ))

  req.bits.arwaddr  := io.mem_rwaddr_i
  req.bits.rvalid   := Mux(stall , false.B, io.mem_rvalid_i )
  req.bits.wdata    := (io.mem_wdata_i << (addr_offset << 3))(63, 0)
  req.bits.wmask    := mask & ((wmask << addr_offset)(7, 0))
  req.bits.wvalid   := Mux(stall , false.B, io.mem_wvalid_i )

  //In Mem stage
//现阶段MEM之后不会产生阻塞，因此可以视为MEM段随时可以响应
//  val reg_rdata    = RegInit(0.U(64.W))
//  val use_reg_data   = RegInit(0.B)
//  when(is_load && resp.bits.rready ){
//    reg_rdata := io.resp.bits.rdata
//  }
//  when(){
//    use_reg_data := 1.B
//  }

  val ld_data_raw = resp.bits.rdata >> (reg_addr_offset << 3)

  val ld_data = Mux(mem_reg_decodeop.mem_code === MEM_LD, MuxLookup(mem_reg_decodeop.mem_size, 0.U, Array(
    MEM_BYTE  -> Cat(Fill(56, ld_data_raw(7)), ld_data_raw(7, 0)),
    MEM_HALF  -> Cat(Fill(48, ld_data_raw(15)), ld_data_raw(15, 0)),
    MEM_WORD  -> Cat(Fill(32, ld_data_raw(31)), ld_data_raw(31, 0)),
    MEM_DWORD -> ld_data_raw
  )), 0.U)

  val ld_data_u = Mux(mem_reg_decodeop.mem_code === MEM_LDU, MuxLookup(mem_reg_decodeop.mem_size, 0.U, Array(
    MEM_BYTE  -> Cat(Fill(56, 0.U), ld_data_raw(7, 0)),
    MEM_HALF  -> Cat(Fill(48, 0.U), ld_data_raw(15, 0)),
    MEM_WORD  -> Cat(Fill(32, 0.U), ld_data_raw(31, 0)),
    MEM_DWORD -> ld_data_raw
  )), 0.U)

  val load_data = MuxLookup(mem_reg_decodeop.mem_code, 0.U, Array(
    MEM_LD  -> ld_data,
    MEM_LDU -> ld_data_u
  ))


  resp.ready     := true.B

  //out
  io.out.bits := RegNext(Mux(io.mem_flush_i ,0.U.asTypeOf(new DecodeOp()), mem_reg_decodeop))
  io.out.valid := true.B
  io.waddr_o := RegNext(waddr)
//  io.wen_o   := RegNext(Mux((req_wait || !mem_reg_decodeop.valid) , false.B ,wen))
  io.wen_o   := RegNext(Mux(req_wait , false.B ,wen))
  val final_wdata = Mux(is_load , load_data , wdata)
  io.wdata_o := RegNext(final_wdata)

  //for bypass
  io.mem_rd_en   := Mux(mem_reg_decodeop.valid, false.B , mem_reg_decodeop.rd_en)
  io.mem_rd_addr := mem_reg_decodeop.rd_addr
  io.mem_rd_data := final_wdata
  io.mem_is_load := ((mem_reg_decodeop.mem_code === MEM_LD) || (mem_reg_decodeop.mem_code === MEM_LDU))

  io.in.ready := !stall
  req.valid    := true.B
}