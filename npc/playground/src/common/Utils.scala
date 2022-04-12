import chisel3._
import chisel3.util._

object Zext32_64 {
  def apply(x: UInt): UInt = Cat(Fill(32 , 0.U) , x)
}

object Sext32_64 {
  def apply(x: UInt): UInt = Cat(Fill(32, x(31)), x)
}