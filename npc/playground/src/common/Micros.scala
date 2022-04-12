import chisel3._
import chisel3.util._

trait Constant {
  val Y = true.B
  val N = false.B

  val RS_X          = 0.asUInt(3.W)
  val RS_FROM_RF    = 1.asUInt(3.W)
  val RS_FROM_IMM   = 2.asUInt(3.W)
  val RS_FROM_ZERO  = 3.asUInt(3.W)
  val RS_FROM_PC    = 4.asUInt(3.W)
  val RS_FROM_NPC   = 5.asUInt(3.W)

  val IMM_X     = 0.asUInt(3.W)
  val IMM_I     = 1.asUInt(3.W)
  val IMM_S     = 2.asUInt(3.W)
  val IMM_B     = 3.asUInt(3.W)
  val IMM_U     = 4.asUInt(3.W)
  val IMM_J     = 5.asUInt(3.W)
  val IMM_SHAMT = 6.asUInt(3.W)
  val IMM_CSR   = 7.asUInt(3.W)

  val FU_X      = 0.asUInt(3.W)
  val FU_ALU    = 1.asUInt(3.W)
  val FU_JMP    = 2.asUInt(3.W)
  val FU_MEM    = 3.asUInt(3.W)
  val FU_CSR    = 4.asUInt(3.W)

  val ALU_X     = 0.asUInt(4.W)
  val ALU_ADD   = 1.asUInt(4.W)
  val ALU_SUB   = 2.asUInt(4.W)
  val ALU_SLT   = 3.asUInt(4.W)
  val ALU_SLTU  = 4.asUInt(4.W)
  val ALU_XOR   = 5.asUInt(4.W)
  val ALU_OR    = 6.asUInt(4.W)
  val ALU_AND   = 7.asUInt(4.W)
  val ALU_SLL   = 8.asUInt(4.W)
  val ALU_SRL   = 9.asUInt(4.W)
  val ALU_SRA   = 10.asUInt(4.W)

  val JMP_X     = 0.asUInt(4.W)
  val JMP_JAL   = 1.asUInt(4.W)
  val JMP_JALR  = 2.asUInt(4.W)
  val JMP_BEQ   = 3.asUInt(4.W)
  val JMP_BNE   = 4.asUInt(4.W)
  val JMP_BLT   = 5.asUInt(4.W)
  val JMP_BGE   = 6.asUInt(4.W)
  val JMP_BLTU  = 7.asUInt(4.W)
  val JMP_BGEU  = 8.asUInt(4.W)

  val MEM_X     = 0.asUInt(2.W)
  val MEM_LD    = 1.asUInt(2.W)
  val MEM_LDU   = 2.asUInt(2.W)
  val MEM_ST    = 3.asUInt(2.W)

  val MEM_BYTE  = 0.asUInt(2.W)
  val MEM_HALF  = 1.asUInt(2.W)
  val MEM_WORD  = 2.asUInt(2.W)
  val MEM_DWORD = 3.asUInt(2.W)

  val CSR_X     = 0.asUInt(3.W)
  val CSR_RW    = 1.asUInt(3.W)
  val CSR_RS    = 2.asUInt(3.W)
  val CSR_RC    = 3.asUInt(3.W)
  val CSR_ECALL = 4.asUInt(3.W)
  val CSR_MRET  = 5.asUInt(3.W)
}

object Constant extends Constant { }