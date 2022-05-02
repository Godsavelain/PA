//Decode logic from zhoushan
package patchouli
import chisel3._
import chisel3.util._
import patchouli.Constant._
import patchouli.Instructions._

class Decode extends Module{
  val io = IO(new Bundle{
    val in = Flipped(Decoupled(new Inst_Packet()))
    val out = Decoupled(new DecodeOp())
    val id_flush = Input(Bool())
    val ren1 = Output(Bool())
    val raddr1 = Output(UInt(5.W))
    val ren2 = Output(Bool())
    val raddr2 = Output(UInt(5.W))
    val is_ebreak = Output(Bool())
    val rs1_data_i = Input(UInt(64.W))
    val rs2_data_i = Input(UInt(64.W))
    val rs1_data_o = Output(UInt(64.W))
    val rs2_data_o = Output(UInt(64.W))
    val p_npc_i = Input(UInt(32.W))
    val p_npc_o = Output(UInt(32.W))

    val decode_rf_stall_i = Input(Bool())
  })
  val pc    = RegInit(0.U(32.W))
  val inst  = RegInit(0.U(32.W))
  val inst_valid = RegInit(0.B)

  io.rs1_data_o := RegNext(io.rs1_data_i)
  io.rs2_data_o := RegNext(io.rs2_data_i)
  when(io.in.fire()){
    pc := Mux(io.id_flush , 0.U(32.W) ,io.in.bits.pc)
    inst := Mux(io.id_flush , 0.U(32.W) ,io.in.bits.inst)
    inst_valid := Mux(io.id_flush , 0.B ,io.in.bits.inst_valid)
  }

  val ctrl = ListLookup(inst,
    //   v  fu_code alu_code  jmp_code  mem_code mem_size   csr_code  mdu_code  w  rs1_src       rs2_src  rd_en  imm_type
    List(N, FU_X,   ALU_X,    JMP_X,    MEM_X,   MEM_X,     CSR_X,  MDU_X,   N, RS_X,         RS_X,        N, IMM_X  ),
    Array(
      // RV32I
      LUI     ->  List(Y, FU_ALU, ALU_ADD,  JMP_X,    MEM_X,   MEM_X,     CSR_X,   MDU_X,    N, RS_FROM_ZERO, RS_FROM_IMM, Y, IMM_U   ),
      AUIPC   ->  List(Y, FU_ALU, ALU_ADD,  JMP_X,    MEM_X,   MEM_X,     CSR_X,   MDU_X,    N, RS_FROM_PC,   RS_FROM_IMM, Y, IMM_U    ),
      JAL     ->  List(Y, FU_JMP, ALU_X,    JMP_JAL,  MEM_X,   MEM_X,     CSR_X,   MDU_X,    N, RS_FROM_PC,   RS_FROM_IMM, Y, IMM_J    ),
      JALR    ->  List(Y, FU_JMP, ALU_X,    JMP_JALR, MEM_X,   MEM_X,     CSR_X,   MDU_X,    N, RS_FROM_RF,   RS_FROM_RF,  Y, IMM_I    ),
      BEQ     ->  List(Y, FU_JMP, ALU_X,    JMP_BEQ,  MEM_X,   MEM_X,     CSR_X,   MDU_X,    N, RS_FROM_RF,   RS_FROM_RF,  N, IMM_B    ),
      BNE     ->  List(Y, FU_JMP, ALU_X,    JMP_BNE,  MEM_X,   MEM_X,     CSR_X,   MDU_X,    N, RS_FROM_RF,   RS_FROM_RF,  N, IMM_B    ),
      BLT     ->  List(Y, FU_JMP, ALU_X,    JMP_BLT,  MEM_X,   MEM_X,     CSR_X,   MDU_X,    N, RS_FROM_RF,   RS_FROM_RF,  N, IMM_B    ),
      BGE     ->  List(Y, FU_JMP, ALU_X,    JMP_BGE,  MEM_X,   MEM_X,     CSR_X,   MDU_X,    N, RS_FROM_RF,   RS_FROM_RF,  N, IMM_B    ),
      BLTU    ->  List(Y, FU_JMP, ALU_X,    JMP_BLTU, MEM_X,   MEM_X,     CSR_X,   MDU_X,    N, RS_FROM_RF,   RS_FROM_RF,  N, IMM_B    ),
      BGEU    ->  List(Y, FU_JMP, ALU_X,    JMP_BGEU, MEM_X,   MEM_X,     CSR_X,   MDU_X,    N, RS_FROM_RF,   RS_FROM_RF,  N, IMM_B    ),
      LB      ->  List(Y, FU_MEM, ALU_ADD,    JMP_X,    MEM_LD,  MEM_BYTE,  CSR_X, MDU_X,    N, RS_FROM_RF,   RS_FROM_IMM, Y, IMM_I    ),
      LH      ->  List(Y, FU_MEM, ALU_ADD,    JMP_X,    MEM_LD,  MEM_HALF,  CSR_X, MDU_X,    N, RS_FROM_RF,   RS_FROM_IMM, Y, IMM_I    ),
      LW      ->  List(Y, FU_MEM, ALU_ADD,    JMP_X,    MEM_LD,  MEM_WORD,  CSR_X, MDU_X,    N, RS_FROM_RF,   RS_FROM_IMM, Y, IMM_I    ),
      LBU     ->  List(Y, FU_MEM, ALU_ADD,    JMP_X,    MEM_LDU, MEM_BYTE,  CSR_X, MDU_X,    N, RS_FROM_RF,   RS_FROM_IMM, Y, IMM_I    ),
      LHU     ->  List(Y, FU_MEM, ALU_ADD,    JMP_X,    MEM_LDU, MEM_HALF,  CSR_X, MDU_X,    N, RS_FROM_RF,   RS_FROM_IMM, Y, IMM_I    ),
      SB      ->  List(Y, FU_MEM, ALU_ADD,    JMP_X,    MEM_ST,  MEM_BYTE,  CSR_X, MDU_X,    N, RS_FROM_RF,   RS_FROM_IMM,  N, IMM_S    ),
      SH      ->  List(Y, FU_MEM, ALU_ADD,    JMP_X,    MEM_ST,  MEM_HALF,  CSR_X, MDU_X,    N, RS_FROM_RF,   RS_FROM_IMM,  N, IMM_S    ),
      SW      ->  List(Y, FU_MEM, ALU_ADD,    JMP_X,    MEM_ST,  MEM_WORD,  CSR_X, MDU_X,    N, RS_FROM_RF,   RS_FROM_IMM,  N, IMM_S    ),
      ADDI    ->  List(Y, FU_ALU, ALU_ADD,  JMP_X,    MEM_X,   MEM_X,     CSR_X,  MDU_X,    N, RS_FROM_RF,   RS_FROM_IMM, Y, IMM_I    ),
      SLTI    ->  List(Y, FU_ALU, ALU_SLT,  JMP_X,    MEM_X,   MEM_X,     CSR_X,  MDU_X,    N, RS_FROM_RF,   RS_FROM_IMM, Y, IMM_I    ),
      SLTIU   ->  List(Y, FU_ALU, ALU_SLTU, JMP_X,    MEM_X,   MEM_X,     CSR_X,  MDU_X,    N, RS_FROM_RF,   RS_FROM_IMM, Y, IMM_I    ),
      XORI    ->  List(Y, FU_ALU, ALU_XOR,  JMP_X,    MEM_X,   MEM_X,     CSR_X,  MDU_X,    N, RS_FROM_RF,   RS_FROM_IMM, Y, IMM_I    ),
      ORI     ->  List(Y, FU_ALU, ALU_OR,   JMP_X,    MEM_X,   MEM_X,     CSR_X,  MDU_X,    N, RS_FROM_RF,   RS_FROM_IMM, Y, IMM_I    ),
      ANDI    ->  List(Y, FU_ALU, ALU_AND,  JMP_X,    MEM_X,   MEM_X,     CSR_X,  MDU_X,    N, RS_FROM_RF,   RS_FROM_IMM, Y, IMM_I    ),
      SLLI    ->  List(Y, FU_ALU, ALU_SLL,  JMP_X,    MEM_X,   MEM_X,     CSR_X,  MDU_X,    N, RS_FROM_RF,   RS_FROM_IMM, Y, IMM_SHAMT ),
      SRLI    ->  List(Y, FU_ALU, ALU_SRL,  JMP_X,    MEM_X,   MEM_X,     CSR_X,  MDU_X,    N, RS_FROM_RF,   RS_FROM_IMM, Y, IMM_SHAMT ),
      SRAI    ->  List(Y, FU_ALU, ALU_SRA,  JMP_X,    MEM_X,   MEM_X,     CSR_X,  MDU_X,    N, RS_FROM_RF,   RS_FROM_IMM, Y, IMM_SHAMT ),
      ADD     ->  List(Y, FU_ALU, ALU_ADD,  JMP_X,    MEM_X,   MEM_X,     CSR_X,  MDU_X,    N, RS_FROM_RF,   RS_FROM_RF,  Y, IMM_X    ),
      SUB     ->  List(Y, FU_ALU, ALU_SUB,  JMP_X,    MEM_X,   MEM_X,     CSR_X,  MDU_X,    N, RS_FROM_RF,   RS_FROM_RF,  Y, IMM_X    ),
      SLL     ->  List(Y, FU_ALU, ALU_SLL,  JMP_X,    MEM_X,   MEM_X,     CSR_X,  MDU_X,    N, RS_FROM_RF,   RS_FROM_RF,  Y, IMM_X    ),
      SLT     ->  List(Y, FU_ALU, ALU_SLT,  JMP_X,    MEM_X,   MEM_X,     CSR_X,  MDU_X,    N, RS_FROM_RF,   RS_FROM_RF,  Y, IMM_X    ),
      SLTU    ->  List(Y, FU_ALU, ALU_SLTU, JMP_X,    MEM_X,   MEM_X,     CSR_X,  MDU_X,    N, RS_FROM_RF,   RS_FROM_RF,  Y, IMM_X    ),
      XOR     ->  List(Y, FU_ALU, ALU_XOR,  JMP_X,    MEM_X,   MEM_X,     CSR_X,  MDU_X,    N, RS_FROM_RF,   RS_FROM_RF,  Y, IMM_X    ),
      SRL     ->  List(Y, FU_ALU, ALU_SRL,  JMP_X,    MEM_X,   MEM_X,     CSR_X,  MDU_X,    N, RS_FROM_RF,   RS_FROM_RF,  Y, IMM_X    ),
      SRA     ->  List(Y, FU_ALU, ALU_SRA,  JMP_X,    MEM_X,   MEM_X,     CSR_X,  MDU_X,    N, RS_FROM_RF,   RS_FROM_RF,  Y, IMM_X    ),
      OR      ->  List(Y, FU_ALU, ALU_OR,   JMP_X,    MEM_X,   MEM_X,     CSR_X,  MDU_X,    N, RS_FROM_RF,   RS_FROM_RF,  Y, IMM_X    ),
      AND     ->  List(Y, FU_ALU, ALU_AND,  JMP_X,    MEM_X,   MEM_X,     CSR_X,  MDU_X,    N, RS_FROM_RF,   RS_FROM_RF,  Y, IMM_X    ),

      ECALL   ->  List(Y, FU_CSR, ALU_X,    JMP_X,    MEM_X,   MEM_X,     CSR_ECALL, MDU_X,  N, RS_X,         RS_X,        N, IMM_X    ),
      EBREAK  ->  List(Y, FU_X,   ALU_X,    JMP_X,    MEM_X,   MEM_X,     CSR_X,     MDU_X,  N, RS_X,         RS_X,        N, IMM_X    ),
      MRET    ->  List(Y, FU_CSR, ALU_X,    JMP_X,    MEM_X,   MEM_X,     CSR_MRET,  MDU_X,  N, RS_X,         RS_X,        N, IMM_X    ),
      // RV64I
      LWU     ->  List(Y, FU_MEM, ALU_ADD,    JMP_X,    MEM_LDU, MEM_WORD,  CSR_X , MDU_X,     N, RS_FROM_RF,   RS_FROM_IMM, Y, IMM_I   ),
      LD      ->  List(Y, FU_MEM, ALU_ADD,    JMP_X,    MEM_LDU, MEM_DWORD, CSR_X , MDU_X,     N, RS_FROM_RF,   RS_FROM_IMM, Y, IMM_I   ),
      SD      ->  List(Y, FU_MEM, ALU_ADD,    JMP_X,    MEM_ST,  MEM_DWORD, CSR_X , MDU_X,     N, RS_FROM_RF,   RS_FROM_IMM,  N, IMM_S   ),
      ADDIW   ->  List(Y, FU_ALU, ALU_ADD,  JMP_X,    MEM_X,   MEM_X,     CSR_X, MDU_X,     Y, RS_FROM_RF,   RS_FROM_IMM, Y, IMM_I    ),
      SLLIW   ->  List(Y, FU_ALU, ALU_SLL,  JMP_X,    MEM_X,   MEM_X,     CSR_X, MDU_X,     Y, RS_FROM_RF,   RS_FROM_IMM, Y, IMM_I    ),
      SRLIW   ->  List(Y, FU_ALU, ALU_SRL,  JMP_X,    MEM_X,   MEM_X,     CSR_X, MDU_X,     Y, RS_FROM_RF,   RS_FROM_IMM, Y, IMM_I    ),
      SRAIW   ->  List(Y, FU_ALU, ALU_SRA,  JMP_X,    MEM_X,   MEM_X,     CSR_X, MDU_X,     Y, RS_FROM_RF,   RS_FROM_IMM, Y, IMM_I    ),
      ADDW    ->  List(Y, FU_ALU, ALU_ADD,  JMP_X,    MEM_X,   MEM_X,     CSR_X, MDU_X,     Y, RS_FROM_RF,   RS_FROM_RF,  Y, IMM_X    ),
      SUBW    ->  List(Y, FU_ALU, ALU_SUB,  JMP_X,    MEM_X,   MEM_X,     CSR_X, MDU_X,     Y, RS_FROM_RF,   RS_FROM_RF,  Y, IMM_X    ),
      SLLW    ->  List(Y, FU_ALU, ALU_SLL,  JMP_X,    MEM_X,   MEM_X,     CSR_X, MDU_X,     Y, RS_FROM_RF,   RS_FROM_RF,  Y, IMM_X    ),
      SRLW    ->  List(Y, FU_ALU, ALU_SRL,  JMP_X,    MEM_X,   MEM_X,     CSR_X, MDU_X,     Y, RS_FROM_RF,   RS_FROM_RF,  Y, IMM_X    ),
      SRAW    ->  List(Y, FU_ALU, ALU_SRA,  JMP_X,    MEM_X,   MEM_X,     CSR_X, MDU_X,     Y, RS_FROM_RF,   RS_FROM_RF,  Y, IMM_X    ),
      //MDU
      MUL     ->  List(Y, FU_ALU, ALU_X,  JMP_X,    MEM_X,   MEM_X,     CSR_X, MDU_MUL   ,     Y, RS_FROM_RF,   RS_FROM_RF,  Y, IMM_X ),
      MULH    ->  List(Y, FU_ALU, ALU_X,  JMP_X,    MEM_X,   MEM_X,     CSR_X, MDU_MULH  ,     Y, RS_FROM_RF,   RS_FROM_RF,  Y, IMM_X ),
      MULHSU  ->  List(Y, FU_ALU, ALU_X,  JMP_X,    MEM_X,   MEM_X,     CSR_X, MDU_MULHSU,     Y, RS_FROM_RF,   RS_FROM_RF,  Y, IMM_X   ),
      MULHU   ->  List(Y, FU_ALU, ALU_X,  JMP_X,    MEM_X,   MEM_X,     CSR_X, MDU_MULHU ,     Y, RS_FROM_RF,   RS_FROM_RF,  Y, IMM_X   ),
      DIV     ->  List(Y, FU_ALU, ALU_X,  JMP_X,    MEM_X,   MEM_X,     CSR_X, MDU_DIV   ,     Y, RS_FROM_RF,   RS_FROM_RF,  Y, IMM_X   ),
      DIVU    ->  List(Y, FU_ALU, ALU_X,  JMP_X,    MEM_X,   MEM_X,     CSR_X, MDU_DIVU  ,     Y, RS_FROM_RF,   RS_FROM_RF,  Y, IMM_X   ),
      REM     ->  List(Y, FU_ALU, ALU_X,  JMP_X,    MEM_X,   MEM_X,     CSR_X, MDU_REM   ,     Y, RS_FROM_RF,   RS_FROM_RF,  Y, IMM_X   ),
      REMU    ->  List(Y, FU_ALU, ALU_X,  JMP_X,    MEM_X,   MEM_X,     CSR_X, MDU_REMU  ,     Y, RS_FROM_RF,   RS_FROM_RF,  Y, IMM_X   ),
      MULW    ->  List(Y, FU_ALU, ALU_X,  JMP_X,    MEM_X,   MEM_X,     CSR_X, MDU_MULW  ,     Y, RS_FROM_RF,   RS_FROM_RF,  Y, IMM_X   ),
      DIVW    ->  List(Y, FU_ALU, ALU_X,  JMP_X,    MEM_X,   MEM_X,     CSR_X, MDU_DIVW  ,     Y, RS_FROM_RF,   RS_FROM_RF,  Y, IMM_X   ),
      DIVUW   ->  List(Y, FU_ALU, ALU_X,  JMP_X,    MEM_X,   MEM_X,     CSR_X, MDU_DIVUW ,     Y, RS_FROM_RF,   RS_FROM_RF,  Y, IMM_X   ),
      REMW    ->  List(Y, FU_ALU, ALU_X,  JMP_X,    MEM_X,   MEM_X,     CSR_X, MDU_REMW  ,     Y, RS_FROM_RF,   RS_FROM_RF,  Y, IMM_X   ),
      REMUW   ->  List(Y, FU_ALU, ALU_X,  JMP_X,    MEM_X,   MEM_X,     CSR_X, MDU_REMUW ,     Y, RS_FROM_RF,   RS_FROM_RF,  Y, IMM_X   ),



      // CSR
      CSRRW   ->  List(Y, FU_CSR, ALU_X,    JMP_X,    MEM_X,   MEM_X,     CSR_RW, MDU_X ,    N, RS_FROM_RF,   RS_X,        Y, IMM_X   ),
      CSRRS   ->  List(Y, FU_CSR, ALU_X,    JMP_X,    MEM_X,   MEM_X,     CSR_RS, MDU_X ,    N, RS_FROM_RF,   RS_X,        Y, IMM_X   ),
      CSRRC   ->  List(Y, FU_CSR, ALU_X,    JMP_X,    MEM_X,   MEM_X,     CSR_RC, MDU_X ,    N, RS_FROM_RF,   RS_X,        Y, IMM_X   ),
      CSRRWI  ->  List(Y, FU_CSR, ALU_X,    JMP_X,    MEM_X,   MEM_X,     CSR_RW, MDU_X,    N, RS_FROM_IMM,  RS_X,        Y, IMM_CSR  ),
      CSRRSI  ->  List(Y, FU_CSR, ALU_X,    JMP_X,    MEM_X,   MEM_X,     CSR_RS, MDU_X,    N, RS_FROM_IMM,  RS_X,        Y, IMM_CSR  ),
      CSRRCI  ->  List(Y, FU_CSR, ALU_X,    JMP_X,    MEM_X,   MEM_X,     CSR_RC, MDU_X,    N, RS_FROM_IMM,  RS_X,        Y, IMM_CSR  ),
      // am
      HALT    ->  List(Y, FU_X,   ALU_X,    JMP_X,    MEM_X,   MEM_X,     CSR_X,  MDU_X,   N, RS_X,         RS_X,        N, IMM_X    ),
      PUTCH   ->  List(Y, FU_X,   ALU_X,    JMP_X,    MEM_X,   MEM_X,     CSR_X,  MDU_X,   N, RS_X,         RS_X,        N, IMM_X    )

    )
  )
  val (valid : Bool)  :: fu_code :: alu_code :: jmp_code       :: mem_code :: mem_size :: csr_code :: mdu_code :: c0 = ctrl
  val (w_type : Bool) :: rs1_src :: rs2_src  :: (rd_en : Bool) :: imm_type :: Nil                        = c0

  val stall = !io.out.fire() || decode_rf_stall_i

  io.out.bits.pc      := pc
  io.out.bits.inst    := inst
  io.out.bits.valid   := Mux((io.id_flush || stall) , false.B ,inst_valid)
  io.out.bits.fu_code := fu_code
  io.out.bits.alu_code := alu_code
  io.out.bits.jmp_code := jmp_code
  io.out.bits.mem_code := mem_code
  io.out.bits.mem_size := mem_size
  io.out.bits.csr_code := csr_code
  io.out.bits.mdu_code := mdu_code
  io.out.bits.w_type := w_type
  io.out.bits.rs1_src := rs1_src
  io.out.bits.rs2_src := rs2_src
  io.out.bits.rd_en := Mux(io.id_flush , false.B ,Mux(inst_valid, rd_en , false.B))
  io.out.bits.rs1_addr := inst(19, 15)
  io.out.bits.rs2_addr := inst(24, 20)
  io.out.bits.rd_addr := inst(11, 7)

  io.ren1 := (rs1_src === RS_FROM_RF)
  io.ren2 := ((rs2_src === RS_FROM_RF) || (mem_code === MEM_ST))
  io.raddr1 := inst(19, 15)
  io.raddr2 := inst(24, 20)
  io.is_ebreak := Mux(io.id_flush , false.B ,Mux(inst_valid, RegNext(inst === EBREAK), false.B ))

  io.p_npc_o := RegNext(io.p_npc_i)

  val imm_i = Cat(Fill(21, inst(31)), inst(30, 20))
  val imm_s = Cat(Fill(21, inst(31)), inst(30, 25), inst(11, 7))
  val imm_b = Cat(Fill(20, inst(31)), inst(7), inst(30, 25), inst(11, 8), 0.U)
  val imm_u = Cat(inst(31, 12), Fill(12, 0.U))
  val imm_j = Cat(Fill(12, inst(31)), inst(19, 12), inst(20), inst(30, 21), 0.U)
  val imm_shamt = Mux(w_type, Cat(Fill(27, 0.U), inst(24, 20)), Cat(Fill(26, 0.U), inst(25, 20)))
  val imm_csr = Cat(Fill(27, 0.U), inst(19, 15))

  io.out.bits.imm := MuxLookup(imm_type, 0.U(32.W), Array(
    IMM_I -> imm_i,
    IMM_S -> imm_s,
    IMM_B -> imm_b,
    IMM_U -> imm_u,
    IMM_J -> imm_j,
    IMM_SHAMT -> imm_shamt,
    IMM_CSR -> imm_csr
  ))

  io.in.ready := !stall
  io.out.valid := true.B
}

class DecodeOp extends Bundle{
  val valid     = Bool()
  val pc        = UInt(32.W)
  val inst      = UInt(32.W)

  val fu_code   = UInt(3.W)
  val alu_code  = UInt(4.W)
  val jmp_code  = UInt(4.W)
  val mem_code  = UInt(2.W)
  val mem_size  = UInt(2.W)
  val csr_code  = UInt(3.W)
  val mdu_code  = UInt(4.W)
  val w_type    = Bool()

  val rs1_src   = UInt(3.W)
  val rs2_src   = UInt(3.W)

  val rs1_addr  = UInt(5.W)
  val rs2_addr  = UInt(5.W)
  val rd_addr   = UInt(5.W)
  val rd_en     = Bool()

  val imm       = UInt(32.W)
}