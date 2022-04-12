package patchouli

import chisel3._
import chisel3.util._
//import chisel3.util.experimental._
//import difftest._

class TestIO extends Bundle{
  val raddr = Output(UInt(32.W))
  val waddr = Output(UInt(32.W))
  val wdata = Output(UInt(64.W))
  val ren = Output(Bool())
  val wen = Output(Bool())
  val wmask = Output(UInt(8.W))
  val rdata = Input(UInt(64.W))
}

class Core extends Module{
  val io = IO(new Bundle{
//    val imem = new CoreBusIO()
//    val dmem = new CoreBusIO()
      val imem = new TestIO()
      val dmem = new TestIO()
  })


}