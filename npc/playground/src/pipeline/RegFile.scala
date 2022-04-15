package patchouli

import chisel3._
import chisel3.util._
import chisel3.util.experimental._

class RegFile extends Module{
    val io = IO(new Bundle{
    val ren1 = Input(Bool())
    val raddr1 = Input(UInt(5.W))
    val rdata1 = Output(UInt(64.W))
    val ren2 = Input(Bool())
    val raddr2 = Input(UInt(5.W))
    val rdata2 = Output(UInt(64.W))
    val wen = Input(Bool())
    val waddr = Input(UInt(5.W))
    val wdata = Input(UInt(64.W))
    val regs = Vec(32,Output(UInt(64.W)))
    //for bypass
    val ex_rd_en = Input(Bool())
    val ex_rd_addr = Input(UInt(32.W))
    val ex_rd_data = Input(UInt(64.W))
    val mem_rd_en = Input(Bool())
    val mem_rd_addr = Input(UInt(32.W))
    val mem_rd_data = Input(UInt(64.W))
  })
//bypass
  val ex_rs1_hazard = io.ex_rd_en && (io.ex_rd_addr === io.raddr1) && io.ren1
  val ex_rs2_hazard = io.ex_rd_en && (io.ex_rd_addr === io.raddr2) && io.ren2
  val mem_rs1_hazard = io.mem_rd_en && (io.mem_rd_addr === io.raddr1) && io.ren1
  val mem_rs2_hazard = io.mem_rd_en && (io.mem_rd_addr === io.raddr2) && io.ren2
  val wb_rs1_hazard = io.wen && (io.waddr === io.raddr1) && io.ren1
  val wb_rs2_hazard = io.wen && (io.waddr === io.raddr2) && io.ren2

  val rf = RegInit(VecInit(Seq.fill(32)(0.U(64.W))))

  io.rdata1 := Mux((io.raddr1 =/= 0.U), Mux(ex_rs1_hazard , io.ex_rd_data ,Mux(mem_rs1_hazard ,io.mem_rd_data, Mux(wb_rs1_hazard,io.wdata ,rf(io.raddr1)))), 0.U)
  io.rdata2 := Mux((io.raddr2 =/= 0.U), Mux(ex_rs2_hazard , io.ex_rd_data ,Mux(mem_rs2_hazard ,io.mem_rd_data, Mux(wb_rs2_hazard,io.wdata ,rf(io.raddr2)))), 0.U)

  when((io.waddr =/= 0.U) && io.wen ){
    rf(io.waddr) := io.wdata
  }
  io.regs := rf
}




