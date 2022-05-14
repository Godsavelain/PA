module InstFetch(
  input         clock,
  input         reset,
  output [31:0] io_imem_req_bits_araddr,
  output        io_imem_req_bits_arvalid,
  input  [31:0] io_imem_resp_bits_rdata,
  input         io_imem_resp_bits_rvalid,
  input         io_out_ready,
  output        io_out_valid,
  output [31:0] io_out_bits_pc,
  output [31:0] io_out_bits_inst,
  output        io_out_bits_inst_valid,
  input         io_if_flush,
  output [31:0] io_p_npc,
  input  [31:0] io_jmp_packet_i_jmp_npc,
  input         io_jmp_packet_i_mis
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] pc_out; // @[InstFetch.scala 56:26]
  reg [31:0] inst_out; // @[InstFetch.scala 57:26]
  reg  valid_out; // @[InstFetch.scala 58:26]
  reg [31:0] reg_pnpc; // @[InstFetch.scala 60:25]
  reg [31:0] pc; // @[InstFetch.scala 61:19]
  wire [29:0] pc_base_hi = pc[31:2]; // @[InstFetch.scala 63:23]
  wire [31:0] pc_base = {pc_base_hi,2'h0}; // @[Cat.scala 30:58]
  reg  use_reg_info; // @[InstFetch.scala 66:29]
  wire  imem_stall = ~io_imem_resp_bits_rvalid & ~use_reg_info; // @[InstFetch.scala 68:38]
  wire  _stall_T = io_out_ready & io_out_valid; // @[Decoupled.scala 40:37]
  wire  stall = imem_stall | ~_stall_T; // @[InstFetch.scala 69:27]
  wire  _T = ~imem_stall; // @[InstFetch.scala 71:17]
  wire  _GEN_0 = stall & ~imem_stall | use_reg_info; // @[InstFetch.scala 71:29 InstFetch.scala 72:18 InstFetch.scala 66:29]
  wire [31:0] flush_pc = io_jmp_packet_i_mis ? io_jmp_packet_i_jmp_npc : 32'h0; // @[InstFetch.scala 75:21]
  reg  use_reg_npc; // @[InstFetch.scala 77:28]
  reg [31:0] reg_npc; // @[InstFetch.scala 78:26]
  wire  _GEN_1 = io_if_flush & stall | use_reg_npc; // @[InstFetch.scala 79:29 InstFetch.scala 80:17 InstFetch.scala 77:28]
  wire [31:0] _npc_s_T_1 = pc_base + 32'h4; // @[InstFetch.scala 84:100]
  wire  _T_3 = ~stall; // @[InstFetch.scala 87:8]
  reg  first_instr; // @[InstFetch.scala 107:28]
  wire  _GEN_10 = first_instr & _T ? 1'h0 : first_instr; // @[InstFetch.scala 109:35 InstFetch.scala 110:17 InstFetch.scala 107:28]
  wire  _io_out_bits_pc_T_1 = io_if_flush | use_reg_npc | imem_stall; // @[InstFetch.scala 114:53]
  wire [31:0] _io_out_bits_inst_T_2 = use_reg_info ? inst_out : io_imem_resp_bits_rdata; // @[InstFetch.scala 115:83]
  wire  _io_out_bits_inst_valid_T_3 = use_reg_info ? valid_out : io_imem_resp_bits_rvalid; // @[InstFetch.scala 116:104]
  wire [31:0] _io_imem_req_bits_araddr_T_2 = io_if_flush ? flush_pc : _npc_s_T_1; // @[InstFetch.scala 118:52]
  assign io_imem_req_bits_araddr = use_reg_npc ? reg_npc : _io_imem_req_bits_araddr_T_2; // @[InstFetch.scala 118:26]
  assign io_imem_req_bits_arvalid = _stall_T | first_instr; // @[InstFetch.scala 120:37]
  assign io_out_valid = 1'h1; // @[InstFetch.scala 125:18]
  assign io_out_bits_pc = io_if_flush | use_reg_npc | imem_stall ? 32'h0 : pc_out; // @[InstFetch.scala 114:24]
  assign io_out_bits_inst = _io_out_bits_pc_T_1 ? 32'h0 : _io_out_bits_inst_T_2; // @[InstFetch.scala 115:26]
  assign io_out_bits_inst_valid = _io_out_bits_pc_T_1 | first_instr ? 1'h0 : _io_out_bits_inst_valid_T_3; // @[InstFetch.scala 116:32]
  assign io_p_npc = reg_pnpc; // @[InstFetch.scala 93:12]
  always @(posedge clock) begin
    if (reset) begin // @[InstFetch.scala 56:26]
      pc_out <= 32'h0; // @[InstFetch.scala 56:26]
    end else if (_T_3) begin // @[InstFetch.scala 101:15]
      pc_out <= io_imem_req_bits_araddr; // @[InstFetch.scala 103:12]
    end
    if (reset) begin // @[InstFetch.scala 57:26]
      inst_out <= 32'h0; // @[InstFetch.scala 57:26]
    end else if (io_imem_resp_bits_rvalid) begin // @[InstFetch.scala 95:25]
      inst_out <= io_imem_resp_bits_rdata; // @[InstFetch.scala 97:15]
    end
    if (reset) begin // @[InstFetch.scala 58:26]
      valid_out <= 1'h0; // @[InstFetch.scala 58:26]
    end else if (io_imem_resp_bits_rvalid) begin // @[InstFetch.scala 95:25]
      valid_out <= io_imem_resp_bits_rvalid; // @[InstFetch.scala 98:15]
    end
    if (reset) begin // @[InstFetch.scala 60:25]
      reg_pnpc <= 32'h0; // @[InstFetch.scala 60:25]
    end else if (~stall) begin // @[InstFetch.scala 87:15]
      reg_pnpc <= io_imem_req_bits_araddr; // @[InstFetch.scala 89:14]
    end
    if (reset) begin // @[InstFetch.scala 61:19]
      pc <= 32'h7ffffffc; // @[InstFetch.scala 61:19]
    end else if (~stall) begin // @[InstFetch.scala 87:15]
      if (io_jmp_packet_i_mis) begin // @[InstFetch.scala 84:18]
        pc <= io_jmp_packet_i_jmp_npc;
      end else if (use_reg_npc) begin // @[InstFetch.scala 84:69]
        pc <= reg_npc;
      end else begin
        pc <= _npc_s_T_1;
      end
    end
    if (reset) begin // @[InstFetch.scala 66:29]
      use_reg_info <= 1'h0; // @[InstFetch.scala 66:29]
    end else if (~stall) begin // @[InstFetch.scala 87:15]
      use_reg_info <= 1'h0; // @[InstFetch.scala 91:18]
    end else begin
      use_reg_info <= _GEN_0;
    end
    if (reset) begin // @[InstFetch.scala 77:28]
      use_reg_npc <= 1'h0; // @[InstFetch.scala 77:28]
    end else if (~stall) begin // @[InstFetch.scala 87:15]
      use_reg_npc <= 1'h0; // @[InstFetch.scala 90:17]
    end else begin
      use_reg_npc <= _GEN_1;
    end
    if (reset) begin // @[InstFetch.scala 78:26]
      reg_npc <= 32'h0; // @[InstFetch.scala 78:26]
    end else if (io_if_flush & stall) begin // @[InstFetch.scala 79:29]
      if (io_jmp_packet_i_mis) begin // @[InstFetch.scala 75:21]
        reg_npc <= io_jmp_packet_i_jmp_npc;
      end else begin
        reg_npc <= 32'h0;
      end
    end
    first_instr <= reset | _GEN_10; // @[InstFetch.scala 107:28 InstFetch.scala 107:28]
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  pc_out = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  inst_out = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  valid_out = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  reg_pnpc = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  pc = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  use_reg_info = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  use_reg_npc = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  reg_npc = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  first_instr = _RAND_8[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Decode(
  input         clock,
  input         reset,
  output        io_in_ready,
  input  [31:0] io_in_bits_pc,
  input  [31:0] io_in_bits_inst,
  input         io_in_bits_inst_valid,
  input         io_out_ready,
  output        io_out_valid,
  output        io_out_bits_valid,
  output [31:0] io_out_bits_pc,
  output [31:0] io_out_bits_inst,
  output [3:0]  io_out_bits_alu_code,
  output [3:0]  io_out_bits_jmp_code,
  output [1:0]  io_out_bits_mem_code,
  output [1:0]  io_out_bits_mem_size,
  output [3:0]  io_out_bits_mdu_code,
  output        io_out_bits_w_type,
  output [2:0]  io_out_bits_rs1_src,
  output [2:0]  io_out_bits_rs2_src,
  output [4:0]  io_out_bits_rd_addr,
  output        io_out_bits_rd_en,
  output [31:0] io_out_bits_imm,
  input         io_id_flush,
  output        io_ren1,
  output [4:0]  io_raddr1,
  output        io_ren2,
  output [4:0]  io_raddr2,
  output        io_is_ebreak,
  input  [63:0] io_rs1_data_i,
  input  [63:0] io_rs2_data_i,
  output [63:0] io_rs1_data_o,
  output [63:0] io_rs2_data_o,
  input  [31:0] io_p_npc_i,
  output [31:0] io_p_npc_o,
  input         io_decode_rf_stall_i
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [31:0] _RAND_6;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] pc; // @[Decode.scala 27:22]
  reg [31:0] inst; // @[Decode.scala 28:22]
  reg  inst_valid; // @[Decode.scala 29:27]
  reg [31:0] reg_pnpc; // @[Decode.scala 30:25]
  reg [63:0] rs1_reg; // @[Decode.scala 32:25]
  reg [63:0] rs2_reg; // @[Decode.scala 33:25]
  wire [31:0] _ctrl_T = inst & 32'h7f; // @[Lookup.scala 31:38]
  wire  _ctrl_T_1 = 32'h37 == _ctrl_T; // @[Lookup.scala 31:38]
  wire  _ctrl_T_3 = 32'h17 == _ctrl_T; // @[Lookup.scala 31:38]
  wire  _ctrl_T_5 = 32'h6f == _ctrl_T; // @[Lookup.scala 31:38]
  wire [31:0] _ctrl_T_6 = inst & 32'h707f; // @[Lookup.scala 31:38]
  wire  _ctrl_T_7 = 32'h67 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_9 = 32'h63 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_11 = 32'h1063 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_13 = 32'h4063 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_15 = 32'h5063 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_17 = 32'h6063 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_19 = 32'h7063 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_21 = 32'h3 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_23 = 32'h1003 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_25 = 32'h2003 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_27 = 32'h4003 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_29 = 32'h5003 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_31 = 32'h23 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_33 = 32'h1023 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_35 = 32'h2023 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_37 = 32'h13 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_39 = 32'h2013 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_41 = 32'h3013 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_43 = 32'h4013 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_45 = 32'h6013 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_47 = 32'h7013 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire [31:0] _ctrl_T_48 = inst & 32'hfc00707f; // @[Lookup.scala 31:38]
  wire  _ctrl_T_49 = 32'h1013 == _ctrl_T_48; // @[Lookup.scala 31:38]
  wire  _ctrl_T_51 = 32'h5013 == _ctrl_T_48; // @[Lookup.scala 31:38]
  wire  _ctrl_T_53 = 32'h40005013 == _ctrl_T_48; // @[Lookup.scala 31:38]
  wire [31:0] _ctrl_T_54 = inst & 32'hfe00707f; // @[Lookup.scala 31:38]
  wire  _ctrl_T_55 = 32'h33 == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_57 = 32'h40000033 == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_59 = 32'h1033 == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_61 = 32'h2033 == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_63 = 32'h3033 == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_65 = 32'h4033 == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_67 = 32'h5033 == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_69 = 32'h40005033 == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_71 = 32'h6033 == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_73 = 32'h7033 == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_75 = 32'h73 == inst; // @[Lookup.scala 31:38]
  wire  _ctrl_T_77 = 32'h100073 == inst; // @[Lookup.scala 31:38]
  wire  _ctrl_T_79 = 32'h30200073 == inst; // @[Lookup.scala 31:38]
  wire  _ctrl_T_81 = 32'h6003 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_83 = 32'h3003 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_85 = 32'h3023 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_87 = 32'h1b == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_89 = 32'h101b == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_91 = 32'h501b == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_93 = 32'h4000501b == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_95 = 32'h3b == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_97 = 32'h4000003b == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_99 = 32'h103b == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_101 = 32'h503b == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_103 = 32'h4000503b == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_105 = 32'h2000033 == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_107 = 32'h2001033 == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_109 = 32'h2002033 == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_111 = 32'h2003033 == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_113 = 32'h2004033 == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_115 = 32'h2005033 == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_117 = 32'h2006033 == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_119 = 32'h2007033 == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_121 = 32'h200003b == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_123 = 32'h200403b == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_125 = 32'h200503b == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_127 = 32'h200603b == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_129 = 32'h200703b == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_131 = 32'h1073 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_133 = 32'h2073 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_135 = 32'h3073 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_137 = 32'h5073 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_139 = 32'h6073 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_141 = 32'h7073 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire [3:0] _ctrl_T_311 = _ctrl_T_103 ? 4'ha : 4'h0; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_312 = _ctrl_T_101 ? 4'h9 : _ctrl_T_311; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_313 = _ctrl_T_99 ? 4'h8 : _ctrl_T_312; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_314 = _ctrl_T_97 ? 4'h2 : _ctrl_T_313; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_315 = _ctrl_T_95 ? 4'h1 : _ctrl_T_314; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_316 = _ctrl_T_93 ? 4'ha : _ctrl_T_315; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_317 = _ctrl_T_91 ? 4'h9 : _ctrl_T_316; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_318 = _ctrl_T_89 ? 4'h8 : _ctrl_T_317; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_319 = _ctrl_T_87 ? 4'h1 : _ctrl_T_318; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_320 = _ctrl_T_85 ? 4'h1 : _ctrl_T_319; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_321 = _ctrl_T_83 ? 4'h1 : _ctrl_T_320; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_322 = _ctrl_T_81 ? 4'h1 : _ctrl_T_321; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_323 = _ctrl_T_79 ? 4'h0 : _ctrl_T_322; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_324 = _ctrl_T_77 ? 4'h0 : _ctrl_T_323; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_325 = _ctrl_T_75 ? 4'h0 : _ctrl_T_324; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_326 = _ctrl_T_73 ? 4'h7 : _ctrl_T_325; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_327 = _ctrl_T_71 ? 4'h6 : _ctrl_T_326; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_328 = _ctrl_T_69 ? 4'ha : _ctrl_T_327; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_329 = _ctrl_T_67 ? 4'h9 : _ctrl_T_328; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_330 = _ctrl_T_65 ? 4'h5 : _ctrl_T_329; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_331 = _ctrl_T_63 ? 4'h4 : _ctrl_T_330; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_332 = _ctrl_T_61 ? 4'h3 : _ctrl_T_331; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_333 = _ctrl_T_59 ? 4'h8 : _ctrl_T_332; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_334 = _ctrl_T_57 ? 4'h2 : _ctrl_T_333; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_335 = _ctrl_T_55 ? 4'h1 : _ctrl_T_334; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_336 = _ctrl_T_53 ? 4'ha : _ctrl_T_335; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_337 = _ctrl_T_51 ? 4'h9 : _ctrl_T_336; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_338 = _ctrl_T_49 ? 4'h8 : _ctrl_T_337; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_339 = _ctrl_T_47 ? 4'h7 : _ctrl_T_338; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_340 = _ctrl_T_45 ? 4'h6 : _ctrl_T_339; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_341 = _ctrl_T_43 ? 4'h5 : _ctrl_T_340; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_342 = _ctrl_T_41 ? 4'h4 : _ctrl_T_341; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_343 = _ctrl_T_39 ? 4'h3 : _ctrl_T_342; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_344 = _ctrl_T_37 ? 4'h1 : _ctrl_T_343; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_345 = _ctrl_T_35 ? 4'h1 : _ctrl_T_344; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_346 = _ctrl_T_33 ? 4'h1 : _ctrl_T_345; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_347 = _ctrl_T_31 ? 4'h1 : _ctrl_T_346; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_348 = _ctrl_T_29 ? 4'h1 : _ctrl_T_347; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_349 = _ctrl_T_27 ? 4'h1 : _ctrl_T_348; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_350 = _ctrl_T_25 ? 4'h1 : _ctrl_T_349; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_351 = _ctrl_T_23 ? 4'h1 : _ctrl_T_350; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_352 = _ctrl_T_21 ? 4'h1 : _ctrl_T_351; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_353 = _ctrl_T_19 ? 4'h0 : _ctrl_T_352; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_354 = _ctrl_T_17 ? 4'h0 : _ctrl_T_353; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_355 = _ctrl_T_15 ? 4'h0 : _ctrl_T_354; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_356 = _ctrl_T_13 ? 4'h0 : _ctrl_T_355; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_357 = _ctrl_T_11 ? 4'h0 : _ctrl_T_356; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_358 = _ctrl_T_9 ? 4'h0 : _ctrl_T_357; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_359 = _ctrl_T_7 ? 4'h0 : _ctrl_T_358; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_360 = _ctrl_T_5 ? 4'h0 : _ctrl_T_359; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_361 = _ctrl_T_3 ? 4'h1 : _ctrl_T_360; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_425 = _ctrl_T_19 ? 4'h8 : 4'h0; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_426 = _ctrl_T_17 ? 4'h7 : _ctrl_T_425; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_427 = _ctrl_T_15 ? 4'h6 : _ctrl_T_426; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_428 = _ctrl_T_13 ? 4'h5 : _ctrl_T_427; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_429 = _ctrl_T_11 ? 4'h4 : _ctrl_T_428; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_430 = _ctrl_T_9 ? 4'h3 : _ctrl_T_429; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_431 = _ctrl_T_7 ? 4'h2 : _ctrl_T_430; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_432 = _ctrl_T_5 ? 4'h1 : _ctrl_T_431; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_433 = _ctrl_T_3 ? 4'h0 : _ctrl_T_432; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_464 = _ctrl_T_85 ? 2'h3 : 2'h0; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_465 = _ctrl_T_83 ? 2'h2 : _ctrl_T_464; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_466 = _ctrl_T_81 ? 2'h2 : _ctrl_T_465; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_467 = _ctrl_T_79 ? 2'h0 : _ctrl_T_466; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_468 = _ctrl_T_77 ? 2'h0 : _ctrl_T_467; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_469 = _ctrl_T_75 ? 2'h0 : _ctrl_T_468; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_470 = _ctrl_T_73 ? 2'h0 : _ctrl_T_469; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_471 = _ctrl_T_71 ? 2'h0 : _ctrl_T_470; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_472 = _ctrl_T_69 ? 2'h0 : _ctrl_T_471; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_473 = _ctrl_T_67 ? 2'h0 : _ctrl_T_472; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_474 = _ctrl_T_65 ? 2'h0 : _ctrl_T_473; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_475 = _ctrl_T_63 ? 2'h0 : _ctrl_T_474; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_476 = _ctrl_T_61 ? 2'h0 : _ctrl_T_475; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_477 = _ctrl_T_59 ? 2'h0 : _ctrl_T_476; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_478 = _ctrl_T_57 ? 2'h0 : _ctrl_T_477; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_479 = _ctrl_T_55 ? 2'h0 : _ctrl_T_478; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_480 = _ctrl_T_53 ? 2'h0 : _ctrl_T_479; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_481 = _ctrl_T_51 ? 2'h0 : _ctrl_T_480; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_482 = _ctrl_T_49 ? 2'h0 : _ctrl_T_481; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_483 = _ctrl_T_47 ? 2'h0 : _ctrl_T_482; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_484 = _ctrl_T_45 ? 2'h0 : _ctrl_T_483; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_485 = _ctrl_T_43 ? 2'h0 : _ctrl_T_484; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_486 = _ctrl_T_41 ? 2'h0 : _ctrl_T_485; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_487 = _ctrl_T_39 ? 2'h0 : _ctrl_T_486; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_488 = _ctrl_T_37 ? 2'h0 : _ctrl_T_487; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_489 = _ctrl_T_35 ? 2'h3 : _ctrl_T_488; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_490 = _ctrl_T_33 ? 2'h3 : _ctrl_T_489; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_491 = _ctrl_T_31 ? 2'h3 : _ctrl_T_490; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_492 = _ctrl_T_29 ? 2'h2 : _ctrl_T_491; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_493 = _ctrl_T_27 ? 2'h2 : _ctrl_T_492; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_494 = _ctrl_T_25 ? 2'h1 : _ctrl_T_493; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_495 = _ctrl_T_23 ? 2'h1 : _ctrl_T_494; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_496 = _ctrl_T_21 ? 2'h1 : _ctrl_T_495; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_497 = _ctrl_T_19 ? 2'h0 : _ctrl_T_496; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_498 = _ctrl_T_17 ? 2'h0 : _ctrl_T_497; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_499 = _ctrl_T_15 ? 2'h0 : _ctrl_T_498; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_500 = _ctrl_T_13 ? 2'h0 : _ctrl_T_499; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_501 = _ctrl_T_11 ? 2'h0 : _ctrl_T_500; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_502 = _ctrl_T_9 ? 2'h0 : _ctrl_T_501; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_503 = _ctrl_T_7 ? 2'h0 : _ctrl_T_502; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_504 = _ctrl_T_5 ? 2'h0 : _ctrl_T_503; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_505 = _ctrl_T_3 ? 2'h0 : _ctrl_T_504; // @[Lookup.scala 33:37]
  wire [1:0] ctrl_4 = _ctrl_T_1 ? 2'h0 : _ctrl_T_505; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_537 = _ctrl_T_83 ? 2'h3 : _ctrl_T_464; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_538 = _ctrl_T_81 ? 2'h2 : _ctrl_T_537; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_539 = _ctrl_T_79 ? 2'h0 : _ctrl_T_538; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_540 = _ctrl_T_77 ? 2'h0 : _ctrl_T_539; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_541 = _ctrl_T_75 ? 2'h0 : _ctrl_T_540; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_542 = _ctrl_T_73 ? 2'h0 : _ctrl_T_541; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_543 = _ctrl_T_71 ? 2'h0 : _ctrl_T_542; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_544 = _ctrl_T_69 ? 2'h0 : _ctrl_T_543; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_545 = _ctrl_T_67 ? 2'h0 : _ctrl_T_544; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_546 = _ctrl_T_65 ? 2'h0 : _ctrl_T_545; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_547 = _ctrl_T_63 ? 2'h0 : _ctrl_T_546; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_548 = _ctrl_T_61 ? 2'h0 : _ctrl_T_547; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_549 = _ctrl_T_59 ? 2'h0 : _ctrl_T_548; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_550 = _ctrl_T_57 ? 2'h0 : _ctrl_T_549; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_551 = _ctrl_T_55 ? 2'h0 : _ctrl_T_550; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_552 = _ctrl_T_53 ? 2'h0 : _ctrl_T_551; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_553 = _ctrl_T_51 ? 2'h0 : _ctrl_T_552; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_554 = _ctrl_T_49 ? 2'h0 : _ctrl_T_553; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_555 = _ctrl_T_47 ? 2'h0 : _ctrl_T_554; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_556 = _ctrl_T_45 ? 2'h0 : _ctrl_T_555; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_557 = _ctrl_T_43 ? 2'h0 : _ctrl_T_556; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_558 = _ctrl_T_41 ? 2'h0 : _ctrl_T_557; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_559 = _ctrl_T_39 ? 2'h0 : _ctrl_T_558; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_560 = _ctrl_T_37 ? 2'h0 : _ctrl_T_559; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_561 = _ctrl_T_35 ? 2'h2 : _ctrl_T_560; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_562 = _ctrl_T_33 ? 2'h1 : _ctrl_T_561; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_563 = _ctrl_T_31 ? 2'h0 : _ctrl_T_562; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_564 = _ctrl_T_29 ? 2'h1 : _ctrl_T_563; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_565 = _ctrl_T_27 ? 2'h0 : _ctrl_T_564; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_566 = _ctrl_T_25 ? 2'h2 : _ctrl_T_565; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_567 = _ctrl_T_23 ? 2'h1 : _ctrl_T_566; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_568 = _ctrl_T_21 ? 2'h0 : _ctrl_T_567; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_569 = _ctrl_T_19 ? 2'h0 : _ctrl_T_568; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_570 = _ctrl_T_17 ? 2'h0 : _ctrl_T_569; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_571 = _ctrl_T_15 ? 2'h0 : _ctrl_T_570; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_572 = _ctrl_T_13 ? 2'h0 : _ctrl_T_571; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_573 = _ctrl_T_11 ? 2'h0 : _ctrl_T_572; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_574 = _ctrl_T_9 ? 2'h0 : _ctrl_T_573; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_575 = _ctrl_T_7 ? 2'h0 : _ctrl_T_574; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_576 = _ctrl_T_5 ? 2'h0 : _ctrl_T_575; // @[Lookup.scala 33:37]
  wire [1:0] _ctrl_T_577 = _ctrl_T_3 ? 2'h0 : _ctrl_T_576; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_658 = _ctrl_T_129 ? 4'hd : 4'h0; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_659 = _ctrl_T_127 ? 4'hc : _ctrl_T_658; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_660 = _ctrl_T_125 ? 4'hb : _ctrl_T_659; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_661 = _ctrl_T_123 ? 4'ha : _ctrl_T_660; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_662 = _ctrl_T_121 ? 4'h9 : _ctrl_T_661; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_663 = _ctrl_T_119 ? 4'h8 : _ctrl_T_662; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_664 = _ctrl_T_117 ? 4'h7 : _ctrl_T_663; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_665 = _ctrl_T_115 ? 4'h6 : _ctrl_T_664; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_666 = _ctrl_T_113 ? 4'h5 : _ctrl_T_665; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_667 = _ctrl_T_111 ? 4'h4 : _ctrl_T_666; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_668 = _ctrl_T_109 ? 4'h3 : _ctrl_T_667; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_669 = _ctrl_T_107 ? 4'h2 : _ctrl_T_668; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_670 = _ctrl_T_105 ? 4'h1 : _ctrl_T_669; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_671 = _ctrl_T_103 ? 4'h0 : _ctrl_T_670; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_672 = _ctrl_T_101 ? 4'h0 : _ctrl_T_671; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_673 = _ctrl_T_99 ? 4'h0 : _ctrl_T_672; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_674 = _ctrl_T_97 ? 4'h0 : _ctrl_T_673; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_675 = _ctrl_T_95 ? 4'h0 : _ctrl_T_674; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_676 = _ctrl_T_93 ? 4'h0 : _ctrl_T_675; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_677 = _ctrl_T_91 ? 4'h0 : _ctrl_T_676; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_678 = _ctrl_T_89 ? 4'h0 : _ctrl_T_677; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_679 = _ctrl_T_87 ? 4'h0 : _ctrl_T_678; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_680 = _ctrl_T_85 ? 4'h0 : _ctrl_T_679; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_681 = _ctrl_T_83 ? 4'h0 : _ctrl_T_680; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_682 = _ctrl_T_81 ? 4'h0 : _ctrl_T_681; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_683 = _ctrl_T_79 ? 4'h0 : _ctrl_T_682; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_684 = _ctrl_T_77 ? 4'h0 : _ctrl_T_683; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_685 = _ctrl_T_75 ? 4'h0 : _ctrl_T_684; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_686 = _ctrl_T_73 ? 4'h0 : _ctrl_T_685; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_687 = _ctrl_T_71 ? 4'h0 : _ctrl_T_686; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_688 = _ctrl_T_69 ? 4'h0 : _ctrl_T_687; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_689 = _ctrl_T_67 ? 4'h0 : _ctrl_T_688; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_690 = _ctrl_T_65 ? 4'h0 : _ctrl_T_689; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_691 = _ctrl_T_63 ? 4'h0 : _ctrl_T_690; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_692 = _ctrl_T_61 ? 4'h0 : _ctrl_T_691; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_693 = _ctrl_T_59 ? 4'h0 : _ctrl_T_692; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_694 = _ctrl_T_57 ? 4'h0 : _ctrl_T_693; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_695 = _ctrl_T_55 ? 4'h0 : _ctrl_T_694; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_696 = _ctrl_T_53 ? 4'h0 : _ctrl_T_695; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_697 = _ctrl_T_51 ? 4'h0 : _ctrl_T_696; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_698 = _ctrl_T_49 ? 4'h0 : _ctrl_T_697; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_699 = _ctrl_T_47 ? 4'h0 : _ctrl_T_698; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_700 = _ctrl_T_45 ? 4'h0 : _ctrl_T_699; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_701 = _ctrl_T_43 ? 4'h0 : _ctrl_T_700; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_702 = _ctrl_T_41 ? 4'h0 : _ctrl_T_701; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_703 = _ctrl_T_39 ? 4'h0 : _ctrl_T_702; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_704 = _ctrl_T_37 ? 4'h0 : _ctrl_T_703; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_705 = _ctrl_T_35 ? 4'h0 : _ctrl_T_704; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_706 = _ctrl_T_33 ? 4'h0 : _ctrl_T_705; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_707 = _ctrl_T_31 ? 4'h0 : _ctrl_T_706; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_708 = _ctrl_T_29 ? 4'h0 : _ctrl_T_707; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_709 = _ctrl_T_27 ? 4'h0 : _ctrl_T_708; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_710 = _ctrl_T_25 ? 4'h0 : _ctrl_T_709; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_711 = _ctrl_T_23 ? 4'h0 : _ctrl_T_710; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_712 = _ctrl_T_21 ? 4'h0 : _ctrl_T_711; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_713 = _ctrl_T_19 ? 4'h0 : _ctrl_T_712; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_714 = _ctrl_T_17 ? 4'h0 : _ctrl_T_713; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_715 = _ctrl_T_15 ? 4'h0 : _ctrl_T_714; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_716 = _ctrl_T_13 ? 4'h0 : _ctrl_T_715; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_717 = _ctrl_T_11 ? 4'h0 : _ctrl_T_716; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_718 = _ctrl_T_9 ? 4'h0 : _ctrl_T_717; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_719 = _ctrl_T_7 ? 4'h0 : _ctrl_T_718; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_720 = _ctrl_T_5 ? 4'h0 : _ctrl_T_719; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_721 = _ctrl_T_3 ? 4'h0 : _ctrl_T_720; // @[Lookup.scala 33:37]
  wire  _ctrl_T_735 = _ctrl_T_119 ? 1'h0 : _ctrl_T_121 | (_ctrl_T_123 | (_ctrl_T_125 | (_ctrl_T_127 | _ctrl_T_129))); // @[Lookup.scala 33:37]
  wire  _ctrl_T_736 = _ctrl_T_117 ? 1'h0 : _ctrl_T_735; // @[Lookup.scala 33:37]
  wire  _ctrl_T_737 = _ctrl_T_115 ? 1'h0 : _ctrl_T_736; // @[Lookup.scala 33:37]
  wire  _ctrl_T_738 = _ctrl_T_113 ? 1'h0 : _ctrl_T_737; // @[Lookup.scala 33:37]
  wire  _ctrl_T_739 = _ctrl_T_111 ? 1'h0 : _ctrl_T_738; // @[Lookup.scala 33:37]
  wire  _ctrl_T_740 = _ctrl_T_109 ? 1'h0 : _ctrl_T_739; // @[Lookup.scala 33:37]
  wire  _ctrl_T_741 = _ctrl_T_107 ? 1'h0 : _ctrl_T_740; // @[Lookup.scala 33:37]
  wire  _ctrl_T_742 = _ctrl_T_105 ? 1'h0 : _ctrl_T_741; // @[Lookup.scala 33:37]
  wire  _ctrl_T_752 = _ctrl_T_85 ? 1'h0 : _ctrl_T_87 | (_ctrl_T_89 | (_ctrl_T_91 | (_ctrl_T_93 | (_ctrl_T_95 | (
    _ctrl_T_97 | (_ctrl_T_99 | (_ctrl_T_101 | (_ctrl_T_103 | _ctrl_T_742)))))))); // @[Lookup.scala 33:37]
  wire  _ctrl_T_753 = _ctrl_T_83 ? 1'h0 : _ctrl_T_752; // @[Lookup.scala 33:37]
  wire  _ctrl_T_754 = _ctrl_T_81 ? 1'h0 : _ctrl_T_753; // @[Lookup.scala 33:37]
  wire  _ctrl_T_755 = _ctrl_T_79 ? 1'h0 : _ctrl_T_754; // @[Lookup.scala 33:37]
  wire  _ctrl_T_756 = _ctrl_T_77 ? 1'h0 : _ctrl_T_755; // @[Lookup.scala 33:37]
  wire  _ctrl_T_757 = _ctrl_T_75 ? 1'h0 : _ctrl_T_756; // @[Lookup.scala 33:37]
  wire  _ctrl_T_758 = _ctrl_T_73 ? 1'h0 : _ctrl_T_757; // @[Lookup.scala 33:37]
  wire  _ctrl_T_759 = _ctrl_T_71 ? 1'h0 : _ctrl_T_758; // @[Lookup.scala 33:37]
  wire  _ctrl_T_760 = _ctrl_T_69 ? 1'h0 : _ctrl_T_759; // @[Lookup.scala 33:37]
  wire  _ctrl_T_761 = _ctrl_T_67 ? 1'h0 : _ctrl_T_760; // @[Lookup.scala 33:37]
  wire  _ctrl_T_762 = _ctrl_T_65 ? 1'h0 : _ctrl_T_761; // @[Lookup.scala 33:37]
  wire  _ctrl_T_763 = _ctrl_T_63 ? 1'h0 : _ctrl_T_762; // @[Lookup.scala 33:37]
  wire  _ctrl_T_764 = _ctrl_T_61 ? 1'h0 : _ctrl_T_763; // @[Lookup.scala 33:37]
  wire  _ctrl_T_765 = _ctrl_T_59 ? 1'h0 : _ctrl_T_764; // @[Lookup.scala 33:37]
  wire  _ctrl_T_766 = _ctrl_T_57 ? 1'h0 : _ctrl_T_765; // @[Lookup.scala 33:37]
  wire  _ctrl_T_767 = _ctrl_T_55 ? 1'h0 : _ctrl_T_766; // @[Lookup.scala 33:37]
  wire  _ctrl_T_768 = _ctrl_T_53 ? 1'h0 : _ctrl_T_767; // @[Lookup.scala 33:37]
  wire  _ctrl_T_769 = _ctrl_T_51 ? 1'h0 : _ctrl_T_768; // @[Lookup.scala 33:37]
  wire  _ctrl_T_770 = _ctrl_T_49 ? 1'h0 : _ctrl_T_769; // @[Lookup.scala 33:37]
  wire  _ctrl_T_771 = _ctrl_T_47 ? 1'h0 : _ctrl_T_770; // @[Lookup.scala 33:37]
  wire  _ctrl_T_772 = _ctrl_T_45 ? 1'h0 : _ctrl_T_771; // @[Lookup.scala 33:37]
  wire  _ctrl_T_773 = _ctrl_T_43 ? 1'h0 : _ctrl_T_772; // @[Lookup.scala 33:37]
  wire  _ctrl_T_774 = _ctrl_T_41 ? 1'h0 : _ctrl_T_773; // @[Lookup.scala 33:37]
  wire  _ctrl_T_775 = _ctrl_T_39 ? 1'h0 : _ctrl_T_774; // @[Lookup.scala 33:37]
  wire  _ctrl_T_776 = _ctrl_T_37 ? 1'h0 : _ctrl_T_775; // @[Lookup.scala 33:37]
  wire  _ctrl_T_777 = _ctrl_T_35 ? 1'h0 : _ctrl_T_776; // @[Lookup.scala 33:37]
  wire  _ctrl_T_778 = _ctrl_T_33 ? 1'h0 : _ctrl_T_777; // @[Lookup.scala 33:37]
  wire  _ctrl_T_779 = _ctrl_T_31 ? 1'h0 : _ctrl_T_778; // @[Lookup.scala 33:37]
  wire  _ctrl_T_780 = _ctrl_T_29 ? 1'h0 : _ctrl_T_779; // @[Lookup.scala 33:37]
  wire  _ctrl_T_781 = _ctrl_T_27 ? 1'h0 : _ctrl_T_780; // @[Lookup.scala 33:37]
  wire  _ctrl_T_782 = _ctrl_T_25 ? 1'h0 : _ctrl_T_781; // @[Lookup.scala 33:37]
  wire  _ctrl_T_783 = _ctrl_T_23 ? 1'h0 : _ctrl_T_782; // @[Lookup.scala 33:37]
  wire  _ctrl_T_784 = _ctrl_T_21 ? 1'h0 : _ctrl_T_783; // @[Lookup.scala 33:37]
  wire  _ctrl_T_785 = _ctrl_T_19 ? 1'h0 : _ctrl_T_784; // @[Lookup.scala 33:37]
  wire  _ctrl_T_786 = _ctrl_T_17 ? 1'h0 : _ctrl_T_785; // @[Lookup.scala 33:37]
  wire  _ctrl_T_787 = _ctrl_T_15 ? 1'h0 : _ctrl_T_786; // @[Lookup.scala 33:37]
  wire  _ctrl_T_788 = _ctrl_T_13 ? 1'h0 : _ctrl_T_787; // @[Lookup.scala 33:37]
  wire  _ctrl_T_789 = _ctrl_T_11 ? 1'h0 : _ctrl_T_788; // @[Lookup.scala 33:37]
  wire  _ctrl_T_790 = _ctrl_T_9 ? 1'h0 : _ctrl_T_789; // @[Lookup.scala 33:37]
  wire  _ctrl_T_791 = _ctrl_T_7 ? 1'h0 : _ctrl_T_790; // @[Lookup.scala 33:37]
  wire  _ctrl_T_792 = _ctrl_T_5 ? 1'h0 : _ctrl_T_791; // @[Lookup.scala 33:37]
  wire  _ctrl_T_793 = _ctrl_T_3 ? 1'h0 : _ctrl_T_792; // @[Lookup.scala 33:37]
  wire  c0_0 = _ctrl_T_1 ? 1'h0 : _ctrl_T_793; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_796 = _ctrl_T_141 ? 3'h2 : 3'h0; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_797 = _ctrl_T_139 ? 3'h2 : _ctrl_T_796; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_798 = _ctrl_T_137 ? 3'h2 : _ctrl_T_797; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_799 = _ctrl_T_135 ? 3'h1 : _ctrl_T_798; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_800 = _ctrl_T_133 ? 3'h1 : _ctrl_T_799; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_801 = _ctrl_T_131 ? 3'h1 : _ctrl_T_800; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_802 = _ctrl_T_129 ? 3'h1 : _ctrl_T_801; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_803 = _ctrl_T_127 ? 3'h1 : _ctrl_T_802; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_804 = _ctrl_T_125 ? 3'h1 : _ctrl_T_803; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_805 = _ctrl_T_123 ? 3'h1 : _ctrl_T_804; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_806 = _ctrl_T_121 ? 3'h1 : _ctrl_T_805; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_807 = _ctrl_T_119 ? 3'h1 : _ctrl_T_806; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_808 = _ctrl_T_117 ? 3'h1 : _ctrl_T_807; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_809 = _ctrl_T_115 ? 3'h1 : _ctrl_T_808; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_810 = _ctrl_T_113 ? 3'h1 : _ctrl_T_809; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_811 = _ctrl_T_111 ? 3'h1 : _ctrl_T_810; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_812 = _ctrl_T_109 ? 3'h1 : _ctrl_T_811; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_813 = _ctrl_T_107 ? 3'h1 : _ctrl_T_812; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_814 = _ctrl_T_105 ? 3'h1 : _ctrl_T_813; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_815 = _ctrl_T_103 ? 3'h1 : _ctrl_T_814; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_816 = _ctrl_T_101 ? 3'h1 : _ctrl_T_815; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_817 = _ctrl_T_99 ? 3'h1 : _ctrl_T_816; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_818 = _ctrl_T_97 ? 3'h1 : _ctrl_T_817; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_819 = _ctrl_T_95 ? 3'h1 : _ctrl_T_818; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_820 = _ctrl_T_93 ? 3'h1 : _ctrl_T_819; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_821 = _ctrl_T_91 ? 3'h1 : _ctrl_T_820; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_822 = _ctrl_T_89 ? 3'h1 : _ctrl_T_821; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_823 = _ctrl_T_87 ? 3'h1 : _ctrl_T_822; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_824 = _ctrl_T_85 ? 3'h1 : _ctrl_T_823; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_825 = _ctrl_T_83 ? 3'h1 : _ctrl_T_824; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_826 = _ctrl_T_81 ? 3'h1 : _ctrl_T_825; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_827 = _ctrl_T_79 ? 3'h0 : _ctrl_T_826; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_828 = _ctrl_T_77 ? 3'h0 : _ctrl_T_827; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_829 = _ctrl_T_75 ? 3'h0 : _ctrl_T_828; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_830 = _ctrl_T_73 ? 3'h1 : _ctrl_T_829; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_831 = _ctrl_T_71 ? 3'h1 : _ctrl_T_830; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_832 = _ctrl_T_69 ? 3'h1 : _ctrl_T_831; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_833 = _ctrl_T_67 ? 3'h1 : _ctrl_T_832; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_834 = _ctrl_T_65 ? 3'h1 : _ctrl_T_833; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_835 = _ctrl_T_63 ? 3'h1 : _ctrl_T_834; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_836 = _ctrl_T_61 ? 3'h1 : _ctrl_T_835; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_837 = _ctrl_T_59 ? 3'h1 : _ctrl_T_836; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_838 = _ctrl_T_57 ? 3'h1 : _ctrl_T_837; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_839 = _ctrl_T_55 ? 3'h1 : _ctrl_T_838; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_840 = _ctrl_T_53 ? 3'h1 : _ctrl_T_839; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_841 = _ctrl_T_51 ? 3'h1 : _ctrl_T_840; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_842 = _ctrl_T_49 ? 3'h1 : _ctrl_T_841; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_843 = _ctrl_T_47 ? 3'h1 : _ctrl_T_842; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_844 = _ctrl_T_45 ? 3'h1 : _ctrl_T_843; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_845 = _ctrl_T_43 ? 3'h1 : _ctrl_T_844; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_846 = _ctrl_T_41 ? 3'h1 : _ctrl_T_845; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_847 = _ctrl_T_39 ? 3'h1 : _ctrl_T_846; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_848 = _ctrl_T_37 ? 3'h1 : _ctrl_T_847; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_849 = _ctrl_T_35 ? 3'h1 : _ctrl_T_848; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_850 = _ctrl_T_33 ? 3'h1 : _ctrl_T_849; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_851 = _ctrl_T_31 ? 3'h1 : _ctrl_T_850; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_852 = _ctrl_T_29 ? 3'h1 : _ctrl_T_851; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_853 = _ctrl_T_27 ? 3'h1 : _ctrl_T_852; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_854 = _ctrl_T_25 ? 3'h1 : _ctrl_T_853; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_855 = _ctrl_T_23 ? 3'h1 : _ctrl_T_854; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_856 = _ctrl_T_21 ? 3'h1 : _ctrl_T_855; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_857 = _ctrl_T_19 ? 3'h1 : _ctrl_T_856; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_858 = _ctrl_T_17 ? 3'h1 : _ctrl_T_857; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_859 = _ctrl_T_15 ? 3'h1 : _ctrl_T_858; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_860 = _ctrl_T_13 ? 3'h1 : _ctrl_T_859; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_861 = _ctrl_T_11 ? 3'h1 : _ctrl_T_860; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_862 = _ctrl_T_9 ? 3'h1 : _ctrl_T_861; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_863 = _ctrl_T_7 ? 3'h1 : _ctrl_T_862; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_864 = _ctrl_T_5 ? 3'h4 : _ctrl_T_863; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_865 = _ctrl_T_3 ? 3'h4 : _ctrl_T_864; // @[Lookup.scala 33:37]
  wire [2:0] c0_1 = _ctrl_T_1 ? 3'h3 : _ctrl_T_865; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_874 = _ctrl_T_129 ? 3'h1 : 3'h0; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_875 = _ctrl_T_127 ? 3'h1 : _ctrl_T_874; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_876 = _ctrl_T_125 ? 3'h1 : _ctrl_T_875; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_877 = _ctrl_T_123 ? 3'h1 : _ctrl_T_876; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_878 = _ctrl_T_121 ? 3'h1 : _ctrl_T_877; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_879 = _ctrl_T_119 ? 3'h1 : _ctrl_T_878; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_880 = _ctrl_T_117 ? 3'h1 : _ctrl_T_879; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_881 = _ctrl_T_115 ? 3'h1 : _ctrl_T_880; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_882 = _ctrl_T_113 ? 3'h1 : _ctrl_T_881; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_883 = _ctrl_T_111 ? 3'h1 : _ctrl_T_882; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_884 = _ctrl_T_109 ? 3'h1 : _ctrl_T_883; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_885 = _ctrl_T_107 ? 3'h1 : _ctrl_T_884; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_886 = _ctrl_T_105 ? 3'h1 : _ctrl_T_885; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_887 = _ctrl_T_103 ? 3'h1 : _ctrl_T_886; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_888 = _ctrl_T_101 ? 3'h1 : _ctrl_T_887; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_889 = _ctrl_T_99 ? 3'h1 : _ctrl_T_888; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_890 = _ctrl_T_97 ? 3'h1 : _ctrl_T_889; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_891 = _ctrl_T_95 ? 3'h1 : _ctrl_T_890; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_892 = _ctrl_T_93 ? 3'h2 : _ctrl_T_891; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_893 = _ctrl_T_91 ? 3'h2 : _ctrl_T_892; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_894 = _ctrl_T_89 ? 3'h2 : _ctrl_T_893; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_895 = _ctrl_T_87 ? 3'h2 : _ctrl_T_894; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_896 = _ctrl_T_85 ? 3'h2 : _ctrl_T_895; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_897 = _ctrl_T_83 ? 3'h2 : _ctrl_T_896; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_898 = _ctrl_T_81 ? 3'h2 : _ctrl_T_897; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_899 = _ctrl_T_79 ? 3'h0 : _ctrl_T_898; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_900 = _ctrl_T_77 ? 3'h0 : _ctrl_T_899; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_901 = _ctrl_T_75 ? 3'h0 : _ctrl_T_900; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_902 = _ctrl_T_73 ? 3'h1 : _ctrl_T_901; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_903 = _ctrl_T_71 ? 3'h1 : _ctrl_T_902; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_904 = _ctrl_T_69 ? 3'h1 : _ctrl_T_903; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_905 = _ctrl_T_67 ? 3'h1 : _ctrl_T_904; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_906 = _ctrl_T_65 ? 3'h1 : _ctrl_T_905; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_907 = _ctrl_T_63 ? 3'h1 : _ctrl_T_906; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_908 = _ctrl_T_61 ? 3'h1 : _ctrl_T_907; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_909 = _ctrl_T_59 ? 3'h1 : _ctrl_T_908; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_910 = _ctrl_T_57 ? 3'h1 : _ctrl_T_909; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_911 = _ctrl_T_55 ? 3'h1 : _ctrl_T_910; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_912 = _ctrl_T_53 ? 3'h2 : _ctrl_T_911; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_913 = _ctrl_T_51 ? 3'h2 : _ctrl_T_912; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_914 = _ctrl_T_49 ? 3'h2 : _ctrl_T_913; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_915 = _ctrl_T_47 ? 3'h2 : _ctrl_T_914; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_916 = _ctrl_T_45 ? 3'h2 : _ctrl_T_915; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_917 = _ctrl_T_43 ? 3'h2 : _ctrl_T_916; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_918 = _ctrl_T_41 ? 3'h2 : _ctrl_T_917; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_919 = _ctrl_T_39 ? 3'h2 : _ctrl_T_918; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_920 = _ctrl_T_37 ? 3'h2 : _ctrl_T_919; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_921 = _ctrl_T_35 ? 3'h2 : _ctrl_T_920; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_922 = _ctrl_T_33 ? 3'h2 : _ctrl_T_921; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_923 = _ctrl_T_31 ? 3'h2 : _ctrl_T_922; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_924 = _ctrl_T_29 ? 3'h2 : _ctrl_T_923; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_925 = _ctrl_T_27 ? 3'h2 : _ctrl_T_924; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_926 = _ctrl_T_25 ? 3'h2 : _ctrl_T_925; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_927 = _ctrl_T_23 ? 3'h2 : _ctrl_T_926; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_928 = _ctrl_T_21 ? 3'h2 : _ctrl_T_927; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_929 = _ctrl_T_19 ? 3'h1 : _ctrl_T_928; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_930 = _ctrl_T_17 ? 3'h1 : _ctrl_T_929; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_931 = _ctrl_T_15 ? 3'h1 : _ctrl_T_930; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_932 = _ctrl_T_13 ? 3'h1 : _ctrl_T_931; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_933 = _ctrl_T_11 ? 3'h1 : _ctrl_T_932; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_934 = _ctrl_T_9 ? 3'h1 : _ctrl_T_933; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_935 = _ctrl_T_7 ? 3'h1 : _ctrl_T_934; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_936 = _ctrl_T_5 ? 3'h2 : _ctrl_T_935; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_937 = _ctrl_T_3 ? 3'h2 : _ctrl_T_936; // @[Lookup.scala 33:37]
  wire [2:0] c0_2 = _ctrl_T_1 ? 3'h2 : _ctrl_T_937; // @[Lookup.scala 33:37]
  wire  _ctrl_T_968 = _ctrl_T_85 ? 1'h0 : _ctrl_T_87 | (_ctrl_T_89 | (_ctrl_T_91 | (_ctrl_T_93 | (_ctrl_T_95 | (
    _ctrl_T_97 | (_ctrl_T_99 | (_ctrl_T_101 | (_ctrl_T_103 | (_ctrl_T_105 | (_ctrl_T_107 | (_ctrl_T_109 | (_ctrl_T_111
     | (_ctrl_T_113 | (_ctrl_T_115 | (_ctrl_T_117 | (_ctrl_T_119 | (_ctrl_T_121 | (_ctrl_T_123 | (_ctrl_T_125 | (
    _ctrl_T_127 | (_ctrl_T_129 | (_ctrl_T_131 | (_ctrl_T_133 | (_ctrl_T_135 | (_ctrl_T_137 | (_ctrl_T_139 | _ctrl_T_141)
    ))))))))))))))))))))))))); // @[Lookup.scala 33:37]
  wire  _ctrl_T_971 = _ctrl_T_79 ? 1'h0 : _ctrl_T_81 | (_ctrl_T_83 | _ctrl_T_968); // @[Lookup.scala 33:37]
  wire  _ctrl_T_972 = _ctrl_T_77 ? 1'h0 : _ctrl_T_971; // @[Lookup.scala 33:37]
  wire  _ctrl_T_973 = _ctrl_T_75 ? 1'h0 : _ctrl_T_972; // @[Lookup.scala 33:37]
  wire  _ctrl_T_993 = _ctrl_T_35 ? 1'h0 : _ctrl_T_37 | (_ctrl_T_39 | (_ctrl_T_41 | (_ctrl_T_43 | (_ctrl_T_45 | (
    _ctrl_T_47 | (_ctrl_T_49 | (_ctrl_T_51 | (_ctrl_T_53 | (_ctrl_T_55 | (_ctrl_T_57 | (_ctrl_T_59 | (_ctrl_T_61 | (
    _ctrl_T_63 | (_ctrl_T_65 | (_ctrl_T_67 | (_ctrl_T_69 | (_ctrl_T_71 | (_ctrl_T_73 | _ctrl_T_973)))))))))))))))))); // @[Lookup.scala 33:37]
  wire  _ctrl_T_994 = _ctrl_T_33 ? 1'h0 : _ctrl_T_993; // @[Lookup.scala 33:37]
  wire  _ctrl_T_995 = _ctrl_T_31 ? 1'h0 : _ctrl_T_994; // @[Lookup.scala 33:37]
  wire  _ctrl_T_1001 = _ctrl_T_19 ? 1'h0 : _ctrl_T_21 | (_ctrl_T_23 | (_ctrl_T_25 | (_ctrl_T_27 | (_ctrl_T_29 |
    _ctrl_T_995)))); // @[Lookup.scala 33:37]
  wire  _ctrl_T_1002 = _ctrl_T_17 ? 1'h0 : _ctrl_T_1001; // @[Lookup.scala 33:37]
  wire  _ctrl_T_1003 = _ctrl_T_15 ? 1'h0 : _ctrl_T_1002; // @[Lookup.scala 33:37]
  wire  _ctrl_T_1004 = _ctrl_T_13 ? 1'h0 : _ctrl_T_1003; // @[Lookup.scala 33:37]
  wire  _ctrl_T_1005 = _ctrl_T_11 ? 1'h0 : _ctrl_T_1004; // @[Lookup.scala 33:37]
  wire  _ctrl_T_1006 = _ctrl_T_9 ? 1'h0 : _ctrl_T_1005; // @[Lookup.scala 33:37]
  wire  c0_3 = _ctrl_T_1 | (_ctrl_T_3 | (_ctrl_T_5 | (_ctrl_T_7 | _ctrl_T_1006))); // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1012 = _ctrl_T_141 ? 3'h7 : 3'h0; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1013 = _ctrl_T_139 ? 3'h7 : _ctrl_T_1012; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1014 = _ctrl_T_137 ? 3'h7 : _ctrl_T_1013; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1015 = _ctrl_T_135 ? 3'h0 : _ctrl_T_1014; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1016 = _ctrl_T_133 ? 3'h0 : _ctrl_T_1015; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1017 = _ctrl_T_131 ? 3'h0 : _ctrl_T_1016; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1018 = _ctrl_T_129 ? 3'h0 : _ctrl_T_1017; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1019 = _ctrl_T_127 ? 3'h0 : _ctrl_T_1018; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1020 = _ctrl_T_125 ? 3'h0 : _ctrl_T_1019; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1021 = _ctrl_T_123 ? 3'h0 : _ctrl_T_1020; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1022 = _ctrl_T_121 ? 3'h0 : _ctrl_T_1021; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1023 = _ctrl_T_119 ? 3'h0 : _ctrl_T_1022; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1024 = _ctrl_T_117 ? 3'h0 : _ctrl_T_1023; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1025 = _ctrl_T_115 ? 3'h0 : _ctrl_T_1024; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1026 = _ctrl_T_113 ? 3'h0 : _ctrl_T_1025; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1027 = _ctrl_T_111 ? 3'h0 : _ctrl_T_1026; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1028 = _ctrl_T_109 ? 3'h0 : _ctrl_T_1027; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1029 = _ctrl_T_107 ? 3'h0 : _ctrl_T_1028; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1030 = _ctrl_T_105 ? 3'h0 : _ctrl_T_1029; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1031 = _ctrl_T_103 ? 3'h0 : _ctrl_T_1030; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1032 = _ctrl_T_101 ? 3'h0 : _ctrl_T_1031; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1033 = _ctrl_T_99 ? 3'h0 : _ctrl_T_1032; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1034 = _ctrl_T_97 ? 3'h0 : _ctrl_T_1033; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1035 = _ctrl_T_95 ? 3'h0 : _ctrl_T_1034; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1036 = _ctrl_T_93 ? 3'h1 : _ctrl_T_1035; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1037 = _ctrl_T_91 ? 3'h1 : _ctrl_T_1036; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1038 = _ctrl_T_89 ? 3'h1 : _ctrl_T_1037; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1039 = _ctrl_T_87 ? 3'h1 : _ctrl_T_1038; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1040 = _ctrl_T_85 ? 3'h2 : _ctrl_T_1039; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1041 = _ctrl_T_83 ? 3'h1 : _ctrl_T_1040; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1042 = _ctrl_T_81 ? 3'h1 : _ctrl_T_1041; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1043 = _ctrl_T_79 ? 3'h0 : _ctrl_T_1042; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1044 = _ctrl_T_77 ? 3'h0 : _ctrl_T_1043; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1045 = _ctrl_T_75 ? 3'h0 : _ctrl_T_1044; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1046 = _ctrl_T_73 ? 3'h0 : _ctrl_T_1045; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1047 = _ctrl_T_71 ? 3'h0 : _ctrl_T_1046; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1048 = _ctrl_T_69 ? 3'h0 : _ctrl_T_1047; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1049 = _ctrl_T_67 ? 3'h0 : _ctrl_T_1048; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1050 = _ctrl_T_65 ? 3'h0 : _ctrl_T_1049; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1051 = _ctrl_T_63 ? 3'h0 : _ctrl_T_1050; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1052 = _ctrl_T_61 ? 3'h0 : _ctrl_T_1051; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1053 = _ctrl_T_59 ? 3'h0 : _ctrl_T_1052; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1054 = _ctrl_T_57 ? 3'h0 : _ctrl_T_1053; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1055 = _ctrl_T_55 ? 3'h0 : _ctrl_T_1054; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1056 = _ctrl_T_53 ? 3'h6 : _ctrl_T_1055; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1057 = _ctrl_T_51 ? 3'h6 : _ctrl_T_1056; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1058 = _ctrl_T_49 ? 3'h6 : _ctrl_T_1057; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1059 = _ctrl_T_47 ? 3'h1 : _ctrl_T_1058; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1060 = _ctrl_T_45 ? 3'h1 : _ctrl_T_1059; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1061 = _ctrl_T_43 ? 3'h1 : _ctrl_T_1060; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1062 = _ctrl_T_41 ? 3'h1 : _ctrl_T_1061; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1063 = _ctrl_T_39 ? 3'h1 : _ctrl_T_1062; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1064 = _ctrl_T_37 ? 3'h1 : _ctrl_T_1063; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1065 = _ctrl_T_35 ? 3'h2 : _ctrl_T_1064; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1066 = _ctrl_T_33 ? 3'h2 : _ctrl_T_1065; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1067 = _ctrl_T_31 ? 3'h2 : _ctrl_T_1066; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1068 = _ctrl_T_29 ? 3'h1 : _ctrl_T_1067; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1069 = _ctrl_T_27 ? 3'h1 : _ctrl_T_1068; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1070 = _ctrl_T_25 ? 3'h1 : _ctrl_T_1069; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1071 = _ctrl_T_23 ? 3'h1 : _ctrl_T_1070; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1072 = _ctrl_T_21 ? 3'h1 : _ctrl_T_1071; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1073 = _ctrl_T_19 ? 3'h3 : _ctrl_T_1072; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1074 = _ctrl_T_17 ? 3'h3 : _ctrl_T_1073; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1075 = _ctrl_T_15 ? 3'h3 : _ctrl_T_1074; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1076 = _ctrl_T_13 ? 3'h3 : _ctrl_T_1075; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1077 = _ctrl_T_11 ? 3'h3 : _ctrl_T_1076; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1078 = _ctrl_T_9 ? 3'h3 : _ctrl_T_1077; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1079 = _ctrl_T_7 ? 3'h1 : _ctrl_T_1078; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1080 = _ctrl_T_5 ? 3'h5 : _ctrl_T_1079; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_1081 = _ctrl_T_3 ? 3'h4 : _ctrl_T_1080; // @[Lookup.scala 33:37]
  wire [2:0] c0_4 = _ctrl_T_1 ? 3'h4 : _ctrl_T_1081; // @[Lookup.scala 33:37]
  wire  _stall_T = io_out_ready & io_out_valid; // @[Decoupled.scala 40:37]
  wire  stall = ~_stall_T | io_decode_rf_stall_i; // @[Decode.scala 136:30]
  reg  io_is_ebreak_REG; // @[Decode.scala 160:26]
  wire [20:0] imm_i_hi = inst[31] ? 21'h1fffff : 21'h0; // @[Bitwise.scala 72:12]
  wire [10:0] imm_i_lo = inst[30:20]; // @[Decode.scala 164:43]
  wire [31:0] imm_i = {imm_i_hi,imm_i_lo}; // @[Cat.scala 30:58]
  wire [5:0] imm_s_hi_lo = inst[30:25]; // @[Decode.scala 165:43]
  wire [31:0] imm_s = {imm_i_hi,imm_s_hi_lo,inst[11:7]}; // @[Cat.scala 30:58]
  wire [19:0] imm_b_hi_hi_hi = inst[31] ? 20'hfffff : 20'h0; // @[Bitwise.scala 72:12]
  wire  imm_b_hi_hi_lo = inst[7]; // @[Decode.scala 166:43]
  wire [3:0] imm_b_lo_hi = inst[11:8]; // @[Decode.scala 166:66]
  wire [31:0] imm_b = {imm_b_hi_hi_hi,imm_b_hi_hi_lo,imm_s_hi_lo,imm_b_lo_hi,1'h0}; // @[Cat.scala 30:58]
  wire [19:0] imm_u_hi = inst[31:12]; // @[Decode.scala 167:23]
  wire [31:0] imm_u = {imm_u_hi,12'h0}; // @[Cat.scala 30:58]
  wire [11:0] imm_j_hi_hi_hi = inst[31] ? 12'hfff : 12'h0; // @[Bitwise.scala 72:12]
  wire [7:0] imm_j_hi_hi_lo = inst[19:12]; // @[Decode.scala 168:43]
  wire  imm_j_hi_lo = inst[20]; // @[Decode.scala 168:57]
  wire [9:0] imm_j_lo_hi = inst[30:21]; // @[Decode.scala 168:67]
  wire [31:0] imm_j = {imm_j_hi_hi_hi,imm_j_hi_hi_lo,imm_j_hi_lo,imm_j_lo_hi,1'h0}; // @[Cat.scala 30:58]
  wire [31:0] _imm_shamt_T = {27'h0,inst[24:20]}; // @[Cat.scala 30:58]
  wire [5:0] imm_shamt_lo_1 = inst[25:20]; // @[Decode.scala 169:88]
  wire [31:0] _imm_shamt_T_1 = {26'h0,imm_shamt_lo_1}; // @[Cat.scala 30:58]
  wire [31:0] imm_shamt = c0_0 ? _imm_shamt_T : _imm_shamt_T_1; // @[Decode.scala 169:22]
  wire [31:0] imm_csr = {27'h0,inst[19:15]}; // @[Cat.scala 30:58]
  wire [31:0] _io_out_bits_imm_T_1 = 3'h1 == c0_4 ? imm_i : 32'h0; // @[Mux.scala 80:57]
  wire [31:0] _io_out_bits_imm_T_3 = 3'h2 == c0_4 ? imm_s : _io_out_bits_imm_T_1; // @[Mux.scala 80:57]
  wire [31:0] _io_out_bits_imm_T_5 = 3'h3 == c0_4 ? imm_b : _io_out_bits_imm_T_3; // @[Mux.scala 80:57]
  wire [31:0] _io_out_bits_imm_T_7 = 3'h4 == c0_4 ? imm_u : _io_out_bits_imm_T_5; // @[Mux.scala 80:57]
  wire [31:0] _io_out_bits_imm_T_9 = 3'h5 == c0_4 ? imm_j : _io_out_bits_imm_T_7; // @[Mux.scala 80:57]
  wire [31:0] _io_out_bits_imm_T_11 = 3'h6 == c0_4 ? imm_shamt : _io_out_bits_imm_T_9; // @[Mux.scala 80:57]
  assign io_in_ready = ~stall; // @[Decode.scala 182:18]
  assign io_out_valid = 1'h1; // @[Decode.scala 183:16]
  assign io_out_bits_valid = io_id_flush | stall ? 1'h0 : inst_valid; // @[Decode.scala 140:29]
  assign io_out_bits_pc = pc; // @[Decode.scala 138:23]
  assign io_out_bits_inst = inst; // @[Decode.scala 139:23]
  assign io_out_bits_alu_code = _ctrl_T_1 ? 4'h1 : _ctrl_T_361; // @[Lookup.scala 33:37]
  assign io_out_bits_jmp_code = _ctrl_T_1 ? 4'h0 : _ctrl_T_433; // @[Lookup.scala 33:37]
  assign io_out_bits_mem_code = _ctrl_T_1 ? 2'h0 : _ctrl_T_505; // @[Lookup.scala 33:37]
  assign io_out_bits_mem_size = _ctrl_T_1 ? 2'h0 : _ctrl_T_577; // @[Lookup.scala 33:37]
  assign io_out_bits_mdu_code = _ctrl_T_1 ? 4'h0 : _ctrl_T_721; // @[Lookup.scala 33:37]
  assign io_out_bits_w_type = _ctrl_T_1 ? 1'h0 : _ctrl_T_793; // @[Lookup.scala 33:37]
  assign io_out_bits_rs1_src = _ctrl_T_1 ? 3'h3 : _ctrl_T_865; // @[Lookup.scala 33:37]
  assign io_out_bits_rs2_src = _ctrl_T_1 ? 3'h2 : _ctrl_T_937; // @[Lookup.scala 33:37]
  assign io_out_bits_rd_addr = inst[11:7]; // @[Decode.scala 154:30]
  assign io_out_bits_rd_en = io_id_flush ? 1'h0 : inst_valid & c0_3; // @[Decode.scala 151:27]
  assign io_out_bits_imm = 3'h7 == c0_4 ? imm_csr : _io_out_bits_imm_T_11; // @[Mux.scala 80:57]
  assign io_ren1 = c0_1 == 3'h1; // @[Decode.scala 156:23]
  assign io_raddr1 = inst[19:15]; // @[Decode.scala 158:20]
  assign io_ren2 = c0_2 == 3'h1 | ctrl_4 == 2'h3; // @[Decode.scala 157:40]
  assign io_raddr2 = inst[24:20]; // @[Decode.scala 159:20]
  assign io_is_ebreak = io_is_ebreak_REG; // @[Decode.scala 160:16]
  assign io_rs1_data_o = rs1_reg; // @[Decode.scala 35:17]
  assign io_rs2_data_o = rs2_reg; // @[Decode.scala 36:17]
  assign io_p_npc_o = reg_pnpc; // @[Decode.scala 162:14]
  always @(posedge clock) begin
    if (reset) begin // @[Decode.scala 27:22]
      pc <= 32'h0; // @[Decode.scala 27:22]
    end else if (io_in_ready | io_id_flush) begin // @[Decode.scala 37:36]
      if (io_id_flush) begin // @[Decode.scala 38:14]
        pc <= 32'h0;
      end else begin
        pc <= io_in_bits_pc;
      end
    end
    if (reset) begin // @[Decode.scala 28:22]
      inst <= 32'h0; // @[Decode.scala 28:22]
    end else if (io_in_ready | io_id_flush) begin // @[Decode.scala 37:36]
      if (io_id_flush) begin // @[Decode.scala 39:16]
        inst <= 32'h0;
      end else begin
        inst <= io_in_bits_inst;
      end
    end
    if (reset) begin // @[Decode.scala 29:27]
      inst_valid <= 1'h0; // @[Decode.scala 29:27]
    end else if (io_in_ready | io_id_flush) begin // @[Decode.scala 37:36]
      if (io_id_flush) begin // @[Decode.scala 40:22]
        inst_valid <= 1'h0;
      end else begin
        inst_valid <= io_in_bits_inst_valid;
      end
    end
    if (reset) begin // @[Decode.scala 30:25]
      reg_pnpc <= 32'h0; // @[Decode.scala 30:25]
    end else if (io_in_ready | io_id_flush) begin // @[Decode.scala 37:36]
      if (io_id_flush) begin // @[Decode.scala 41:20]
        reg_pnpc <= 32'h0;
      end else begin
        reg_pnpc <= io_p_npc_i;
      end
    end
    if (reset) begin // @[Decode.scala 32:25]
      rs1_reg <= 64'h0; // @[Decode.scala 32:25]
    end else if (io_in_ready | io_id_flush) begin // @[Decode.scala 37:36]
      rs1_reg <= io_rs1_data_i; // @[Decode.scala 42:13]
    end
    if (reset) begin // @[Decode.scala 33:25]
      rs2_reg <= 64'h0; // @[Decode.scala 33:25]
    end else if (io_in_ready | io_id_flush) begin // @[Decode.scala 37:36]
      rs2_reg <= io_rs2_data_i; // @[Decode.scala 43:13]
    end
    if (io_id_flush) begin // @[Decode.scala 160:30]
      io_is_ebreak_REG <= 1'h0;
    end else begin
      io_is_ebreak_REG <= inst_valid & _ctrl_T_77;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  pc = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  inst = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  inst_valid = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  reg_pnpc = _RAND_3[31:0];
  _RAND_4 = {2{`RANDOM}};
  rs1_reg = _RAND_4[63:0];
  _RAND_5 = {2{`RANDOM}};
  rs2_reg = _RAND_5[63:0];
  _RAND_6 = {1{`RANDOM}};
  io_is_ebreak_REG = _RAND_6[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module RegFile(
  input         clock,
  input         reset,
  input         io_ren1,
  input  [4:0]  io_raddr1,
  output [63:0] io_rdata1,
  input         io_ren2,
  input  [4:0]  io_raddr2,
  output [63:0] io_rdata2,
  input         io_wen,
  input  [4:0]  io_waddr,
  input  [63:0] io_wdata,
  output [63:0] io_regs_0,
  output [63:0] io_regs_1,
  output [63:0] io_regs_2,
  output [63:0] io_regs_3,
  output [63:0] io_regs_4,
  output [63:0] io_regs_5,
  output [63:0] io_regs_6,
  output [63:0] io_regs_7,
  output [63:0] io_regs_8,
  output [63:0] io_regs_9,
  output [63:0] io_regs_10,
  output [63:0] io_regs_11,
  output [63:0] io_regs_12,
  output [63:0] io_regs_13,
  output [63:0] io_regs_14,
  output [63:0] io_regs_15,
  output [63:0] io_regs_16,
  output [63:0] io_regs_17,
  output [63:0] io_regs_18,
  output [63:0] io_regs_19,
  output [63:0] io_regs_20,
  output [63:0] io_regs_21,
  output [63:0] io_regs_22,
  output [63:0] io_regs_23,
  output [63:0] io_regs_24,
  output [63:0] io_regs_25,
  output [63:0] io_regs_26,
  output [63:0] io_regs_27,
  output [63:0] io_regs_28,
  output [63:0] io_regs_29,
  output [63:0] io_regs_30,
  output [63:0] io_regs_31,
  input         io_ex_rd_en,
  input  [4:0]  io_ex_rd_addr,
  input  [63:0] io_ex_rd_data,
  input         io_ex_is_load_i,
  input         io_ex_is_mdu_i,
  input         io_mem_is_load_i,
  input         io_mem_rd_en,
  input  [4:0]  io_mem_rd_addr,
  input  [63:0] io_mem_rd_data,
  output        io_rf_stall
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [63:0] _RAND_7;
  reg [63:0] _RAND_8;
  reg [63:0] _RAND_9;
  reg [63:0] _RAND_10;
  reg [63:0] _RAND_11;
  reg [63:0] _RAND_12;
  reg [63:0] _RAND_13;
  reg [63:0] _RAND_14;
  reg [63:0] _RAND_15;
  reg [63:0] _RAND_16;
  reg [63:0] _RAND_17;
  reg [63:0] _RAND_18;
  reg [63:0] _RAND_19;
  reg [63:0] _RAND_20;
  reg [63:0] _RAND_21;
  reg [63:0] _RAND_22;
  reg [63:0] _RAND_23;
  reg [63:0] _RAND_24;
  reg [63:0] _RAND_25;
  reg [63:0] _RAND_26;
  reg [63:0] _RAND_27;
  reg [63:0] _RAND_28;
  reg [63:0] _RAND_29;
  reg [63:0] _RAND_30;
  reg [63:0] _RAND_31;
`endif // RANDOMIZE_REG_INIT
  wire  ex_rs1_hazard = io_ex_rd_en & io_ex_rd_addr == io_raddr1 & io_ren1; // @[RegFile.scala 32:68]
  wire  ex_rs2_hazard = io_ex_rd_en & io_ex_rd_addr == io_raddr2 & io_ren2; // @[RegFile.scala 33:68]
  wire  mem_rs1_hazard = io_mem_rd_en & io_mem_rd_addr == io_raddr1 & io_ren1; // @[RegFile.scala 34:71]
  wire  mem_rs2_hazard = io_mem_rd_en & io_mem_rd_addr == io_raddr2 & io_ren2; // @[RegFile.scala 35:71]
  wire  wb_rs1_hazard = io_wen & io_waddr == io_raddr1 & io_ren1; // @[RegFile.scala 36:58]
  wire  wb_rs2_hazard = io_wen & io_waddr == io_raddr2 & io_ren2; // @[RegFile.scala 37:58]
  reg [63:0] rf_0; // @[RegFile.scala 39:19]
  reg [63:0] rf_1; // @[RegFile.scala 39:19]
  reg [63:0] rf_2; // @[RegFile.scala 39:19]
  reg [63:0] rf_3; // @[RegFile.scala 39:19]
  reg [63:0] rf_4; // @[RegFile.scala 39:19]
  reg [63:0] rf_5; // @[RegFile.scala 39:19]
  reg [63:0] rf_6; // @[RegFile.scala 39:19]
  reg [63:0] rf_7; // @[RegFile.scala 39:19]
  reg [63:0] rf_8; // @[RegFile.scala 39:19]
  reg [63:0] rf_9; // @[RegFile.scala 39:19]
  reg [63:0] rf_10; // @[RegFile.scala 39:19]
  reg [63:0] rf_11; // @[RegFile.scala 39:19]
  reg [63:0] rf_12; // @[RegFile.scala 39:19]
  reg [63:0] rf_13; // @[RegFile.scala 39:19]
  reg [63:0] rf_14; // @[RegFile.scala 39:19]
  reg [63:0] rf_15; // @[RegFile.scala 39:19]
  reg [63:0] rf_16; // @[RegFile.scala 39:19]
  reg [63:0] rf_17; // @[RegFile.scala 39:19]
  reg [63:0] rf_18; // @[RegFile.scala 39:19]
  reg [63:0] rf_19; // @[RegFile.scala 39:19]
  reg [63:0] rf_20; // @[RegFile.scala 39:19]
  reg [63:0] rf_21; // @[RegFile.scala 39:19]
  reg [63:0] rf_22; // @[RegFile.scala 39:19]
  reg [63:0] rf_23; // @[RegFile.scala 39:19]
  reg [63:0] rf_24; // @[RegFile.scala 39:19]
  reg [63:0] rf_25; // @[RegFile.scala 39:19]
  reg [63:0] rf_26; // @[RegFile.scala 39:19]
  reg [63:0] rf_27; // @[RegFile.scala 39:19]
  reg [63:0] rf_28; // @[RegFile.scala 39:19]
  reg [63:0] rf_29; // @[RegFile.scala 39:19]
  reg [63:0] rf_30; // @[RegFile.scala 39:19]
  reg [63:0] rf_31; // @[RegFile.scala 39:19]
  wire [63:0] _GEN_1 = 5'h1 == io_raddr1 ? rf_1 : rf_0; // @[RegFile.scala 42:115 RegFile.scala 42:115]
  wire [63:0] _GEN_2 = 5'h2 == io_raddr1 ? rf_2 : _GEN_1; // @[RegFile.scala 42:115 RegFile.scala 42:115]
  wire [63:0] _GEN_3 = 5'h3 == io_raddr1 ? rf_3 : _GEN_2; // @[RegFile.scala 42:115 RegFile.scala 42:115]
  wire [63:0] _GEN_4 = 5'h4 == io_raddr1 ? rf_4 : _GEN_3; // @[RegFile.scala 42:115 RegFile.scala 42:115]
  wire [63:0] _GEN_5 = 5'h5 == io_raddr1 ? rf_5 : _GEN_4; // @[RegFile.scala 42:115 RegFile.scala 42:115]
  wire [63:0] _GEN_6 = 5'h6 == io_raddr1 ? rf_6 : _GEN_5; // @[RegFile.scala 42:115 RegFile.scala 42:115]
  wire [63:0] _GEN_7 = 5'h7 == io_raddr1 ? rf_7 : _GEN_6; // @[RegFile.scala 42:115 RegFile.scala 42:115]
  wire [63:0] _GEN_8 = 5'h8 == io_raddr1 ? rf_8 : _GEN_7; // @[RegFile.scala 42:115 RegFile.scala 42:115]
  wire [63:0] _GEN_9 = 5'h9 == io_raddr1 ? rf_9 : _GEN_8; // @[RegFile.scala 42:115 RegFile.scala 42:115]
  wire [63:0] _GEN_10 = 5'ha == io_raddr1 ? rf_10 : _GEN_9; // @[RegFile.scala 42:115 RegFile.scala 42:115]
  wire [63:0] _GEN_11 = 5'hb == io_raddr1 ? rf_11 : _GEN_10; // @[RegFile.scala 42:115 RegFile.scala 42:115]
  wire [63:0] _GEN_12 = 5'hc == io_raddr1 ? rf_12 : _GEN_11; // @[RegFile.scala 42:115 RegFile.scala 42:115]
  wire [63:0] _GEN_13 = 5'hd == io_raddr1 ? rf_13 : _GEN_12; // @[RegFile.scala 42:115 RegFile.scala 42:115]
  wire [63:0] _GEN_14 = 5'he == io_raddr1 ? rf_14 : _GEN_13; // @[RegFile.scala 42:115 RegFile.scala 42:115]
  wire [63:0] _GEN_15 = 5'hf == io_raddr1 ? rf_15 : _GEN_14; // @[RegFile.scala 42:115 RegFile.scala 42:115]
  wire [63:0] _GEN_16 = 5'h10 == io_raddr1 ? rf_16 : _GEN_15; // @[RegFile.scala 42:115 RegFile.scala 42:115]
  wire [63:0] _GEN_17 = 5'h11 == io_raddr1 ? rf_17 : _GEN_16; // @[RegFile.scala 42:115 RegFile.scala 42:115]
  wire [63:0] _GEN_18 = 5'h12 == io_raddr1 ? rf_18 : _GEN_17; // @[RegFile.scala 42:115 RegFile.scala 42:115]
  wire [63:0] _GEN_19 = 5'h13 == io_raddr1 ? rf_19 : _GEN_18; // @[RegFile.scala 42:115 RegFile.scala 42:115]
  wire [63:0] _GEN_20 = 5'h14 == io_raddr1 ? rf_20 : _GEN_19; // @[RegFile.scala 42:115 RegFile.scala 42:115]
  wire [63:0] _GEN_21 = 5'h15 == io_raddr1 ? rf_21 : _GEN_20; // @[RegFile.scala 42:115 RegFile.scala 42:115]
  wire [63:0] _GEN_22 = 5'h16 == io_raddr1 ? rf_22 : _GEN_21; // @[RegFile.scala 42:115 RegFile.scala 42:115]
  wire [63:0] _GEN_23 = 5'h17 == io_raddr1 ? rf_23 : _GEN_22; // @[RegFile.scala 42:115 RegFile.scala 42:115]
  wire [63:0] _GEN_24 = 5'h18 == io_raddr1 ? rf_24 : _GEN_23; // @[RegFile.scala 42:115 RegFile.scala 42:115]
  wire [63:0] _GEN_25 = 5'h19 == io_raddr1 ? rf_25 : _GEN_24; // @[RegFile.scala 42:115 RegFile.scala 42:115]
  wire [63:0] _GEN_26 = 5'h1a == io_raddr1 ? rf_26 : _GEN_25; // @[RegFile.scala 42:115 RegFile.scala 42:115]
  wire [63:0] _GEN_27 = 5'h1b == io_raddr1 ? rf_27 : _GEN_26; // @[RegFile.scala 42:115 RegFile.scala 42:115]
  wire [63:0] _GEN_28 = 5'h1c == io_raddr1 ? rf_28 : _GEN_27; // @[RegFile.scala 42:115 RegFile.scala 42:115]
  wire [63:0] _GEN_29 = 5'h1d == io_raddr1 ? rf_29 : _GEN_28; // @[RegFile.scala 42:115 RegFile.scala 42:115]
  wire [63:0] _GEN_30 = 5'h1e == io_raddr1 ? rf_30 : _GEN_29; // @[RegFile.scala 42:115 RegFile.scala 42:115]
  wire [63:0] _GEN_31 = 5'h1f == io_raddr1 ? rf_31 : _GEN_30; // @[RegFile.scala 42:115 RegFile.scala 42:115]
  wire [63:0] _io_rdata1_T_1 = wb_rs1_hazard ? io_wdata : _GEN_31; // @[RegFile.scala 42:115]
  wire [63:0] _io_rdata1_T_2 = mem_rs1_hazard ? io_mem_rd_data : _io_rdata1_T_1; // @[RegFile.scala 42:79]
  wire [63:0] _io_rdata1_T_3 = ex_rs1_hazard ? io_ex_rd_data : _io_rdata1_T_2; // @[RegFile.scala 42:44]
  wire [63:0] _GEN_33 = 5'h1 == io_raddr2 ? rf_1 : rf_0; // @[RegFile.scala 43:115 RegFile.scala 43:115]
  wire [63:0] _GEN_34 = 5'h2 == io_raddr2 ? rf_2 : _GEN_33; // @[RegFile.scala 43:115 RegFile.scala 43:115]
  wire [63:0] _GEN_35 = 5'h3 == io_raddr2 ? rf_3 : _GEN_34; // @[RegFile.scala 43:115 RegFile.scala 43:115]
  wire [63:0] _GEN_36 = 5'h4 == io_raddr2 ? rf_4 : _GEN_35; // @[RegFile.scala 43:115 RegFile.scala 43:115]
  wire [63:0] _GEN_37 = 5'h5 == io_raddr2 ? rf_5 : _GEN_36; // @[RegFile.scala 43:115 RegFile.scala 43:115]
  wire [63:0] _GEN_38 = 5'h6 == io_raddr2 ? rf_6 : _GEN_37; // @[RegFile.scala 43:115 RegFile.scala 43:115]
  wire [63:0] _GEN_39 = 5'h7 == io_raddr2 ? rf_7 : _GEN_38; // @[RegFile.scala 43:115 RegFile.scala 43:115]
  wire [63:0] _GEN_40 = 5'h8 == io_raddr2 ? rf_8 : _GEN_39; // @[RegFile.scala 43:115 RegFile.scala 43:115]
  wire [63:0] _GEN_41 = 5'h9 == io_raddr2 ? rf_9 : _GEN_40; // @[RegFile.scala 43:115 RegFile.scala 43:115]
  wire [63:0] _GEN_42 = 5'ha == io_raddr2 ? rf_10 : _GEN_41; // @[RegFile.scala 43:115 RegFile.scala 43:115]
  wire [63:0] _GEN_43 = 5'hb == io_raddr2 ? rf_11 : _GEN_42; // @[RegFile.scala 43:115 RegFile.scala 43:115]
  wire [63:0] _GEN_44 = 5'hc == io_raddr2 ? rf_12 : _GEN_43; // @[RegFile.scala 43:115 RegFile.scala 43:115]
  wire [63:0] _GEN_45 = 5'hd == io_raddr2 ? rf_13 : _GEN_44; // @[RegFile.scala 43:115 RegFile.scala 43:115]
  wire [63:0] _GEN_46 = 5'he == io_raddr2 ? rf_14 : _GEN_45; // @[RegFile.scala 43:115 RegFile.scala 43:115]
  wire [63:0] _GEN_47 = 5'hf == io_raddr2 ? rf_15 : _GEN_46; // @[RegFile.scala 43:115 RegFile.scala 43:115]
  wire [63:0] _GEN_48 = 5'h10 == io_raddr2 ? rf_16 : _GEN_47; // @[RegFile.scala 43:115 RegFile.scala 43:115]
  wire [63:0] _GEN_49 = 5'h11 == io_raddr2 ? rf_17 : _GEN_48; // @[RegFile.scala 43:115 RegFile.scala 43:115]
  wire [63:0] _GEN_50 = 5'h12 == io_raddr2 ? rf_18 : _GEN_49; // @[RegFile.scala 43:115 RegFile.scala 43:115]
  wire [63:0] _GEN_51 = 5'h13 == io_raddr2 ? rf_19 : _GEN_50; // @[RegFile.scala 43:115 RegFile.scala 43:115]
  wire [63:0] _GEN_52 = 5'h14 == io_raddr2 ? rf_20 : _GEN_51; // @[RegFile.scala 43:115 RegFile.scala 43:115]
  wire [63:0] _GEN_53 = 5'h15 == io_raddr2 ? rf_21 : _GEN_52; // @[RegFile.scala 43:115 RegFile.scala 43:115]
  wire [63:0] _GEN_54 = 5'h16 == io_raddr2 ? rf_22 : _GEN_53; // @[RegFile.scala 43:115 RegFile.scala 43:115]
  wire [63:0] _GEN_55 = 5'h17 == io_raddr2 ? rf_23 : _GEN_54; // @[RegFile.scala 43:115 RegFile.scala 43:115]
  wire [63:0] _GEN_56 = 5'h18 == io_raddr2 ? rf_24 : _GEN_55; // @[RegFile.scala 43:115 RegFile.scala 43:115]
  wire [63:0] _GEN_57 = 5'h19 == io_raddr2 ? rf_25 : _GEN_56; // @[RegFile.scala 43:115 RegFile.scala 43:115]
  wire [63:0] _GEN_58 = 5'h1a == io_raddr2 ? rf_26 : _GEN_57; // @[RegFile.scala 43:115 RegFile.scala 43:115]
  wire [63:0] _GEN_59 = 5'h1b == io_raddr2 ? rf_27 : _GEN_58; // @[RegFile.scala 43:115 RegFile.scala 43:115]
  wire [63:0] _GEN_60 = 5'h1c == io_raddr2 ? rf_28 : _GEN_59; // @[RegFile.scala 43:115 RegFile.scala 43:115]
  wire [63:0] _GEN_61 = 5'h1d == io_raddr2 ? rf_29 : _GEN_60; // @[RegFile.scala 43:115 RegFile.scala 43:115]
  wire [63:0] _GEN_62 = 5'h1e == io_raddr2 ? rf_30 : _GEN_61; // @[RegFile.scala 43:115 RegFile.scala 43:115]
  wire [63:0] _GEN_63 = 5'h1f == io_raddr2 ? rf_31 : _GEN_62; // @[RegFile.scala 43:115 RegFile.scala 43:115]
  wire [63:0] _io_rdata2_T_1 = wb_rs2_hazard ? io_wdata : _GEN_63; // @[RegFile.scala 43:115]
  wire [63:0] _io_rdata2_T_2 = mem_rs2_hazard ? io_mem_rd_data : _io_rdata2_T_1; // @[RegFile.scala 43:79]
  wire [63:0] _io_rdata2_T_3 = ex_rs2_hazard ? io_ex_rd_data : _io_rdata2_T_2; // @[RegFile.scala 43:44]
  assign io_rdata1 = io_raddr1 != 5'h0 ? _io_rdata1_T_3 : 64'h0; // @[RegFile.scala 42:19]
  assign io_rdata2 = io_raddr2 != 5'h0 ? _io_rdata2_T_3 : 64'h0; // @[RegFile.scala 43:19]
  assign io_regs_0 = rf_0; // @[RegFile.scala 47:11]
  assign io_regs_1 = rf_1; // @[RegFile.scala 47:11]
  assign io_regs_2 = rf_2; // @[RegFile.scala 47:11]
  assign io_regs_3 = rf_3; // @[RegFile.scala 47:11]
  assign io_regs_4 = rf_4; // @[RegFile.scala 47:11]
  assign io_regs_5 = rf_5; // @[RegFile.scala 47:11]
  assign io_regs_6 = rf_6; // @[RegFile.scala 47:11]
  assign io_regs_7 = rf_7; // @[RegFile.scala 47:11]
  assign io_regs_8 = rf_8; // @[RegFile.scala 47:11]
  assign io_regs_9 = rf_9; // @[RegFile.scala 47:11]
  assign io_regs_10 = rf_10; // @[RegFile.scala 47:11]
  assign io_regs_11 = rf_11; // @[RegFile.scala 47:11]
  assign io_regs_12 = rf_12; // @[RegFile.scala 47:11]
  assign io_regs_13 = rf_13; // @[RegFile.scala 47:11]
  assign io_regs_14 = rf_14; // @[RegFile.scala 47:11]
  assign io_regs_15 = rf_15; // @[RegFile.scala 47:11]
  assign io_regs_16 = rf_16; // @[RegFile.scala 47:11]
  assign io_regs_17 = rf_17; // @[RegFile.scala 47:11]
  assign io_regs_18 = rf_18; // @[RegFile.scala 47:11]
  assign io_regs_19 = rf_19; // @[RegFile.scala 47:11]
  assign io_regs_20 = rf_20; // @[RegFile.scala 47:11]
  assign io_regs_21 = rf_21; // @[RegFile.scala 47:11]
  assign io_regs_22 = rf_22; // @[RegFile.scala 47:11]
  assign io_regs_23 = rf_23; // @[RegFile.scala 47:11]
  assign io_regs_24 = rf_24; // @[RegFile.scala 47:11]
  assign io_regs_25 = rf_25; // @[RegFile.scala 47:11]
  assign io_regs_26 = rf_26; // @[RegFile.scala 47:11]
  assign io_regs_27 = rf_27; // @[RegFile.scala 47:11]
  assign io_regs_28 = rf_28; // @[RegFile.scala 47:11]
  assign io_regs_29 = rf_29; // @[RegFile.scala 47:11]
  assign io_regs_30 = rf_30; // @[RegFile.scala 47:11]
  assign io_regs_31 = rf_31; // @[RegFile.scala 47:11]
  assign io_rf_stall = (io_ex_is_load_i | io_ex_is_mdu_i) & (ex_rs1_hazard | ex_rs2_hazard) | io_mem_is_load_i & (
    mem_rs1_hazard | mem_rs2_hazard); // @[RegFile.scala 41:95]
  always @(posedge clock) begin
    if (reset) begin // @[RegFile.scala 39:19]
      rf_0 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'h0 == io_waddr) begin // @[RegFile.scala 45:18]
        rf_0 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
    if (reset) begin // @[RegFile.scala 39:19]
      rf_1 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'h1 == io_waddr) begin // @[RegFile.scala 45:18]
        rf_1 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
    if (reset) begin // @[RegFile.scala 39:19]
      rf_2 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'h2 == io_waddr) begin // @[RegFile.scala 45:18]
        rf_2 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
    if (reset) begin // @[RegFile.scala 39:19]
      rf_3 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'h3 == io_waddr) begin // @[RegFile.scala 45:18]
        rf_3 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
    if (reset) begin // @[RegFile.scala 39:19]
      rf_4 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'h4 == io_waddr) begin // @[RegFile.scala 45:18]
        rf_4 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
    if (reset) begin // @[RegFile.scala 39:19]
      rf_5 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'h5 == io_waddr) begin // @[RegFile.scala 45:18]
        rf_5 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
    if (reset) begin // @[RegFile.scala 39:19]
      rf_6 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'h6 == io_waddr) begin // @[RegFile.scala 45:18]
        rf_6 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
    if (reset) begin // @[RegFile.scala 39:19]
      rf_7 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'h7 == io_waddr) begin // @[RegFile.scala 45:18]
        rf_7 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
    if (reset) begin // @[RegFile.scala 39:19]
      rf_8 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'h8 == io_waddr) begin // @[RegFile.scala 45:18]
        rf_8 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
    if (reset) begin // @[RegFile.scala 39:19]
      rf_9 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'h9 == io_waddr) begin // @[RegFile.scala 45:18]
        rf_9 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
    if (reset) begin // @[RegFile.scala 39:19]
      rf_10 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'ha == io_waddr) begin // @[RegFile.scala 45:18]
        rf_10 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
    if (reset) begin // @[RegFile.scala 39:19]
      rf_11 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'hb == io_waddr) begin // @[RegFile.scala 45:18]
        rf_11 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
    if (reset) begin // @[RegFile.scala 39:19]
      rf_12 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'hc == io_waddr) begin // @[RegFile.scala 45:18]
        rf_12 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
    if (reset) begin // @[RegFile.scala 39:19]
      rf_13 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'hd == io_waddr) begin // @[RegFile.scala 45:18]
        rf_13 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
    if (reset) begin // @[RegFile.scala 39:19]
      rf_14 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'he == io_waddr) begin // @[RegFile.scala 45:18]
        rf_14 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
    if (reset) begin // @[RegFile.scala 39:19]
      rf_15 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'hf == io_waddr) begin // @[RegFile.scala 45:18]
        rf_15 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
    if (reset) begin // @[RegFile.scala 39:19]
      rf_16 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'h10 == io_waddr) begin // @[RegFile.scala 45:18]
        rf_16 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
    if (reset) begin // @[RegFile.scala 39:19]
      rf_17 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'h11 == io_waddr) begin // @[RegFile.scala 45:18]
        rf_17 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
    if (reset) begin // @[RegFile.scala 39:19]
      rf_18 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'h12 == io_waddr) begin // @[RegFile.scala 45:18]
        rf_18 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
    if (reset) begin // @[RegFile.scala 39:19]
      rf_19 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'h13 == io_waddr) begin // @[RegFile.scala 45:18]
        rf_19 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
    if (reset) begin // @[RegFile.scala 39:19]
      rf_20 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'h14 == io_waddr) begin // @[RegFile.scala 45:18]
        rf_20 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
    if (reset) begin // @[RegFile.scala 39:19]
      rf_21 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'h15 == io_waddr) begin // @[RegFile.scala 45:18]
        rf_21 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
    if (reset) begin // @[RegFile.scala 39:19]
      rf_22 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'h16 == io_waddr) begin // @[RegFile.scala 45:18]
        rf_22 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
    if (reset) begin // @[RegFile.scala 39:19]
      rf_23 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'h17 == io_waddr) begin // @[RegFile.scala 45:18]
        rf_23 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
    if (reset) begin // @[RegFile.scala 39:19]
      rf_24 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'h18 == io_waddr) begin // @[RegFile.scala 45:18]
        rf_24 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
    if (reset) begin // @[RegFile.scala 39:19]
      rf_25 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'h19 == io_waddr) begin // @[RegFile.scala 45:18]
        rf_25 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
    if (reset) begin // @[RegFile.scala 39:19]
      rf_26 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'h1a == io_waddr) begin // @[RegFile.scala 45:18]
        rf_26 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
    if (reset) begin // @[RegFile.scala 39:19]
      rf_27 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'h1b == io_waddr) begin // @[RegFile.scala 45:18]
        rf_27 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
    if (reset) begin // @[RegFile.scala 39:19]
      rf_28 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'h1c == io_waddr) begin // @[RegFile.scala 45:18]
        rf_28 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
    if (reset) begin // @[RegFile.scala 39:19]
      rf_29 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'h1d == io_waddr) begin // @[RegFile.scala 45:18]
        rf_29 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
    if (reset) begin // @[RegFile.scala 39:19]
      rf_30 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'h1e == io_waddr) begin // @[RegFile.scala 45:18]
        rf_30 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
    if (reset) begin // @[RegFile.scala 39:19]
      rf_31 <= 64'h0; // @[RegFile.scala 39:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 44:38]
      if (5'h1f == io_waddr) begin // @[RegFile.scala 45:18]
        rf_31 <= io_wdata; // @[RegFile.scala 45:18]
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {2{`RANDOM}};
  rf_0 = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  rf_1 = _RAND_1[63:0];
  _RAND_2 = {2{`RANDOM}};
  rf_2 = _RAND_2[63:0];
  _RAND_3 = {2{`RANDOM}};
  rf_3 = _RAND_3[63:0];
  _RAND_4 = {2{`RANDOM}};
  rf_4 = _RAND_4[63:0];
  _RAND_5 = {2{`RANDOM}};
  rf_5 = _RAND_5[63:0];
  _RAND_6 = {2{`RANDOM}};
  rf_6 = _RAND_6[63:0];
  _RAND_7 = {2{`RANDOM}};
  rf_7 = _RAND_7[63:0];
  _RAND_8 = {2{`RANDOM}};
  rf_8 = _RAND_8[63:0];
  _RAND_9 = {2{`RANDOM}};
  rf_9 = _RAND_9[63:0];
  _RAND_10 = {2{`RANDOM}};
  rf_10 = _RAND_10[63:0];
  _RAND_11 = {2{`RANDOM}};
  rf_11 = _RAND_11[63:0];
  _RAND_12 = {2{`RANDOM}};
  rf_12 = _RAND_12[63:0];
  _RAND_13 = {2{`RANDOM}};
  rf_13 = _RAND_13[63:0];
  _RAND_14 = {2{`RANDOM}};
  rf_14 = _RAND_14[63:0];
  _RAND_15 = {2{`RANDOM}};
  rf_15 = _RAND_15[63:0];
  _RAND_16 = {2{`RANDOM}};
  rf_16 = _RAND_16[63:0];
  _RAND_17 = {2{`RANDOM}};
  rf_17 = _RAND_17[63:0];
  _RAND_18 = {2{`RANDOM}};
  rf_18 = _RAND_18[63:0];
  _RAND_19 = {2{`RANDOM}};
  rf_19 = _RAND_19[63:0];
  _RAND_20 = {2{`RANDOM}};
  rf_20 = _RAND_20[63:0];
  _RAND_21 = {2{`RANDOM}};
  rf_21 = _RAND_21[63:0];
  _RAND_22 = {2{`RANDOM}};
  rf_22 = _RAND_22[63:0];
  _RAND_23 = {2{`RANDOM}};
  rf_23 = _RAND_23[63:0];
  _RAND_24 = {2{`RANDOM}};
  rf_24 = _RAND_24[63:0];
  _RAND_25 = {2{`RANDOM}};
  rf_25 = _RAND_25[63:0];
  _RAND_26 = {2{`RANDOM}};
  rf_26 = _RAND_26[63:0];
  _RAND_27 = {2{`RANDOM}};
  rf_27 = _RAND_27[63:0];
  _RAND_28 = {2{`RANDOM}};
  rf_28 = _RAND_28[63:0];
  _RAND_29 = {2{`RANDOM}};
  rf_29 = _RAND_29[63:0];
  _RAND_30 = {2{`RANDOM}};
  rf_30 = _RAND_30[63:0];
  _RAND_31 = {2{`RANDOM}};
  rf_31 = _RAND_31[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Alu(
  input  [63:0] io_in1,
  input  [63:0] io_in2,
  input  [3:0]  io_aluop_i,
  input         io_wtype_i,
  output [63:0] io_alu_out,
  output        io_jmp,
  input  [3:0]  io_jmp_code,
  input  [31:0] io_imm,
  input  [31:0] io_pc_i,
  output [31:0] io_jmp_pc
);
  wire [5:0] shamt = io_wtype_i ? {{1'd0}, io_in2[4:0]} : io_in2[5:0]; // @[Execute.scala 131:18]
  wire  _out0_T = io_jmp_code == 4'h2; // @[Execute.scala 133:29]
  wire [31:0] _out0_T_4 = io_pc_i + 32'h4; // @[Execute.scala 133:83]
  wire [63:0] _out0_T_6 = io_in1 + io_in2; // @[Execute.scala 134:22]
  wire [63:0] _out0_T_8 = io_in1 - io_in2; // @[Execute.scala 135:22]
  wire  _out0_T_11 = $signed(io_in1) < $signed(io_in2); // @[Execute.scala 136:31]
  wire  _out0_T_12 = io_in1 < io_in2; // @[Execute.scala 137:22]
  wire [63:0] _out0_T_13 = io_in1 ^ io_in2; // @[Execute.scala 138:22]
  wire [63:0] _out0_T_14 = io_in1 | io_in2; // @[Execute.scala 139:22]
  wire [63:0] _out0_T_15 = io_in1 & io_in2; // @[Execute.scala 140:22]
  wire [126:0] _GEN_0 = {{63'd0}, io_in1}; // @[Execute.scala 141:23]
  wire [126:0] _out0_T_16 = _GEN_0 << shamt; // @[Execute.scala 141:23]
  wire [31:0] out0_lo = io_in1[31:0]; // @[Execute.scala 142:48]
  wire [63:0] _out0_T_18 = {32'h0,out0_lo}; // @[Cat.scala 30:58]
  wire [63:0] _out0_T_19 = _out0_T_18 >> shamt; // @[Execute.scala 142:66]
  wire [63:0] _out0_T_20 = io_in1 >> shamt; // @[Execute.scala 142:101]
  wire [63:0] _out0_T_21 = io_wtype_i ? _out0_T_19 : _out0_T_20; // @[Execute.scala 142:20]
  wire [63:0] _out0_T_24 = $signed(io_in1) >>> shamt; // @[Execute.scala 143:47]
  wire [63:0] _out0_T_26 = 4'h1 == io_aluop_i ? _out0_T_6 : 64'h0; // @[Mux.scala 80:57]
  wire [63:0] _out0_T_28 = 4'h2 == io_aluop_i ? _out0_T_8 : _out0_T_26; // @[Mux.scala 80:57]
  wire [63:0] _out0_T_30 = 4'h3 == io_aluop_i ? {{63'd0}, _out0_T_11} : _out0_T_28; // @[Mux.scala 80:57]
  wire [63:0] _out0_T_32 = 4'h4 == io_aluop_i ? {{63'd0}, _out0_T_12} : _out0_T_30; // @[Mux.scala 80:57]
  wire [63:0] _out0_T_34 = 4'h5 == io_aluop_i ? _out0_T_13 : _out0_T_32; // @[Mux.scala 80:57]
  wire [63:0] _out0_T_36 = 4'h6 == io_aluop_i ? _out0_T_14 : _out0_T_34; // @[Mux.scala 80:57]
  wire [63:0] _out0_T_38 = 4'h7 == io_aluop_i ? _out0_T_15 : _out0_T_36; // @[Mux.scala 80:57]
  wire [63:0] _out0_T_40 = 4'h8 == io_aluop_i ? _out0_T_16[63:0] : _out0_T_38; // @[Mux.scala 80:57]
  wire [63:0] _out0_T_42 = 4'h9 == io_aluop_i ? _out0_T_21 : _out0_T_40; // @[Mux.scala 80:57]
  wire [63:0] _out0_T_44 = 4'ha == io_aluop_i ? _out0_T_24 : _out0_T_42; // @[Mux.scala 80:57]
  wire [63:0] out0 = io_jmp_code == 4'h2 | io_jmp_code == 4'h1 ? {{32'd0}, _out0_T_4} : _out0_T_44; // @[Execute.scala 133:14]
  wire  _io_jmp_T = io_in1 == io_in2; // @[Execute.scala 149:22]
  wire  _io_jmp_T_1 = io_in1 != io_in2; // @[Execute.scala 150:22]
  wire  _io_jmp_T_7 = $signed(io_in1) >= $signed(io_in2); // @[Execute.scala 152:31]
  wire  _io_jmp_T_9 = io_in1 >= io_in2; // @[Execute.scala 154:31]
  wire  _io_jmp_T_15 = 4'h3 == io_jmp_code ? _io_jmp_T : 4'h2 == io_jmp_code | 4'h1 == io_jmp_code; // @[Mux.scala 80:57]
  wire  _io_jmp_T_17 = 4'h4 == io_jmp_code ? _io_jmp_T_1 : _io_jmp_T_15; // @[Mux.scala 80:57]
  wire  _io_jmp_T_19 = 4'h5 == io_jmp_code ? _out0_T_11 : _io_jmp_T_17; // @[Mux.scala 80:57]
  wire  _io_jmp_T_21 = 4'h6 == io_jmp_code ? _io_jmp_T_7 : _io_jmp_T_19; // @[Mux.scala 80:57]
  wire  _io_jmp_T_23 = 4'h7 == io_jmp_code ? _out0_T_12 : _io_jmp_T_21; // @[Mux.scala 80:57]
  wire [31:0] _io_jmp_pc_T_2 = _out0_T ? out0_lo : io_pc_i; // @[Execute.scala 157:19]
  wire [31:0] out1_lo = out0[31:0]; // @[Execute.scala 159:41]
  wire [31:0] out1_hi = out1_lo[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _out1_T_2 = {out1_hi,out1_lo}; // @[Cat.scala 30:58]
  assign io_alu_out = io_wtype_i ? _out1_T_2 : out0; // @[Execute.scala 159:14]
  assign io_jmp = 4'h8 == io_jmp_code ? _io_jmp_T_9 : _io_jmp_T_23; // @[Mux.scala 80:57]
  assign io_jmp_pc = _io_jmp_pc_T_2 + io_imm; // @[Execute.scala 157:67]
endmodule
module Booth(
  input  [64:0]  io_x,
  input  [2:0]   io_y,
  output [127:0] io_z,
  output [1:0]   io_c
);
  wire [64:0] x_neg = ~io_x; // @[Mul.scala 15:15]
  wire [62:0] io_z_hi = io_x[64] ? 63'h7fffffffffffffff : 63'h0; // @[Bitwise.scala 72:12]
  wire [127:0] _io_z_T_2 = {io_z_hi,io_x}; // @[Cat.scala 30:58]
  wire [61:0] io_z_hi_hi = io_x[64] ? 62'h3fffffffffffffff : 62'h0; // @[Bitwise.scala 72:12]
  wire [127:0] _io_z_T_8 = {io_z_hi_hi,io_x,1'h0}; // @[Cat.scala 30:58]
  wire [61:0] io_z_hi_hi_1 = x_neg[64] ? 62'h3fffffffffffffff : 62'h0; // @[Bitwise.scala 72:12]
  wire [127:0] _io_z_T_11 = {io_z_hi_hi_1,x_neg,1'h0}; // @[Cat.scala 30:58]
  wire [62:0] io_z_hi_4 = x_neg[64] ? 63'h7fffffffffffffff : 63'h0; // @[Bitwise.scala 72:12]
  wire [127:0] _io_z_T_14 = {io_z_hi_4,x_neg}; // @[Cat.scala 30:58]
  wire [127:0] _io_z_T_19 = 3'h1 == io_y ? _io_z_T_2 : 128'h0; // @[Mux.scala 80:57]
  wire [127:0] _io_z_T_21 = 3'h2 == io_y ? _io_z_T_2 : _io_z_T_19; // @[Mux.scala 80:57]
  wire [127:0] _io_z_T_23 = 3'h3 == io_y ? _io_z_T_8 : _io_z_T_21; // @[Mux.scala 80:57]
  wire [127:0] _io_z_T_25 = 3'h4 == io_y ? _io_z_T_11 : _io_z_T_23; // @[Mux.scala 80:57]
  wire [127:0] _io_z_T_27 = 3'h5 == io_y ? _io_z_T_14 : _io_z_T_25; // @[Mux.scala 80:57]
  wire [127:0] _io_z_T_29 = 3'h6 == io_y ? _io_z_T_14 : _io_z_T_27; // @[Mux.scala 80:57]
  wire [1:0] _io_c_T_7 = 3'h4 == io_y ? 2'h2 : 2'h0; // @[Mux.scala 80:57]
  wire [1:0] _io_c_T_9 = 3'h5 == io_y ? 2'h1 : _io_c_T_7; // @[Mux.scala 80:57]
  wire [1:0] _io_c_T_11 = 3'h6 == io_y ? 2'h1 : _io_c_T_9; // @[Mux.scala 80:57]
  assign io_z = 3'h7 == io_y ? 128'h0 : _io_z_T_29; // @[Mux.scala 80:57]
  assign io_c = 3'h7 == io_y ? 2'h0 : _io_c_T_11; // @[Mux.scala 80:57]
endmodule
module Csa(
  input  [127:0] io_x,
  input  [127:0] io_y,
  input  [127:0] io_z,
  output [127:0] io_s,
  output [127:0] io_c
);
  wire [127:0] _io_s_T = io_x ^ io_y; // @[Mul.scala 47:16]
  wire [127:0] _io_c_T = io_x & io_y; // @[Mul.scala 48:22]
  wire [127:0] _io_c_T_1 = io_y & io_z; // @[Mul.scala 48:38]
  wire [127:0] _io_c_T_2 = _io_c_T | _io_c_T_1; // @[Mul.scala 48:30]
  wire [127:0] _io_c_T_3 = io_z & io_x; // @[Mul.scala 48:54]
  wire [127:0] _io_c_T_4 = _io_c_T_2 | _io_c_T_3; // @[Mul.scala 48:46]
  wire [126:0] io_c_hi = _io_c_T_4[126:0]; // @[Mul.scala 48:62]
  assign io_s = _io_s_T ^ io_z; // @[Mul.scala 47:23]
  assign io_c = {io_c_hi,1'h0}; // @[Cat.scala 30:58]
endmodule
module Mul(
  input         clock,
  input         reset,
  input  [64:0] io_in1,
  input  [64:0] io_in2,
  output [63:0] io_out1,
  output [63:0] io_out2,
  input         io_mul_valid,
  output        io_mul_ready
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [95:0] _RAND_1;
  reg [95:0] _RAND_2;
  reg [127:0] _RAND_3;
  reg [127:0] _RAND_4;
  reg [127:0] _RAND_5;
  reg [127:0] _RAND_6;
  reg [127:0] _RAND_7;
  reg [127:0] _RAND_8;
  reg [127:0] _RAND_9;
  reg [127:0] _RAND_10;
  reg [127:0] _RAND_11;
  reg [127:0] _RAND_12;
  reg [127:0] _RAND_13;
  reg [127:0] _RAND_14;
  reg [127:0] _RAND_15;
  reg [127:0] _RAND_16;
  reg [127:0] _RAND_17;
  reg [127:0] _RAND_18;
  reg [127:0] _RAND_19;
  reg [127:0] _RAND_20;
  reg [127:0] _RAND_21;
  reg [127:0] _RAND_22;
  reg [127:0] _RAND_23;
  reg [127:0] _RAND_24;
  reg [127:0] _RAND_25;
  reg [127:0] _RAND_26;
  reg [127:0] _RAND_27;
  reg [127:0] _RAND_28;
  reg [127:0] _RAND_29;
  reg [127:0] _RAND_30;
  reg [127:0] _RAND_31;
  reg [127:0] _RAND_32;
  reg [127:0] _RAND_33;
  reg [127:0] _RAND_34;
  reg [127:0] _RAND_35;
  reg [127:0] _RAND_36;
  reg [127:0] _RAND_37;
  reg [127:0] _RAND_38;
  reg [127:0] _RAND_39;
  reg [127:0] _RAND_40;
  reg [127:0] _RAND_41;
  reg [127:0] _RAND_42;
  reg [127:0] _RAND_43;
  reg [127:0] _RAND_44;
  reg [127:0] _RAND_45;
`endif // RANDOMIZE_REG_INIT
  wire [64:0] booth_0_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_0_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_0_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_0_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_1_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_1_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_1_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_1_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_2_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_2_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_2_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_2_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_3_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_3_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_3_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_3_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_4_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_4_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_4_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_4_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_5_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_5_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_5_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_5_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_6_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_6_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_6_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_6_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_7_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_7_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_7_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_7_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_8_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_8_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_8_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_8_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_9_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_9_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_9_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_9_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_10_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_10_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_10_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_10_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_11_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_11_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_11_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_11_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_12_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_12_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_12_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_12_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_13_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_13_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_13_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_13_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_14_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_14_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_14_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_14_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_15_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_15_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_15_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_15_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_16_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_16_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_16_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_16_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_17_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_17_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_17_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_17_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_18_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_18_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_18_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_18_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_19_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_19_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_19_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_19_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_20_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_20_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_20_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_20_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_21_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_21_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_21_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_21_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_22_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_22_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_22_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_22_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_23_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_23_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_23_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_23_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_24_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_24_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_24_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_24_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_25_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_25_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_25_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_25_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_26_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_26_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_26_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_26_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_27_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_27_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_27_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_27_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_28_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_28_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_28_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_28_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_29_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_29_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_29_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_29_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_30_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_30_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_30_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_30_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_31_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_31_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_31_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_31_io_c; // @[Mul.scala 91:23]
  wire [64:0] booth_32_io_x; // @[Mul.scala 91:23]
  wire [2:0] booth_32_io_y; // @[Mul.scala 91:23]
  wire [127:0] booth_32_io_z; // @[Mul.scala 91:23]
  wire [1:0] booth_32_io_c; // @[Mul.scala 91:23]
  wire [127:0] csa_0_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_0_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_0_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_0_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_0_io_c; // @[Mul.scala 107:21]
  wire [127:0] csa_1_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_1_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_1_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_1_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_1_io_c; // @[Mul.scala 107:21]
  wire [127:0] csa_2_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_2_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_2_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_2_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_2_io_c; // @[Mul.scala 107:21]
  wire [127:0] csa_3_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_3_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_3_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_3_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_3_io_c; // @[Mul.scala 107:21]
  wire [127:0] csa_4_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_4_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_4_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_4_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_4_io_c; // @[Mul.scala 107:21]
  wire [127:0] csa_5_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_5_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_5_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_5_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_5_io_c; // @[Mul.scala 107:21]
  wire [127:0] csa_6_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_6_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_6_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_6_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_6_io_c; // @[Mul.scala 107:21]
  wire [127:0] csa_7_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_7_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_7_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_7_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_7_io_c; // @[Mul.scala 107:21]
  wire [127:0] csa_8_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_8_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_8_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_8_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_8_io_c; // @[Mul.scala 107:21]
  wire [127:0] csa_9_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_9_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_9_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_9_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_9_io_c; // @[Mul.scala 107:21]
  wire [127:0] csa_10_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_10_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_10_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_10_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_10_io_c; // @[Mul.scala 107:21]
  wire [127:0] csa_11_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_11_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_11_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_11_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_11_io_c; // @[Mul.scala 107:21]
  wire [127:0] csa_12_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_12_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_12_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_12_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_12_io_c; // @[Mul.scala 107:21]
  wire [127:0] csa_13_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_13_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_13_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_13_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_13_io_c; // @[Mul.scala 107:21]
  wire [127:0] csa_14_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_14_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_14_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_14_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_14_io_c; // @[Mul.scala 107:21]
  wire [127:0] csa_15_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_15_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_15_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_15_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_15_io_c; // @[Mul.scala 107:21]
  wire [127:0] csa_16_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_16_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_16_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_16_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_16_io_c; // @[Mul.scala 107:21]
  wire [127:0] csa_17_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_17_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_17_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_17_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_17_io_c; // @[Mul.scala 107:21]
  wire [127:0] csa_18_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_18_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_18_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_18_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_18_io_c; // @[Mul.scala 107:21]
  wire [127:0] csa_19_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_19_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_19_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_19_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_19_io_c; // @[Mul.scala 107:21]
  wire [127:0] csa_20_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_20_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_20_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_20_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_20_io_c; // @[Mul.scala 107:21]
  wire [127:0] csa_21_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_21_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_21_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_21_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_21_io_c; // @[Mul.scala 107:21]
  wire [127:0] csa_22_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_22_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_22_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_22_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_22_io_c; // @[Mul.scala 107:21]
  wire [127:0] csa_23_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_23_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_23_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_23_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_23_io_c; // @[Mul.scala 107:21]
  wire [127:0] csa_24_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_24_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_24_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_24_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_24_io_c; // @[Mul.scala 107:21]
  wire [127:0] csa_25_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_25_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_25_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_25_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_25_io_c; // @[Mul.scala 107:21]
  wire [127:0] csa_26_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_26_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_26_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_26_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_26_io_c; // @[Mul.scala 107:21]
  wire [127:0] csa_27_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_27_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_27_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_27_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_27_io_c; // @[Mul.scala 107:21]
  wire [127:0] csa_28_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_28_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_28_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_28_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_28_io_c; // @[Mul.scala 107:21]
  wire [127:0] csa_29_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_29_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_29_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_29_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_29_io_c; // @[Mul.scala 107:21]
  wire [127:0] csa_30_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_30_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_30_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_30_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_30_io_c; // @[Mul.scala 107:21]
  wire [127:0] csa_31_io_x; // @[Mul.scala 107:21]
  wire [127:0] csa_31_io_y; // @[Mul.scala 107:21]
  wire [127:0] csa_31_io_z; // @[Mul.scala 107:21]
  wire [127:0] csa_31_io_s; // @[Mul.scala 107:21]
  wire [127:0] csa_31_io_c; // @[Mul.scala 107:21]
  reg [1:0] state; // @[Mul.scala 62:22]
  reg [64:0] reg_in1; // @[Mul.scala 63:24]
  reg [66:0] reg_in2; // @[Mul.scala 64:24]
  reg [127:0] pp_0; // @[Mul.scala 69:21]
  reg [127:0] pp_1; // @[Mul.scala 69:21]
  reg [127:0] pp_2; // @[Mul.scala 69:21]
  reg [127:0] pp_3; // @[Mul.scala 69:21]
  reg [127:0] pp_4; // @[Mul.scala 69:21]
  reg [127:0] pp_5; // @[Mul.scala 69:21]
  reg [127:0] pp_6; // @[Mul.scala 69:21]
  reg [127:0] pp_7; // @[Mul.scala 69:21]
  reg [127:0] pp_8; // @[Mul.scala 69:21]
  reg [127:0] pp_9; // @[Mul.scala 69:21]
  reg [127:0] pp_10; // @[Mul.scala 69:21]
  reg [127:0] pp_11; // @[Mul.scala 69:21]
  reg [127:0] pp_12; // @[Mul.scala 69:21]
  reg [127:0] pp_13; // @[Mul.scala 69:21]
  reg [127:0] pp_14; // @[Mul.scala 69:21]
  reg [127:0] pp_15; // @[Mul.scala 69:21]
  reg [127:0] pp_16; // @[Mul.scala 69:21]
  reg [127:0] pp_17; // @[Mul.scala 69:21]
  reg [127:0] pp_18; // @[Mul.scala 69:21]
  reg [127:0] pp_19; // @[Mul.scala 69:21]
  reg [127:0] pp_20; // @[Mul.scala 69:21]
  reg [127:0] pp_21; // @[Mul.scala 69:21]
  reg [127:0] pp_22; // @[Mul.scala 69:21]
  reg [127:0] pp_23; // @[Mul.scala 69:21]
  reg [127:0] pp_24; // @[Mul.scala 69:21]
  reg [127:0] pp_25; // @[Mul.scala 69:21]
  reg [127:0] pp_26; // @[Mul.scala 69:21]
  reg [127:0] pp_27; // @[Mul.scala 69:21]
  reg [127:0] pp_28; // @[Mul.scala 69:21]
  reg [127:0] pp_29; // @[Mul.scala 69:21]
  reg [127:0] pp_30; // @[Mul.scala 69:21]
  reg [127:0] pp_31; // @[Mul.scala 69:21]
  reg [127:0] pp_32; // @[Mul.scala 69:21]
  reg [127:0] pp_l2_0; // @[Mul.scala 86:24]
  reg [127:0] pp_l2_1; // @[Mul.scala 86:24]
  reg [127:0] pp_l2_2; // @[Mul.scala 86:24]
  reg [127:0] pp_l2_3; // @[Mul.scala 86:24]
  reg [127:0] pp_l2_4; // @[Mul.scala 86:24]
  reg [127:0] pp_l2_5; // @[Mul.scala 86:24]
  reg [127:0] pp_l2_6; // @[Mul.scala 86:24]
  reg [127:0] pp_l2_7; // @[Mul.scala 86:24]
  wire  c_1 = booth_0_io_c[1]; // @[Mul.scala 98:34]
  wire  c_0 = booth_0_io_c[0]; // @[Mul.scala 99:30]
  wire  c_3 = booth_1_io_c[1]; // @[Mul.scala 98:34]
  wire  c_2 = booth_1_io_c[0]; // @[Mul.scala 99:30]
  wire  c_5 = booth_2_io_c[1]; // @[Mul.scala 98:34]
  wire  c_4 = booth_2_io_c[0]; // @[Mul.scala 99:30]
  wire  c_7 = booth_3_io_c[1]; // @[Mul.scala 98:34]
  wire  c_6 = booth_3_io_c[0]; // @[Mul.scala 99:30]
  wire  c_9 = booth_4_io_c[1]; // @[Mul.scala 98:34]
  wire  c_8 = booth_4_io_c[0]; // @[Mul.scala 99:30]
  wire  c_11 = booth_5_io_c[1]; // @[Mul.scala 98:34]
  wire  c_10 = booth_5_io_c[0]; // @[Mul.scala 99:30]
  wire  c_13 = booth_6_io_c[1]; // @[Mul.scala 98:34]
  wire  c_12 = booth_6_io_c[0]; // @[Mul.scala 99:30]
  wire  c_15 = booth_7_io_c[1]; // @[Mul.scala 98:34]
  wire  c_14 = booth_7_io_c[0]; // @[Mul.scala 99:30]
  wire  c_17 = booth_8_io_c[1]; // @[Mul.scala 98:34]
  wire  c_16 = booth_8_io_c[0]; // @[Mul.scala 99:30]
  wire  c_19 = booth_9_io_c[1]; // @[Mul.scala 98:34]
  wire  c_18 = booth_9_io_c[0]; // @[Mul.scala 99:30]
  wire  c_21 = booth_10_io_c[1]; // @[Mul.scala 98:34]
  wire  c_20 = booth_10_io_c[0]; // @[Mul.scala 99:30]
  wire  c_23 = booth_11_io_c[1]; // @[Mul.scala 98:34]
  wire  c_22 = booth_11_io_c[0]; // @[Mul.scala 99:30]
  wire  c_25 = booth_12_io_c[1]; // @[Mul.scala 98:34]
  wire  c_24 = booth_12_io_c[0]; // @[Mul.scala 99:30]
  wire  c_27 = booth_13_io_c[1]; // @[Mul.scala 98:34]
  wire  c_26 = booth_13_io_c[0]; // @[Mul.scala 99:30]
  wire  c_29 = booth_14_io_c[1]; // @[Mul.scala 98:34]
  wire  c_28 = booth_14_io_c[0]; // @[Mul.scala 99:30]
  wire  c_31 = booth_15_io_c[1]; // @[Mul.scala 98:34]
  wire  c_30 = booth_15_io_c[0]; // @[Mul.scala 99:30]
  wire  c_33 = booth_16_io_c[1]; // @[Mul.scala 98:34]
  wire  c_32 = booth_16_io_c[0]; // @[Mul.scala 99:30]
  wire  c_35 = booth_17_io_c[1]; // @[Mul.scala 98:34]
  wire  c_34 = booth_17_io_c[0]; // @[Mul.scala 99:30]
  wire  c_37 = booth_18_io_c[1]; // @[Mul.scala 98:34]
  wire  c_36 = booth_18_io_c[0]; // @[Mul.scala 99:30]
  wire  c_39 = booth_19_io_c[1]; // @[Mul.scala 98:34]
  wire  c_38 = booth_19_io_c[0]; // @[Mul.scala 99:30]
  wire  c_41 = booth_20_io_c[1]; // @[Mul.scala 98:34]
  wire  c_40 = booth_20_io_c[0]; // @[Mul.scala 99:30]
  wire  c_43 = booth_21_io_c[1]; // @[Mul.scala 98:34]
  wire  c_42 = booth_21_io_c[0]; // @[Mul.scala 99:30]
  wire  c_45 = booth_22_io_c[1]; // @[Mul.scala 98:34]
  wire  c_44 = booth_22_io_c[0]; // @[Mul.scala 99:30]
  wire  c_47 = booth_23_io_c[1]; // @[Mul.scala 98:34]
  wire  c_46 = booth_23_io_c[0]; // @[Mul.scala 99:30]
  wire  c_49 = booth_24_io_c[1]; // @[Mul.scala 98:34]
  wire  c_48 = booth_24_io_c[0]; // @[Mul.scala 99:30]
  wire  c_51 = booth_25_io_c[1]; // @[Mul.scala 98:34]
  wire  c_50 = booth_25_io_c[0]; // @[Mul.scala 99:30]
  wire  c_53 = booth_26_io_c[1]; // @[Mul.scala 98:34]
  wire  c_52 = booth_26_io_c[0]; // @[Mul.scala 99:30]
  wire  c_55 = booth_27_io_c[1]; // @[Mul.scala 98:34]
  wire  c_54 = booth_27_io_c[0]; // @[Mul.scala 99:30]
  wire  c_57 = booth_28_io_c[1]; // @[Mul.scala 98:34]
  wire  c_56 = booth_28_io_c[0]; // @[Mul.scala 99:30]
  wire  c_59 = booth_29_io_c[1]; // @[Mul.scala 98:34]
  wire  c_58 = booth_29_io_c[0]; // @[Mul.scala 99:30]
  wire  c_61 = booth_30_io_c[1]; // @[Mul.scala 98:34]
  wire  c_60 = booth_30_io_c[0]; // @[Mul.scala 99:30]
  wire  c_63 = booth_31_io_c[1]; // @[Mul.scala 98:34]
  wire  c_62 = booth_31_io_c[0]; // @[Mul.scala 99:30]
  wire  c_65 = booth_32_io_c[1]; // @[Mul.scala 98:34]
  wire  c_64 = booth_32_io_c[0]; // @[Mul.scala 99:30]
  reg [127:0] pp33; // @[Mul.scala 103:21]
  reg [127:0] reg_out; // @[Mul.scala 104:24]
  wire [125:0] csa_0_io_y_hi = pp_1[125:0]; // @[Mul.scala 173:27]
  wire [123:0] csa_0_io_z_hi = pp_2[123:0]; // @[Mul.scala 174:27]
  wire [121:0] csa_1_io_x_hi = pp_3[121:0]; // @[Mul.scala 178:33]
  wire [119:0] csa_1_io_y_hi = pp_4[119:0]; // @[Mul.scala 179:37]
  wire [117:0] csa_1_io_z_hi = pp_5[117:0]; // @[Mul.scala 180:37]
  wire [115:0] csa_2_io_x_hi = pp_6[115:0]; // @[Mul.scala 178:33]
  wire [113:0] csa_2_io_y_hi = pp_7[113:0]; // @[Mul.scala 179:37]
  wire [111:0] csa_2_io_z_hi = pp_8[111:0]; // @[Mul.scala 180:37]
  wire [109:0] csa_3_io_x_hi = pp_9[109:0]; // @[Mul.scala 178:33]
  wire [107:0] csa_3_io_y_hi = pp_10[107:0]; // @[Mul.scala 179:37]
  wire [105:0] csa_3_io_z_hi = pp_11[105:0]; // @[Mul.scala 180:37]
  wire [103:0] csa_4_io_x_hi = pp_12[103:0]; // @[Mul.scala 178:33]
  wire [101:0] csa_4_io_y_hi = pp_13[101:0]; // @[Mul.scala 179:37]
  wire [99:0] csa_4_io_z_hi = pp_14[99:0]; // @[Mul.scala 180:37]
  wire [97:0] csa_5_io_x_hi = pp_15[97:0]; // @[Mul.scala 178:33]
  wire [95:0] csa_5_io_y_hi = pp_16[95:0]; // @[Mul.scala 179:37]
  wire [93:0] csa_5_io_z_hi = pp_17[93:0]; // @[Mul.scala 180:37]
  wire [91:0] csa_6_io_x_hi = pp_18[91:0]; // @[Mul.scala 178:33]
  wire [89:0] csa_6_io_y_hi = pp_19[89:0]; // @[Mul.scala 179:37]
  wire [87:0] csa_6_io_z_hi = pp_20[87:0]; // @[Mul.scala 180:37]
  wire [85:0] csa_7_io_x_hi = pp_21[85:0]; // @[Mul.scala 178:33]
  wire [83:0] csa_7_io_y_hi = pp_22[83:0]; // @[Mul.scala 179:37]
  wire [81:0] csa_7_io_z_hi = pp_23[81:0]; // @[Mul.scala 180:37]
  wire [79:0] csa_8_io_x_hi = pp_24[79:0]; // @[Mul.scala 178:33]
  wire [77:0] csa_8_io_y_hi = pp_25[77:0]; // @[Mul.scala 179:37]
  wire [75:0] csa_8_io_z_hi = pp_26[75:0]; // @[Mul.scala 180:37]
  wire [73:0] csa_9_io_x_hi = pp_27[73:0]; // @[Mul.scala 178:33]
  wire [71:0] csa_9_io_y_hi = pp_28[71:0]; // @[Mul.scala 179:37]
  wire [69:0] csa_9_io_z_hi = pp_29[69:0]; // @[Mul.scala 180:37]
  wire [67:0] csa_10_io_x_hi = pp_30[67:0]; // @[Mul.scala 178:33]
  wire [65:0] csa_10_io_y_hi = pp_31[65:0]; // @[Mul.scala 179:37]
  wire [63:0] csa_10_io_z_hi = pp_32[63:0]; // @[Mul.scala 180:37]
  wire [127:0] s_l8 = csa_31_io_s; // @[Mul.scala 167:18 Mul.scala 309:8]
  wire [127:0] c_l8 = csa_31_io_c; // @[Mul.scala 168:18 Mul.scala 310:8]
  wire [127:0] temp_out = s_l8 + c_l8; // @[Mul.scala 311:20]
  wire  _T = 2'h0 == state; // @[Conditional.scala 37:30]
  wire  reg_in2_hi_hi = io_in2[64]; // @[Mul.scala 322:30]
  wire [66:0] _reg_in2_T = {reg_in2_hi_hi,io_in2,1'h0}; // @[Cat.scala 30:58]
  wire  _T_1 = 2'h1 == state; // @[Conditional.scala 37:30]
  wire [7:0] pp33_lo_lo_lo = {c_7,c_6,c_5,c_4,c_3,c_2,c_1,c_0}; // @[Mul.scala 328:41]
  wire [7:0] pp33_lo_hi_lo = {c_23,c_22,c_21,c_20,c_19,c_18,c_17,c_16}; // @[Mul.scala 328:41]
  wire [16:0] pp33_lo_hi = {c_32,c_31,c_30,c_29,c_28,c_27,c_26,c_25,c_24,pp33_lo_hi_lo}; // @[Mul.scala 328:41]
  wire [32:0] pp33_lo = {pp33_lo_hi,c_15,c_14,c_13,c_12,c_11,c_10,c_9,c_8,pp33_lo_lo_lo}; // @[Mul.scala 328:41]
  wire [7:0] pp33_hi_lo_lo = {c_40,c_39,c_38,c_37,c_36,c_35,c_34,c_33}; // @[Mul.scala 328:41]
  wire [7:0] pp33_hi_hi_lo = {c_56,c_55,c_54,c_53,c_52,c_51,c_50,c_49}; // @[Mul.scala 328:41]
  wire [16:0] pp33_hi_hi = {c_65,c_64,c_63,c_62,c_61,c_60,c_59,c_58,c_57,pp33_hi_hi_lo}; // @[Mul.scala 328:41]
  wire [32:0] pp33_hi_1 = {pp33_hi_hi,c_48,c_47,c_46,c_45,c_44,c_43,c_42,c_41,pp33_hi_lo_lo}; // @[Mul.scala 328:41]
  wire [127:0] _pp33_T = {62'h0,pp33_hi_1,pp33_lo}; // @[Cat.scala 30:58]
  wire [127:0] _GEN_5 = booth_0_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_6 = booth_1_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_7 = booth_2_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_8 = booth_3_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_9 = booth_4_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_10 = booth_5_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_11 = booth_6_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_12 = booth_7_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_13 = booth_8_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_14 = booth_9_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_15 = booth_10_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_16 = booth_11_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_17 = booth_12_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_18 = booth_13_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_19 = booth_14_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_20 = booth_15_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_21 = booth_16_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_22 = booth_17_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_23 = booth_18_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_24 = booth_19_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_25 = booth_20_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_26 = booth_21_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_27 = booth_22_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_28 = booth_23_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_29 = booth_24_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_30 = booth_25_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_31 = booth_26_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_32 = booth_27_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_33 = booth_28_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_34 = booth_29_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_35 = booth_30_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_36 = booth_31_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire [127:0] _GEN_37 = booth_32_io_z; // @[Mul.scala 326:20 Mul.scala 330:17 Mul.scala 69:21]
  wire  _T_2 = 2'h2 == state; // @[Conditional.scala 37:30]
  wire [127:0] s_l4_0 = csa_23_io_s; // @[Mul.scala 139:20 Mul.scala 261:11]
  wire [127:0] s_l4_1 = csa_24_io_s; // @[Mul.scala 139:20 Mul.scala 263:11]
  wire [127:0] s_l4_2 = csa_25_io_s; // @[Mul.scala 139:20 Mul.scala 265:11]
  wire [127:0] c_l4_0 = csa_23_io_c; // @[Mul.scala 143:20 Mul.scala 262:11]
  wire [127:0] c_l4_1 = csa_24_io_c; // @[Mul.scala 143:20 Mul.scala 264:11]
  wire [127:0] c_l4_2 = csa_25_io_c; // @[Mul.scala 143:20 Mul.scala 266:11]
  wire [127:0] s_l3_4 = csa_22_io_s; // @[Mul.scala 130:20 Mul.scala 247:11]
  wire [127:0] c_l3_4 = csa_22_io_c; // @[Mul.scala 134:20 Mul.scala 248:11]
  wire  _T_3 = 2'h3 == state; // @[Conditional.scala 37:30]
  wire [1:0] _GEN_49 = _T_3 ? 2'h0 : state; // @[Conditional.scala 39:67 Mul.scala 62:22]
  wire [127:0] _GEN_50 = _T_3 ? temp_out : reg_out; // @[Conditional.scala 39:67 Mul.scala 104:24]
  Booth booth_0 ( // @[Mul.scala 91:23]
    .io_x(booth_0_io_x),
    .io_y(booth_0_io_y),
    .io_z(booth_0_io_z),
    .io_c(booth_0_io_c)
  );
  Booth booth_1 ( // @[Mul.scala 91:23]
    .io_x(booth_1_io_x),
    .io_y(booth_1_io_y),
    .io_z(booth_1_io_z),
    .io_c(booth_1_io_c)
  );
  Booth booth_2 ( // @[Mul.scala 91:23]
    .io_x(booth_2_io_x),
    .io_y(booth_2_io_y),
    .io_z(booth_2_io_z),
    .io_c(booth_2_io_c)
  );
  Booth booth_3 ( // @[Mul.scala 91:23]
    .io_x(booth_3_io_x),
    .io_y(booth_3_io_y),
    .io_z(booth_3_io_z),
    .io_c(booth_3_io_c)
  );
  Booth booth_4 ( // @[Mul.scala 91:23]
    .io_x(booth_4_io_x),
    .io_y(booth_4_io_y),
    .io_z(booth_4_io_z),
    .io_c(booth_4_io_c)
  );
  Booth booth_5 ( // @[Mul.scala 91:23]
    .io_x(booth_5_io_x),
    .io_y(booth_5_io_y),
    .io_z(booth_5_io_z),
    .io_c(booth_5_io_c)
  );
  Booth booth_6 ( // @[Mul.scala 91:23]
    .io_x(booth_6_io_x),
    .io_y(booth_6_io_y),
    .io_z(booth_6_io_z),
    .io_c(booth_6_io_c)
  );
  Booth booth_7 ( // @[Mul.scala 91:23]
    .io_x(booth_7_io_x),
    .io_y(booth_7_io_y),
    .io_z(booth_7_io_z),
    .io_c(booth_7_io_c)
  );
  Booth booth_8 ( // @[Mul.scala 91:23]
    .io_x(booth_8_io_x),
    .io_y(booth_8_io_y),
    .io_z(booth_8_io_z),
    .io_c(booth_8_io_c)
  );
  Booth booth_9 ( // @[Mul.scala 91:23]
    .io_x(booth_9_io_x),
    .io_y(booth_9_io_y),
    .io_z(booth_9_io_z),
    .io_c(booth_9_io_c)
  );
  Booth booth_10 ( // @[Mul.scala 91:23]
    .io_x(booth_10_io_x),
    .io_y(booth_10_io_y),
    .io_z(booth_10_io_z),
    .io_c(booth_10_io_c)
  );
  Booth booth_11 ( // @[Mul.scala 91:23]
    .io_x(booth_11_io_x),
    .io_y(booth_11_io_y),
    .io_z(booth_11_io_z),
    .io_c(booth_11_io_c)
  );
  Booth booth_12 ( // @[Mul.scala 91:23]
    .io_x(booth_12_io_x),
    .io_y(booth_12_io_y),
    .io_z(booth_12_io_z),
    .io_c(booth_12_io_c)
  );
  Booth booth_13 ( // @[Mul.scala 91:23]
    .io_x(booth_13_io_x),
    .io_y(booth_13_io_y),
    .io_z(booth_13_io_z),
    .io_c(booth_13_io_c)
  );
  Booth booth_14 ( // @[Mul.scala 91:23]
    .io_x(booth_14_io_x),
    .io_y(booth_14_io_y),
    .io_z(booth_14_io_z),
    .io_c(booth_14_io_c)
  );
  Booth booth_15 ( // @[Mul.scala 91:23]
    .io_x(booth_15_io_x),
    .io_y(booth_15_io_y),
    .io_z(booth_15_io_z),
    .io_c(booth_15_io_c)
  );
  Booth booth_16 ( // @[Mul.scala 91:23]
    .io_x(booth_16_io_x),
    .io_y(booth_16_io_y),
    .io_z(booth_16_io_z),
    .io_c(booth_16_io_c)
  );
  Booth booth_17 ( // @[Mul.scala 91:23]
    .io_x(booth_17_io_x),
    .io_y(booth_17_io_y),
    .io_z(booth_17_io_z),
    .io_c(booth_17_io_c)
  );
  Booth booth_18 ( // @[Mul.scala 91:23]
    .io_x(booth_18_io_x),
    .io_y(booth_18_io_y),
    .io_z(booth_18_io_z),
    .io_c(booth_18_io_c)
  );
  Booth booth_19 ( // @[Mul.scala 91:23]
    .io_x(booth_19_io_x),
    .io_y(booth_19_io_y),
    .io_z(booth_19_io_z),
    .io_c(booth_19_io_c)
  );
  Booth booth_20 ( // @[Mul.scala 91:23]
    .io_x(booth_20_io_x),
    .io_y(booth_20_io_y),
    .io_z(booth_20_io_z),
    .io_c(booth_20_io_c)
  );
  Booth booth_21 ( // @[Mul.scala 91:23]
    .io_x(booth_21_io_x),
    .io_y(booth_21_io_y),
    .io_z(booth_21_io_z),
    .io_c(booth_21_io_c)
  );
  Booth booth_22 ( // @[Mul.scala 91:23]
    .io_x(booth_22_io_x),
    .io_y(booth_22_io_y),
    .io_z(booth_22_io_z),
    .io_c(booth_22_io_c)
  );
  Booth booth_23 ( // @[Mul.scala 91:23]
    .io_x(booth_23_io_x),
    .io_y(booth_23_io_y),
    .io_z(booth_23_io_z),
    .io_c(booth_23_io_c)
  );
  Booth booth_24 ( // @[Mul.scala 91:23]
    .io_x(booth_24_io_x),
    .io_y(booth_24_io_y),
    .io_z(booth_24_io_z),
    .io_c(booth_24_io_c)
  );
  Booth booth_25 ( // @[Mul.scala 91:23]
    .io_x(booth_25_io_x),
    .io_y(booth_25_io_y),
    .io_z(booth_25_io_z),
    .io_c(booth_25_io_c)
  );
  Booth booth_26 ( // @[Mul.scala 91:23]
    .io_x(booth_26_io_x),
    .io_y(booth_26_io_y),
    .io_z(booth_26_io_z),
    .io_c(booth_26_io_c)
  );
  Booth booth_27 ( // @[Mul.scala 91:23]
    .io_x(booth_27_io_x),
    .io_y(booth_27_io_y),
    .io_z(booth_27_io_z),
    .io_c(booth_27_io_c)
  );
  Booth booth_28 ( // @[Mul.scala 91:23]
    .io_x(booth_28_io_x),
    .io_y(booth_28_io_y),
    .io_z(booth_28_io_z),
    .io_c(booth_28_io_c)
  );
  Booth booth_29 ( // @[Mul.scala 91:23]
    .io_x(booth_29_io_x),
    .io_y(booth_29_io_y),
    .io_z(booth_29_io_z),
    .io_c(booth_29_io_c)
  );
  Booth booth_30 ( // @[Mul.scala 91:23]
    .io_x(booth_30_io_x),
    .io_y(booth_30_io_y),
    .io_z(booth_30_io_z),
    .io_c(booth_30_io_c)
  );
  Booth booth_31 ( // @[Mul.scala 91:23]
    .io_x(booth_31_io_x),
    .io_y(booth_31_io_y),
    .io_z(booth_31_io_z),
    .io_c(booth_31_io_c)
  );
  Booth booth_32 ( // @[Mul.scala 91:23]
    .io_x(booth_32_io_x),
    .io_y(booth_32_io_y),
    .io_z(booth_32_io_z),
    .io_c(booth_32_io_c)
  );
  Csa csa_0 ( // @[Mul.scala 107:21]
    .io_x(csa_0_io_x),
    .io_y(csa_0_io_y),
    .io_z(csa_0_io_z),
    .io_s(csa_0_io_s),
    .io_c(csa_0_io_c)
  );
  Csa csa_1 ( // @[Mul.scala 107:21]
    .io_x(csa_1_io_x),
    .io_y(csa_1_io_y),
    .io_z(csa_1_io_z),
    .io_s(csa_1_io_s),
    .io_c(csa_1_io_c)
  );
  Csa csa_2 ( // @[Mul.scala 107:21]
    .io_x(csa_2_io_x),
    .io_y(csa_2_io_y),
    .io_z(csa_2_io_z),
    .io_s(csa_2_io_s),
    .io_c(csa_2_io_c)
  );
  Csa csa_3 ( // @[Mul.scala 107:21]
    .io_x(csa_3_io_x),
    .io_y(csa_3_io_y),
    .io_z(csa_3_io_z),
    .io_s(csa_3_io_s),
    .io_c(csa_3_io_c)
  );
  Csa csa_4 ( // @[Mul.scala 107:21]
    .io_x(csa_4_io_x),
    .io_y(csa_4_io_y),
    .io_z(csa_4_io_z),
    .io_s(csa_4_io_s),
    .io_c(csa_4_io_c)
  );
  Csa csa_5 ( // @[Mul.scala 107:21]
    .io_x(csa_5_io_x),
    .io_y(csa_5_io_y),
    .io_z(csa_5_io_z),
    .io_s(csa_5_io_s),
    .io_c(csa_5_io_c)
  );
  Csa csa_6 ( // @[Mul.scala 107:21]
    .io_x(csa_6_io_x),
    .io_y(csa_6_io_y),
    .io_z(csa_6_io_z),
    .io_s(csa_6_io_s),
    .io_c(csa_6_io_c)
  );
  Csa csa_7 ( // @[Mul.scala 107:21]
    .io_x(csa_7_io_x),
    .io_y(csa_7_io_y),
    .io_z(csa_7_io_z),
    .io_s(csa_7_io_s),
    .io_c(csa_7_io_c)
  );
  Csa csa_8 ( // @[Mul.scala 107:21]
    .io_x(csa_8_io_x),
    .io_y(csa_8_io_y),
    .io_z(csa_8_io_z),
    .io_s(csa_8_io_s),
    .io_c(csa_8_io_c)
  );
  Csa csa_9 ( // @[Mul.scala 107:21]
    .io_x(csa_9_io_x),
    .io_y(csa_9_io_y),
    .io_z(csa_9_io_z),
    .io_s(csa_9_io_s),
    .io_c(csa_9_io_c)
  );
  Csa csa_10 ( // @[Mul.scala 107:21]
    .io_x(csa_10_io_x),
    .io_y(csa_10_io_y),
    .io_z(csa_10_io_z),
    .io_s(csa_10_io_s),
    .io_c(csa_10_io_c)
  );
  Csa csa_11 ( // @[Mul.scala 107:21]
    .io_x(csa_11_io_x),
    .io_y(csa_11_io_y),
    .io_z(csa_11_io_z),
    .io_s(csa_11_io_s),
    .io_c(csa_11_io_c)
  );
  Csa csa_12 ( // @[Mul.scala 107:21]
    .io_x(csa_12_io_x),
    .io_y(csa_12_io_y),
    .io_z(csa_12_io_z),
    .io_s(csa_12_io_s),
    .io_c(csa_12_io_c)
  );
  Csa csa_13 ( // @[Mul.scala 107:21]
    .io_x(csa_13_io_x),
    .io_y(csa_13_io_y),
    .io_z(csa_13_io_z),
    .io_s(csa_13_io_s),
    .io_c(csa_13_io_c)
  );
  Csa csa_14 ( // @[Mul.scala 107:21]
    .io_x(csa_14_io_x),
    .io_y(csa_14_io_y),
    .io_z(csa_14_io_z),
    .io_s(csa_14_io_s),
    .io_c(csa_14_io_c)
  );
  Csa csa_15 ( // @[Mul.scala 107:21]
    .io_x(csa_15_io_x),
    .io_y(csa_15_io_y),
    .io_z(csa_15_io_z),
    .io_s(csa_15_io_s),
    .io_c(csa_15_io_c)
  );
  Csa csa_16 ( // @[Mul.scala 107:21]
    .io_x(csa_16_io_x),
    .io_y(csa_16_io_y),
    .io_z(csa_16_io_z),
    .io_s(csa_16_io_s),
    .io_c(csa_16_io_c)
  );
  Csa csa_17 ( // @[Mul.scala 107:21]
    .io_x(csa_17_io_x),
    .io_y(csa_17_io_y),
    .io_z(csa_17_io_z),
    .io_s(csa_17_io_s),
    .io_c(csa_17_io_c)
  );
  Csa csa_18 ( // @[Mul.scala 107:21]
    .io_x(csa_18_io_x),
    .io_y(csa_18_io_y),
    .io_z(csa_18_io_z),
    .io_s(csa_18_io_s),
    .io_c(csa_18_io_c)
  );
  Csa csa_19 ( // @[Mul.scala 107:21]
    .io_x(csa_19_io_x),
    .io_y(csa_19_io_y),
    .io_z(csa_19_io_z),
    .io_s(csa_19_io_s),
    .io_c(csa_19_io_c)
  );
  Csa csa_20 ( // @[Mul.scala 107:21]
    .io_x(csa_20_io_x),
    .io_y(csa_20_io_y),
    .io_z(csa_20_io_z),
    .io_s(csa_20_io_s),
    .io_c(csa_20_io_c)
  );
  Csa csa_21 ( // @[Mul.scala 107:21]
    .io_x(csa_21_io_x),
    .io_y(csa_21_io_y),
    .io_z(csa_21_io_z),
    .io_s(csa_21_io_s),
    .io_c(csa_21_io_c)
  );
  Csa csa_22 ( // @[Mul.scala 107:21]
    .io_x(csa_22_io_x),
    .io_y(csa_22_io_y),
    .io_z(csa_22_io_z),
    .io_s(csa_22_io_s),
    .io_c(csa_22_io_c)
  );
  Csa csa_23 ( // @[Mul.scala 107:21]
    .io_x(csa_23_io_x),
    .io_y(csa_23_io_y),
    .io_z(csa_23_io_z),
    .io_s(csa_23_io_s),
    .io_c(csa_23_io_c)
  );
  Csa csa_24 ( // @[Mul.scala 107:21]
    .io_x(csa_24_io_x),
    .io_y(csa_24_io_y),
    .io_z(csa_24_io_z),
    .io_s(csa_24_io_s),
    .io_c(csa_24_io_c)
  );
  Csa csa_25 ( // @[Mul.scala 107:21]
    .io_x(csa_25_io_x),
    .io_y(csa_25_io_y),
    .io_z(csa_25_io_z),
    .io_s(csa_25_io_s),
    .io_c(csa_25_io_c)
  );
  Csa csa_26 ( // @[Mul.scala 107:21]
    .io_x(csa_26_io_x),
    .io_y(csa_26_io_y),
    .io_z(csa_26_io_z),
    .io_s(csa_26_io_s),
    .io_c(csa_26_io_c)
  );
  Csa csa_27 ( // @[Mul.scala 107:21]
    .io_x(csa_27_io_x),
    .io_y(csa_27_io_y),
    .io_z(csa_27_io_z),
    .io_s(csa_27_io_s),
    .io_c(csa_27_io_c)
  );
  Csa csa_28 ( // @[Mul.scala 107:21]
    .io_x(csa_28_io_x),
    .io_y(csa_28_io_y),
    .io_z(csa_28_io_z),
    .io_s(csa_28_io_s),
    .io_c(csa_28_io_c)
  );
  Csa csa_29 ( // @[Mul.scala 107:21]
    .io_x(csa_29_io_x),
    .io_y(csa_29_io_y),
    .io_z(csa_29_io_z),
    .io_s(csa_29_io_s),
    .io_c(csa_29_io_c)
  );
  Csa csa_30 ( // @[Mul.scala 107:21]
    .io_x(csa_30_io_x),
    .io_y(csa_30_io_y),
    .io_z(csa_30_io_z),
    .io_s(csa_30_io_s),
    .io_c(csa_30_io_c)
  );
  Csa csa_31 ( // @[Mul.scala 107:21]
    .io_x(csa_31_io_x),
    .io_y(csa_31_io_y),
    .io_z(csa_31_io_z),
    .io_s(csa_31_io_s),
    .io_c(csa_31_io_c)
  );
  assign io_out1 = reg_out[63:0]; // @[Mul.scala 314:21]
  assign io_out2 = reg_out[127:64]; // @[Mul.scala 315:21]
  assign io_mul_ready = state == 2'h0; // @[Mul.scala 313:26]
  assign booth_0_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_0_io_y = reg_in2[2:0]; // @[Mul.scala 97:29]
  assign booth_1_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_1_io_y = reg_in2[4:2]; // @[Mul.scala 97:29]
  assign booth_2_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_2_io_y = reg_in2[6:4]; // @[Mul.scala 97:29]
  assign booth_3_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_3_io_y = reg_in2[8:6]; // @[Mul.scala 97:29]
  assign booth_4_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_4_io_y = reg_in2[10:8]; // @[Mul.scala 97:29]
  assign booth_5_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_5_io_y = reg_in2[12:10]; // @[Mul.scala 97:29]
  assign booth_6_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_6_io_y = reg_in2[14:12]; // @[Mul.scala 97:29]
  assign booth_7_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_7_io_y = reg_in2[16:14]; // @[Mul.scala 97:29]
  assign booth_8_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_8_io_y = reg_in2[18:16]; // @[Mul.scala 97:29]
  assign booth_9_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_9_io_y = reg_in2[20:18]; // @[Mul.scala 97:29]
  assign booth_10_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_10_io_y = reg_in2[22:20]; // @[Mul.scala 97:29]
  assign booth_11_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_11_io_y = reg_in2[24:22]; // @[Mul.scala 97:29]
  assign booth_12_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_12_io_y = reg_in2[26:24]; // @[Mul.scala 97:29]
  assign booth_13_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_13_io_y = reg_in2[28:26]; // @[Mul.scala 97:29]
  assign booth_14_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_14_io_y = reg_in2[30:28]; // @[Mul.scala 97:29]
  assign booth_15_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_15_io_y = reg_in2[32:30]; // @[Mul.scala 97:29]
  assign booth_16_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_16_io_y = reg_in2[34:32]; // @[Mul.scala 97:29]
  assign booth_17_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_17_io_y = reg_in2[36:34]; // @[Mul.scala 97:29]
  assign booth_18_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_18_io_y = reg_in2[38:36]; // @[Mul.scala 97:29]
  assign booth_19_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_19_io_y = reg_in2[40:38]; // @[Mul.scala 97:29]
  assign booth_20_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_20_io_y = reg_in2[42:40]; // @[Mul.scala 97:29]
  assign booth_21_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_21_io_y = reg_in2[44:42]; // @[Mul.scala 97:29]
  assign booth_22_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_22_io_y = reg_in2[46:44]; // @[Mul.scala 97:29]
  assign booth_23_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_23_io_y = reg_in2[48:46]; // @[Mul.scala 97:29]
  assign booth_24_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_24_io_y = reg_in2[50:48]; // @[Mul.scala 97:29]
  assign booth_25_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_25_io_y = reg_in2[52:50]; // @[Mul.scala 97:29]
  assign booth_26_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_26_io_y = reg_in2[54:52]; // @[Mul.scala 97:29]
  assign booth_27_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_27_io_y = reg_in2[56:54]; // @[Mul.scala 97:29]
  assign booth_28_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_28_io_y = reg_in2[58:56]; // @[Mul.scala 97:29]
  assign booth_29_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_29_io_y = reg_in2[60:58]; // @[Mul.scala 97:29]
  assign booth_30_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_30_io_y = reg_in2[62:60]; // @[Mul.scala 97:29]
  assign booth_31_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_31_io_y = reg_in2[64:62]; // @[Mul.scala 97:29]
  assign booth_32_io_x = reg_in1; // @[Mul.scala 96:19]
  assign booth_32_io_y = reg_in2[66:64]; // @[Mul.scala 97:29]
  assign csa_0_io_x = pp_0; // @[Mul.scala 172:23]
  assign csa_0_io_y = {csa_0_io_y_hi,2'h0}; // @[Cat.scala 30:58]
  assign csa_0_io_z = {csa_0_io_z_hi,4'h0}; // @[Cat.scala 30:58]
  assign csa_1_io_x = {csa_1_io_x_hi,6'h0}; // @[Cat.scala 30:58]
  assign csa_1_io_y = {csa_1_io_y_hi,8'h0}; // @[Cat.scala 30:58]
  assign csa_1_io_z = {csa_1_io_z_hi,10'h0}; // @[Cat.scala 30:58]
  assign csa_2_io_x = {csa_2_io_x_hi,12'h0}; // @[Cat.scala 30:58]
  assign csa_2_io_y = {csa_2_io_y_hi,14'h0}; // @[Cat.scala 30:58]
  assign csa_2_io_z = {csa_2_io_z_hi,16'h0}; // @[Cat.scala 30:58]
  assign csa_3_io_x = {csa_3_io_x_hi,18'h0}; // @[Cat.scala 30:58]
  assign csa_3_io_y = {csa_3_io_y_hi,20'h0}; // @[Cat.scala 30:58]
  assign csa_3_io_z = {csa_3_io_z_hi,22'h0}; // @[Cat.scala 30:58]
  assign csa_4_io_x = {csa_4_io_x_hi,24'h0}; // @[Cat.scala 30:58]
  assign csa_4_io_y = {csa_4_io_y_hi,26'h0}; // @[Cat.scala 30:58]
  assign csa_4_io_z = {csa_4_io_z_hi,28'h0}; // @[Cat.scala 30:58]
  assign csa_5_io_x = {csa_5_io_x_hi,30'h0}; // @[Cat.scala 30:58]
  assign csa_5_io_y = {csa_5_io_y_hi,32'h0}; // @[Cat.scala 30:58]
  assign csa_5_io_z = {csa_5_io_z_hi,34'h0}; // @[Cat.scala 30:58]
  assign csa_6_io_x = {csa_6_io_x_hi,36'h0}; // @[Cat.scala 30:58]
  assign csa_6_io_y = {csa_6_io_y_hi,38'h0}; // @[Cat.scala 30:58]
  assign csa_6_io_z = {csa_6_io_z_hi,40'h0}; // @[Cat.scala 30:58]
  assign csa_7_io_x = {csa_7_io_x_hi,42'h0}; // @[Cat.scala 30:58]
  assign csa_7_io_y = {csa_7_io_y_hi,44'h0}; // @[Cat.scala 30:58]
  assign csa_7_io_z = {csa_7_io_z_hi,46'h0}; // @[Cat.scala 30:58]
  assign csa_8_io_x = {csa_8_io_x_hi,48'h0}; // @[Cat.scala 30:58]
  assign csa_8_io_y = {csa_8_io_y_hi,50'h0}; // @[Cat.scala 30:58]
  assign csa_8_io_z = {csa_8_io_z_hi,52'h0}; // @[Cat.scala 30:58]
  assign csa_9_io_x = {csa_9_io_x_hi,54'h0}; // @[Cat.scala 30:58]
  assign csa_9_io_y = {csa_9_io_y_hi,56'h0}; // @[Cat.scala 30:58]
  assign csa_9_io_z = {csa_9_io_z_hi,58'h0}; // @[Cat.scala 30:58]
  assign csa_10_io_x = {csa_10_io_x_hi,60'h0}; // @[Cat.scala 30:58]
  assign csa_10_io_y = {csa_10_io_y_hi,62'h0}; // @[Cat.scala 30:58]
  assign csa_10_io_z = {csa_10_io_z_hi,64'h0}; // @[Cat.scala 30:58]
  assign csa_11_io_x = csa_0_io_s; // @[Mul.scala 112:20 Mul.scala 175:11]
  assign csa_11_io_y = csa_0_io_c; // @[Mul.scala 116:20 Mul.scala 176:11]
  assign csa_11_io_z = csa_1_io_c; // @[Mul.scala 116:20 Mul.scala 182:13]
  assign csa_12_io_x = csa_1_io_s; // @[Mul.scala 112:20 Mul.scala 181:13]
  assign csa_12_io_y = csa_2_io_c; // @[Mul.scala 116:20 Mul.scala 182:13]
  assign csa_12_io_z = csa_2_io_s; // @[Mul.scala 112:20 Mul.scala 181:13]
  assign csa_13_io_x = csa_3_io_s; // @[Mul.scala 112:20 Mul.scala 181:13]
  assign csa_13_io_y = csa_3_io_c; // @[Mul.scala 116:20 Mul.scala 182:13]
  assign csa_13_io_z = csa_4_io_c; // @[Mul.scala 116:20 Mul.scala 182:13]
  assign csa_14_io_x = csa_4_io_s; // @[Mul.scala 112:20 Mul.scala 181:13]
  assign csa_14_io_y = csa_5_io_c; // @[Mul.scala 116:20 Mul.scala 182:13]
  assign csa_14_io_z = csa_5_io_s; // @[Mul.scala 112:20 Mul.scala 181:13]
  assign csa_15_io_x = csa_6_io_s; // @[Mul.scala 112:20 Mul.scala 181:13]
  assign csa_15_io_y = csa_6_io_c; // @[Mul.scala 116:20 Mul.scala 182:13]
  assign csa_15_io_z = csa_7_io_c; // @[Mul.scala 116:20 Mul.scala 182:13]
  assign csa_16_io_x = csa_7_io_s; // @[Mul.scala 112:20 Mul.scala 181:13]
  assign csa_16_io_y = csa_8_io_c; // @[Mul.scala 116:20 Mul.scala 182:13]
  assign csa_16_io_z = csa_8_io_s; // @[Mul.scala 112:20 Mul.scala 181:13]
  assign csa_17_io_x = csa_9_io_s; // @[Mul.scala 112:20 Mul.scala 181:13]
  assign csa_17_io_y = csa_9_io_c; // @[Mul.scala 116:20 Mul.scala 182:13]
  assign csa_17_io_z = pp33; // @[Mul.scala 205:16]
  assign csa_18_io_x = csa_10_io_s; // @[Mul.scala 112:20 Mul.scala 181:13]
  assign csa_18_io_y = csa_10_io_c; // @[Mul.scala 116:20 Mul.scala 182:13]
  assign csa_18_io_z = csa_11_io_s; // @[Mul.scala 121:20 Mul.scala 207:11]
  assign csa_19_io_x = csa_11_io_c; // @[Mul.scala 125:20 Mul.scala 208:11]
  assign csa_19_io_y = csa_12_io_s; // @[Mul.scala 121:20 Mul.scala 209:11]
  assign csa_19_io_z = csa_12_io_c; // @[Mul.scala 125:20 Mul.scala 210:11]
  assign csa_20_io_x = csa_13_io_s; // @[Mul.scala 121:20 Mul.scala 211:11]
  assign csa_20_io_y = csa_13_io_c; // @[Mul.scala 125:20 Mul.scala 212:11]
  assign csa_20_io_z = csa_14_io_s; // @[Mul.scala 121:20 Mul.scala 213:11]
  assign csa_21_io_x = csa_14_io_c; // @[Mul.scala 125:20 Mul.scala 214:11]
  assign csa_21_io_y = csa_15_io_s; // @[Mul.scala 121:20 Mul.scala 215:11]
  assign csa_21_io_z = csa_15_io_c; // @[Mul.scala 125:20 Mul.scala 216:11]
  assign csa_22_io_x = csa_16_io_s; // @[Mul.scala 121:20 Mul.scala 217:11]
  assign csa_22_io_y = csa_16_io_c; // @[Mul.scala 125:20 Mul.scala 218:11]
  assign csa_22_io_z = csa_17_io_s; // @[Mul.scala 121:20 Mul.scala 219:11]
  assign csa_23_io_x = csa_17_io_c; // @[Mul.scala 125:20 Mul.scala 220:11]
  assign csa_23_io_y = csa_18_io_s; // @[Mul.scala 130:20 Mul.scala 239:11]
  assign csa_23_io_z = csa_18_io_c; // @[Mul.scala 134:20 Mul.scala 240:11]
  assign csa_24_io_x = csa_19_io_s; // @[Mul.scala 130:20 Mul.scala 241:11]
  assign csa_24_io_y = csa_19_io_c; // @[Mul.scala 134:20 Mul.scala 242:11]
  assign csa_24_io_z = csa_20_io_s; // @[Mul.scala 130:20 Mul.scala 243:11]
  assign csa_25_io_x = csa_20_io_c; // @[Mul.scala 134:20 Mul.scala 244:11]
  assign csa_25_io_y = csa_21_io_s; // @[Mul.scala 130:20 Mul.scala 245:11]
  assign csa_25_io_z = csa_21_io_c; // @[Mul.scala 134:20 Mul.scala 246:11]
  assign csa_26_io_x = pp_l2_0; // @[Mul.scala 271:16]
  assign csa_26_io_y = pp_l2_1; // @[Mul.scala 272:16]
  assign csa_26_io_z = pp_l2_2; // @[Mul.scala 273:16]
  assign csa_27_io_x = pp_l2_3; // @[Mul.scala 274:16]
  assign csa_27_io_y = pp_l2_4; // @[Mul.scala 275:16]
  assign csa_27_io_z = pp_l2_5; // @[Mul.scala 276:16]
  assign csa_28_io_x = pp_l2_6; // @[Mul.scala 284:16]
  assign csa_28_io_y = pp_l2_7; // @[Mul.scala 285:16]
  assign csa_28_io_z = csa_26_io_s; // @[Mul.scala 148:20 Mul.scala 278:11]
  assign csa_29_io_x = csa_27_io_s; // @[Mul.scala 148:20 Mul.scala 280:11]
  assign csa_29_io_y = csa_26_io_c; // @[Mul.scala 152:20 Mul.scala 279:11]
  assign csa_29_io_z = csa_27_io_c; // @[Mul.scala 152:20 Mul.scala 281:11]
  assign csa_30_io_x = csa_28_io_s; // @[Mul.scala 157:20 Mul.scala 291:11]
  assign csa_30_io_y = csa_29_io_s; // @[Mul.scala 157:20 Mul.scala 293:11]
  assign csa_30_io_z = csa_28_io_c; // @[Mul.scala 161:20 Mul.scala 292:11]
  assign csa_31_io_x = csa_30_io_s; // @[Mul.scala 165:18 Mul.scala 301:8]
  assign csa_31_io_y = csa_30_io_c; // @[Mul.scala 166:18 Mul.scala 302:8]
  assign csa_31_io_z = csa_29_io_c; // @[Mul.scala 161:20 Mul.scala 294:11]
  always @(posedge clock) begin
    if (reset) begin // @[Mul.scala 62:22]
      state <= 2'h0; // @[Mul.scala 62:22]
    end else if (_T) begin // @[Conditional.scala 40:58]
      if (io_mul_valid) begin // @[Mul.scala 319:26]
        state <= 2'h1; // @[Mul.scala 320:15]
      end
    end else if (_T_1) begin // @[Conditional.scala 39:67]
      state <= 2'h2;
    end else if (_T_2) begin // @[Conditional.scala 39:67]
      state <= 2'h3;
    end else begin
      state <= _GEN_49;
    end
    if (reset) begin // @[Mul.scala 63:24]
      reg_in1 <= 65'h0; // @[Mul.scala 63:24]
    end else if (_T) begin // @[Conditional.scala 40:58]
      if (io_mul_valid) begin // @[Mul.scala 319:26]
        reg_in1 <= io_in1; // @[Mul.scala 321:17]
      end
    end
    if (reset) begin // @[Mul.scala 64:24]
      reg_in2 <= 67'h0; // @[Mul.scala 64:24]
    end else if (_T) begin // @[Conditional.scala 40:58]
      if (io_mul_valid) begin // @[Mul.scala 319:26]
        reg_in2 <= _reg_in2_T; // @[Mul.scala 322:17]
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_0 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_0 <= _GEN_5;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_1 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_1 <= _GEN_6;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_2 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_2 <= _GEN_7;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_3 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_3 <= _GEN_8;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_4 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_4 <= _GEN_9;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_5 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_5 <= _GEN_10;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_6 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_6 <= _GEN_11;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_7 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_7 <= _GEN_12;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_8 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_8 <= _GEN_13;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_9 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_9 <= _GEN_14;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_10 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_10 <= _GEN_15;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_11 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_11 <= _GEN_16;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_12 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_12 <= _GEN_17;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_13 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_13 <= _GEN_18;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_14 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_14 <= _GEN_19;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_15 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_15 <= _GEN_20;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_16 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_16 <= _GEN_21;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_17 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_17 <= _GEN_22;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_18 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_18 <= _GEN_23;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_19 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_19 <= _GEN_24;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_20 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_20 <= _GEN_25;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_21 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_21 <= _GEN_26;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_22 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_22 <= _GEN_27;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_23 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_23 <= _GEN_28;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_24 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_24 <= _GEN_29;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_25 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_25 <= _GEN_30;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_26 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_26 <= _GEN_31;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_27 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_27 <= _GEN_32;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_28 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_28 <= _GEN_33;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_29 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_29 <= _GEN_34;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_30 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_30 <= _GEN_35;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_31 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_31 <= _GEN_36;
      end
    end
    if (reset) begin // @[Mul.scala 69:21]
      pp_32 <= 128'h0; // @[Mul.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_32 <= _GEN_37;
      end
    end
    if (reset) begin // @[Mul.scala 86:24]
      pp_l2_0 <= 128'h0; // @[Mul.scala 86:24]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (!(_T_1)) begin // @[Conditional.scala 39:67]
        if (_T_2) begin // @[Conditional.scala 39:67]
          pp_l2_0 <= s_l4_0;
        end
      end
    end
    if (reset) begin // @[Mul.scala 86:24]
      pp_l2_1 <= 128'h0; // @[Mul.scala 86:24]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (!(_T_1)) begin // @[Conditional.scala 39:67]
        if (_T_2) begin // @[Conditional.scala 39:67]
          pp_l2_1 <= s_l4_1;
        end
      end
    end
    if (reset) begin // @[Mul.scala 86:24]
      pp_l2_2 <= 128'h0; // @[Mul.scala 86:24]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (!(_T_1)) begin // @[Conditional.scala 39:67]
        if (_T_2) begin // @[Conditional.scala 39:67]
          pp_l2_2 <= s_l4_2;
        end
      end
    end
    if (reset) begin // @[Mul.scala 86:24]
      pp_l2_3 <= 128'h0; // @[Mul.scala 86:24]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (!(_T_1)) begin // @[Conditional.scala 39:67]
        if (_T_2) begin // @[Conditional.scala 39:67]
          pp_l2_3 <= c_l4_0;
        end
      end
    end
    if (reset) begin // @[Mul.scala 86:24]
      pp_l2_4 <= 128'h0; // @[Mul.scala 86:24]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (!(_T_1)) begin // @[Conditional.scala 39:67]
        if (_T_2) begin // @[Conditional.scala 39:67]
          pp_l2_4 <= c_l4_1;
        end
      end
    end
    if (reset) begin // @[Mul.scala 86:24]
      pp_l2_5 <= 128'h0; // @[Mul.scala 86:24]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (!(_T_1)) begin // @[Conditional.scala 39:67]
        if (_T_2) begin // @[Conditional.scala 39:67]
          pp_l2_5 <= c_l4_2;
        end
      end
    end
    if (reset) begin // @[Mul.scala 86:24]
      pp_l2_6 <= 128'h0; // @[Mul.scala 86:24]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (!(_T_1)) begin // @[Conditional.scala 39:67]
        if (_T_2) begin // @[Conditional.scala 39:67]
          pp_l2_6 <= s_l3_4;
        end
      end
    end
    if (reset) begin // @[Mul.scala 86:24]
      pp_l2_7 <= 128'h0; // @[Mul.scala 86:24]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (!(_T_1)) begin // @[Conditional.scala 39:67]
        if (_T_2) begin // @[Conditional.scala 39:67]
          pp_l2_7 <= c_l3_4;
        end
      end
    end
    if (reset) begin // @[Mul.scala 103:21]
      pp33 <= 128'h0; // @[Mul.scala 103:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp33 <= _pp33_T;
      end
    end
    if (reset) begin // @[Mul.scala 104:24]
      reg_out <= 128'h0; // @[Mul.scala 104:24]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (!(_T_1)) begin // @[Conditional.scala 39:67]
        if (!(_T_2)) begin // @[Conditional.scala 39:67]
          reg_out <= _GEN_50;
        end
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  state = _RAND_0[1:0];
  _RAND_1 = {3{`RANDOM}};
  reg_in1 = _RAND_1[64:0];
  _RAND_2 = {3{`RANDOM}};
  reg_in2 = _RAND_2[66:0];
  _RAND_3 = {4{`RANDOM}};
  pp_0 = _RAND_3[127:0];
  _RAND_4 = {4{`RANDOM}};
  pp_1 = _RAND_4[127:0];
  _RAND_5 = {4{`RANDOM}};
  pp_2 = _RAND_5[127:0];
  _RAND_6 = {4{`RANDOM}};
  pp_3 = _RAND_6[127:0];
  _RAND_7 = {4{`RANDOM}};
  pp_4 = _RAND_7[127:0];
  _RAND_8 = {4{`RANDOM}};
  pp_5 = _RAND_8[127:0];
  _RAND_9 = {4{`RANDOM}};
  pp_6 = _RAND_9[127:0];
  _RAND_10 = {4{`RANDOM}};
  pp_7 = _RAND_10[127:0];
  _RAND_11 = {4{`RANDOM}};
  pp_8 = _RAND_11[127:0];
  _RAND_12 = {4{`RANDOM}};
  pp_9 = _RAND_12[127:0];
  _RAND_13 = {4{`RANDOM}};
  pp_10 = _RAND_13[127:0];
  _RAND_14 = {4{`RANDOM}};
  pp_11 = _RAND_14[127:0];
  _RAND_15 = {4{`RANDOM}};
  pp_12 = _RAND_15[127:0];
  _RAND_16 = {4{`RANDOM}};
  pp_13 = _RAND_16[127:0];
  _RAND_17 = {4{`RANDOM}};
  pp_14 = _RAND_17[127:0];
  _RAND_18 = {4{`RANDOM}};
  pp_15 = _RAND_18[127:0];
  _RAND_19 = {4{`RANDOM}};
  pp_16 = _RAND_19[127:0];
  _RAND_20 = {4{`RANDOM}};
  pp_17 = _RAND_20[127:0];
  _RAND_21 = {4{`RANDOM}};
  pp_18 = _RAND_21[127:0];
  _RAND_22 = {4{`RANDOM}};
  pp_19 = _RAND_22[127:0];
  _RAND_23 = {4{`RANDOM}};
  pp_20 = _RAND_23[127:0];
  _RAND_24 = {4{`RANDOM}};
  pp_21 = _RAND_24[127:0];
  _RAND_25 = {4{`RANDOM}};
  pp_22 = _RAND_25[127:0];
  _RAND_26 = {4{`RANDOM}};
  pp_23 = _RAND_26[127:0];
  _RAND_27 = {4{`RANDOM}};
  pp_24 = _RAND_27[127:0];
  _RAND_28 = {4{`RANDOM}};
  pp_25 = _RAND_28[127:0];
  _RAND_29 = {4{`RANDOM}};
  pp_26 = _RAND_29[127:0];
  _RAND_30 = {4{`RANDOM}};
  pp_27 = _RAND_30[127:0];
  _RAND_31 = {4{`RANDOM}};
  pp_28 = _RAND_31[127:0];
  _RAND_32 = {4{`RANDOM}};
  pp_29 = _RAND_32[127:0];
  _RAND_33 = {4{`RANDOM}};
  pp_30 = _RAND_33[127:0];
  _RAND_34 = {4{`RANDOM}};
  pp_31 = _RAND_34[127:0];
  _RAND_35 = {4{`RANDOM}};
  pp_32 = _RAND_35[127:0];
  _RAND_36 = {4{`RANDOM}};
  pp_l2_0 = _RAND_36[127:0];
  _RAND_37 = {4{`RANDOM}};
  pp_l2_1 = _RAND_37[127:0];
  _RAND_38 = {4{`RANDOM}};
  pp_l2_2 = _RAND_38[127:0];
  _RAND_39 = {4{`RANDOM}};
  pp_l2_3 = _RAND_39[127:0];
  _RAND_40 = {4{`RANDOM}};
  pp_l2_4 = _RAND_40[127:0];
  _RAND_41 = {4{`RANDOM}};
  pp_l2_5 = _RAND_41[127:0];
  _RAND_42 = {4{`RANDOM}};
  pp_l2_6 = _RAND_42[127:0];
  _RAND_43 = {4{`RANDOM}};
  pp_l2_7 = _RAND_43[127:0];
  _RAND_44 = {4{`RANDOM}};
  pp33 = _RAND_44[127:0];
  _RAND_45 = {4{`RANDOM}};
  reg_out = _RAND_45[127:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Div(
  input         clock,
  input         reset,
  input  [63:0] io_in1,
  input  [63:0] io_in2,
  output [63:0] io_out_div,
  output [63:0] io_out_rem,
  input         io_is_signed,
  input         io_div_valid,
  output        io_div_ready
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [127:0] _RAND_1;
  reg [95:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] state; // @[Div.scala 17:22]
  reg [127:0] reg_in1; // @[Div.scala 18:24]
  reg [64:0] reg_in2; // @[Div.scala 19:24]
  reg [63:0] quo_out; // @[Div.scala 21:24]
  reg [63:0] rem_out; // @[Div.scala 22:24]
  reg  quo_neg; // @[Div.scala 24:24]
  reg  rem_neg; // @[Div.scala 25:24]
  wire [64:0] temp_minus1 = reg_in1[127:63]; // @[Div.scala 34:28]
  wire [64:0] minus_value = temp_minus1 - reg_in2; // @[Div.scala 36:30]
  reg [5:0] cnt; // @[Div.scala 38:20]
  wire [63:0] _in1_num_T_1 = ~io_in1; // @[Div.scala 40:52]
  wire [63:0] _in1_num_T_3 = _in1_num_T_1 + 64'h1; // @[Div.scala 40:60]
  wire [63:0] _in1_num_T_4 = io_in1[63] ? _in1_num_T_3 : io_in1; // @[Div.scala 40:38]
  wire [63:0] in1_num = io_is_signed ? _in1_num_T_4 : io_in1; // @[Div.scala 40:20]
  wire [63:0] _in2_num_T_1 = ~io_in2; // @[Div.scala 41:52]
  wire [63:0] _in2_num_T_3 = _in2_num_T_1 + 64'h1; // @[Div.scala 41:60]
  wire [63:0] _in2_num_T_4 = io_in2[63] ? _in2_num_T_3 : io_in2; // @[Div.scala 41:38]
  wire [63:0] in2_num = io_is_signed ? _in2_num_T_4 : io_in2; // @[Div.scala 41:20]
  wire  _T = 2'h0 == state; // @[Conditional.scala 37:30]
  wire [127:0] _reg_in1_T = {64'h0,in1_num}; // @[Cat.scala 30:58]
  wire [64:0] _reg_in2_T = {1'h0,in2_num}; // @[Cat.scala 30:58]
  wire  _T_1 = 2'h1 == state; // @[Conditional.scala 37:30]
  wire [63:0] _rem_out_T_3 = minus_value[64] ? temp_minus1[63:0] : minus_value[63:0]; // @[Div.scala 57:23]
  wire [62:0] quo_out_hi = quo_out[62:0]; // @[Div.scala 58:52]
  wire [63:0] _quo_out_T_1 = {quo_out_hi,1'h0}; // @[Cat.scala 30:58]
  wire [63:0] _quo_out_T_2 = {quo_out_hi,1'h1}; // @[Cat.scala 30:58]
  wire [63:0] _quo_out_T_3 = minus_value[64] ? _quo_out_T_1 : _quo_out_T_2; // @[Div.scala 58:23]
  wire [5:0] _cnt_T_1 = cnt + 6'h1; // @[Div.scala 61:20]
  wire [126:0] reg_in1_hi_1 = reg_in1[126:0]; // @[Div.scala 62:52]
  wire [127:0] _reg_in1_T_2 = {reg_in1_hi_1,1'h0}; // @[Cat.scala 30:58]
  wire [62:0] reg_in1_lo = reg_in1[62:0]; // @[Div.scala 62:98]
  wire [127:0] _reg_in1_T_3 = {minus_value,reg_in1_lo}; // @[Cat.scala 30:58]
  wire [126:0] reg_in1_hi_2 = _reg_in1_T_3[126:0]; // @[Div.scala 62:105]
  wire [127:0] _reg_in1_T_4 = {reg_in1_hi_2,1'h0}; // @[Cat.scala 30:58]
  wire [127:0] _reg_in1_T_5 = minus_value[64] ? _reg_in1_T_2 : _reg_in1_T_4; // @[Div.scala 62:23]
  wire  _T_3 = 2'h2 == state; // @[Conditional.scala 37:30]
  wire [63:0] _rem_out_T_4 = ~rem_out; // @[Div.scala 69:33]
  wire [63:0] _rem_out_T_6 = _rem_out_T_4 + 64'h1; // @[Div.scala 69:41]
  wire [63:0] _rem_out_T_7 = rem_neg ? _rem_out_T_6 : rem_out; // @[Div.scala 69:23]
  wire [63:0] _quo_out_T_8 = ~quo_out; // @[Div.scala 70:33]
  wire [63:0] _quo_out_T_10 = _quo_out_T_8 + 64'h1; // @[Div.scala 70:41]
  wire [63:0] _quo_out_T_11 = quo_neg ? _quo_out_T_10 : quo_out; // @[Div.scala 70:23]
  wire  _T_4 = 2'h3 == state; // @[Conditional.scala 37:30]
  wire [1:0] _GEN_13 = _T_4 ? 2'h0 : state; // @[Conditional.scala 39:67 Div.scala 17:22]
  assign io_out_div = quo_out; // @[Div.scala 29:14]
  assign io_out_rem = rem_out; // @[Div.scala 30:14]
  assign io_div_ready = state == 2'h0; // @[Div.scala 31:26]
  always @(posedge clock) begin
    if (reset) begin // @[Div.scala 17:22]
      state <= 2'h0; // @[Div.scala 17:22]
    end else if (_T) begin // @[Conditional.scala 40:58]
      if (io_div_valid) begin // @[Div.scala 45:26]
        if (io_in2 == 64'h0) begin // @[Div.scala 46:21]
          state <= 2'h3;
        end else begin
          state <= 2'h1;
        end
      end
    end else if (_T_1) begin // @[Conditional.scala 39:67]
      if (cnt == 6'h3f) begin // @[Div.scala 54:26]
        state <= 2'h2; // @[Div.scala 55:15]
      end else begin
        state <= 2'h1; // @[Div.scala 60:15]
      end
    end else if (_T_3) begin // @[Conditional.scala 39:67]
      state <= 2'h0;
    end else begin
      state <= _GEN_13;
    end
    if (reset) begin // @[Div.scala 18:24]
      reg_in1 <= 128'h0; // @[Div.scala 18:24]
    end else if (_T) begin // @[Conditional.scala 40:58]
      if (io_div_valid) begin // @[Div.scala 45:26]
        reg_in1 <= _reg_in1_T; // @[Div.scala 47:17]
      end
    end else if (_T_1) begin // @[Conditional.scala 39:67]
      if (!(cnt == 6'h3f)) begin // @[Div.scala 54:26]
        reg_in1 <= _reg_in1_T_5; // @[Div.scala 62:17]
      end
    end
    if (reset) begin // @[Div.scala 19:24]
      reg_in2 <= 65'h0; // @[Div.scala 19:24]
    end else if (_T) begin // @[Conditional.scala 40:58]
      if (io_div_valid) begin // @[Div.scala 45:26]
        reg_in2 <= _reg_in2_T; // @[Div.scala 48:17]
      end
    end
    if (reset) begin // @[Div.scala 21:24]
      quo_out <= 64'h0; // @[Div.scala 21:24]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        if (cnt == 6'h3f) begin // @[Div.scala 54:26]
          quo_out <= _quo_out_T_3; // @[Div.scala 58:17]
        end else begin
          quo_out <= _quo_out_T_3; // @[Div.scala 63:17]
        end
      end else if (_T_3) begin // @[Conditional.scala 39:67]
        quo_out <= _quo_out_T_11;
      end
    end
    if (reset) begin // @[Div.scala 22:24]
      rem_out <= 64'h0; // @[Div.scala 22:24]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        if (cnt == 6'h3f) begin // @[Div.scala 54:26]
          rem_out <= _rem_out_T_3; // @[Div.scala 57:17]
        end
      end else if (_T_3) begin // @[Conditional.scala 39:67]
        rem_out <= _rem_out_T_7;
      end
    end
    if (reset) begin // @[Div.scala 24:24]
      quo_neg <= 1'h0; // @[Div.scala 24:24]
    end else if (_T) begin // @[Conditional.scala 40:58]
      if (io_div_valid) begin // @[Div.scala 45:26]
        quo_neg <= io_in1[63] ^ io_in2[63]; // @[Div.scala 49:17]
      end
    end
    if (reset) begin // @[Div.scala 25:24]
      rem_neg <= 1'h0; // @[Div.scala 25:24]
    end else if (_T) begin // @[Conditional.scala 40:58]
      if (io_div_valid) begin // @[Div.scala 45:26]
        rem_neg <= io_in1[63]; // @[Div.scala 50:17]
      end
    end
    if (reset) begin // @[Div.scala 38:20]
      cnt <= 6'h0; // @[Div.scala 38:20]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        if (cnt == 6'h3f) begin // @[Div.scala 54:26]
          cnt <= 6'h0; // @[Div.scala 56:13]
        end else begin
          cnt <= _cnt_T_1; // @[Div.scala 61:13]
        end
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  state = _RAND_0[1:0];
  _RAND_1 = {4{`RANDOM}};
  reg_in1 = _RAND_1[127:0];
  _RAND_2 = {3{`RANDOM}};
  reg_in2 = _RAND_2[64:0];
  _RAND_3 = {2{`RANDOM}};
  quo_out = _RAND_3[63:0];
  _RAND_4 = {2{`RANDOM}};
  rem_out = _RAND_4[63:0];
  _RAND_5 = {1{`RANDOM}};
  quo_neg = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  rem_neg = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  cnt = _RAND_7[5:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Mdu(
  input         clock,
  input         reset,
  input  [63:0] io_in1,
  input  [63:0] io_in2,
  output [63:0] io_out,
  input  [3:0]  io_mduop_i,
  input         io_mdu_valid,
  output        io_mdu_ready
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [31:0] _RAND_5;
`endif // RANDOMIZE_REG_INIT
  wire  mul_clock; // @[Mdu.scala 36:21]
  wire  mul_reset; // @[Mdu.scala 36:21]
  wire [64:0] mul_io_in1; // @[Mdu.scala 36:21]
  wire [64:0] mul_io_in2; // @[Mdu.scala 36:21]
  wire [63:0] mul_io_out1; // @[Mdu.scala 36:21]
  wire [63:0] mul_io_out2; // @[Mdu.scala 36:21]
  wire  mul_io_mul_valid; // @[Mdu.scala 36:21]
  wire  mul_io_mul_ready; // @[Mdu.scala 36:21]
  wire  div_clock; // @[Mdu.scala 37:21]
  wire  div_reset; // @[Mdu.scala 37:21]
  wire [63:0] div_io_in1; // @[Mdu.scala 37:21]
  wire [63:0] div_io_in2; // @[Mdu.scala 37:21]
  wire [63:0] div_io_out_div; // @[Mdu.scala 37:21]
  wire [63:0] div_io_out_rem; // @[Mdu.scala 37:21]
  wire  div_io_is_signed; // @[Mdu.scala 37:21]
  wire  div_io_div_valid; // @[Mdu.scala 37:21]
  wire  div_io_div_ready; // @[Mdu.scala 37:21]
  reg [1:0] state; // @[Mdu.scala 18:24]
  reg [3:0] reg_mduop; // @[Mdu.scala 19:28]
  reg [63:0] reg_x; // @[Mdu.scala 30:24]
  reg [63:0] reg_y; // @[Mdu.scala 31:24]
  reg [63:0] reg_out; // @[Mdu.scala 32:26]
  reg  completed; // @[Mdu.scala 34:28]
  wire  _is_div_T = reg_mduop == 4'h5; // @[Mdu.scala 39:26]
  wire  _is_div_T_3 = reg_mduop == 4'ha; // @[Mdu.scala 39:80]
  wire  _is_div_T_5 = reg_mduop == 4'hc; // @[Mdu.scala 39:108]
  wire  is_div = reg_mduop == 4'h5 | reg_mduop == 4'h7 | reg_mduop == 4'ha | reg_mduop == 4'hc; // @[Mdu.scala 39:94]
  wire  _is_divu_T = reg_mduop == 4'h6; // @[Mdu.scala 41:27]
  wire  _is_divu_T_3 = reg_mduop == 4'hb; // @[Mdu.scala 41:83]
  wire  _is_divu_T_5 = reg_mduop == 4'hd; // @[Mdu.scala 41:112]
  wire  is_divu = reg_mduop == 4'h6 | reg_mduop == 4'h8 | reg_mduop == 4'hb | reg_mduop == 4'hd; // @[Mdu.scala 41:98]
  wire  _is_mul_T = is_div | is_divu; // @[Mdu.scala 43:24]
  wire  is_mul = ~(is_div | is_divu | reg_mduop == 4'h0); // @[Mdu.scala 43:15]
  wire  _in1_sign_T_1 = reg_mduop == 4'h2; // @[Mdu.scala 45:60]
  wire  _in1_sign_T_2 = reg_mduop == 4'h1 | reg_mduop == 4'h2; // @[Mdu.scala 45:46]
  wire  _in1_sign_T_3 = reg_mduop == 4'h3; // @[Mdu.scala 45:88]
  wire  in1_sign = (reg_mduop == 4'h1 | reg_mduop == 4'h2 | reg_mduop == 4'h3) & io_in1[63]; // @[Mdu.scala 45:20]
  wire  in2_sign = _in1_sign_T_2 & io_in2[63]; // @[Mdu.scala 47:20]
  wire  mul_high = _in1_sign_T_1 | _in1_sign_T_3 | reg_mduop == 4'h4; // @[Mdu.scala 49:72]
  wire  is_word = reg_mduop == 4'h9 | _is_div_T_3 | _is_divu_T_3 | _is_div_T_5 | _is_divu_T_5; // @[Mdu.scala 51:126]
  wire  want_div = _is_div_T | _is_divu_T | _is_div_T_3 | _is_divu_T_3; // @[Mdu.scala 53:97]
  wire [31:0] temp_x_lo = reg_x[31:0]; // @[Mdu.scala 60:46]
  wire [31:0] temp_x_hi = temp_x_lo[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _temp_x_T_2 = {temp_x_hi,temp_x_lo}; // @[Cat.scala 30:58]
  wire [63:0] temp_x = is_word ? _temp_x_T_2 : reg_x; // @[Mdu.scala 60:21]
  wire [31:0] temp_y_lo = reg_y[31:0]; // @[Mdu.scala 61:46]
  wire [31:0] temp_y_hi = temp_y_lo[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _temp_y_T_2 = {temp_y_hi,temp_y_lo}; // @[Cat.scala 30:58]
  wire [63:0] temp_y = is_word ? _temp_y_T_2 : reg_y; // @[Mdu.scala 61:21]
  wire  mul_io_in1_hi = temp_x[63]; // @[Mdu.scala 63:44]
  wire [64:0] _mul_io_in1_T = {mul_io_in1_hi,temp_x}; // @[Cat.scala 30:58]
  wire [64:0] _mul_io_in1_T_1 = {1'h0,temp_x}; // @[Cat.scala 30:58]
  wire  mul_io_in2_hi = temp_y[63]; // @[Mdu.scala 64:44]
  wire [64:0] _mul_io_in2_T = {mul_io_in2_hi,temp_y}; // @[Cat.scala 30:58]
  wire [64:0] _mul_io_in2_T_1 = {1'h0,temp_y}; // @[Cat.scala 30:58]
  wire  _mul_io_mul_valid_T = state == 2'h1; // @[Mdu.scala 65:33]
  wire  _T = 2'h0 == state; // @[Conditional.scala 37:30]
  wire  _T_1 = 2'h1 == state; // @[Conditional.scala 37:30]
  wire  _T_2 = 2'h2 == state; // @[Conditional.scala 37:30]
  wire [31:0] reg_out_lo = mul_io_out1[31:0]; // @[Mdu.scala 96:56]
  wire [31:0] reg_out_hi = reg_out_lo[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _reg_out_T_2 = {reg_out_hi,reg_out_lo}; // @[Cat.scala 30:58]
  wire [63:0] _reg_out_T_3 = mul_high ? mul_io_out2 : mul_io_out1; // @[Mdu.scala 96:70]
  wire [63:0] _reg_out_T_4 = is_word ? _reg_out_T_2 : _reg_out_T_3; // @[Mdu.scala 96:25]
  wire [1:0] _GEN_6 = mul_io_mul_ready ? 2'h0 : state; // @[Mdu.scala 93:24 Mdu.scala 94:17 Mdu.scala 18:24]
  wire  _GEN_7 = mul_io_mul_ready | completed; // @[Mdu.scala 93:24 Mdu.scala 95:21 Mdu.scala 34:28]
  wire [63:0] _GEN_8 = mul_io_mul_ready ? _reg_out_T_4 : reg_out; // @[Mdu.scala 93:24 Mdu.scala 96:19 Mdu.scala 32:26]
  wire  _T_3 = 2'h3 == state; // @[Conditional.scala 37:30]
  wire [63:0] reg_out_lo_1 = want_div ? div_io_out_div : div_io_out_rem; // @[Mdu.scala 103:48]
  wire [31:0] reg_out_hi_1 = reg_out_lo_1[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [95:0] _reg_out_T_7 = {reg_out_hi_1,reg_out_lo_1}; // @[Cat.scala 30:58]
  wire [95:0] _reg_out_T_9 = is_word ? _reg_out_T_7 : {{32'd0}, reg_out_lo_1}; // @[Mdu.scala 103:25]
  wire [1:0] _GEN_9 = div_io_div_ready ? 2'h0 : state; // @[Mdu.scala 100:24 Mdu.scala 101:17 Mdu.scala 18:24]
  wire  _GEN_10 = div_io_div_ready | completed; // @[Mdu.scala 100:24 Mdu.scala 102:21 Mdu.scala 34:28]
  wire [95:0] _GEN_11 = div_io_div_ready ? _reg_out_T_9 : {{32'd0}, reg_out}; // @[Mdu.scala 100:24 Mdu.scala 103:19 Mdu.scala 32:26]
  wire [1:0] _GEN_12 = _T_3 ? _GEN_9 : state; // @[Conditional.scala 39:67 Mdu.scala 18:24]
  wire  _GEN_13 = _T_3 ? _GEN_10 : completed; // @[Conditional.scala 39:67 Mdu.scala 34:28]
  wire [95:0] _GEN_14 = _T_3 ? _GEN_11 : {{32'd0}, reg_out}; // @[Conditional.scala 39:67 Mdu.scala 32:26]
  wire [95:0] _GEN_17 = _T_2 ? {{32'd0}, _GEN_8} : _GEN_14; // @[Conditional.scala 39:67]
  wire [95:0] _GEN_20 = _T_1 ? {{32'd0}, reg_out} : _GEN_17; // @[Conditional.scala 39:67 Mdu.scala 32:26]
  wire [95:0] _GEN_26 = _T ? {{32'd0}, reg_out} : _GEN_20; // @[Conditional.scala 40:58 Mdu.scala 32:26]
  Mul mul ( // @[Mdu.scala 36:21]
    .clock(mul_clock),
    .reset(mul_reset),
    .io_in1(mul_io_in1),
    .io_in2(mul_io_in2),
    .io_out1(mul_io_out1),
    .io_out2(mul_io_out2),
    .io_mul_valid(mul_io_mul_valid),
    .io_mul_ready(mul_io_mul_ready)
  );
  Div div ( // @[Mdu.scala 37:21]
    .clock(div_clock),
    .reset(div_reset),
    .io_in1(div_io_in1),
    .io_in2(div_io_in2),
    .io_out_div(div_io_out_div),
    .io_out_rem(div_io_out_rem),
    .io_is_signed(div_io_is_signed),
    .io_div_valid(div_io_div_valid),
    .io_div_ready(div_io_div_ready)
  );
  assign io_out = reg_out; // @[Mdu.scala 58:12]
  assign io_mdu_ready = completed; // @[Mdu.scala 57:18]
  assign mul_clock = clock;
  assign mul_reset = reset;
  assign mul_io_in1 = in1_sign ? _mul_io_in1_T : _mul_io_in1_T_1; // @[Mdu.scala 63:22]
  assign mul_io_in2 = in2_sign ? _mul_io_in2_T : _mul_io_in2_T_1; // @[Mdu.scala 64:22]
  assign mul_io_mul_valid = state == 2'h1 & is_mul; // @[Mdu.scala 65:46]
  assign div_clock = clock;
  assign div_reset = reset;
  assign div_io_in1 = is_word ? _temp_x_T_2 : reg_x; // @[Mdu.scala 60:21]
  assign div_io_in2 = is_word ? _temp_y_T_2 : reg_y; // @[Mdu.scala 61:21]
  assign div_io_is_signed = reg_mduop == 4'h5 | reg_mduop == 4'h7 | reg_mduop == 4'ha | reg_mduop == 4'hc; // @[Mdu.scala 39:94]
  assign div_io_div_valid = _mul_io_mul_valid_T & _is_mul_T; // @[Mdu.scala 70:46]
  always @(posedge clock) begin
    if (reset) begin // @[Mdu.scala 18:24]
      state <= 2'h0; // @[Mdu.scala 18:24]
    end else if (_T) begin // @[Conditional.scala 40:58]
      if (io_mdu_valid) begin // @[Mdu.scala 77:28]
        state <= 2'h1; // @[Mdu.scala 79:17]
      end
    end else if (_T_1) begin // @[Conditional.scala 39:67]
      if (is_mul) begin // @[Mdu.scala 86:21]
        state <= 2'h2; // @[Mdu.scala 87:17]
      end else begin
        state <= 2'h3; // @[Mdu.scala 89:17]
      end
    end else if (_T_2) begin // @[Conditional.scala 39:67]
      state <= _GEN_6;
    end else begin
      state <= _GEN_12;
    end
    if (reset) begin // @[Mdu.scala 19:28]
      reg_mduop <= 4'h0; // @[Mdu.scala 19:28]
    end else if (_T) begin // @[Conditional.scala 40:58]
      if (io_mdu_valid) begin // @[Mdu.scala 77:28]
        reg_mduop <= io_mduop_i; // @[Mdu.scala 78:21]
      end
    end
    if (reset) begin // @[Mdu.scala 30:24]
      reg_x <= 64'h0; // @[Mdu.scala 30:24]
    end else if (_T) begin // @[Conditional.scala 40:58]
      if (io_mdu_valid) begin // @[Mdu.scala 77:28]
        reg_x <= io_in1; // @[Mdu.scala 81:17]
      end
    end
    if (reset) begin // @[Mdu.scala 31:24]
      reg_y <= 64'h0; // @[Mdu.scala 31:24]
    end else if (_T) begin // @[Conditional.scala 40:58]
      if (io_mdu_valid) begin // @[Mdu.scala 77:28]
        reg_y <= io_in2; // @[Mdu.scala 82:17]
      end
    end
    if (reset) begin // @[Mdu.scala 32:26]
      reg_out <= 64'h0; // @[Mdu.scala 32:26]
    end else begin
      reg_out <= _GEN_26[63:0];
    end
    if (reset) begin // @[Mdu.scala 34:28]
      completed <= 1'h0; // @[Mdu.scala 34:28]
    end else if (_T) begin // @[Conditional.scala 40:58]
      if (io_mdu_valid) begin // @[Mdu.scala 77:28]
        completed <= 1'h0; // @[Mdu.scala 80:21]
      end
    end else if (!(_T_1)) begin // @[Conditional.scala 39:67]
      if (_T_2) begin // @[Conditional.scala 39:67]
        completed <= _GEN_7;
      end else begin
        completed <= _GEN_13;
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  state = _RAND_0[1:0];
  _RAND_1 = {1{`RANDOM}};
  reg_mduop = _RAND_1[3:0];
  _RAND_2 = {2{`RANDOM}};
  reg_x = _RAND_2[63:0];
  _RAND_3 = {2{`RANDOM}};
  reg_y = _RAND_3[63:0];
  _RAND_4 = {2{`RANDOM}};
  reg_out = _RAND_4[63:0];
  _RAND_5 = {1{`RANDOM}};
  completed = _RAND_5[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Execute(
  input         clock,
  input         reset,
  output        io_in_ready,
  input         io_in_bits_valid,
  input  [31:0] io_in_bits_pc,
  input  [31:0] io_in_bits_inst,
  input  [3:0]  io_in_bits_alu_code,
  input  [3:0]  io_in_bits_jmp_code,
  input  [1:0]  io_in_bits_mem_code,
  input  [1:0]  io_in_bits_mem_size,
  input  [3:0]  io_in_bits_mdu_code,
  input         io_in_bits_w_type,
  input  [2:0]  io_in_bits_rs1_src,
  input  [2:0]  io_in_bits_rs2_src,
  input  [4:0]  io_in_bits_rd_addr,
  input         io_in_bits_rd_en,
  input  [31:0] io_in_bits_imm,
  input         io_out_ready,
  output        io_out_valid,
  output        io_out_bits_valid,
  output [31:0] io_out_bits_pc,
  output [31:0] io_out_bits_inst,
  output [1:0]  io_out_bits_mem_code,
  output [1:0]  io_out_bits_mem_size,
  output [3:0]  io_out_bits_mdu_code,
  output [4:0]  io_out_bits_rd_addr,
  output        io_out_bits_rd_en,
  input  [63:0] io_ex_rs1_i,
  input  [63:0] io_ex_rs2_i,
  output [63:0] io_ex_data_o,
  input         io_is_ebreak_i,
  output        io_is_ebreak_o,
  output [31:0] io_ex_rwaddr_o,
  output        io_ex_rvalid_o,
  output        io_ex_wvalid_o,
  output [63:0] io_ex_wdata_o,
  output [1:0]  io_ex_wsize_o,
  output [63:0] io_ex_mduout_o,
  output        io_ex_mduready_o,
  output        io_ex_rd_en,
  output [4:0]  io_ex_rd_addr,
  output        io_ex_is_load,
  output        io_ex_is_mdu,
  input  [31:0] io_p_npc_i,
  output [31:0] io_jmp_packet_o_jmp_npc,
  output        io_jmp_packet_o_mis
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] alu_io_in1; // @[Execute.scala 65:19]
  wire [63:0] alu_io_in2; // @[Execute.scala 65:19]
  wire [3:0] alu_io_aluop_i; // @[Execute.scala 65:19]
  wire  alu_io_wtype_i; // @[Execute.scala 65:19]
  wire [63:0] alu_io_alu_out; // @[Execute.scala 65:19]
  wire  alu_io_jmp; // @[Execute.scala 65:19]
  wire [3:0] alu_io_jmp_code; // @[Execute.scala 65:19]
  wire [31:0] alu_io_imm; // @[Execute.scala 65:19]
  wire [31:0] alu_io_pc_i; // @[Execute.scala 65:19]
  wire [31:0] alu_io_jmp_pc; // @[Execute.scala 65:19]
  wire  mdu_clock; // @[Execute.scala 82:19]
  wire  mdu_reset; // @[Execute.scala 82:19]
  wire [63:0] mdu_io_in1; // @[Execute.scala 82:19]
  wire [63:0] mdu_io_in2; // @[Execute.scala 82:19]
  wire [63:0] mdu_io_out; // @[Execute.scala 82:19]
  wire [3:0] mdu_io_mduop_i; // @[Execute.scala 82:19]
  wire  mdu_io_mdu_valid; // @[Execute.scala 82:19]
  wire  mdu_io_mdu_ready; // @[Execute.scala 82:19]
  wire  _stall_T = io_out_ready & io_out_valid; // @[Decoupled.scala 40:37]
  wire  stall = ~_stall_T; // @[Execute.scala 38:15]
  wire  _io_in_ready_T = ~stall; // @[Execute.scala 39:18]
  reg  io_is_ebreak_o_REG; // @[Execute.scala 41:28]
  reg  ex_reg_decodeop_valid; // @[Execute.scala 42:32]
  reg [31:0] ex_reg_decodeop_pc; // @[Execute.scala 42:32]
  reg [31:0] ex_reg_decodeop_inst; // @[Execute.scala 42:32]
  reg [3:0] ex_reg_decodeop_alu_code; // @[Execute.scala 42:32]
  reg [3:0] ex_reg_decodeop_jmp_code; // @[Execute.scala 42:32]
  reg [1:0] ex_reg_decodeop_mem_code; // @[Execute.scala 42:32]
  reg [1:0] ex_reg_decodeop_mem_size; // @[Execute.scala 42:32]
  reg [3:0] ex_reg_decodeop_mdu_code; // @[Execute.scala 42:32]
  reg  ex_reg_decodeop_w_type; // @[Execute.scala 42:32]
  reg [2:0] ex_reg_decodeop_rs1_src; // @[Execute.scala 42:32]
  reg [2:0] ex_reg_decodeop_rs2_src; // @[Execute.scala 42:32]
  reg [4:0] ex_reg_decodeop_rd_addr; // @[Execute.scala 42:32]
  reg  ex_reg_decodeop_rd_en; // @[Execute.scala 42:32]
  reg [31:0] ex_reg_decodeop_imm; // @[Execute.scala 42:32]
  wire [31:0] rs1_temp_hi = ex_reg_decodeop_imm[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _rs1_temp_T_2 = {rs1_temp_hi,ex_reg_decodeop_imm}; // @[Cat.scala 30:58]
  wire [63:0] _rs1_temp_T_3 = {32'h0,ex_reg_decodeop_pc}; // @[Cat.scala 30:58]
  wire [31:0] rs1_temp_lo = ex_reg_decodeop_pc + 32'h4; // @[Execute.scala 52:49]
  wire [63:0] _rs1_temp_T_5 = {32'h0,rs1_temp_lo}; // @[Cat.scala 30:58]
  wire [63:0] _rs1_temp_T_7 = 3'h1 == ex_reg_decodeop_rs1_src ? io_ex_rs1_i : 64'h0; // @[Mux.scala 80:57]
  wire [63:0] _rs1_temp_T_9 = 3'h2 == ex_reg_decodeop_rs1_src ? _rs1_temp_T_2 : _rs1_temp_T_7; // @[Mux.scala 80:57]
  wire [63:0] _rs1_temp_T_11 = 3'h4 == ex_reg_decodeop_rs1_src ? _rs1_temp_T_3 : _rs1_temp_T_9; // @[Mux.scala 80:57]
  wire [63:0] _rs2_temp_T_7 = 3'h1 == ex_reg_decodeop_rs2_src ? io_ex_rs2_i : 64'h0; // @[Mux.scala 80:57]
  wire [63:0] _rs2_temp_T_9 = 3'h2 == ex_reg_decodeop_rs2_src ? _rs1_temp_T_2 : _rs2_temp_T_7; // @[Mux.scala 80:57]
  wire [63:0] _rs2_temp_T_11 = 3'h4 == ex_reg_decodeop_rs2_src ? _rs1_temp_T_3 : _rs2_temp_T_9; // @[Mux.scala 80:57]
  wire [31:0] real_npc = alu_io_jmp ? alu_io_jmp_pc : rs1_temp_lo; // @[Execute.scala 74:21]
  wire  _mdu_io_mdu_valid_T = ex_reg_decodeop_mdu_code != 4'h0; // @[Execute.scala 87:31]
  wire  _is_load_T = ex_reg_decodeop_mem_code == 2'h1; // @[Execute.scala 94:44]
  wire  _is_load_T_1 = ex_reg_decodeop_mem_code == 2'h2; // @[Execute.scala 94:85]
  wire  is_load = (ex_reg_decodeop_mem_code == 2'h1 | ex_reg_decodeop_mem_code == 2'h2) & ex_reg_decodeop_valid; // @[Execute.scala 94:99]
  wire  is_store = ex_reg_decodeop_mem_code == 2'h3 & ex_reg_decodeop_valid; // @[Execute.scala 95:56]
  Alu alu ( // @[Execute.scala 65:19]
    .io_in1(alu_io_in1),
    .io_in2(alu_io_in2),
    .io_aluop_i(alu_io_aluop_i),
    .io_wtype_i(alu_io_wtype_i),
    .io_alu_out(alu_io_alu_out),
    .io_jmp(alu_io_jmp),
    .io_jmp_code(alu_io_jmp_code),
    .io_imm(alu_io_imm),
    .io_pc_i(alu_io_pc_i),
    .io_jmp_pc(alu_io_jmp_pc)
  );
  Mdu mdu ( // @[Execute.scala 82:19]
    .clock(mdu_clock),
    .reset(mdu_reset),
    .io_in1(mdu_io_in1),
    .io_in2(mdu_io_in2),
    .io_out(mdu_io_out),
    .io_mduop_i(mdu_io_mduop_i),
    .io_mdu_valid(mdu_io_mdu_valid),
    .io_mdu_ready(mdu_io_mdu_ready)
  );
  assign io_in_ready = ~stall; // @[Execute.scala 39:18]
  assign io_out_valid = 1'h1; // @[Execute.scala 40:16]
  assign io_out_bits_valid = ex_reg_decodeop_valid; // @[Execute.scala 79:15]
  assign io_out_bits_pc = ex_reg_decodeop_pc; // @[Execute.scala 79:15]
  assign io_out_bits_inst = ex_reg_decodeop_inst; // @[Execute.scala 79:15]
  assign io_out_bits_mem_code = ex_reg_decodeop_mem_code; // @[Execute.scala 79:15]
  assign io_out_bits_mem_size = ex_reg_decodeop_mem_size; // @[Execute.scala 79:15]
  assign io_out_bits_mdu_code = ex_reg_decodeop_mdu_code; // @[Execute.scala 79:15]
  assign io_out_bits_rd_addr = ex_reg_decodeop_rd_addr; // @[Execute.scala 79:15]
  assign io_out_bits_rd_en = ex_reg_decodeop_rd_en; // @[Execute.scala 79:15]
  assign io_ex_data_o = alu_io_alu_out; // @[Execute.scala 77:16]
  assign io_is_ebreak_o = io_is_ebreak_o_REG; // @[Execute.scala 41:18]
  assign io_ex_rwaddr_o = alu_io_alu_out[31:0]; // @[Execute.scala 98:35]
  assign io_ex_rvalid_o = is_load & _io_in_ready_T; // @[Execute.scala 99:29]
  assign io_ex_wvalid_o = is_store & _io_in_ready_T; // @[Execute.scala 100:30]
  assign io_ex_wdata_o = io_ex_rs2_i; // @[Execute.scala 97:18]
  assign io_ex_wsize_o = ex_reg_decodeop_mem_size; // @[Execute.scala 101:18]
  assign io_ex_mduout_o = mdu_io_out; // @[Execute.scala 89:18]
  assign io_ex_mduready_o = mdu_io_mdu_ready; // @[Execute.scala 90:20]
  assign io_ex_rd_en = ~ex_reg_decodeop_valid ? 1'h0 : ex_reg_decodeop_rd_en; // @[Execute.scala 104:46]
  assign io_ex_rd_addr = ex_reg_decodeop_rd_addr; // @[Execute.scala 105:17]
  assign io_ex_is_load = _is_load_T | _is_load_T_1; // @[Execute.scala 106:59]
  assign io_ex_is_mdu = _mdu_io_mdu_valid_T & ex_reg_decodeop_valid; // @[Execute.scala 107:39]
  assign io_jmp_packet_o_jmp_npc = alu_io_jmp ? alu_io_jmp_pc : rs1_temp_lo; // @[Execute.scala 74:21]
  assign io_jmp_packet_o_mis = real_npc != io_p_npc_i & ex_reg_decodeop_valid & _io_in_ready_T; // @[Execute.scala 75:77]
  assign alu_io_in1 = 3'h5 == ex_reg_decodeop_rs1_src ? _rs1_temp_T_5 : _rs1_temp_T_11; // @[Mux.scala 80:57]
  assign alu_io_in2 = 3'h5 == ex_reg_decodeop_rs2_src ? _rs1_temp_T_5 : _rs2_temp_T_11; // @[Mux.scala 80:57]
  assign alu_io_aluop_i = ex_reg_decodeop_alu_code; // @[Execute.scala 68:18]
  assign alu_io_wtype_i = ex_reg_decodeop_w_type; // @[Execute.scala 69:18]
  assign alu_io_jmp_code = ex_reg_decodeop_jmp_code; // @[Execute.scala 70:19]
  assign alu_io_imm = ex_reg_decodeop_imm; // @[Execute.scala 71:14]
  assign alu_io_pc_i = ex_reg_decodeop_pc; // @[Execute.scala 72:15]
  assign mdu_clock = clock;
  assign mdu_reset = reset;
  assign mdu_io_in1 = 3'h5 == ex_reg_decodeop_rs1_src ? _rs1_temp_T_5 : _rs1_temp_T_11; // @[Mux.scala 80:57]
  assign mdu_io_in2 = 3'h5 == ex_reg_decodeop_rs2_src ? _rs1_temp_T_5 : _rs2_temp_T_11; // @[Mux.scala 80:57]
  assign mdu_io_mduop_i = ex_reg_decodeop_mdu_code; // @[Execute.scala 86:18]
  assign mdu_io_mdu_valid = ex_reg_decodeop_mdu_code != 4'h0 & ex_reg_decodeop_valid & _io_in_ready_T; // @[Execute.scala 87:67]
  always @(posedge clock) begin
    io_is_ebreak_o_REG <= io_is_ebreak_i; // @[Execute.scala 41:32]
    if (reset) begin // @[Execute.scala 42:32]
      ex_reg_decodeop_valid <= 1'h0; // @[Execute.scala 42:32]
    end else if (io_in_ready) begin // @[Execute.scala 44:36]
      ex_reg_decodeop_valid <= io_in_bits_valid; // @[Execute.scala 45:21]
    end
    if (reset) begin // @[Execute.scala 42:32]
      ex_reg_decodeop_pc <= 32'h0; // @[Execute.scala 42:32]
    end else if (io_in_ready) begin // @[Execute.scala 44:36]
      ex_reg_decodeop_pc <= io_in_bits_pc; // @[Execute.scala 45:21]
    end
    if (reset) begin // @[Execute.scala 42:32]
      ex_reg_decodeop_inst <= 32'h0; // @[Execute.scala 42:32]
    end else if (io_in_ready) begin // @[Execute.scala 44:36]
      ex_reg_decodeop_inst <= io_in_bits_inst; // @[Execute.scala 45:21]
    end
    if (reset) begin // @[Execute.scala 42:32]
      ex_reg_decodeop_alu_code <= 4'h0; // @[Execute.scala 42:32]
    end else if (io_in_ready) begin // @[Execute.scala 44:36]
      ex_reg_decodeop_alu_code <= io_in_bits_alu_code; // @[Execute.scala 45:21]
    end
    if (reset) begin // @[Execute.scala 42:32]
      ex_reg_decodeop_jmp_code <= 4'h0; // @[Execute.scala 42:32]
    end else if (io_in_ready) begin // @[Execute.scala 44:36]
      ex_reg_decodeop_jmp_code <= io_in_bits_jmp_code; // @[Execute.scala 45:21]
    end
    if (reset) begin // @[Execute.scala 42:32]
      ex_reg_decodeop_mem_code <= 2'h0; // @[Execute.scala 42:32]
    end else if (io_in_ready) begin // @[Execute.scala 44:36]
      ex_reg_decodeop_mem_code <= io_in_bits_mem_code; // @[Execute.scala 45:21]
    end
    if (reset) begin // @[Execute.scala 42:32]
      ex_reg_decodeop_mem_size <= 2'h0; // @[Execute.scala 42:32]
    end else if (io_in_ready) begin // @[Execute.scala 44:36]
      ex_reg_decodeop_mem_size <= io_in_bits_mem_size; // @[Execute.scala 45:21]
    end
    if (reset) begin // @[Execute.scala 42:32]
      ex_reg_decodeop_mdu_code <= 4'h0; // @[Execute.scala 42:32]
    end else if (io_in_ready) begin // @[Execute.scala 44:36]
      ex_reg_decodeop_mdu_code <= io_in_bits_mdu_code; // @[Execute.scala 45:21]
    end
    if (reset) begin // @[Execute.scala 42:32]
      ex_reg_decodeop_w_type <= 1'h0; // @[Execute.scala 42:32]
    end else if (io_in_ready) begin // @[Execute.scala 44:36]
      ex_reg_decodeop_w_type <= io_in_bits_w_type; // @[Execute.scala 45:21]
    end
    if (reset) begin // @[Execute.scala 42:32]
      ex_reg_decodeop_rs1_src <= 3'h0; // @[Execute.scala 42:32]
    end else if (io_in_ready) begin // @[Execute.scala 44:36]
      ex_reg_decodeop_rs1_src <= io_in_bits_rs1_src; // @[Execute.scala 45:21]
    end
    if (reset) begin // @[Execute.scala 42:32]
      ex_reg_decodeop_rs2_src <= 3'h0; // @[Execute.scala 42:32]
    end else if (io_in_ready) begin // @[Execute.scala 44:36]
      ex_reg_decodeop_rs2_src <= io_in_bits_rs2_src; // @[Execute.scala 45:21]
    end
    if (reset) begin // @[Execute.scala 42:32]
      ex_reg_decodeop_rd_addr <= 5'h0; // @[Execute.scala 42:32]
    end else if (io_in_ready) begin // @[Execute.scala 44:36]
      ex_reg_decodeop_rd_addr <= io_in_bits_rd_addr; // @[Execute.scala 45:21]
    end
    if (reset) begin // @[Execute.scala 42:32]
      ex_reg_decodeop_rd_en <= 1'h0; // @[Execute.scala 42:32]
    end else if (io_in_ready) begin // @[Execute.scala 44:36]
      ex_reg_decodeop_rd_en <= io_in_bits_rd_en; // @[Execute.scala 45:21]
    end
    if (reset) begin // @[Execute.scala 42:32]
      ex_reg_decodeop_imm <= 32'h0; // @[Execute.scala 42:32]
    end else if (io_in_ready) begin // @[Execute.scala 44:36]
      ex_reg_decodeop_imm <= io_in_bits_imm; // @[Execute.scala 45:21]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  io_is_ebreak_o_REG = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  ex_reg_decodeop_valid = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  ex_reg_decodeop_pc = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  ex_reg_decodeop_inst = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  ex_reg_decodeop_alu_code = _RAND_4[3:0];
  _RAND_5 = {1{`RANDOM}};
  ex_reg_decodeop_jmp_code = _RAND_5[3:0];
  _RAND_6 = {1{`RANDOM}};
  ex_reg_decodeop_mem_code = _RAND_6[1:0];
  _RAND_7 = {1{`RANDOM}};
  ex_reg_decodeop_mem_size = _RAND_7[1:0];
  _RAND_8 = {1{`RANDOM}};
  ex_reg_decodeop_mdu_code = _RAND_8[3:0];
  _RAND_9 = {1{`RANDOM}};
  ex_reg_decodeop_w_type = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  ex_reg_decodeop_rs1_src = _RAND_10[2:0];
  _RAND_11 = {1{`RANDOM}};
  ex_reg_decodeop_rs2_src = _RAND_11[2:0];
  _RAND_12 = {1{`RANDOM}};
  ex_reg_decodeop_rd_addr = _RAND_12[4:0];
  _RAND_13 = {1{`RANDOM}};
  ex_reg_decodeop_rd_en = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  ex_reg_decodeop_imm = _RAND_14[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Mem(
  input         clock,
  input         reset,
  output        io_in_ready,
  input         io_in_bits_valid,
  input  [31:0] io_in_bits_pc,
  input  [31:0] io_in_bits_inst,
  input  [1:0]  io_in_bits_mem_code,
  input  [1:0]  io_in_bits_mem_size,
  input  [3:0]  io_in_bits_mdu_code,
  input  [4:0]  io_in_bits_rd_addr,
  input         io_in_bits_rd_en,
  output        io_out_bits_valid,
  output [31:0] io_out_bits_pc,
  output [31:0] io_out_bits_inst,
  input  [63:0] io_mem_data_i,
  output [4:0]  io_waddr_o,
  output        io_wen_o,
  output [63:0] io_wdata_o,
  input         io_is_ebreak_i,
  output        io_is_ebreak_o,
  output [31:0] io_dmem_req_bits_arwaddr,
  output        io_dmem_req_bits_rvalid,
  output        io_dmem_req_bits_wvalid,
  output [63:0] io_dmem_req_bits_wdata,
  output [7:0]  io_dmem_req_bits_wmask,
  input  [63:0] io_dmem_resp_bits_rdata,
  input         io_dmem_resp_bits_rready,
  input         io_dmem_resp_bits_wready,
  input  [31:0] io_mem_rwaddr_i,
  input         io_mem_rvalid_i,
  input         io_mem_wvalid_i,
  input  [63:0] io_mem_wdata_i,
  input  [1:0]  io_mem_wsize_i,
  input  [31:0] io_reg_mem_addr_i,
  input  [63:0] io_mem_mduout_i,
  input         io_mem_mduready_i,
  output        io_mem_rd_en,
  output [4:0]  io_mem_rd_addr,
  output [63:0] io_mem_rd_data,
  output        io_mem_is_load
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [63:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [63:0] _RAND_18;
`endif // RANDOMIZE_REG_INIT
  reg  mem_reg_decodeop_valid; // @[Mem.scala 61:33]
  reg [31:0] mem_reg_decodeop_pc; // @[Mem.scala 61:33]
  reg [31:0] mem_reg_decodeop_inst; // @[Mem.scala 61:33]
  reg [1:0] mem_reg_decodeop_mem_code; // @[Mem.scala 61:33]
  reg [1:0] mem_reg_decodeop_mem_size; // @[Mem.scala 61:33]
  reg [3:0] mem_reg_decodeop_mdu_code; // @[Mem.scala 61:33]
  reg [4:0] mem_reg_decodeop_rd_addr; // @[Mem.scala 61:33]
  reg  mem_reg_decodeop_rd_en; // @[Mem.scala 61:33]
  reg [4:0] waddr; // @[Mem.scala 62:22]
  reg  wen; // @[Mem.scala 63:22]
  reg [63:0] wdata; // @[Mem.scala 64:22]
  reg [31:0] reg_mem_addr; // @[Mem.scala 66:29]
  wire  _io_is_ebreak_o_T = ~mem_reg_decodeop_valid; // @[Mem.scala 68:52]
  reg  io_is_ebreak_o_REG; // @[Mem.scala 68:28]
  wire  mdu_valid = mem_reg_decodeop_mdu_code != 4'h0 & mem_reg_decodeop_valid; // @[Mem.scala 80:38]
  wire  _is_load_T = mem_reg_decodeop_mem_code == 2'h1; // @[Mem.scala 83:46]
  wire  _is_load_T_1 = mem_reg_decodeop_mem_code == 2'h2; // @[Mem.scala 83:88]
  wire  is_load = mem_reg_decodeop_mem_code == 2'h1 | mem_reg_decodeop_mem_code == 2'h2; // @[Mem.scala 83:58]
  wire  is_store = mem_reg_decodeop_mem_code == 2'h3; // @[Mem.scala 84:45]
  wire  req_wait = (is_load & ~io_dmem_resp_bits_rready | is_store & ~io_dmem_resp_bits_wready) & mem_reg_decodeop_valid
    ; // @[Mem.scala 86:88]
  wire  stall = req_wait | ~io_mem_mduready_i & mdu_valid; // @[Mem.scala 87:24]
  wire [2:0] addr_offset = io_mem_rwaddr_i[2:0]; // @[Mem.scala 91:36]
  wire [2:0] reg_addr_offset = reg_mem_addr[2:0]; // @[Mem.scala 92:37]
  wire [7:0] _mask_T_1 = 3'h1 == addr_offset ? 8'hfe : 8'hff; // @[Mux.scala 80:57]
  wire [7:0] _mask_T_3 = 3'h2 == addr_offset ? 8'hfc : _mask_T_1; // @[Mux.scala 80:57]
  wire [7:0] _mask_T_5 = 3'h3 == addr_offset ? 8'hf8 : _mask_T_3; // @[Mux.scala 80:57]
  wire [7:0] _mask_T_7 = 3'h4 == addr_offset ? 8'hf0 : _mask_T_5; // @[Mux.scala 80:57]
  wire [7:0] _mask_T_9 = 3'h5 == addr_offset ? 8'he0 : _mask_T_7; // @[Mux.scala 80:57]
  wire [7:0] _mask_T_11 = 3'h6 == addr_offset ? 8'hc0 : _mask_T_9; // @[Mux.scala 80:57]
  wire [7:0] mask = 3'h7 == addr_offset ? 8'h80 : _mask_T_11; // @[Mux.scala 80:57]
  wire [7:0] _wmask_T_1 = 2'h1 == io_mem_wsize_i ? 8'h3 : 8'h1; // @[Mux.scala 80:57]
  wire [7:0] _wmask_T_3 = 2'h2 == io_mem_wsize_i ? 8'hf : _wmask_T_1; // @[Mux.scala 80:57]
  wire [7:0] wmask = 2'h3 == io_mem_wsize_i ? 8'hff : _wmask_T_3; // @[Mux.scala 80:57]
  wire [5:0] _io_dmem_req_bits_wdata_T = {addr_offset, 3'h0}; // @[Mem.scala 113:56]
  wire [126:0] _GEN_22 = {{63'd0}, io_mem_wdata_i}; // @[Mem.scala 113:40]
  wire [126:0] _io_dmem_req_bits_wdata_T_1 = _GEN_22 << _io_dmem_req_bits_wdata_T; // @[Mem.scala 113:40]
  wire [14:0] _GEN_23 = {{7'd0}, wmask}; // @[Mem.scala 114:39]
  wire [14:0] _io_dmem_req_bits_wmask_T = _GEN_23 << addr_offset; // @[Mem.scala 114:39]
  wire [5:0] _ld_data_raw_T = {reg_addr_offset, 3'h0}; // @[Mem.scala 128:57]
  wire [63:0] ld_data_raw = io_dmem_resp_bits_rdata >> _ld_data_raw_T; // @[Mem.scala 128:37]
  wire [55:0] ld_data_hi = ld_data_raw[7] ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 72:12]
  wire [7:0] ld_data_lo = ld_data_raw[7:0]; // @[Mem.scala 131:59]
  wire [63:0] _ld_data_T_3 = {ld_data_hi,ld_data_lo}; // @[Cat.scala 30:58]
  wire [47:0] ld_data_hi_1 = ld_data_raw[15] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 72:12]
  wire [15:0] ld_data_lo_1 = ld_data_raw[15:0]; // @[Mem.scala 132:60]
  wire [63:0] _ld_data_T_6 = {ld_data_hi_1,ld_data_lo_1}; // @[Cat.scala 30:58]
  wire [31:0] ld_data_hi_2 = ld_data_raw[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [31:0] ld_data_lo_2 = ld_data_raw[31:0]; // @[Mem.scala 133:60]
  wire [63:0] _ld_data_T_9 = {ld_data_hi_2,ld_data_lo_2}; // @[Cat.scala 30:58]
  wire [63:0] _ld_data_T_11 = 2'h1 == mem_reg_decodeop_mem_size ? _ld_data_T_6 : _ld_data_T_3; // @[Mux.scala 80:57]
  wire [63:0] _ld_data_T_13 = 2'h2 == mem_reg_decodeop_mem_size ? _ld_data_T_9 : _ld_data_T_11; // @[Mux.scala 80:57]
  wire [63:0] _ld_data_T_15 = 2'h3 == mem_reg_decodeop_mem_size ? ld_data_raw : _ld_data_T_13; // @[Mux.scala 80:57]
  wire [63:0] ld_data = _is_load_T ? _ld_data_T_15 : 64'h0; // @[Mem.scala 130:20]
  wire [63:0] _ld_data_u_T_1 = {56'h0,ld_data_lo}; // @[Cat.scala 30:58]
  wire [63:0] _ld_data_u_T_2 = {48'h0,ld_data_lo_1}; // @[Cat.scala 30:58]
  wire [63:0] _ld_data_u_T_3 = {32'h0,ld_data_lo_2}; // @[Cat.scala 30:58]
  wire [63:0] _ld_data_u_T_5 = 2'h1 == mem_reg_decodeop_mem_size ? _ld_data_u_T_2 : _ld_data_u_T_1; // @[Mux.scala 80:57]
  wire [63:0] _ld_data_u_T_7 = 2'h2 == mem_reg_decodeop_mem_size ? _ld_data_u_T_3 : _ld_data_u_T_5; // @[Mux.scala 80:57]
  wire [63:0] _ld_data_u_T_9 = 2'h3 == mem_reg_decodeop_mem_size ? ld_data_raw : _ld_data_u_T_7; // @[Mux.scala 80:57]
  wire [63:0] ld_data_u = _is_load_T_1 ? _ld_data_u_T_9 : 64'h0; // @[Mem.scala 137:22]
  wire [63:0] _load_data_T_1 = 2'h1 == mem_reg_decodeop_mem_code ? ld_data : 64'h0; // @[Mux.scala 80:57]
  wire [63:0] load_data = 2'h2 == mem_reg_decodeop_mem_code ? ld_data_u : _load_data_T_1; // @[Mux.scala 80:57]
  reg  io_out_bits_REG_valid; // @[Mem.scala 153:25]
  reg [31:0] io_out_bits_REG_pc; // @[Mem.scala 153:25]
  reg [31:0] io_out_bits_REG_inst; // @[Mem.scala 153:25]
  reg [4:0] io_waddr_o_REG; // @[Mem.scala 155:24]
  reg  io_wen_o_REG; // @[Mem.scala 157:24]
  wire [63:0] _final_wdata_T = is_load ? load_data : wdata; // @[Mem.scala 159:57]
  reg [63:0] io_wdata_o_REG; // @[Mem.scala 160:24]
  assign io_in_ready = ~stall; // @[Mem.scala 168:18]
  assign io_out_bits_valid = io_out_bits_REG_valid; // @[Mem.scala 153:15]
  assign io_out_bits_pc = io_out_bits_REG_pc; // @[Mem.scala 153:15]
  assign io_out_bits_inst = io_out_bits_REG_inst; // @[Mem.scala 153:15]
  assign io_waddr_o = io_waddr_o_REG; // @[Mem.scala 155:14]
  assign io_wen_o = io_wen_o_REG; // @[Mem.scala 157:14]
  assign io_wdata_o = io_wdata_o_REG; // @[Mem.scala 160:14]
  assign io_is_ebreak_o = io_is_ebreak_o_REG; // @[Mem.scala 68:18]
  assign io_dmem_req_bits_arwaddr = io_mem_rwaddr_i; // @[Mem.scala 111:21]
  assign io_dmem_req_bits_rvalid = stall ? 1'h0 : io_mem_rvalid_i; // @[Mem.scala 112:27]
  assign io_dmem_req_bits_wvalid = stall ? 1'h0 : io_mem_wvalid_i; // @[Mem.scala 115:27]
  assign io_dmem_req_bits_wdata = _io_dmem_req_bits_wdata_T_1[63:0]; // @[Mem.scala 113:62]
  assign io_dmem_req_bits_wmask = mask & _io_dmem_req_bits_wmask_T[7:0]; // @[Mem.scala 114:29]
  assign io_mem_rd_en = _io_is_ebreak_o_T ? 1'h0 : mem_reg_decodeop_rd_en; // @[Mem.scala 163:24]
  assign io_mem_rd_addr = mem_reg_decodeop_rd_addr; // @[Mem.scala 164:18]
  assign io_mem_rd_data = mdu_valid ? io_mem_mduout_i : _final_wdata_T; // @[Mem.scala 159:24]
  assign io_mem_is_load = _is_load_T | _is_load_T_1; // @[Mem.scala 166:61]
  always @(posedge clock) begin
    if (reset) begin // @[Mem.scala 61:33]
      mem_reg_decodeop_valid <= 1'h0; // @[Mem.scala 61:33]
    end else if (io_in_ready) begin // @[Mem.scala 70:39]
      mem_reg_decodeop_valid <= io_in_bits_valid; // @[Mem.scala 71:22]
    end
    if (reset) begin // @[Mem.scala 61:33]
      mem_reg_decodeop_pc <= 32'h0; // @[Mem.scala 61:33]
    end else if (io_in_ready) begin // @[Mem.scala 70:39]
      mem_reg_decodeop_pc <= io_in_bits_pc; // @[Mem.scala 71:22]
    end
    if (reset) begin // @[Mem.scala 61:33]
      mem_reg_decodeop_inst <= 32'h0; // @[Mem.scala 61:33]
    end else if (io_in_ready) begin // @[Mem.scala 70:39]
      mem_reg_decodeop_inst <= io_in_bits_inst; // @[Mem.scala 71:22]
    end
    if (reset) begin // @[Mem.scala 61:33]
      mem_reg_decodeop_mem_code <= 2'h0; // @[Mem.scala 61:33]
    end else if (io_in_ready) begin // @[Mem.scala 70:39]
      mem_reg_decodeop_mem_code <= io_in_bits_mem_code; // @[Mem.scala 71:22]
    end
    if (reset) begin // @[Mem.scala 61:33]
      mem_reg_decodeop_mem_size <= 2'h0; // @[Mem.scala 61:33]
    end else if (io_in_ready) begin // @[Mem.scala 70:39]
      mem_reg_decodeop_mem_size <= io_in_bits_mem_size; // @[Mem.scala 71:22]
    end
    if (reset) begin // @[Mem.scala 61:33]
      mem_reg_decodeop_mdu_code <= 4'h0; // @[Mem.scala 61:33]
    end else if (io_in_ready) begin // @[Mem.scala 70:39]
      mem_reg_decodeop_mdu_code <= io_in_bits_mdu_code; // @[Mem.scala 71:22]
    end
    if (reset) begin // @[Mem.scala 61:33]
      mem_reg_decodeop_rd_addr <= 5'h0; // @[Mem.scala 61:33]
    end else if (io_in_ready) begin // @[Mem.scala 70:39]
      mem_reg_decodeop_rd_addr <= io_in_bits_rd_addr; // @[Mem.scala 71:22]
    end
    if (reset) begin // @[Mem.scala 61:33]
      mem_reg_decodeop_rd_en <= 1'h0; // @[Mem.scala 61:33]
    end else if (io_in_ready) begin // @[Mem.scala 70:39]
      mem_reg_decodeop_rd_en <= io_in_bits_rd_en; // @[Mem.scala 71:22]
    end
    if (reset) begin // @[Mem.scala 62:22]
      waddr <= 5'h0; // @[Mem.scala 62:22]
    end else if (io_in_ready) begin // @[Mem.scala 70:39]
      waddr <= io_in_bits_rd_addr; // @[Mem.scala 72:11]
    end
    if (reset) begin // @[Mem.scala 63:22]
      wen <= 1'h0; // @[Mem.scala 63:22]
    end else if (io_in_ready) begin // @[Mem.scala 70:39]
      wen <= io_in_bits_rd_en; // @[Mem.scala 73:11]
    end
    if (reset) begin // @[Mem.scala 64:22]
      wdata <= 64'h0; // @[Mem.scala 64:22]
    end else if (io_in_ready) begin // @[Mem.scala 70:39]
      wdata <= io_mem_data_i; // @[Mem.scala 74:11]
    end
    if (reset) begin // @[Mem.scala 66:29]
      reg_mem_addr <= 32'h0; // @[Mem.scala 66:29]
    end else if (io_in_ready) begin // @[Mem.scala 70:39]
      reg_mem_addr <= io_reg_mem_addr_i; // @[Mem.scala 75:18]
    end
    if (~mem_reg_decodeop_valid) begin // @[Mem.scala 68:32]
      io_is_ebreak_o_REG <= 1'h0;
    end else begin
      io_is_ebreak_o_REG <= io_is_ebreak_i;
    end
    if (stall) begin // @[Mem.scala 153:29]
      io_out_bits_REG_valid <= 1'h0;
    end else begin
      io_out_bits_REG_valid <= mem_reg_decodeop_valid;
    end
    if (stall) begin // @[Mem.scala 153:29]
      io_out_bits_REG_pc <= 32'h0;
    end else begin
      io_out_bits_REG_pc <= mem_reg_decodeop_pc;
    end
    if (stall) begin // @[Mem.scala 153:29]
      io_out_bits_REG_inst <= 32'h0;
    end else begin
      io_out_bits_REG_inst <= mem_reg_decodeop_inst;
    end
    io_waddr_o_REG <= waddr; // @[Mem.scala 155:24]
    if (req_wait) begin // @[Mem.scala 157:28]
      io_wen_o_REG <= 1'h0;
    end else begin
      io_wen_o_REG <= wen;
    end
    if (mdu_valid) begin // @[Mem.scala 159:24]
      io_wdata_o_REG <= io_mem_mduout_i;
    end else if (is_load) begin // @[Mem.scala 159:57]
      if (2'h2 == mem_reg_decodeop_mem_code) begin // @[Mux.scala 80:57]
        if (_is_load_T_1) begin // @[Mem.scala 137:22]
          io_wdata_o_REG <= _ld_data_u_T_9;
        end else begin
          io_wdata_o_REG <= 64'h0;
        end
      end else if (2'h1 == mem_reg_decodeop_mem_code) begin // @[Mux.scala 80:57]
        io_wdata_o_REG <= ld_data;
      end else begin
        io_wdata_o_REG <= 64'h0;
      end
    end else begin
      io_wdata_o_REG <= wdata;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  mem_reg_decodeop_valid = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  mem_reg_decodeop_pc = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  mem_reg_decodeop_inst = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  mem_reg_decodeop_mem_code = _RAND_3[1:0];
  _RAND_4 = {1{`RANDOM}};
  mem_reg_decodeop_mem_size = _RAND_4[1:0];
  _RAND_5 = {1{`RANDOM}};
  mem_reg_decodeop_mdu_code = _RAND_5[3:0];
  _RAND_6 = {1{`RANDOM}};
  mem_reg_decodeop_rd_addr = _RAND_6[4:0];
  _RAND_7 = {1{`RANDOM}};
  mem_reg_decodeop_rd_en = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  waddr = _RAND_8[4:0];
  _RAND_9 = {1{`RANDOM}};
  wen = _RAND_9[0:0];
  _RAND_10 = {2{`RANDOM}};
  wdata = _RAND_10[63:0];
  _RAND_11 = {1{`RANDOM}};
  reg_mem_addr = _RAND_11[31:0];
  _RAND_12 = {1{`RANDOM}};
  io_is_ebreak_o_REG = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  io_out_bits_REG_valid = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  io_out_bits_REG_pc = _RAND_14[31:0];
  _RAND_15 = {1{`RANDOM}};
  io_out_bits_REG_inst = _RAND_15[31:0];
  _RAND_16 = {1{`RANDOM}};
  io_waddr_o_REG = _RAND_16[4:0];
  _RAND_17 = {1{`RANDOM}};
  io_wen_o_REG = _RAND_17[0:0];
  _RAND_18 = {2{`RANDOM}};
  io_wdata_o_REG = _RAND_18[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Core(
  input         clock,
  input         reset,
  input         io_imem_req_ready,
  output        io_imem_req_valid,
  output [31:0] io_imem_req_bits_raddr,
  output [31:0] io_imem_req_bits_waddr,
  output [63:0] io_imem_req_bits_wdata,
  output        io_imem_req_bits_ren,
  output        io_imem_req_bits_wen,
  output [7:0]  io_imem_req_bits_wmask,
  output        io_imem_resp_ready,
  input         io_imem_resp_valid,
  input  [63:0] io_imem_resp_bits_rdata,
  input         io_imem_resp_bits_read_ok,
  input         io_imem_resp_bits_write_ok,
  input         io_dmem_req_ready,
  output        io_dmem_req_valid,
  output [31:0] io_dmem_req_bits_raddr,
  output [31:0] io_dmem_req_bits_waddr,
  output [63:0] io_dmem_req_bits_wdata,
  output        io_dmem_req_bits_ren,
  output        io_dmem_req_bits_wen,
  output [7:0]  io_dmem_req_bits_wmask,
  output        io_dmem_resp_ready,
  input         io_dmem_resp_valid,
  input  [63:0] io_dmem_resp_bits_rdata,
  input         io_dmem_resp_bits_read_ok,
  input         io_dmem_resp_bits_write_ok,
  output [31:0] io_commit_pc,
  output [63:0] io_regs_out_0,
  output [63:0] io_regs_out_1,
  output [63:0] io_regs_out_2,
  output [63:0] io_regs_out_3,
  output [63:0] io_regs_out_4,
  output [63:0] io_regs_out_5,
  output [63:0] io_regs_out_6,
  output [63:0] io_regs_out_7,
  output [63:0] io_regs_out_8,
  output [63:0] io_regs_out_9,
  output [63:0] io_regs_out_10,
  output [63:0] io_regs_out_11,
  output [63:0] io_regs_out_12,
  output [63:0] io_regs_out_13,
  output [63:0] io_regs_out_14,
  output [63:0] io_regs_out_15,
  output [63:0] io_regs_out_16,
  output [63:0] io_regs_out_17,
  output [63:0] io_regs_out_18,
  output [63:0] io_regs_out_19,
  output [63:0] io_regs_out_20,
  output [63:0] io_regs_out_21,
  output [63:0] io_regs_out_22,
  output [63:0] io_regs_out_23,
  output [63:0] io_regs_out_24,
  output [63:0] io_regs_out_25,
  output [63:0] io_regs_out_26,
  output [63:0] io_regs_out_27,
  output [63:0] io_regs_out_28,
  output [63:0] io_regs_out_29,
  output [63:0] io_regs_out_30,
  output [63:0] io_regs_out_31,
  output        io_commit
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  wire  fetch_clock; // @[Core.scala 28:21]
  wire  fetch_reset; // @[Core.scala 28:21]
  wire [31:0] fetch_io_imem_req_bits_araddr; // @[Core.scala 28:21]
  wire  fetch_io_imem_req_bits_arvalid; // @[Core.scala 28:21]
  wire [31:0] fetch_io_imem_resp_bits_rdata; // @[Core.scala 28:21]
  wire  fetch_io_imem_resp_bits_rvalid; // @[Core.scala 28:21]
  wire  fetch_io_out_ready; // @[Core.scala 28:21]
  wire  fetch_io_out_valid; // @[Core.scala 28:21]
  wire [31:0] fetch_io_out_bits_pc; // @[Core.scala 28:21]
  wire [31:0] fetch_io_out_bits_inst; // @[Core.scala 28:21]
  wire  fetch_io_out_bits_inst_valid; // @[Core.scala 28:21]
  wire  fetch_io_if_flush; // @[Core.scala 28:21]
  wire [31:0] fetch_io_p_npc; // @[Core.scala 28:21]
  wire [31:0] fetch_io_jmp_packet_i_jmp_npc; // @[Core.scala 28:21]
  wire  fetch_io_jmp_packet_i_mis; // @[Core.scala 28:21]
  wire  decode_clock; // @[Core.scala 45:22]
  wire  decode_reset; // @[Core.scala 45:22]
  wire  decode_io_in_ready; // @[Core.scala 45:22]
  wire [31:0] decode_io_in_bits_pc; // @[Core.scala 45:22]
  wire [31:0] decode_io_in_bits_inst; // @[Core.scala 45:22]
  wire  decode_io_in_bits_inst_valid; // @[Core.scala 45:22]
  wire  decode_io_out_ready; // @[Core.scala 45:22]
  wire  decode_io_out_valid; // @[Core.scala 45:22]
  wire  decode_io_out_bits_valid; // @[Core.scala 45:22]
  wire [31:0] decode_io_out_bits_pc; // @[Core.scala 45:22]
  wire [31:0] decode_io_out_bits_inst; // @[Core.scala 45:22]
  wire [3:0] decode_io_out_bits_alu_code; // @[Core.scala 45:22]
  wire [3:0] decode_io_out_bits_jmp_code; // @[Core.scala 45:22]
  wire [1:0] decode_io_out_bits_mem_code; // @[Core.scala 45:22]
  wire [1:0] decode_io_out_bits_mem_size; // @[Core.scala 45:22]
  wire [3:0] decode_io_out_bits_mdu_code; // @[Core.scala 45:22]
  wire  decode_io_out_bits_w_type; // @[Core.scala 45:22]
  wire [2:0] decode_io_out_bits_rs1_src; // @[Core.scala 45:22]
  wire [2:0] decode_io_out_bits_rs2_src; // @[Core.scala 45:22]
  wire [4:0] decode_io_out_bits_rd_addr; // @[Core.scala 45:22]
  wire  decode_io_out_bits_rd_en; // @[Core.scala 45:22]
  wire [31:0] decode_io_out_bits_imm; // @[Core.scala 45:22]
  wire  decode_io_id_flush; // @[Core.scala 45:22]
  wire  decode_io_ren1; // @[Core.scala 45:22]
  wire [4:0] decode_io_raddr1; // @[Core.scala 45:22]
  wire  decode_io_ren2; // @[Core.scala 45:22]
  wire [4:0] decode_io_raddr2; // @[Core.scala 45:22]
  wire  decode_io_is_ebreak; // @[Core.scala 45:22]
  wire [63:0] decode_io_rs1_data_i; // @[Core.scala 45:22]
  wire [63:0] decode_io_rs2_data_i; // @[Core.scala 45:22]
  wire [63:0] decode_io_rs1_data_o; // @[Core.scala 45:22]
  wire [63:0] decode_io_rs2_data_o; // @[Core.scala 45:22]
  wire [31:0] decode_io_p_npc_i; // @[Core.scala 45:22]
  wire [31:0] decode_io_p_npc_o; // @[Core.scala 45:22]
  wire  decode_io_decode_rf_stall_i; // @[Core.scala 45:22]
  wire  regfile_clock; // @[Core.scala 50:23]
  wire  regfile_reset; // @[Core.scala 50:23]
  wire  regfile_io_ren1; // @[Core.scala 50:23]
  wire [4:0] regfile_io_raddr1; // @[Core.scala 50:23]
  wire [63:0] regfile_io_rdata1; // @[Core.scala 50:23]
  wire  regfile_io_ren2; // @[Core.scala 50:23]
  wire [4:0] regfile_io_raddr2; // @[Core.scala 50:23]
  wire [63:0] regfile_io_rdata2; // @[Core.scala 50:23]
  wire  regfile_io_wen; // @[Core.scala 50:23]
  wire [4:0] regfile_io_waddr; // @[Core.scala 50:23]
  wire [63:0] regfile_io_wdata; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_0; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_1; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_2; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_3; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_4; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_5; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_6; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_7; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_8; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_9; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_10; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_11; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_12; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_13; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_14; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_15; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_16; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_17; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_18; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_19; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_20; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_21; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_22; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_23; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_24; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_25; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_26; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_27; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_28; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_29; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_30; // @[Core.scala 50:23]
  wire [63:0] regfile_io_regs_31; // @[Core.scala 50:23]
  wire  regfile_io_ex_rd_en; // @[Core.scala 50:23]
  wire [4:0] regfile_io_ex_rd_addr; // @[Core.scala 50:23]
  wire [63:0] regfile_io_ex_rd_data; // @[Core.scala 50:23]
  wire  regfile_io_ex_is_load_i; // @[Core.scala 50:23]
  wire  regfile_io_ex_is_mdu_i; // @[Core.scala 50:23]
  wire  regfile_io_mem_is_load_i; // @[Core.scala 50:23]
  wire  regfile_io_mem_rd_en; // @[Core.scala 50:23]
  wire [4:0] regfile_io_mem_rd_addr; // @[Core.scala 50:23]
  wire [63:0] regfile_io_mem_rd_data; // @[Core.scala 50:23]
  wire  regfile_io_rf_stall; // @[Core.scala 50:23]
  wire  execute_clock; // @[Core.scala 59:23]
  wire  execute_reset; // @[Core.scala 59:23]
  wire  execute_io_in_ready; // @[Core.scala 59:23]
  wire  execute_io_in_bits_valid; // @[Core.scala 59:23]
  wire [31:0] execute_io_in_bits_pc; // @[Core.scala 59:23]
  wire [31:0] execute_io_in_bits_inst; // @[Core.scala 59:23]
  wire [3:0] execute_io_in_bits_alu_code; // @[Core.scala 59:23]
  wire [3:0] execute_io_in_bits_jmp_code; // @[Core.scala 59:23]
  wire [1:0] execute_io_in_bits_mem_code; // @[Core.scala 59:23]
  wire [1:0] execute_io_in_bits_mem_size; // @[Core.scala 59:23]
  wire [3:0] execute_io_in_bits_mdu_code; // @[Core.scala 59:23]
  wire  execute_io_in_bits_w_type; // @[Core.scala 59:23]
  wire [2:0] execute_io_in_bits_rs1_src; // @[Core.scala 59:23]
  wire [2:0] execute_io_in_bits_rs2_src; // @[Core.scala 59:23]
  wire [4:0] execute_io_in_bits_rd_addr; // @[Core.scala 59:23]
  wire  execute_io_in_bits_rd_en; // @[Core.scala 59:23]
  wire [31:0] execute_io_in_bits_imm; // @[Core.scala 59:23]
  wire  execute_io_out_ready; // @[Core.scala 59:23]
  wire  execute_io_out_valid; // @[Core.scala 59:23]
  wire  execute_io_out_bits_valid; // @[Core.scala 59:23]
  wire [31:0] execute_io_out_bits_pc; // @[Core.scala 59:23]
  wire [31:0] execute_io_out_bits_inst; // @[Core.scala 59:23]
  wire [1:0] execute_io_out_bits_mem_code; // @[Core.scala 59:23]
  wire [1:0] execute_io_out_bits_mem_size; // @[Core.scala 59:23]
  wire [3:0] execute_io_out_bits_mdu_code; // @[Core.scala 59:23]
  wire [4:0] execute_io_out_bits_rd_addr; // @[Core.scala 59:23]
  wire  execute_io_out_bits_rd_en; // @[Core.scala 59:23]
  wire [63:0] execute_io_ex_rs1_i; // @[Core.scala 59:23]
  wire [63:0] execute_io_ex_rs2_i; // @[Core.scala 59:23]
  wire [63:0] execute_io_ex_data_o; // @[Core.scala 59:23]
  wire  execute_io_is_ebreak_i; // @[Core.scala 59:23]
  wire  execute_io_is_ebreak_o; // @[Core.scala 59:23]
  wire [31:0] execute_io_ex_rwaddr_o; // @[Core.scala 59:23]
  wire  execute_io_ex_rvalid_o; // @[Core.scala 59:23]
  wire  execute_io_ex_wvalid_o; // @[Core.scala 59:23]
  wire [63:0] execute_io_ex_wdata_o; // @[Core.scala 59:23]
  wire [1:0] execute_io_ex_wsize_o; // @[Core.scala 59:23]
  wire [63:0] execute_io_ex_mduout_o; // @[Core.scala 59:23]
  wire  execute_io_ex_mduready_o; // @[Core.scala 59:23]
  wire  execute_io_ex_rd_en; // @[Core.scala 59:23]
  wire [4:0] execute_io_ex_rd_addr; // @[Core.scala 59:23]
  wire  execute_io_ex_is_load; // @[Core.scala 59:23]
  wire  execute_io_ex_is_mdu; // @[Core.scala 59:23]
  wire [31:0] execute_io_p_npc_i; // @[Core.scala 59:23]
  wire [31:0] execute_io_jmp_packet_o_jmp_npc; // @[Core.scala 59:23]
  wire  execute_io_jmp_packet_o_mis; // @[Core.scala 59:23]
  wire  mem_clock; // @[Core.scala 68:19]
  wire  mem_reset; // @[Core.scala 68:19]
  wire  mem_io_in_ready; // @[Core.scala 68:19]
  wire  mem_io_in_bits_valid; // @[Core.scala 68:19]
  wire [31:0] mem_io_in_bits_pc; // @[Core.scala 68:19]
  wire [31:0] mem_io_in_bits_inst; // @[Core.scala 68:19]
  wire [1:0] mem_io_in_bits_mem_code; // @[Core.scala 68:19]
  wire [1:0] mem_io_in_bits_mem_size; // @[Core.scala 68:19]
  wire [3:0] mem_io_in_bits_mdu_code; // @[Core.scala 68:19]
  wire [4:0] mem_io_in_bits_rd_addr; // @[Core.scala 68:19]
  wire  mem_io_in_bits_rd_en; // @[Core.scala 68:19]
  wire  mem_io_out_bits_valid; // @[Core.scala 68:19]
  wire [31:0] mem_io_out_bits_pc; // @[Core.scala 68:19]
  wire [31:0] mem_io_out_bits_inst; // @[Core.scala 68:19]
  wire [63:0] mem_io_mem_data_i; // @[Core.scala 68:19]
  wire [4:0] mem_io_waddr_o; // @[Core.scala 68:19]
  wire  mem_io_wen_o; // @[Core.scala 68:19]
  wire [63:0] mem_io_wdata_o; // @[Core.scala 68:19]
  wire  mem_io_is_ebreak_i; // @[Core.scala 68:19]
  wire  mem_io_is_ebreak_o; // @[Core.scala 68:19]
  wire [31:0] mem_io_dmem_req_bits_arwaddr; // @[Core.scala 68:19]
  wire  mem_io_dmem_req_bits_rvalid; // @[Core.scala 68:19]
  wire  mem_io_dmem_req_bits_wvalid; // @[Core.scala 68:19]
  wire [63:0] mem_io_dmem_req_bits_wdata; // @[Core.scala 68:19]
  wire [7:0] mem_io_dmem_req_bits_wmask; // @[Core.scala 68:19]
  wire [63:0] mem_io_dmem_resp_bits_rdata; // @[Core.scala 68:19]
  wire  mem_io_dmem_resp_bits_rready; // @[Core.scala 68:19]
  wire  mem_io_dmem_resp_bits_wready; // @[Core.scala 68:19]
  wire [31:0] mem_io_mem_rwaddr_i; // @[Core.scala 68:19]
  wire  mem_io_mem_rvalid_i; // @[Core.scala 68:19]
  wire  mem_io_mem_wvalid_i; // @[Core.scala 68:19]
  wire [63:0] mem_io_mem_wdata_i; // @[Core.scala 68:19]
  wire [1:0] mem_io_mem_wsize_i; // @[Core.scala 68:19]
  wire [31:0] mem_io_reg_mem_addr_i; // @[Core.scala 68:19]
  wire [63:0] mem_io_mem_mduout_i; // @[Core.scala 68:19]
  wire  mem_io_mem_mduready_i; // @[Core.scala 68:19]
  wire  mem_io_mem_rd_en; // @[Core.scala 68:19]
  wire [4:0] mem_io_mem_rd_addr; // @[Core.scala 68:19]
  wire [63:0] mem_io_mem_rd_data; // @[Core.scala 68:19]
  wire  mem_io_mem_is_load; // @[Core.scala 68:19]
  wire  wb_dpi_clk; // @[Core.scala 125:22]
  wire [31:0] wb_dpi_inst; // @[Core.scala 125:22]
  wire [31:0] wb_dpi_pc; // @[Core.scala 125:22]
  wire  wb_dpi_ebreak; // @[Core.scala 125:22]
  reg [31:0] io_commit_pc_REG; // @[Core.scala 99:26]
  reg  io_commit_REG; // @[Core.scala 100:23]
  wire [28:0] io_dmem_req_bits_raddr_hi = mem_io_dmem_req_bits_arwaddr[31:3]; // @[Core.scala 102:61]
  InstFetch fetch ( // @[Core.scala 28:21]
    .clock(fetch_clock),
    .reset(fetch_reset),
    .io_imem_req_bits_araddr(fetch_io_imem_req_bits_araddr),
    .io_imem_req_bits_arvalid(fetch_io_imem_req_bits_arvalid),
    .io_imem_resp_bits_rdata(fetch_io_imem_resp_bits_rdata),
    .io_imem_resp_bits_rvalid(fetch_io_imem_resp_bits_rvalid),
    .io_out_ready(fetch_io_out_ready),
    .io_out_valid(fetch_io_out_valid),
    .io_out_bits_pc(fetch_io_out_bits_pc),
    .io_out_bits_inst(fetch_io_out_bits_inst),
    .io_out_bits_inst_valid(fetch_io_out_bits_inst_valid),
    .io_if_flush(fetch_io_if_flush),
    .io_p_npc(fetch_io_p_npc),
    .io_jmp_packet_i_jmp_npc(fetch_io_jmp_packet_i_jmp_npc),
    .io_jmp_packet_i_mis(fetch_io_jmp_packet_i_mis)
  );
  Decode decode ( // @[Core.scala 45:22]
    .clock(decode_clock),
    .reset(decode_reset),
    .io_in_ready(decode_io_in_ready),
    .io_in_bits_pc(decode_io_in_bits_pc),
    .io_in_bits_inst(decode_io_in_bits_inst),
    .io_in_bits_inst_valid(decode_io_in_bits_inst_valid),
    .io_out_ready(decode_io_out_ready),
    .io_out_valid(decode_io_out_valid),
    .io_out_bits_valid(decode_io_out_bits_valid),
    .io_out_bits_pc(decode_io_out_bits_pc),
    .io_out_bits_inst(decode_io_out_bits_inst),
    .io_out_bits_alu_code(decode_io_out_bits_alu_code),
    .io_out_bits_jmp_code(decode_io_out_bits_jmp_code),
    .io_out_bits_mem_code(decode_io_out_bits_mem_code),
    .io_out_bits_mem_size(decode_io_out_bits_mem_size),
    .io_out_bits_mdu_code(decode_io_out_bits_mdu_code),
    .io_out_bits_w_type(decode_io_out_bits_w_type),
    .io_out_bits_rs1_src(decode_io_out_bits_rs1_src),
    .io_out_bits_rs2_src(decode_io_out_bits_rs2_src),
    .io_out_bits_rd_addr(decode_io_out_bits_rd_addr),
    .io_out_bits_rd_en(decode_io_out_bits_rd_en),
    .io_out_bits_imm(decode_io_out_bits_imm),
    .io_id_flush(decode_io_id_flush),
    .io_ren1(decode_io_ren1),
    .io_raddr1(decode_io_raddr1),
    .io_ren2(decode_io_ren2),
    .io_raddr2(decode_io_raddr2),
    .io_is_ebreak(decode_io_is_ebreak),
    .io_rs1_data_i(decode_io_rs1_data_i),
    .io_rs2_data_i(decode_io_rs2_data_i),
    .io_rs1_data_o(decode_io_rs1_data_o),
    .io_rs2_data_o(decode_io_rs2_data_o),
    .io_p_npc_i(decode_io_p_npc_i),
    .io_p_npc_o(decode_io_p_npc_o),
    .io_decode_rf_stall_i(decode_io_decode_rf_stall_i)
  );
  RegFile regfile ( // @[Core.scala 50:23]
    .clock(regfile_clock),
    .reset(regfile_reset),
    .io_ren1(regfile_io_ren1),
    .io_raddr1(regfile_io_raddr1),
    .io_rdata1(regfile_io_rdata1),
    .io_ren2(regfile_io_ren2),
    .io_raddr2(regfile_io_raddr2),
    .io_rdata2(regfile_io_rdata2),
    .io_wen(regfile_io_wen),
    .io_waddr(regfile_io_waddr),
    .io_wdata(regfile_io_wdata),
    .io_regs_0(regfile_io_regs_0),
    .io_regs_1(regfile_io_regs_1),
    .io_regs_2(regfile_io_regs_2),
    .io_regs_3(regfile_io_regs_3),
    .io_regs_4(regfile_io_regs_4),
    .io_regs_5(regfile_io_regs_5),
    .io_regs_6(regfile_io_regs_6),
    .io_regs_7(regfile_io_regs_7),
    .io_regs_8(regfile_io_regs_8),
    .io_regs_9(regfile_io_regs_9),
    .io_regs_10(regfile_io_regs_10),
    .io_regs_11(regfile_io_regs_11),
    .io_regs_12(regfile_io_regs_12),
    .io_regs_13(regfile_io_regs_13),
    .io_regs_14(regfile_io_regs_14),
    .io_regs_15(regfile_io_regs_15),
    .io_regs_16(regfile_io_regs_16),
    .io_regs_17(regfile_io_regs_17),
    .io_regs_18(regfile_io_regs_18),
    .io_regs_19(regfile_io_regs_19),
    .io_regs_20(regfile_io_regs_20),
    .io_regs_21(regfile_io_regs_21),
    .io_regs_22(regfile_io_regs_22),
    .io_regs_23(regfile_io_regs_23),
    .io_regs_24(regfile_io_regs_24),
    .io_regs_25(regfile_io_regs_25),
    .io_regs_26(regfile_io_regs_26),
    .io_regs_27(regfile_io_regs_27),
    .io_regs_28(regfile_io_regs_28),
    .io_regs_29(regfile_io_regs_29),
    .io_regs_30(regfile_io_regs_30),
    .io_regs_31(regfile_io_regs_31),
    .io_ex_rd_en(regfile_io_ex_rd_en),
    .io_ex_rd_addr(regfile_io_ex_rd_addr),
    .io_ex_rd_data(regfile_io_ex_rd_data),
    .io_ex_is_load_i(regfile_io_ex_is_load_i),
    .io_ex_is_mdu_i(regfile_io_ex_is_mdu_i),
    .io_mem_is_load_i(regfile_io_mem_is_load_i),
    .io_mem_rd_en(regfile_io_mem_rd_en),
    .io_mem_rd_addr(regfile_io_mem_rd_addr),
    .io_mem_rd_data(regfile_io_mem_rd_data),
    .io_rf_stall(regfile_io_rf_stall)
  );
  Execute execute ( // @[Core.scala 59:23]
    .clock(execute_clock),
    .reset(execute_reset),
    .io_in_ready(execute_io_in_ready),
    .io_in_bits_valid(execute_io_in_bits_valid),
    .io_in_bits_pc(execute_io_in_bits_pc),
    .io_in_bits_inst(execute_io_in_bits_inst),
    .io_in_bits_alu_code(execute_io_in_bits_alu_code),
    .io_in_bits_jmp_code(execute_io_in_bits_jmp_code),
    .io_in_bits_mem_code(execute_io_in_bits_mem_code),
    .io_in_bits_mem_size(execute_io_in_bits_mem_size),
    .io_in_bits_mdu_code(execute_io_in_bits_mdu_code),
    .io_in_bits_w_type(execute_io_in_bits_w_type),
    .io_in_bits_rs1_src(execute_io_in_bits_rs1_src),
    .io_in_bits_rs2_src(execute_io_in_bits_rs2_src),
    .io_in_bits_rd_addr(execute_io_in_bits_rd_addr),
    .io_in_bits_rd_en(execute_io_in_bits_rd_en),
    .io_in_bits_imm(execute_io_in_bits_imm),
    .io_out_ready(execute_io_out_ready),
    .io_out_valid(execute_io_out_valid),
    .io_out_bits_valid(execute_io_out_bits_valid),
    .io_out_bits_pc(execute_io_out_bits_pc),
    .io_out_bits_inst(execute_io_out_bits_inst),
    .io_out_bits_mem_code(execute_io_out_bits_mem_code),
    .io_out_bits_mem_size(execute_io_out_bits_mem_size),
    .io_out_bits_mdu_code(execute_io_out_bits_mdu_code),
    .io_out_bits_rd_addr(execute_io_out_bits_rd_addr),
    .io_out_bits_rd_en(execute_io_out_bits_rd_en),
    .io_ex_rs1_i(execute_io_ex_rs1_i),
    .io_ex_rs2_i(execute_io_ex_rs2_i),
    .io_ex_data_o(execute_io_ex_data_o),
    .io_is_ebreak_i(execute_io_is_ebreak_i),
    .io_is_ebreak_o(execute_io_is_ebreak_o),
    .io_ex_rwaddr_o(execute_io_ex_rwaddr_o),
    .io_ex_rvalid_o(execute_io_ex_rvalid_o),
    .io_ex_wvalid_o(execute_io_ex_wvalid_o),
    .io_ex_wdata_o(execute_io_ex_wdata_o),
    .io_ex_wsize_o(execute_io_ex_wsize_o),
    .io_ex_mduout_o(execute_io_ex_mduout_o),
    .io_ex_mduready_o(execute_io_ex_mduready_o),
    .io_ex_rd_en(execute_io_ex_rd_en),
    .io_ex_rd_addr(execute_io_ex_rd_addr),
    .io_ex_is_load(execute_io_ex_is_load),
    .io_ex_is_mdu(execute_io_ex_is_mdu),
    .io_p_npc_i(execute_io_p_npc_i),
    .io_jmp_packet_o_jmp_npc(execute_io_jmp_packet_o_jmp_npc),
    .io_jmp_packet_o_mis(execute_io_jmp_packet_o_mis)
  );
  Mem mem ( // @[Core.scala 68:19]
    .clock(mem_clock),
    .reset(mem_reset),
    .io_in_ready(mem_io_in_ready),
    .io_in_bits_valid(mem_io_in_bits_valid),
    .io_in_bits_pc(mem_io_in_bits_pc),
    .io_in_bits_inst(mem_io_in_bits_inst),
    .io_in_bits_mem_code(mem_io_in_bits_mem_code),
    .io_in_bits_mem_size(mem_io_in_bits_mem_size),
    .io_in_bits_mdu_code(mem_io_in_bits_mdu_code),
    .io_in_bits_rd_addr(mem_io_in_bits_rd_addr),
    .io_in_bits_rd_en(mem_io_in_bits_rd_en),
    .io_out_bits_valid(mem_io_out_bits_valid),
    .io_out_bits_pc(mem_io_out_bits_pc),
    .io_out_bits_inst(mem_io_out_bits_inst),
    .io_mem_data_i(mem_io_mem_data_i),
    .io_waddr_o(mem_io_waddr_o),
    .io_wen_o(mem_io_wen_o),
    .io_wdata_o(mem_io_wdata_o),
    .io_is_ebreak_i(mem_io_is_ebreak_i),
    .io_is_ebreak_o(mem_io_is_ebreak_o),
    .io_dmem_req_bits_arwaddr(mem_io_dmem_req_bits_arwaddr),
    .io_dmem_req_bits_rvalid(mem_io_dmem_req_bits_rvalid),
    .io_dmem_req_bits_wvalid(mem_io_dmem_req_bits_wvalid),
    .io_dmem_req_bits_wdata(mem_io_dmem_req_bits_wdata),
    .io_dmem_req_bits_wmask(mem_io_dmem_req_bits_wmask),
    .io_dmem_resp_bits_rdata(mem_io_dmem_resp_bits_rdata),
    .io_dmem_resp_bits_rready(mem_io_dmem_resp_bits_rready),
    .io_dmem_resp_bits_wready(mem_io_dmem_resp_bits_wready),
    .io_mem_rwaddr_i(mem_io_mem_rwaddr_i),
    .io_mem_rvalid_i(mem_io_mem_rvalid_i),
    .io_mem_wvalid_i(mem_io_mem_wvalid_i),
    .io_mem_wdata_i(mem_io_mem_wdata_i),
    .io_mem_wsize_i(mem_io_mem_wsize_i),
    .io_reg_mem_addr_i(mem_io_reg_mem_addr_i),
    .io_mem_mduout_i(mem_io_mem_mduout_i),
    .io_mem_mduready_i(mem_io_mem_mduready_i),
    .io_mem_rd_en(mem_io_mem_rd_en),
    .io_mem_rd_addr(mem_io_mem_rd_addr),
    .io_mem_rd_data(mem_io_mem_rd_data),
    .io_mem_is_load(mem_io_mem_is_load)
  );
  Wb_Dpi wb_dpi ( // @[Core.scala 125:22]
    .clk(wb_dpi_clk),
    .inst(wb_dpi_inst),
    .pc(wb_dpi_pc),
    .ebreak(wb_dpi_ebreak)
  );
  assign io_imem_req_valid = 1'h1; // @[Core.scala 42:21]
  assign io_imem_req_bits_raddr = fetch_io_imem_req_bits_araddr; // @[Core.scala 36:26]
  assign io_imem_req_bits_waddr = 32'h0; // @[Core.scala 38:26]
  assign io_imem_req_bits_wdata = 64'h0; // @[Core.scala 39:26]
  assign io_imem_req_bits_ren = fetch_io_imem_req_bits_arvalid; // @[Core.scala 37:24]
  assign io_imem_req_bits_wen = 1'h0; // @[Core.scala 40:24]
  assign io_imem_req_bits_wmask = 8'h0; // @[Core.scala 41:26]
  assign io_imem_resp_ready = 1'h1; // @[Core.scala 43:22]
  assign io_dmem_req_valid = 1'h1; // @[Core.scala 108:21]
  assign io_dmem_req_bits_raddr = {io_dmem_req_bits_raddr_hi,3'h0}; // @[Cat.scala 30:58]
  assign io_dmem_req_bits_waddr = {io_dmem_req_bits_raddr_hi,3'h0}; // @[Cat.scala 30:58]
  assign io_dmem_req_bits_wdata = mem_io_dmem_req_bits_wdata; // @[Core.scala 105:26]
  assign io_dmem_req_bits_ren = mem_io_dmem_req_bits_rvalid; // @[Core.scala 103:24]
  assign io_dmem_req_bits_wen = mem_io_dmem_req_bits_wvalid; // @[Core.scala 106:24]
  assign io_dmem_req_bits_wmask = mem_io_dmem_req_bits_wmask; // @[Core.scala 107:26]
  assign io_dmem_resp_ready = 1'h1; // @[Core.scala 109:22]
  assign io_commit_pc = io_commit_pc_REG; // @[Core.scala 99:16]
  assign io_regs_out_0 = regfile_io_regs_0; // @[Core.scala 98:15]
  assign io_regs_out_1 = regfile_io_regs_1; // @[Core.scala 98:15]
  assign io_regs_out_2 = regfile_io_regs_2; // @[Core.scala 98:15]
  assign io_regs_out_3 = regfile_io_regs_3; // @[Core.scala 98:15]
  assign io_regs_out_4 = regfile_io_regs_4; // @[Core.scala 98:15]
  assign io_regs_out_5 = regfile_io_regs_5; // @[Core.scala 98:15]
  assign io_regs_out_6 = regfile_io_regs_6; // @[Core.scala 98:15]
  assign io_regs_out_7 = regfile_io_regs_7; // @[Core.scala 98:15]
  assign io_regs_out_8 = regfile_io_regs_8; // @[Core.scala 98:15]
  assign io_regs_out_9 = regfile_io_regs_9; // @[Core.scala 98:15]
  assign io_regs_out_10 = regfile_io_regs_10; // @[Core.scala 98:15]
  assign io_regs_out_11 = regfile_io_regs_11; // @[Core.scala 98:15]
  assign io_regs_out_12 = regfile_io_regs_12; // @[Core.scala 98:15]
  assign io_regs_out_13 = regfile_io_regs_13; // @[Core.scala 98:15]
  assign io_regs_out_14 = regfile_io_regs_14; // @[Core.scala 98:15]
  assign io_regs_out_15 = regfile_io_regs_15; // @[Core.scala 98:15]
  assign io_regs_out_16 = regfile_io_regs_16; // @[Core.scala 98:15]
  assign io_regs_out_17 = regfile_io_regs_17; // @[Core.scala 98:15]
  assign io_regs_out_18 = regfile_io_regs_18; // @[Core.scala 98:15]
  assign io_regs_out_19 = regfile_io_regs_19; // @[Core.scala 98:15]
  assign io_regs_out_20 = regfile_io_regs_20; // @[Core.scala 98:15]
  assign io_regs_out_21 = regfile_io_regs_21; // @[Core.scala 98:15]
  assign io_regs_out_22 = regfile_io_regs_22; // @[Core.scala 98:15]
  assign io_regs_out_23 = regfile_io_regs_23; // @[Core.scala 98:15]
  assign io_regs_out_24 = regfile_io_regs_24; // @[Core.scala 98:15]
  assign io_regs_out_25 = regfile_io_regs_25; // @[Core.scala 98:15]
  assign io_regs_out_26 = regfile_io_regs_26; // @[Core.scala 98:15]
  assign io_regs_out_27 = regfile_io_regs_27; // @[Core.scala 98:15]
  assign io_regs_out_28 = regfile_io_regs_28; // @[Core.scala 98:15]
  assign io_regs_out_29 = regfile_io_regs_29; // @[Core.scala 98:15]
  assign io_regs_out_30 = regfile_io_regs_30; // @[Core.scala 98:15]
  assign io_regs_out_31 = regfile_io_regs_31; // @[Core.scala 98:15]
  assign io_commit = io_commit_REG; // @[Core.scala 100:13]
  assign fetch_clock = clock;
  assign fetch_reset = reset;
  assign fetch_io_imem_resp_bits_rdata = io_imem_resp_bits_rdata[31:0]; // @[Core.scala 31:59]
  assign fetch_io_imem_resp_bits_rvalid = io_imem_resp_bits_read_ok; // @[Core.scala 33:34]
  assign fetch_io_out_ready = decode_io_in_ready; // @[Core.scala 47:16]
  assign fetch_io_if_flush = execute_io_jmp_packet_o_mis; // @[Core.scala 132:21]
  assign fetch_io_jmp_packet_i_jmp_npc = execute_io_jmp_packet_o_jmp_npc; // @[Core.scala 66:25]
  assign fetch_io_jmp_packet_i_mis = execute_io_jmp_packet_o_mis; // @[Core.scala 66:25]
  assign decode_clock = clock;
  assign decode_reset = reset;
  assign decode_io_in_bits_pc = fetch_io_out_bits_pc; // @[Core.scala 47:16]
  assign decode_io_in_bits_inst = fetch_io_out_bits_inst; // @[Core.scala 47:16]
  assign decode_io_in_bits_inst_valid = fetch_io_out_bits_inst_valid; // @[Core.scala 47:16]
  assign decode_io_out_ready = execute_io_in_ready; // @[Core.scala 60:17]
  assign decode_io_id_flush = execute_io_jmp_packet_o_mis; // @[Core.scala 133:22]
  assign decode_io_rs1_data_i = regfile_io_rdata1; // @[Core.scala 56:24]
  assign decode_io_rs2_data_i = regfile_io_rdata2; // @[Core.scala 57:24]
  assign decode_io_p_npc_i = fetch_io_p_npc; // @[Core.scala 48:21]
  assign decode_io_decode_rf_stall_i = regfile_io_rf_stall; // @[Core.scala 80:32]
  assign regfile_clock = clock;
  assign regfile_reset = reset;
  assign regfile_io_ren1 = decode_io_ren1; // @[Core.scala 51:19]
  assign regfile_io_raddr1 = decode_io_raddr1; // @[Core.scala 53:21]
  assign regfile_io_ren2 = decode_io_ren2; // @[Core.scala 52:19]
  assign regfile_io_raddr2 = decode_io_raddr2; // @[Core.scala 54:21]
  assign regfile_io_wen = mem_io_wen_o; // @[Core.scala 95:18]
  assign regfile_io_waddr = mem_io_waddr_o; // @[Core.scala 94:20]
  assign regfile_io_wdata = mem_io_wdata_o; // @[Core.scala 96:20]
  assign regfile_io_ex_rd_en = execute_io_ex_rd_en; // @[Core.scala 74:32]
  assign regfile_io_ex_rd_addr = execute_io_ex_rd_addr; // @[Core.scala 75:32]
  assign regfile_io_ex_rd_data = execute_io_ex_data_o; // @[Core.scala 76:32]
  assign regfile_io_ex_is_load_i = execute_io_ex_is_load; // @[Core.scala 77:32]
  assign regfile_io_ex_is_mdu_i = execute_io_ex_is_mdu; // @[Core.scala 79:32]
  assign regfile_io_mem_is_load_i = mem_io_mem_is_load; // @[Core.scala 78:32]
  assign regfile_io_mem_rd_en = mem_io_mem_rd_en; // @[Core.scala 118:26]
  assign regfile_io_mem_rd_addr = mem_io_mem_rd_addr; // @[Core.scala 119:26]
  assign regfile_io_mem_rd_data = mem_io_mem_rd_data; // @[Core.scala 120:26]
  assign execute_clock = clock;
  assign execute_reset = reset;
  assign execute_io_in_bits_valid = decode_io_out_bits_valid; // @[Core.scala 60:17]
  assign execute_io_in_bits_pc = decode_io_out_bits_pc; // @[Core.scala 60:17]
  assign execute_io_in_bits_inst = decode_io_out_bits_inst; // @[Core.scala 60:17]
  assign execute_io_in_bits_alu_code = decode_io_out_bits_alu_code; // @[Core.scala 60:17]
  assign execute_io_in_bits_jmp_code = decode_io_out_bits_jmp_code; // @[Core.scala 60:17]
  assign execute_io_in_bits_mem_code = decode_io_out_bits_mem_code; // @[Core.scala 60:17]
  assign execute_io_in_bits_mem_size = decode_io_out_bits_mem_size; // @[Core.scala 60:17]
  assign execute_io_in_bits_mdu_code = decode_io_out_bits_mdu_code; // @[Core.scala 60:17]
  assign execute_io_in_bits_w_type = decode_io_out_bits_w_type; // @[Core.scala 60:17]
  assign execute_io_in_bits_rs1_src = decode_io_out_bits_rs1_src; // @[Core.scala 60:17]
  assign execute_io_in_bits_rs2_src = decode_io_out_bits_rs2_src; // @[Core.scala 60:17]
  assign execute_io_in_bits_rd_addr = decode_io_out_bits_rd_addr; // @[Core.scala 60:17]
  assign execute_io_in_bits_rd_en = decode_io_out_bits_rd_en; // @[Core.scala 60:17]
  assign execute_io_in_bits_imm = decode_io_out_bits_imm; // @[Core.scala 60:17]
  assign execute_io_out_ready = mem_io_in_ready; // @[Core.scala 82:13]
  assign execute_io_ex_rs1_i = decode_io_rs1_data_o; // @[Core.scala 61:23]
  assign execute_io_ex_rs2_i = decode_io_rs2_data_o; // @[Core.scala 62:23]
  assign execute_io_is_ebreak_i = decode_io_is_ebreak; // @[Core.scala 63:26]
  assign execute_io_p_npc_i = decode_io_p_npc_o; // @[Core.scala 64:22]
  assign mem_clock = clock;
  assign mem_reset = reset;
  assign mem_io_in_bits_valid = execute_io_out_bits_valid; // @[Core.scala 82:13]
  assign mem_io_in_bits_pc = execute_io_out_bits_pc; // @[Core.scala 82:13]
  assign mem_io_in_bits_inst = execute_io_out_bits_inst; // @[Core.scala 82:13]
  assign mem_io_in_bits_mem_code = execute_io_out_bits_mem_code; // @[Core.scala 82:13]
  assign mem_io_in_bits_mem_size = execute_io_out_bits_mem_size; // @[Core.scala 82:13]
  assign mem_io_in_bits_mdu_code = execute_io_out_bits_mdu_code; // @[Core.scala 82:13]
  assign mem_io_in_bits_rd_addr = execute_io_out_bits_rd_addr; // @[Core.scala 82:13]
  assign mem_io_in_bits_rd_en = execute_io_out_bits_rd_en; // @[Core.scala 82:13]
  assign mem_io_mem_data_i = execute_io_ex_data_o; // @[Core.scala 83:21]
  assign mem_io_is_ebreak_i = execute_io_is_ebreak_o; // @[Core.scala 84:22]
  assign mem_io_dmem_resp_bits_rdata = io_dmem_resp_bits_rdata; // @[Core.scala 111:31]
  assign mem_io_dmem_resp_bits_rready = io_dmem_resp_bits_read_ok; // @[Core.scala 112:32]
  assign mem_io_dmem_resp_bits_wready = io_dmem_resp_bits_write_ok; // @[Core.scala 113:32]
  assign mem_io_mem_rwaddr_i = execute_io_ex_rwaddr_o; // @[Core.scala 87:24]
  assign mem_io_mem_rvalid_i = execute_io_ex_rvalid_o; // @[Core.scala 88:24]
  assign mem_io_mem_wvalid_i = execute_io_ex_wvalid_o; // @[Core.scala 89:24]
  assign mem_io_mem_wdata_i = execute_io_ex_wdata_o; // @[Core.scala 90:24]
  assign mem_io_mem_wsize_i = execute_io_ex_wsize_o; // @[Core.scala 91:24]
  assign mem_io_reg_mem_addr_i = mem_io_dmem_req_bits_arwaddr; // @[Core.scala 92:25]
  assign mem_io_mem_mduout_i = execute_io_ex_mduout_o; // @[Core.scala 70:23]
  assign mem_io_mem_mduready_i = execute_io_ex_mduready_o; // @[Core.scala 71:25]
  assign wb_dpi_clk = clock; // @[Core.scala 126:18]
  assign wb_dpi_inst = mem_io_out_bits_inst; // @[Core.scala 127:18]
  assign wb_dpi_pc = mem_io_out_bits_pc; // @[Core.scala 128:16]
  assign wb_dpi_ebreak = mem_io_is_ebreak_o; // @[Core.scala 129:20]
  always @(posedge clock) begin
    io_commit_pc_REG <= mem_io_out_bits_pc; // @[Core.scala 99:26]
    io_commit_REG <= mem_io_out_bits_valid; // @[Core.scala 100:23]
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  io_commit_pc_REG = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  io_commit_REG = _RAND_1[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
