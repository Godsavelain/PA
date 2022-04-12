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
  })

  val rf = RegInit(VecInit(Seq.fill(32)(0.U(64.W))))

  io.rdata1 := Mux((io.raddr1 =/= 0.U), rf(io.raddr1), 0.U)
  io.rdata2 := Mux((io.raddr2 =/= 0.U), rf(io.raddr2), 0.U)

  when((io.waddr =/= 0.U) && io.wen ){
    rf(io.waddr) := io.wdata
  }

}




