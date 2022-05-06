package patchouli
import chisel3._
import chisel3.util._
import patchouli.Constant._

class Div extends Module{
  val io = IO(new Bundle{
    val in1 = Input(UInt(64.W))
    val in2 = Input(UInt(64.W))
    val out_div = Output(UInt(64.W))
    val out_rem = Output(UInt(64.W))
    val is_signed = Input(Bool())
    val div_valid = Input(Bool())
    val div_ready = Output(Bool())
  })

}