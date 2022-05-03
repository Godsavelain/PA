module InstFetch(
  input         clock,
  input         reset,
  output [31:0] io_imem_req_bits_araddr,
  input  [31:0] io_imem_resp_bits_rdata,
  input         io_imem_resp_bits_rvalid,
  input  [31:0] io_imem_resp_bits_old_pc,
  input         io_out_ready,
  output        io_out_valid,
  output [31:0] io_out_bits_pc,
  output [31:0] io_out_bits_inst,
  output        io_out_bits_inst_valid,
  input         io_if_flush,
  output [31:0] io_p_npc,
  input  [31:0] io_jmp_packet_i_jmp_npc,
  input         io_jmp_packet_i_mis,
  input         io_write_regs,
  input  [31:0] io_input_pc
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] pc; // @[InstFetch.scala 58:19]
  wire [29:0] pc_base_hi = pc[31:2]; // @[InstFetch.scala 60:23]
  wire [31:0] pc_base = {pc_base_hi,2'h0}; // @[Cat.scala 30:58]
  wire [31:0] npc_s = pc_base + 32'h4; // @[InstFetch.scala 61:23]
  wire  imem_stall = ~io_imem_resp_bits_rvalid; // @[InstFetch.scala 63:20]
  wire  _stall_T = io_out_ready & io_out_valid; // @[Decoupled.scala 40:37]
  wire  stall = imem_stall | ~_stall_T; // @[InstFetch.scala 64:27]
  reg [31:0] io_p_npc_REG; // @[InstFetch.scala 72:22]
  reg [31:0] io_out_bits_inst_REG; // @[InstFetch.scala 75:30]
  reg  io_out_bits_inst_valid_REG; // @[InstFetch.scala 76:36]
  assign io_imem_req_bits_araddr = {pc_base_hi,2'h0}; // @[Cat.scala 30:58]
  assign io_out_valid = 1'h1; // @[InstFetch.scala 84:18]
  assign io_out_bits_pc = io_imem_resp_bits_old_pc; // @[InstFetch.scala 74:18]
  assign io_out_bits_inst = io_out_bits_inst_REG; // @[InstFetch.scala 75:20]
  assign io_out_bits_inst_valid = io_out_bits_inst_valid_REG; // @[InstFetch.scala 76:26]
  assign io_p_npc = io_p_npc_REG; // @[InstFetch.scala 72:12]
  always @(posedge clock) begin
    if (reset) begin // @[InstFetch.scala 58:19]
      pc <= 32'h80000000; // @[InstFetch.scala 58:19]
    end else if (io_write_regs) begin // @[InstFetch.scala 66:22]
      pc <= io_input_pc; // @[InstFetch.scala 67:7]
    end else if (~stall | io_jmp_packet_i_mis) begin // @[InstFetch.scala 69:43]
      if (io_jmp_packet_i_mis) begin // @[InstFetch.scala 65:16]
        pc <= io_jmp_packet_i_jmp_npc;
      end else begin
        pc <= npc_s;
      end
    end
    io_p_npc_REG <= {pc_base_hi,2'h0}; // @[Cat.scala 30:58]
    if (imem_stall) begin // @[InstFetch.scala 75:34]
      io_out_bits_inst_REG <= 32'h0;
    end else begin
      io_out_bits_inst_REG <= io_imem_resp_bits_rdata;
    end
    if (io_if_flush | imem_stall) begin // @[InstFetch.scala 76:40]
      io_out_bits_inst_valid_REG <= 1'h0;
    end else begin
      io_out_bits_inst_valid_REG <= io_imem_resp_bits_rvalid;
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
  io_p_npc_REG = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  io_out_bits_inst_REG = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  io_out_bits_inst_valid_REG = _RAND_3[0:0];
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
  reg [63:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] pc; // @[Decode.scala 27:22]
  reg [31:0] inst; // @[Decode.scala 28:22]
  reg  inst_valid; // @[Decode.scala 29:27]
  reg [63:0] io_rs1_data_o_REG; // @[Decode.scala 31:27]
  reg [63:0] io_rs2_data_o_REG; // @[Decode.scala 32:27]
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
  wire  _ctrl_T_752 = _ctrl_T_85 ? 1'h0 : _ctrl_T_87 | (_ctrl_T_89 | (_ctrl_T_91 | (_ctrl_T_93 | (_ctrl_T_95 | (
    _ctrl_T_97 | (_ctrl_T_99 | (_ctrl_T_101 | (_ctrl_T_103 | (_ctrl_T_105 | (_ctrl_T_107 | (_ctrl_T_109 | (_ctrl_T_111
     | (_ctrl_T_113 | (_ctrl_T_115 | (_ctrl_T_117 | (_ctrl_T_119 | (_ctrl_T_121 | (_ctrl_T_123 | (_ctrl_T_125 | (
    _ctrl_T_127 | _ctrl_T_129)))))))))))))))))))); // @[Lookup.scala 33:37]
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
  wire  stall = ~_stall_T | io_decode_rf_stall_i; // @[Decode.scala 131:30]
  reg  io_is_ebreak_REG; // @[Decode.scala 155:69]
  reg [31:0] io_p_npc_o_REG; // @[Decode.scala 157:24]
  wire [20:0] imm_i_hi = inst[31] ? 21'h1fffff : 21'h0; // @[Bitwise.scala 72:12]
  wire [10:0] imm_i_lo = inst[30:20]; // @[Decode.scala 159:43]
  wire [31:0] imm_i = {imm_i_hi,imm_i_lo}; // @[Cat.scala 30:58]
  wire [5:0] imm_s_hi_lo = inst[30:25]; // @[Decode.scala 160:43]
  wire [31:0] imm_s = {imm_i_hi,imm_s_hi_lo,inst[11:7]}; // @[Cat.scala 30:58]
  wire [19:0] imm_b_hi_hi_hi = inst[31] ? 20'hfffff : 20'h0; // @[Bitwise.scala 72:12]
  wire  imm_b_hi_hi_lo = inst[7]; // @[Decode.scala 161:43]
  wire [3:0] imm_b_lo_hi = inst[11:8]; // @[Decode.scala 161:66]
  wire [31:0] imm_b = {imm_b_hi_hi_hi,imm_b_hi_hi_lo,imm_s_hi_lo,imm_b_lo_hi,1'h0}; // @[Cat.scala 30:58]
  wire [19:0] imm_u_hi = inst[31:12]; // @[Decode.scala 162:23]
  wire [31:0] imm_u = {imm_u_hi,12'h0}; // @[Cat.scala 30:58]
  wire [11:0] imm_j_hi_hi_hi = inst[31] ? 12'hfff : 12'h0; // @[Bitwise.scala 72:12]
  wire [7:0] imm_j_hi_hi_lo = inst[19:12]; // @[Decode.scala 163:43]
  wire  imm_j_hi_lo = inst[20]; // @[Decode.scala 163:57]
  wire [9:0] imm_j_lo_hi = inst[30:21]; // @[Decode.scala 163:67]
  wire [31:0] imm_j = {imm_j_hi_hi_hi,imm_j_hi_hi_lo,imm_j_hi_lo,imm_j_lo_hi,1'h0}; // @[Cat.scala 30:58]
  wire [31:0] _imm_shamt_T = {27'h0,inst[24:20]}; // @[Cat.scala 30:58]
  wire [5:0] imm_shamt_lo_1 = inst[25:20]; // @[Decode.scala 164:88]
  wire [31:0] _imm_shamt_T_1 = {26'h0,imm_shamt_lo_1}; // @[Cat.scala 30:58]
  wire [31:0] imm_shamt = c0_0 ? _imm_shamt_T : _imm_shamt_T_1; // @[Decode.scala 164:22]
  wire [31:0] imm_csr = {27'h0,inst[19:15]}; // @[Cat.scala 30:58]
  wire [31:0] _io_out_bits_imm_T_1 = 3'h1 == c0_4 ? imm_i : 32'h0; // @[Mux.scala 80:57]
  wire [31:0] _io_out_bits_imm_T_3 = 3'h2 == c0_4 ? imm_s : _io_out_bits_imm_T_1; // @[Mux.scala 80:57]
  wire [31:0] _io_out_bits_imm_T_5 = 3'h3 == c0_4 ? imm_b : _io_out_bits_imm_T_3; // @[Mux.scala 80:57]
  wire [31:0] _io_out_bits_imm_T_7 = 3'h4 == c0_4 ? imm_u : _io_out_bits_imm_T_5; // @[Mux.scala 80:57]
  wire [31:0] _io_out_bits_imm_T_9 = 3'h5 == c0_4 ? imm_j : _io_out_bits_imm_T_7; // @[Mux.scala 80:57]
  wire [31:0] _io_out_bits_imm_T_11 = 3'h6 == c0_4 ? imm_shamt : _io_out_bits_imm_T_9; // @[Mux.scala 80:57]
  assign io_in_ready = ~stall; // @[Decode.scala 177:18]
  assign io_out_valid = 1'h1; // @[Decode.scala 178:16]
  assign io_out_bits_valid = io_id_flush | stall ? 1'h0 : inst_valid; // @[Decode.scala 135:29]
  assign io_out_bits_pc = pc; // @[Decode.scala 133:23]
  assign io_out_bits_inst = inst; // @[Decode.scala 134:23]
  assign io_out_bits_alu_code = _ctrl_T_1 ? 4'h1 : _ctrl_T_361; // @[Lookup.scala 33:37]
  assign io_out_bits_jmp_code = _ctrl_T_1 ? 4'h0 : _ctrl_T_433; // @[Lookup.scala 33:37]
  assign io_out_bits_mem_code = _ctrl_T_1 ? 2'h0 : _ctrl_T_505; // @[Lookup.scala 33:37]
  assign io_out_bits_mem_size = _ctrl_T_1 ? 2'h0 : _ctrl_T_577; // @[Lookup.scala 33:37]
  assign io_out_bits_w_type = _ctrl_T_1 ? 1'h0 : _ctrl_T_793; // @[Lookup.scala 33:37]
  assign io_out_bits_rs1_src = _ctrl_T_1 ? 3'h3 : _ctrl_T_865; // @[Lookup.scala 33:37]
  assign io_out_bits_rs2_src = _ctrl_T_1 ? 3'h2 : _ctrl_T_937; // @[Lookup.scala 33:37]
  assign io_out_bits_rd_addr = inst[11:7]; // @[Decode.scala 149:30]
  assign io_out_bits_rd_en = io_id_flush ? 1'h0 : inst_valid & c0_3; // @[Decode.scala 146:27]
  assign io_out_bits_imm = 3'h7 == c0_4 ? imm_csr : _io_out_bits_imm_T_11; // @[Mux.scala 80:57]
  assign io_ren1 = c0_1 == 3'h1; // @[Decode.scala 151:23]
  assign io_raddr1 = inst[19:15]; // @[Decode.scala 153:20]
  assign io_ren2 = c0_2 == 3'h1 | ctrl_4 == 2'h3; // @[Decode.scala 152:40]
  assign io_raddr2 = inst[24:20]; // @[Decode.scala 154:20]
  assign io_is_ebreak = io_id_flush ? 1'h0 : inst_valid & io_is_ebreak_REG; // @[Decode.scala 155:22]
  assign io_rs1_data_o = io_rs1_data_o_REG; // @[Decode.scala 31:17]
  assign io_rs2_data_o = io_rs2_data_o_REG; // @[Decode.scala 32:17]
  assign io_p_npc_o = io_p_npc_o_REG; // @[Decode.scala 157:14]
  always @(posedge clock) begin
    if (reset) begin // @[Decode.scala 27:22]
      pc <= 32'h0; // @[Decode.scala 27:22]
    end else if (io_in_ready | io_id_flush) begin // @[Decode.scala 33:36]
      if (io_id_flush) begin // @[Decode.scala 34:14]
        pc <= 32'h0;
      end else begin
        pc <= io_in_bits_pc;
      end
    end
    if (reset) begin // @[Decode.scala 28:22]
      inst <= 32'h0; // @[Decode.scala 28:22]
    end else if (io_in_ready | io_id_flush) begin // @[Decode.scala 33:36]
      if (io_id_flush) begin // @[Decode.scala 35:16]
        inst <= 32'h0;
      end else begin
        inst <= io_in_bits_inst;
      end
    end
    if (reset) begin // @[Decode.scala 29:27]
      inst_valid <= 1'h0; // @[Decode.scala 29:27]
    end else if (io_in_ready | io_id_flush) begin // @[Decode.scala 33:36]
      if (io_id_flush) begin // @[Decode.scala 36:22]
        inst_valid <= 1'h0;
      end else begin
        inst_valid <= io_in_bits_inst_valid;
      end
    end
    io_rs1_data_o_REG <= io_rs1_data_i; // @[Decode.scala 31:27]
    io_rs2_data_o_REG <= io_rs2_data_i; // @[Decode.scala 32:27]
    io_is_ebreak_REG <= 32'h100073 == inst; // @[Decode.scala 155:75]
    io_p_npc_o_REG <= io_p_npc_i; // @[Decode.scala 157:24]
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
  _RAND_3 = {2{`RANDOM}};
  io_rs1_data_o_REG = _RAND_3[63:0];
  _RAND_4 = {2{`RANDOM}};
  io_rs2_data_o_REG = _RAND_4[63:0];
  _RAND_5 = {1{`RANDOM}};
  io_is_ebreak_REG = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  io_p_npc_o_REG = _RAND_6[31:0];
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
  input  [31:0] io_ex_rd_addr,
  input  [63:0] io_ex_rd_data,
  input         io_ex_is_load_i,
  input         io_mem_is_load_i,
  input         io_mem_rd_en,
  input  [31:0] io_mem_rd_addr,
  input  [63:0] io_mem_rd_data,
  output        io_rf_stall,
  input  [63:0] io_regs_in_0,
  input  [63:0] io_regs_in_1,
  input  [63:0] io_regs_in_2,
  input  [63:0] io_regs_in_3,
  input  [63:0] io_regs_in_4,
  input  [63:0] io_regs_in_5,
  input  [63:0] io_regs_in_6,
  input  [63:0] io_regs_in_7,
  input  [63:0] io_regs_in_8,
  input  [63:0] io_regs_in_9,
  input  [63:0] io_regs_in_10,
  input  [63:0] io_regs_in_11,
  input  [63:0] io_regs_in_12,
  input  [63:0] io_regs_in_13,
  input  [63:0] io_regs_in_14,
  input  [63:0] io_regs_in_15,
  input  [63:0] io_regs_in_16,
  input  [63:0] io_regs_in_17,
  input  [63:0] io_regs_in_18,
  input  [63:0] io_regs_in_19,
  input  [63:0] io_regs_in_20,
  input  [63:0] io_regs_in_21,
  input  [63:0] io_regs_in_22,
  input  [63:0] io_regs_in_23,
  input  [63:0] io_regs_in_24,
  input  [63:0] io_regs_in_25,
  input  [63:0] io_regs_in_26,
  input  [63:0] io_regs_in_27,
  input  [63:0] io_regs_in_28,
  input  [63:0] io_regs_in_29,
  input  [63:0] io_regs_in_30,
  input  [63:0] io_regs_in_31,
  input         io_write_regs
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
  wire [31:0] _GEN_160 = {{27'd0}, io_raddr1}; // @[RegFile.scala 34:53]
  wire  ex_rs1_hazard = io_ex_rd_en & io_ex_rd_addr == _GEN_160 & io_ren1; // @[RegFile.scala 34:68]
  wire [31:0] _GEN_161 = {{27'd0}, io_raddr2}; // @[RegFile.scala 35:53]
  wire  ex_rs2_hazard = io_ex_rd_en & io_ex_rd_addr == _GEN_161 & io_ren2; // @[RegFile.scala 35:68]
  wire  mem_rs1_hazard = io_mem_rd_en & io_mem_rd_addr == _GEN_160 & io_ren1; // @[RegFile.scala 36:71]
  wire  mem_rs2_hazard = io_mem_rd_en & io_mem_rd_addr == _GEN_161 & io_ren2; // @[RegFile.scala 37:71]
  wire  wb_rs1_hazard = io_wen & io_waddr == io_raddr1 & io_ren1; // @[RegFile.scala 38:58]
  wire  wb_rs2_hazard = io_wen & io_waddr == io_raddr2 & io_ren2; // @[RegFile.scala 39:58]
  reg [63:0] rf_0; // @[RegFile.scala 41:19]
  reg [63:0] rf_1; // @[RegFile.scala 41:19]
  reg [63:0] rf_2; // @[RegFile.scala 41:19]
  reg [63:0] rf_3; // @[RegFile.scala 41:19]
  reg [63:0] rf_4; // @[RegFile.scala 41:19]
  reg [63:0] rf_5; // @[RegFile.scala 41:19]
  reg [63:0] rf_6; // @[RegFile.scala 41:19]
  reg [63:0] rf_7; // @[RegFile.scala 41:19]
  reg [63:0] rf_8; // @[RegFile.scala 41:19]
  reg [63:0] rf_9; // @[RegFile.scala 41:19]
  reg [63:0] rf_10; // @[RegFile.scala 41:19]
  reg [63:0] rf_11; // @[RegFile.scala 41:19]
  reg [63:0] rf_12; // @[RegFile.scala 41:19]
  reg [63:0] rf_13; // @[RegFile.scala 41:19]
  reg [63:0] rf_14; // @[RegFile.scala 41:19]
  reg [63:0] rf_15; // @[RegFile.scala 41:19]
  reg [63:0] rf_16; // @[RegFile.scala 41:19]
  reg [63:0] rf_17; // @[RegFile.scala 41:19]
  reg [63:0] rf_18; // @[RegFile.scala 41:19]
  reg [63:0] rf_19; // @[RegFile.scala 41:19]
  reg [63:0] rf_20; // @[RegFile.scala 41:19]
  reg [63:0] rf_21; // @[RegFile.scala 41:19]
  reg [63:0] rf_22; // @[RegFile.scala 41:19]
  reg [63:0] rf_23; // @[RegFile.scala 41:19]
  reg [63:0] rf_24; // @[RegFile.scala 41:19]
  reg [63:0] rf_25; // @[RegFile.scala 41:19]
  reg [63:0] rf_26; // @[RegFile.scala 41:19]
  reg [63:0] rf_27; // @[RegFile.scala 41:19]
  reg [63:0] rf_28; // @[RegFile.scala 41:19]
  reg [63:0] rf_29; // @[RegFile.scala 41:19]
  reg [63:0] rf_30; // @[RegFile.scala 41:19]
  reg [63:0] rf_31; // @[RegFile.scala 41:19]
  wire [63:0] _GEN_1 = 5'h1 == io_raddr1 ? rf_1 : rf_0; // @[RegFile.scala 44:115 RegFile.scala 44:115]
  wire [63:0] _GEN_2 = 5'h2 == io_raddr1 ? rf_2 : _GEN_1; // @[RegFile.scala 44:115 RegFile.scala 44:115]
  wire [63:0] _GEN_3 = 5'h3 == io_raddr1 ? rf_3 : _GEN_2; // @[RegFile.scala 44:115 RegFile.scala 44:115]
  wire [63:0] _GEN_4 = 5'h4 == io_raddr1 ? rf_4 : _GEN_3; // @[RegFile.scala 44:115 RegFile.scala 44:115]
  wire [63:0] _GEN_5 = 5'h5 == io_raddr1 ? rf_5 : _GEN_4; // @[RegFile.scala 44:115 RegFile.scala 44:115]
  wire [63:0] _GEN_6 = 5'h6 == io_raddr1 ? rf_6 : _GEN_5; // @[RegFile.scala 44:115 RegFile.scala 44:115]
  wire [63:0] _GEN_7 = 5'h7 == io_raddr1 ? rf_7 : _GEN_6; // @[RegFile.scala 44:115 RegFile.scala 44:115]
  wire [63:0] _GEN_8 = 5'h8 == io_raddr1 ? rf_8 : _GEN_7; // @[RegFile.scala 44:115 RegFile.scala 44:115]
  wire [63:0] _GEN_9 = 5'h9 == io_raddr1 ? rf_9 : _GEN_8; // @[RegFile.scala 44:115 RegFile.scala 44:115]
  wire [63:0] _GEN_10 = 5'ha == io_raddr1 ? rf_10 : _GEN_9; // @[RegFile.scala 44:115 RegFile.scala 44:115]
  wire [63:0] _GEN_11 = 5'hb == io_raddr1 ? rf_11 : _GEN_10; // @[RegFile.scala 44:115 RegFile.scala 44:115]
  wire [63:0] _GEN_12 = 5'hc == io_raddr1 ? rf_12 : _GEN_11; // @[RegFile.scala 44:115 RegFile.scala 44:115]
  wire [63:0] _GEN_13 = 5'hd == io_raddr1 ? rf_13 : _GEN_12; // @[RegFile.scala 44:115 RegFile.scala 44:115]
  wire [63:0] _GEN_14 = 5'he == io_raddr1 ? rf_14 : _GEN_13; // @[RegFile.scala 44:115 RegFile.scala 44:115]
  wire [63:0] _GEN_15 = 5'hf == io_raddr1 ? rf_15 : _GEN_14; // @[RegFile.scala 44:115 RegFile.scala 44:115]
  wire [63:0] _GEN_16 = 5'h10 == io_raddr1 ? rf_16 : _GEN_15; // @[RegFile.scala 44:115 RegFile.scala 44:115]
  wire [63:0] _GEN_17 = 5'h11 == io_raddr1 ? rf_17 : _GEN_16; // @[RegFile.scala 44:115 RegFile.scala 44:115]
  wire [63:0] _GEN_18 = 5'h12 == io_raddr1 ? rf_18 : _GEN_17; // @[RegFile.scala 44:115 RegFile.scala 44:115]
  wire [63:0] _GEN_19 = 5'h13 == io_raddr1 ? rf_19 : _GEN_18; // @[RegFile.scala 44:115 RegFile.scala 44:115]
  wire [63:0] _GEN_20 = 5'h14 == io_raddr1 ? rf_20 : _GEN_19; // @[RegFile.scala 44:115 RegFile.scala 44:115]
  wire [63:0] _GEN_21 = 5'h15 == io_raddr1 ? rf_21 : _GEN_20; // @[RegFile.scala 44:115 RegFile.scala 44:115]
  wire [63:0] _GEN_22 = 5'h16 == io_raddr1 ? rf_22 : _GEN_21; // @[RegFile.scala 44:115 RegFile.scala 44:115]
  wire [63:0] _GEN_23 = 5'h17 == io_raddr1 ? rf_23 : _GEN_22; // @[RegFile.scala 44:115 RegFile.scala 44:115]
  wire [63:0] _GEN_24 = 5'h18 == io_raddr1 ? rf_24 : _GEN_23; // @[RegFile.scala 44:115 RegFile.scala 44:115]
  wire [63:0] _GEN_25 = 5'h19 == io_raddr1 ? rf_25 : _GEN_24; // @[RegFile.scala 44:115 RegFile.scala 44:115]
  wire [63:0] _GEN_26 = 5'h1a == io_raddr1 ? rf_26 : _GEN_25; // @[RegFile.scala 44:115 RegFile.scala 44:115]
  wire [63:0] _GEN_27 = 5'h1b == io_raddr1 ? rf_27 : _GEN_26; // @[RegFile.scala 44:115 RegFile.scala 44:115]
  wire [63:0] _GEN_28 = 5'h1c == io_raddr1 ? rf_28 : _GEN_27; // @[RegFile.scala 44:115 RegFile.scala 44:115]
  wire [63:0] _GEN_29 = 5'h1d == io_raddr1 ? rf_29 : _GEN_28; // @[RegFile.scala 44:115 RegFile.scala 44:115]
  wire [63:0] _GEN_30 = 5'h1e == io_raddr1 ? rf_30 : _GEN_29; // @[RegFile.scala 44:115 RegFile.scala 44:115]
  wire [63:0] _GEN_31 = 5'h1f == io_raddr1 ? rf_31 : _GEN_30; // @[RegFile.scala 44:115 RegFile.scala 44:115]
  wire [63:0] _io_rdata1_T_1 = wb_rs1_hazard ? io_wdata : _GEN_31; // @[RegFile.scala 44:115]
  wire [63:0] _io_rdata1_T_2 = mem_rs1_hazard ? io_mem_rd_data : _io_rdata1_T_1; // @[RegFile.scala 44:79]
  wire [63:0] _io_rdata1_T_3 = ex_rs1_hazard ? io_ex_rd_data : _io_rdata1_T_2; // @[RegFile.scala 44:44]
  wire [63:0] _GEN_33 = 5'h1 == io_raddr2 ? rf_1 : rf_0; // @[RegFile.scala 45:115 RegFile.scala 45:115]
  wire [63:0] _GEN_34 = 5'h2 == io_raddr2 ? rf_2 : _GEN_33; // @[RegFile.scala 45:115 RegFile.scala 45:115]
  wire [63:0] _GEN_35 = 5'h3 == io_raddr2 ? rf_3 : _GEN_34; // @[RegFile.scala 45:115 RegFile.scala 45:115]
  wire [63:0] _GEN_36 = 5'h4 == io_raddr2 ? rf_4 : _GEN_35; // @[RegFile.scala 45:115 RegFile.scala 45:115]
  wire [63:0] _GEN_37 = 5'h5 == io_raddr2 ? rf_5 : _GEN_36; // @[RegFile.scala 45:115 RegFile.scala 45:115]
  wire [63:0] _GEN_38 = 5'h6 == io_raddr2 ? rf_6 : _GEN_37; // @[RegFile.scala 45:115 RegFile.scala 45:115]
  wire [63:0] _GEN_39 = 5'h7 == io_raddr2 ? rf_7 : _GEN_38; // @[RegFile.scala 45:115 RegFile.scala 45:115]
  wire [63:0] _GEN_40 = 5'h8 == io_raddr2 ? rf_8 : _GEN_39; // @[RegFile.scala 45:115 RegFile.scala 45:115]
  wire [63:0] _GEN_41 = 5'h9 == io_raddr2 ? rf_9 : _GEN_40; // @[RegFile.scala 45:115 RegFile.scala 45:115]
  wire [63:0] _GEN_42 = 5'ha == io_raddr2 ? rf_10 : _GEN_41; // @[RegFile.scala 45:115 RegFile.scala 45:115]
  wire [63:0] _GEN_43 = 5'hb == io_raddr2 ? rf_11 : _GEN_42; // @[RegFile.scala 45:115 RegFile.scala 45:115]
  wire [63:0] _GEN_44 = 5'hc == io_raddr2 ? rf_12 : _GEN_43; // @[RegFile.scala 45:115 RegFile.scala 45:115]
  wire [63:0] _GEN_45 = 5'hd == io_raddr2 ? rf_13 : _GEN_44; // @[RegFile.scala 45:115 RegFile.scala 45:115]
  wire [63:0] _GEN_46 = 5'he == io_raddr2 ? rf_14 : _GEN_45; // @[RegFile.scala 45:115 RegFile.scala 45:115]
  wire [63:0] _GEN_47 = 5'hf == io_raddr2 ? rf_15 : _GEN_46; // @[RegFile.scala 45:115 RegFile.scala 45:115]
  wire [63:0] _GEN_48 = 5'h10 == io_raddr2 ? rf_16 : _GEN_47; // @[RegFile.scala 45:115 RegFile.scala 45:115]
  wire [63:0] _GEN_49 = 5'h11 == io_raddr2 ? rf_17 : _GEN_48; // @[RegFile.scala 45:115 RegFile.scala 45:115]
  wire [63:0] _GEN_50 = 5'h12 == io_raddr2 ? rf_18 : _GEN_49; // @[RegFile.scala 45:115 RegFile.scala 45:115]
  wire [63:0] _GEN_51 = 5'h13 == io_raddr2 ? rf_19 : _GEN_50; // @[RegFile.scala 45:115 RegFile.scala 45:115]
  wire [63:0] _GEN_52 = 5'h14 == io_raddr2 ? rf_20 : _GEN_51; // @[RegFile.scala 45:115 RegFile.scala 45:115]
  wire [63:0] _GEN_53 = 5'h15 == io_raddr2 ? rf_21 : _GEN_52; // @[RegFile.scala 45:115 RegFile.scala 45:115]
  wire [63:0] _GEN_54 = 5'h16 == io_raddr2 ? rf_22 : _GEN_53; // @[RegFile.scala 45:115 RegFile.scala 45:115]
  wire [63:0] _GEN_55 = 5'h17 == io_raddr2 ? rf_23 : _GEN_54; // @[RegFile.scala 45:115 RegFile.scala 45:115]
  wire [63:0] _GEN_56 = 5'h18 == io_raddr2 ? rf_24 : _GEN_55; // @[RegFile.scala 45:115 RegFile.scala 45:115]
  wire [63:0] _GEN_57 = 5'h19 == io_raddr2 ? rf_25 : _GEN_56; // @[RegFile.scala 45:115 RegFile.scala 45:115]
  wire [63:0] _GEN_58 = 5'h1a == io_raddr2 ? rf_26 : _GEN_57; // @[RegFile.scala 45:115 RegFile.scala 45:115]
  wire [63:0] _GEN_59 = 5'h1b == io_raddr2 ? rf_27 : _GEN_58; // @[RegFile.scala 45:115 RegFile.scala 45:115]
  wire [63:0] _GEN_60 = 5'h1c == io_raddr2 ? rf_28 : _GEN_59; // @[RegFile.scala 45:115 RegFile.scala 45:115]
  wire [63:0] _GEN_61 = 5'h1d == io_raddr2 ? rf_29 : _GEN_60; // @[RegFile.scala 45:115 RegFile.scala 45:115]
  wire [63:0] _GEN_62 = 5'h1e == io_raddr2 ? rf_30 : _GEN_61; // @[RegFile.scala 45:115 RegFile.scala 45:115]
  wire [63:0] _GEN_63 = 5'h1f == io_raddr2 ? rf_31 : _GEN_62; // @[RegFile.scala 45:115 RegFile.scala 45:115]
  wire [63:0] _io_rdata2_T_1 = wb_rs2_hazard ? io_wdata : _GEN_63; // @[RegFile.scala 45:115]
  wire [63:0] _io_rdata2_T_2 = mem_rs2_hazard ? io_mem_rd_data : _io_rdata2_T_1; // @[RegFile.scala 45:79]
  wire [63:0] _io_rdata2_T_3 = ex_rs2_hazard ? io_ex_rd_data : _io_rdata2_T_2; // @[RegFile.scala 45:44]
  assign io_rdata1 = io_raddr1 != 5'h0 ? _io_rdata1_T_3 : 64'h0; // @[RegFile.scala 44:19]
  assign io_rdata2 = io_raddr2 != 5'h0 ? _io_rdata2_T_3 : 64'h0; // @[RegFile.scala 45:19]
  assign io_regs_0 = rf_0; // @[RegFile.scala 51:11]
  assign io_regs_1 = rf_1; // @[RegFile.scala 51:11]
  assign io_regs_2 = rf_2; // @[RegFile.scala 51:11]
  assign io_regs_3 = rf_3; // @[RegFile.scala 51:11]
  assign io_regs_4 = rf_4; // @[RegFile.scala 51:11]
  assign io_regs_5 = rf_5; // @[RegFile.scala 51:11]
  assign io_regs_6 = rf_6; // @[RegFile.scala 51:11]
  assign io_regs_7 = rf_7; // @[RegFile.scala 51:11]
  assign io_regs_8 = rf_8; // @[RegFile.scala 51:11]
  assign io_regs_9 = rf_9; // @[RegFile.scala 51:11]
  assign io_regs_10 = rf_10; // @[RegFile.scala 51:11]
  assign io_regs_11 = rf_11; // @[RegFile.scala 51:11]
  assign io_regs_12 = rf_12; // @[RegFile.scala 51:11]
  assign io_regs_13 = rf_13; // @[RegFile.scala 51:11]
  assign io_regs_14 = rf_14; // @[RegFile.scala 51:11]
  assign io_regs_15 = rf_15; // @[RegFile.scala 51:11]
  assign io_regs_16 = rf_16; // @[RegFile.scala 51:11]
  assign io_regs_17 = rf_17; // @[RegFile.scala 51:11]
  assign io_regs_18 = rf_18; // @[RegFile.scala 51:11]
  assign io_regs_19 = rf_19; // @[RegFile.scala 51:11]
  assign io_regs_20 = rf_20; // @[RegFile.scala 51:11]
  assign io_regs_21 = rf_21; // @[RegFile.scala 51:11]
  assign io_regs_22 = rf_22; // @[RegFile.scala 51:11]
  assign io_regs_23 = rf_23; // @[RegFile.scala 51:11]
  assign io_regs_24 = rf_24; // @[RegFile.scala 51:11]
  assign io_regs_25 = rf_25; // @[RegFile.scala 51:11]
  assign io_regs_26 = rf_26; // @[RegFile.scala 51:11]
  assign io_regs_27 = rf_27; // @[RegFile.scala 51:11]
  assign io_regs_28 = rf_28; // @[RegFile.scala 51:11]
  assign io_regs_29 = rf_29; // @[RegFile.scala 51:11]
  assign io_regs_30 = rf_30; // @[RegFile.scala 51:11]
  assign io_regs_31 = rf_31; // @[RegFile.scala 51:11]
  assign io_rf_stall = io_ex_is_load_i & (ex_rs1_hazard | ex_rs2_hazard) | io_mem_is_load_i & (mem_rs1_hazard |
    mem_rs2_hazard); // @[RegFile.scala 43:74]
  always @(posedge clock) begin
    if (reset) begin // @[RegFile.scala 41:19]
      rf_0 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_0 <= io_regs_in_0; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'h0 == io_waddr) begin // @[RegFile.scala 49:18]
        rf_0 <= io_wdata; // @[RegFile.scala 49:18]
      end
    end
    if (reset) begin // @[RegFile.scala 41:19]
      rf_1 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_1 <= io_regs_in_1; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'h1 == io_waddr) begin // @[RegFile.scala 49:18]
        rf_1 <= io_wdata; // @[RegFile.scala 49:18]
      end
    end
    if (reset) begin // @[RegFile.scala 41:19]
      rf_2 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_2 <= io_regs_in_2; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'h2 == io_waddr) begin // @[RegFile.scala 49:18]
        rf_2 <= io_wdata; // @[RegFile.scala 49:18]
      end
    end
    if (reset) begin // @[RegFile.scala 41:19]
      rf_3 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_3 <= io_regs_in_3; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'h3 == io_waddr) begin // @[RegFile.scala 49:18]
        rf_3 <= io_wdata; // @[RegFile.scala 49:18]
      end
    end
    if (reset) begin // @[RegFile.scala 41:19]
      rf_4 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_4 <= io_regs_in_4; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'h4 == io_waddr) begin // @[RegFile.scala 49:18]
        rf_4 <= io_wdata; // @[RegFile.scala 49:18]
      end
    end
    if (reset) begin // @[RegFile.scala 41:19]
      rf_5 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_5 <= io_regs_in_5; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'h5 == io_waddr) begin // @[RegFile.scala 49:18]
        rf_5 <= io_wdata; // @[RegFile.scala 49:18]
      end
    end
    if (reset) begin // @[RegFile.scala 41:19]
      rf_6 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_6 <= io_regs_in_6; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'h6 == io_waddr) begin // @[RegFile.scala 49:18]
        rf_6 <= io_wdata; // @[RegFile.scala 49:18]
      end
    end
    if (reset) begin // @[RegFile.scala 41:19]
      rf_7 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_7 <= io_regs_in_7; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'h7 == io_waddr) begin // @[RegFile.scala 49:18]
        rf_7 <= io_wdata; // @[RegFile.scala 49:18]
      end
    end
    if (reset) begin // @[RegFile.scala 41:19]
      rf_8 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_8 <= io_regs_in_8; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'h8 == io_waddr) begin // @[RegFile.scala 49:18]
        rf_8 <= io_wdata; // @[RegFile.scala 49:18]
      end
    end
    if (reset) begin // @[RegFile.scala 41:19]
      rf_9 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_9 <= io_regs_in_9; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'h9 == io_waddr) begin // @[RegFile.scala 49:18]
        rf_9 <= io_wdata; // @[RegFile.scala 49:18]
      end
    end
    if (reset) begin // @[RegFile.scala 41:19]
      rf_10 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_10 <= io_regs_in_10; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'ha == io_waddr) begin // @[RegFile.scala 49:18]
        rf_10 <= io_wdata; // @[RegFile.scala 49:18]
      end
    end
    if (reset) begin // @[RegFile.scala 41:19]
      rf_11 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_11 <= io_regs_in_11; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'hb == io_waddr) begin // @[RegFile.scala 49:18]
        rf_11 <= io_wdata; // @[RegFile.scala 49:18]
      end
    end
    if (reset) begin // @[RegFile.scala 41:19]
      rf_12 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_12 <= io_regs_in_12; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'hc == io_waddr) begin // @[RegFile.scala 49:18]
        rf_12 <= io_wdata; // @[RegFile.scala 49:18]
      end
    end
    if (reset) begin // @[RegFile.scala 41:19]
      rf_13 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_13 <= io_regs_in_13; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'hd == io_waddr) begin // @[RegFile.scala 49:18]
        rf_13 <= io_wdata; // @[RegFile.scala 49:18]
      end
    end
    if (reset) begin // @[RegFile.scala 41:19]
      rf_14 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_14 <= io_regs_in_14; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'he == io_waddr) begin // @[RegFile.scala 49:18]
        rf_14 <= io_wdata; // @[RegFile.scala 49:18]
      end
    end
    if (reset) begin // @[RegFile.scala 41:19]
      rf_15 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_15 <= io_regs_in_15; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'hf == io_waddr) begin // @[RegFile.scala 49:18]
        rf_15 <= io_wdata; // @[RegFile.scala 49:18]
      end
    end
    if (reset) begin // @[RegFile.scala 41:19]
      rf_16 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_16 <= io_regs_in_16; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'h10 == io_waddr) begin // @[RegFile.scala 49:18]
        rf_16 <= io_wdata; // @[RegFile.scala 49:18]
      end
    end
    if (reset) begin // @[RegFile.scala 41:19]
      rf_17 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_17 <= io_regs_in_17; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'h11 == io_waddr) begin // @[RegFile.scala 49:18]
        rf_17 <= io_wdata; // @[RegFile.scala 49:18]
      end
    end
    if (reset) begin // @[RegFile.scala 41:19]
      rf_18 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_18 <= io_regs_in_18; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'h12 == io_waddr) begin // @[RegFile.scala 49:18]
        rf_18 <= io_wdata; // @[RegFile.scala 49:18]
      end
    end
    if (reset) begin // @[RegFile.scala 41:19]
      rf_19 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_19 <= io_regs_in_19; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'h13 == io_waddr) begin // @[RegFile.scala 49:18]
        rf_19 <= io_wdata; // @[RegFile.scala 49:18]
      end
    end
    if (reset) begin // @[RegFile.scala 41:19]
      rf_20 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_20 <= io_regs_in_20; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'h14 == io_waddr) begin // @[RegFile.scala 49:18]
        rf_20 <= io_wdata; // @[RegFile.scala 49:18]
      end
    end
    if (reset) begin // @[RegFile.scala 41:19]
      rf_21 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_21 <= io_regs_in_21; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'h15 == io_waddr) begin // @[RegFile.scala 49:18]
        rf_21 <= io_wdata; // @[RegFile.scala 49:18]
      end
    end
    if (reset) begin // @[RegFile.scala 41:19]
      rf_22 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_22 <= io_regs_in_22; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'h16 == io_waddr) begin // @[RegFile.scala 49:18]
        rf_22 <= io_wdata; // @[RegFile.scala 49:18]
      end
    end
    if (reset) begin // @[RegFile.scala 41:19]
      rf_23 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_23 <= io_regs_in_23; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'h17 == io_waddr) begin // @[RegFile.scala 49:18]
        rf_23 <= io_wdata; // @[RegFile.scala 49:18]
      end
    end
    if (reset) begin // @[RegFile.scala 41:19]
      rf_24 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_24 <= io_regs_in_24; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'h18 == io_waddr) begin // @[RegFile.scala 49:18]
        rf_24 <= io_wdata; // @[RegFile.scala 49:18]
      end
    end
    if (reset) begin // @[RegFile.scala 41:19]
      rf_25 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_25 <= io_regs_in_25; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'h19 == io_waddr) begin // @[RegFile.scala 49:18]
        rf_25 <= io_wdata; // @[RegFile.scala 49:18]
      end
    end
    if (reset) begin // @[RegFile.scala 41:19]
      rf_26 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_26 <= io_regs_in_26; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'h1a == io_waddr) begin // @[RegFile.scala 49:18]
        rf_26 <= io_wdata; // @[RegFile.scala 49:18]
      end
    end
    if (reset) begin // @[RegFile.scala 41:19]
      rf_27 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_27 <= io_regs_in_27; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'h1b == io_waddr) begin // @[RegFile.scala 49:18]
        rf_27 <= io_wdata; // @[RegFile.scala 49:18]
      end
    end
    if (reset) begin // @[RegFile.scala 41:19]
      rf_28 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_28 <= io_regs_in_28; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'h1c == io_waddr) begin // @[RegFile.scala 49:18]
        rf_28 <= io_wdata; // @[RegFile.scala 49:18]
      end
    end
    if (reset) begin // @[RegFile.scala 41:19]
      rf_29 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_29 <= io_regs_in_29; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'h1d == io_waddr) begin // @[RegFile.scala 49:18]
        rf_29 <= io_wdata; // @[RegFile.scala 49:18]
      end
    end
    if (reset) begin // @[RegFile.scala 41:19]
      rf_30 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_30 <= io_regs_in_30; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'h1e == io_waddr) begin // @[RegFile.scala 49:18]
        rf_30 <= io_wdata; // @[RegFile.scala 49:18]
      end
    end
    if (reset) begin // @[RegFile.scala 41:19]
      rf_31 <= 64'h0; // @[RegFile.scala 41:19]
    end else if (io_write_regs) begin // @[RegFile.scala 46:22]
      rf_31 <= io_regs_in_31; // @[RegFile.scala 47:8]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 48:44]
      if (5'h1f == io_waddr) begin // @[RegFile.scala 49:18]
        rf_31 <= io_wdata; // @[RegFile.scala 49:18]
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
  wire [5:0] shamt = io_wtype_i ? {{1'd0}, io_in2[4:0]} : io_in2[5:0]; // @[Execute.scala 114:18]
  wire  _out0_T = io_jmp_code == 4'h2; // @[Execute.scala 116:29]
  wire [31:0] _out0_T_4 = io_pc_i + 32'h4; // @[Execute.scala 116:83]
  wire [63:0] _out0_T_6 = io_in1 + io_in2; // @[Execute.scala 117:22]
  wire [63:0] _out0_T_8 = io_in1 - io_in2; // @[Execute.scala 118:22]
  wire  _out0_T_11 = $signed(io_in1) < $signed(io_in2); // @[Execute.scala 119:31]
  wire  _out0_T_12 = io_in1 < io_in2; // @[Execute.scala 120:22]
  wire [63:0] _out0_T_13 = io_in1 ^ io_in2; // @[Execute.scala 121:22]
  wire [63:0] _out0_T_14 = io_in1 | io_in2; // @[Execute.scala 122:22]
  wire [63:0] _out0_T_15 = io_in1 & io_in2; // @[Execute.scala 123:22]
  wire [126:0] _GEN_0 = {{63'd0}, io_in1}; // @[Execute.scala 124:23]
  wire [126:0] _out0_T_16 = _GEN_0 << shamt; // @[Execute.scala 124:23]
  wire [31:0] out0_lo = io_in1[31:0]; // @[Execute.scala 125:48]
  wire [63:0] _out0_T_18 = {32'h0,out0_lo}; // @[Cat.scala 30:58]
  wire [63:0] _out0_T_19 = _out0_T_18 >> shamt; // @[Execute.scala 125:66]
  wire [63:0] _out0_T_20 = io_in1 >> shamt; // @[Execute.scala 125:101]
  wire [63:0] _out0_T_21 = io_wtype_i ? _out0_T_19 : _out0_T_20; // @[Execute.scala 125:20]
  wire [63:0] _out0_T_24 = $signed(io_in1) >>> shamt; // @[Execute.scala 126:47]
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
  wire [63:0] out0 = io_jmp_code == 4'h2 | io_jmp_code == 4'h1 ? {{32'd0}, _out0_T_4} : _out0_T_44; // @[Execute.scala 116:14]
  wire  _io_jmp_T = io_in1 == io_in2; // @[Execute.scala 132:22]
  wire  _io_jmp_T_1 = io_in1 != io_in2; // @[Execute.scala 133:22]
  wire  _io_jmp_T_7 = $signed(io_in1) >= $signed(io_in2); // @[Execute.scala 135:31]
  wire  _io_jmp_T_9 = io_in1 >= io_in2; // @[Execute.scala 137:31]
  wire  _io_jmp_T_15 = 4'h3 == io_jmp_code ? _io_jmp_T : 4'h2 == io_jmp_code | 4'h1 == io_jmp_code; // @[Mux.scala 80:57]
  wire  _io_jmp_T_17 = 4'h4 == io_jmp_code ? _io_jmp_T_1 : _io_jmp_T_15; // @[Mux.scala 80:57]
  wire  _io_jmp_T_19 = 4'h5 == io_jmp_code ? _out0_T_11 : _io_jmp_T_17; // @[Mux.scala 80:57]
  wire  _io_jmp_T_21 = 4'h6 == io_jmp_code ? _io_jmp_T_7 : _io_jmp_T_19; // @[Mux.scala 80:57]
  wire  _io_jmp_T_23 = 4'h7 == io_jmp_code ? _out0_T_12 : _io_jmp_T_21; // @[Mux.scala 80:57]
  wire [31:0] _io_jmp_pc_T_2 = _out0_T ? out0_lo : io_pc_i; // @[Execute.scala 140:19]
  wire [31:0] out1_lo = out0[31:0]; // @[Execute.scala 142:41]
  wire [31:0] out1_hi = out1_lo[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _out1_T_2 = {out1_hi,out1_lo}; // @[Cat.scala 30:58]
  assign io_alu_out = io_wtype_i ? _out1_T_2 : out0; // @[Execute.scala 142:14]
  assign io_jmp = 4'h8 == io_jmp_code ? _io_jmp_T_9 : _io_jmp_T_23; // @[Mux.scala 80:57]
  assign io_jmp_pc = _io_jmp_pc_T_2 + io_imm; // @[Execute.scala 140:67]
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
  output        io_ex_rd_en,
  output [31:0] io_ex_rd_addr,
  output        io_ex_is_load,
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
`endif // RANDOMIZE_REG_INIT
  wire [63:0] alu_io_in1; // @[Execute.scala 60:19]
  wire [63:0] alu_io_in2; // @[Execute.scala 60:19]
  wire [3:0] alu_io_aluop_i; // @[Execute.scala 60:19]
  wire  alu_io_wtype_i; // @[Execute.scala 60:19]
  wire [63:0] alu_io_alu_out; // @[Execute.scala 60:19]
  wire  alu_io_jmp; // @[Execute.scala 60:19]
  wire [3:0] alu_io_jmp_code; // @[Execute.scala 60:19]
  wire [31:0] alu_io_imm; // @[Execute.scala 60:19]
  wire [31:0] alu_io_pc_i; // @[Execute.scala 60:19]
  wire [31:0] alu_io_jmp_pc; // @[Execute.scala 60:19]
  wire  _stall_T = io_out_ready & io_out_valid; // @[Decoupled.scala 40:37]
  wire  stall = ~_stall_T; // @[Execute.scala 33:15]
  reg  io_is_ebreak_o_REG; // @[Execute.scala 36:28]
  reg  ex_reg_decodeop_valid; // @[Execute.scala 37:32]
  reg [31:0] ex_reg_decodeop_pc; // @[Execute.scala 37:32]
  reg [31:0] ex_reg_decodeop_inst; // @[Execute.scala 37:32]
  reg [3:0] ex_reg_decodeop_alu_code; // @[Execute.scala 37:32]
  reg [3:0] ex_reg_decodeop_jmp_code; // @[Execute.scala 37:32]
  reg [1:0] ex_reg_decodeop_mem_code; // @[Execute.scala 37:32]
  reg [1:0] ex_reg_decodeop_mem_size; // @[Execute.scala 37:32]
  reg  ex_reg_decodeop_w_type; // @[Execute.scala 37:32]
  reg [2:0] ex_reg_decodeop_rs1_src; // @[Execute.scala 37:32]
  reg [2:0] ex_reg_decodeop_rs2_src; // @[Execute.scala 37:32]
  reg [4:0] ex_reg_decodeop_rd_addr; // @[Execute.scala 37:32]
  reg  ex_reg_decodeop_rd_en; // @[Execute.scala 37:32]
  reg [31:0] ex_reg_decodeop_imm; // @[Execute.scala 37:32]
  wire [31:0] rs1_temp_hi = ex_reg_decodeop_imm[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _rs1_temp_T_2 = {rs1_temp_hi,ex_reg_decodeop_imm}; // @[Cat.scala 30:58]
  wire [63:0] _rs1_temp_T_3 = {32'h0,ex_reg_decodeop_pc}; // @[Cat.scala 30:58]
  wire [31:0] rs1_temp_lo = ex_reg_decodeop_pc + 32'h4; // @[Execute.scala 47:49]
  wire [63:0] _rs1_temp_T_5 = {32'h0,rs1_temp_lo}; // @[Cat.scala 30:58]
  wire [63:0] _rs1_temp_T_7 = 3'h1 == ex_reg_decodeop_rs1_src ? io_ex_rs1_i : 64'h0; // @[Mux.scala 80:57]
  wire [63:0] _rs1_temp_T_9 = 3'h2 == ex_reg_decodeop_rs1_src ? _rs1_temp_T_2 : _rs1_temp_T_7; // @[Mux.scala 80:57]
  wire [63:0] _rs1_temp_T_11 = 3'h4 == ex_reg_decodeop_rs1_src ? _rs1_temp_T_3 : _rs1_temp_T_9; // @[Mux.scala 80:57]
  wire [63:0] _rs2_temp_T_7 = 3'h1 == ex_reg_decodeop_rs2_src ? io_ex_rs2_i : 64'h0; // @[Mux.scala 80:57]
  wire [63:0] _rs2_temp_T_9 = 3'h2 == ex_reg_decodeop_rs2_src ? _rs1_temp_T_2 : _rs2_temp_T_7; // @[Mux.scala 80:57]
  wire [63:0] _rs2_temp_T_11 = 3'h4 == ex_reg_decodeop_rs2_src ? _rs1_temp_T_3 : _rs2_temp_T_9; // @[Mux.scala 80:57]
  wire [31:0] real_npc = alu_io_jmp ? alu_io_jmp_pc : rs1_temp_lo; // @[Execute.scala 69:21]
  wire  _is_load_T = ex_reg_decodeop_mem_code == 2'h1; // @[Execute.scala 78:44]
  wire  _is_load_T_1 = ex_reg_decodeop_mem_code == 2'h2; // @[Execute.scala 78:85]
  Alu alu ( // @[Execute.scala 60:19]
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
  assign io_in_ready = ~stall; // @[Execute.scala 34:18]
  assign io_out_valid = 1'h1; // @[Execute.scala 35:16]
  assign io_out_bits_valid = ex_reg_decodeop_valid; // @[Execute.scala 74:15]
  assign io_out_bits_pc = ex_reg_decodeop_pc; // @[Execute.scala 74:15]
  assign io_out_bits_inst = ex_reg_decodeop_inst; // @[Execute.scala 74:15]
  assign io_out_bits_mem_code = ex_reg_decodeop_mem_code; // @[Execute.scala 74:15]
  assign io_out_bits_mem_size = ex_reg_decodeop_mem_size; // @[Execute.scala 74:15]
  assign io_out_bits_rd_addr = ex_reg_decodeop_rd_addr; // @[Execute.scala 74:15]
  assign io_out_bits_rd_en = ex_reg_decodeop_rd_en; // @[Execute.scala 74:15]
  assign io_ex_data_o = alu_io_alu_out; // @[Execute.scala 72:16]
  assign io_is_ebreak_o = io_is_ebreak_o_REG; // @[Execute.scala 36:18]
  assign io_ex_rwaddr_o = alu_io_alu_out[31:0]; // @[Execute.scala 82:35]
  assign io_ex_rvalid_o = (ex_reg_decodeop_mem_code == 2'h1 | ex_reg_decodeop_mem_code == 2'h2) & ex_reg_decodeop_valid; // @[Execute.scala 78:99]
  assign io_ex_wvalid_o = ex_reg_decodeop_mem_code == 2'h3 & ex_reg_decodeop_valid; // @[Execute.scala 79:56]
  assign io_ex_wdata_o = io_ex_rs2_i; // @[Execute.scala 81:18]
  assign io_ex_wsize_o = ex_reg_decodeop_mem_size; // @[Execute.scala 85:18]
  assign io_ex_rd_en = ex_reg_decodeop_rd_en; // @[Execute.scala 88:17]
  assign io_ex_rd_addr = {{27'd0}, ex_reg_decodeop_rd_addr}; // @[Execute.scala 89:17]
  assign io_ex_is_load = _is_load_T | _is_load_T_1; // @[Execute.scala 90:59]
  assign io_jmp_packet_o_jmp_npc = alu_io_jmp ? alu_io_jmp_pc : rs1_temp_lo; // @[Execute.scala 69:21]
  assign io_jmp_packet_o_mis = real_npc != io_p_npc_i & ex_reg_decodeop_valid; // @[Execute.scala 70:52]
  assign alu_io_in1 = 3'h5 == ex_reg_decodeop_rs1_src ? _rs1_temp_T_5 : _rs1_temp_T_11; // @[Mux.scala 80:57]
  assign alu_io_in2 = 3'h5 == ex_reg_decodeop_rs2_src ? _rs1_temp_T_5 : _rs2_temp_T_11; // @[Mux.scala 80:57]
  assign alu_io_aluop_i = ex_reg_decodeop_alu_code; // @[Execute.scala 63:18]
  assign alu_io_wtype_i = ex_reg_decodeop_w_type; // @[Execute.scala 64:18]
  assign alu_io_jmp_code = ex_reg_decodeop_jmp_code; // @[Execute.scala 65:19]
  assign alu_io_imm = ex_reg_decodeop_imm; // @[Execute.scala 66:14]
  assign alu_io_pc_i = ex_reg_decodeop_pc; // @[Execute.scala 67:15]
  always @(posedge clock) begin
    io_is_ebreak_o_REG <= io_is_ebreak_i; // @[Execute.scala 36:28]
    if (reset) begin // @[Execute.scala 37:32]
      ex_reg_decodeop_valid <= 1'h0; // @[Execute.scala 37:32]
    end else if (io_in_ready) begin // @[Execute.scala 39:36]
      ex_reg_decodeop_valid <= io_in_bits_valid; // @[Execute.scala 40:21]
    end
    if (reset) begin // @[Execute.scala 37:32]
      ex_reg_decodeop_pc <= 32'h0; // @[Execute.scala 37:32]
    end else if (io_in_ready) begin // @[Execute.scala 39:36]
      ex_reg_decodeop_pc <= io_in_bits_pc; // @[Execute.scala 40:21]
    end
    if (reset) begin // @[Execute.scala 37:32]
      ex_reg_decodeop_inst <= 32'h0; // @[Execute.scala 37:32]
    end else if (io_in_ready) begin // @[Execute.scala 39:36]
      ex_reg_decodeop_inst <= io_in_bits_inst; // @[Execute.scala 40:21]
    end
    if (reset) begin // @[Execute.scala 37:32]
      ex_reg_decodeop_alu_code <= 4'h0; // @[Execute.scala 37:32]
    end else if (io_in_ready) begin // @[Execute.scala 39:36]
      ex_reg_decodeop_alu_code <= io_in_bits_alu_code; // @[Execute.scala 40:21]
    end
    if (reset) begin // @[Execute.scala 37:32]
      ex_reg_decodeop_jmp_code <= 4'h0; // @[Execute.scala 37:32]
    end else if (io_in_ready) begin // @[Execute.scala 39:36]
      ex_reg_decodeop_jmp_code <= io_in_bits_jmp_code; // @[Execute.scala 40:21]
    end
    if (reset) begin // @[Execute.scala 37:32]
      ex_reg_decodeop_mem_code <= 2'h0; // @[Execute.scala 37:32]
    end else if (io_in_ready) begin // @[Execute.scala 39:36]
      ex_reg_decodeop_mem_code <= io_in_bits_mem_code; // @[Execute.scala 40:21]
    end
    if (reset) begin // @[Execute.scala 37:32]
      ex_reg_decodeop_mem_size <= 2'h0; // @[Execute.scala 37:32]
    end else if (io_in_ready) begin // @[Execute.scala 39:36]
      ex_reg_decodeop_mem_size <= io_in_bits_mem_size; // @[Execute.scala 40:21]
    end
    if (reset) begin // @[Execute.scala 37:32]
      ex_reg_decodeop_w_type <= 1'h0; // @[Execute.scala 37:32]
    end else if (io_in_ready) begin // @[Execute.scala 39:36]
      ex_reg_decodeop_w_type <= io_in_bits_w_type; // @[Execute.scala 40:21]
    end
    if (reset) begin // @[Execute.scala 37:32]
      ex_reg_decodeop_rs1_src <= 3'h0; // @[Execute.scala 37:32]
    end else if (io_in_ready) begin // @[Execute.scala 39:36]
      ex_reg_decodeop_rs1_src <= io_in_bits_rs1_src; // @[Execute.scala 40:21]
    end
    if (reset) begin // @[Execute.scala 37:32]
      ex_reg_decodeop_rs2_src <= 3'h0; // @[Execute.scala 37:32]
    end else if (io_in_ready) begin // @[Execute.scala 39:36]
      ex_reg_decodeop_rs2_src <= io_in_bits_rs2_src; // @[Execute.scala 40:21]
    end
    if (reset) begin // @[Execute.scala 37:32]
      ex_reg_decodeop_rd_addr <= 5'h0; // @[Execute.scala 37:32]
    end else if (io_in_ready) begin // @[Execute.scala 39:36]
      ex_reg_decodeop_rd_addr <= io_in_bits_rd_addr; // @[Execute.scala 40:21]
    end
    if (reset) begin // @[Execute.scala 37:32]
      ex_reg_decodeop_rd_en <= 1'h0; // @[Execute.scala 37:32]
    end else if (io_in_ready) begin // @[Execute.scala 39:36]
      ex_reg_decodeop_rd_en <= io_in_bits_rd_en; // @[Execute.scala 40:21]
    end
    if (reset) begin // @[Execute.scala 37:32]
      ex_reg_decodeop_imm <= 32'h0; // @[Execute.scala 37:32]
    end else if (io_in_ready) begin // @[Execute.scala 39:36]
      ex_reg_decodeop_imm <= io_in_bits_imm; // @[Execute.scala 40:21]
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
  ex_reg_decodeop_w_type = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  ex_reg_decodeop_rs1_src = _RAND_9[2:0];
  _RAND_10 = {1{`RANDOM}};
  ex_reg_decodeop_rs2_src = _RAND_10[2:0];
  _RAND_11 = {1{`RANDOM}};
  ex_reg_decodeop_rd_addr = _RAND_11[4:0];
  _RAND_12 = {1{`RANDOM}};
  ex_reg_decodeop_rd_en = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  ex_reg_decodeop_imm = _RAND_13[31:0];
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
  output        io_mem_rd_en,
  output [31:0] io_mem_rd_addr,
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
  reg [63:0] _RAND_17;
`endif // RANDOMIZE_REG_INIT
  reg  io_is_ebreak_o_REG; // @[Mem.scala 57:28]
  reg  mem_reg_decodeop_valid; // @[Mem.scala 59:33]
  reg [31:0] mem_reg_decodeop_pc; // @[Mem.scala 59:33]
  reg [31:0] mem_reg_decodeop_inst; // @[Mem.scala 59:33]
  reg [1:0] mem_reg_decodeop_mem_code; // @[Mem.scala 59:33]
  reg [1:0] mem_reg_decodeop_mem_size; // @[Mem.scala 59:33]
  reg [4:0] mem_reg_decodeop_rd_addr; // @[Mem.scala 59:33]
  reg  mem_reg_decodeop_rd_en; // @[Mem.scala 59:33]
  reg [4:0] waddr; // @[Mem.scala 60:22]
  reg  wen; // @[Mem.scala 61:22]
  reg [63:0] wdata; // @[Mem.scala 62:22]
  reg [31:0] reg_mem_addr; // @[Mem.scala 64:29]
  wire  _is_load_T = mem_reg_decodeop_mem_code == 2'h1; // @[Mem.scala 75:46]
  wire  _is_load_T_1 = mem_reg_decodeop_mem_code == 2'h2; // @[Mem.scala 75:88]
  wire  is_load = mem_reg_decodeop_mem_code == 2'h1 | mem_reg_decodeop_mem_code == 2'h2; // @[Mem.scala 75:58]
  wire  is_store = mem_reg_decodeop_mem_code == 2'h3; // @[Mem.scala 76:45]
  wire  req_wait = (is_load & ~io_dmem_resp_bits_rready | is_store & ~io_dmem_resp_bits_wready) & mem_reg_decodeop_valid
    ; // @[Mem.scala 78:88]
  wire [2:0] addr_offset = io_mem_rwaddr_i[2:0]; // @[Mem.scala 83:36]
  wire [2:0] reg_addr_offset = reg_mem_addr[2:0]; // @[Mem.scala 84:37]
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
  wire [5:0] _io_dmem_req_bits_wdata_T = {addr_offset, 3'h0}; // @[Mem.scala 105:56]
  wire [126:0] _GEN_22 = {{63'd0}, io_mem_wdata_i}; // @[Mem.scala 105:40]
  wire [126:0] _io_dmem_req_bits_wdata_T_1 = _GEN_22 << _io_dmem_req_bits_wdata_T; // @[Mem.scala 105:40]
  wire [14:0] _GEN_23 = {{7'd0}, wmask}; // @[Mem.scala 106:39]
  wire [14:0] _io_dmem_req_bits_wmask_T = _GEN_23 << addr_offset; // @[Mem.scala 106:39]
  wire [5:0] _ld_data_raw_T = {reg_addr_offset, 3'h0}; // @[Mem.scala 120:57]
  wire [63:0] ld_data_raw = io_dmem_resp_bits_rdata >> _ld_data_raw_T; // @[Mem.scala 120:37]
  wire [55:0] ld_data_hi = ld_data_raw[7] ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 72:12]
  wire [7:0] ld_data_lo = ld_data_raw[7:0]; // @[Mem.scala 123:59]
  wire [63:0] _ld_data_T_3 = {ld_data_hi,ld_data_lo}; // @[Cat.scala 30:58]
  wire [47:0] ld_data_hi_1 = ld_data_raw[15] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 72:12]
  wire [15:0] ld_data_lo_1 = ld_data_raw[15:0]; // @[Mem.scala 124:60]
  wire [63:0] _ld_data_T_6 = {ld_data_hi_1,ld_data_lo_1}; // @[Cat.scala 30:58]
  wire [31:0] ld_data_hi_2 = ld_data_raw[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [31:0] ld_data_lo_2 = ld_data_raw[31:0]; // @[Mem.scala 125:60]
  wire [63:0] _ld_data_T_9 = {ld_data_hi_2,ld_data_lo_2}; // @[Cat.scala 30:58]
  wire [63:0] _ld_data_T_11 = 2'h1 == mem_reg_decodeop_mem_size ? _ld_data_T_6 : _ld_data_T_3; // @[Mux.scala 80:57]
  wire [63:0] _ld_data_T_13 = 2'h2 == mem_reg_decodeop_mem_size ? _ld_data_T_9 : _ld_data_T_11; // @[Mux.scala 80:57]
  wire [63:0] _ld_data_T_15 = 2'h3 == mem_reg_decodeop_mem_size ? ld_data_raw : _ld_data_T_13; // @[Mux.scala 80:57]
  wire [63:0] ld_data = _is_load_T ? _ld_data_T_15 : 64'h0; // @[Mem.scala 122:20]
  wire [63:0] _ld_data_u_T_1 = {56'h0,ld_data_lo}; // @[Cat.scala 30:58]
  wire [63:0] _ld_data_u_T_2 = {48'h0,ld_data_lo_1}; // @[Cat.scala 30:58]
  wire [63:0] _ld_data_u_T_3 = {32'h0,ld_data_lo_2}; // @[Cat.scala 30:58]
  wire [63:0] _ld_data_u_T_5 = 2'h1 == mem_reg_decodeop_mem_size ? _ld_data_u_T_2 : _ld_data_u_T_1; // @[Mux.scala 80:57]
  wire [63:0] _ld_data_u_T_7 = 2'h2 == mem_reg_decodeop_mem_size ? _ld_data_u_T_3 : _ld_data_u_T_5; // @[Mux.scala 80:57]
  wire [63:0] _ld_data_u_T_9 = 2'h3 == mem_reg_decodeop_mem_size ? ld_data_raw : _ld_data_u_T_7; // @[Mux.scala 80:57]
  wire [63:0] ld_data_u = _is_load_T_1 ? _ld_data_u_T_9 : 64'h0; // @[Mem.scala 129:22]
  wire [63:0] _load_data_T_1 = 2'h1 == mem_reg_decodeop_mem_code ? ld_data : 64'h0; // @[Mux.scala 80:57]
  wire [63:0] load_data = 2'h2 == mem_reg_decodeop_mem_code ? ld_data_u : _load_data_T_1; // @[Mux.scala 80:57]
  reg  io_out_bits_REG_valid; // @[Mem.scala 145:25]
  reg [31:0] io_out_bits_REG_pc; // @[Mem.scala 145:25]
  reg [31:0] io_out_bits_REG_inst; // @[Mem.scala 145:25]
  reg [4:0] io_waddr_o_REG; // @[Mem.scala 147:24]
  reg  io_wen_o_REG; // @[Mem.scala 149:24]
  reg [63:0] io_wdata_o_REG; // @[Mem.scala 151:24]
  assign io_in_ready = ~req_wait; // @[Mem.scala 159:18]
  assign io_out_bits_valid = io_out_bits_REG_valid; // @[Mem.scala 145:15]
  assign io_out_bits_pc = io_out_bits_REG_pc; // @[Mem.scala 145:15]
  assign io_out_bits_inst = io_out_bits_REG_inst; // @[Mem.scala 145:15]
  assign io_waddr_o = io_waddr_o_REG; // @[Mem.scala 147:14]
  assign io_wen_o = io_wen_o_REG; // @[Mem.scala 149:14]
  assign io_wdata_o = io_wdata_o_REG; // @[Mem.scala 151:14]
  assign io_is_ebreak_o = io_is_ebreak_o_REG; // @[Mem.scala 57:18]
  assign io_dmem_req_bits_arwaddr = io_mem_rwaddr_i; // @[Mem.scala 103:21]
  assign io_dmem_req_bits_rvalid = req_wait ? 1'h0 : io_mem_rvalid_i; // @[Mem.scala 104:27]
  assign io_dmem_req_bits_wvalid = req_wait ? 1'h0 : io_mem_wvalid_i; // @[Mem.scala 107:27]
  assign io_dmem_req_bits_wdata = _io_dmem_req_bits_wdata_T_1[63:0]; // @[Mem.scala 105:62]
  assign io_dmem_req_bits_wmask = mask & _io_dmem_req_bits_wmask_T[7:0]; // @[Mem.scala 106:29]
  assign io_mem_rd_en = mem_reg_decodeop_rd_en; // @[Mem.scala 154:18]
  assign io_mem_rd_addr = {{27'd0}, mem_reg_decodeop_rd_addr}; // @[Mem.scala 155:18]
  assign io_mem_rd_data = is_load ? load_data : wdata; // @[Mem.scala 150:24]
  assign io_mem_is_load = _is_load_T | _is_load_T_1; // @[Mem.scala 157:61]
  always @(posedge clock) begin
    io_is_ebreak_o_REG <= io_is_ebreak_i; // @[Mem.scala 57:28]
    if (reset) begin // @[Mem.scala 59:33]
      mem_reg_decodeop_valid <= 1'h0; // @[Mem.scala 59:33]
    end else if (io_in_ready) begin // @[Mem.scala 66:39]
      mem_reg_decodeop_valid <= io_in_bits_valid; // @[Mem.scala 67:22]
    end
    if (reset) begin // @[Mem.scala 59:33]
      mem_reg_decodeop_pc <= 32'h0; // @[Mem.scala 59:33]
    end else if (io_in_ready) begin // @[Mem.scala 66:39]
      mem_reg_decodeop_pc <= io_in_bits_pc; // @[Mem.scala 67:22]
    end
    if (reset) begin // @[Mem.scala 59:33]
      mem_reg_decodeop_inst <= 32'h0; // @[Mem.scala 59:33]
    end else if (io_in_ready) begin // @[Mem.scala 66:39]
      mem_reg_decodeop_inst <= io_in_bits_inst; // @[Mem.scala 67:22]
    end
    if (reset) begin // @[Mem.scala 59:33]
      mem_reg_decodeop_mem_code <= 2'h0; // @[Mem.scala 59:33]
    end else if (io_in_ready) begin // @[Mem.scala 66:39]
      mem_reg_decodeop_mem_code <= io_in_bits_mem_code; // @[Mem.scala 67:22]
    end
    if (reset) begin // @[Mem.scala 59:33]
      mem_reg_decodeop_mem_size <= 2'h0; // @[Mem.scala 59:33]
    end else if (io_in_ready) begin // @[Mem.scala 66:39]
      mem_reg_decodeop_mem_size <= io_in_bits_mem_size; // @[Mem.scala 67:22]
    end
    if (reset) begin // @[Mem.scala 59:33]
      mem_reg_decodeop_rd_addr <= 5'h0; // @[Mem.scala 59:33]
    end else if (io_in_ready) begin // @[Mem.scala 66:39]
      mem_reg_decodeop_rd_addr <= io_in_bits_rd_addr; // @[Mem.scala 67:22]
    end
    if (reset) begin // @[Mem.scala 59:33]
      mem_reg_decodeop_rd_en <= 1'h0; // @[Mem.scala 59:33]
    end else if (io_in_ready) begin // @[Mem.scala 66:39]
      mem_reg_decodeop_rd_en <= io_in_bits_rd_en; // @[Mem.scala 67:22]
    end
    if (reset) begin // @[Mem.scala 60:22]
      waddr <= 5'h0; // @[Mem.scala 60:22]
    end else if (io_in_ready) begin // @[Mem.scala 66:39]
      waddr <= io_in_bits_rd_addr; // @[Mem.scala 68:11]
    end
    if (reset) begin // @[Mem.scala 61:22]
      wen <= 1'h0; // @[Mem.scala 61:22]
    end else if (io_in_ready) begin // @[Mem.scala 66:39]
      wen <= io_in_bits_rd_en; // @[Mem.scala 69:11]
    end
    if (reset) begin // @[Mem.scala 62:22]
      wdata <= 64'h0; // @[Mem.scala 62:22]
    end else if (io_in_ready) begin // @[Mem.scala 66:39]
      wdata <= io_mem_data_i; // @[Mem.scala 70:11]
    end
    if (reset) begin // @[Mem.scala 64:29]
      reg_mem_addr <= 32'h0; // @[Mem.scala 64:29]
    end else if (io_in_ready) begin // @[Mem.scala 66:39]
      reg_mem_addr <= io_reg_mem_addr_i; // @[Mem.scala 71:18]
    end
    io_out_bits_REG_valid <= mem_reg_decodeop_valid; // @[Mem.scala 145:29]
    io_out_bits_REG_pc <= mem_reg_decodeop_pc; // @[Mem.scala 145:29]
    io_out_bits_REG_inst <= mem_reg_decodeop_inst; // @[Mem.scala 145:29]
    io_waddr_o_REG <= waddr; // @[Mem.scala 147:24]
    if (req_wait) begin // @[Mem.scala 149:28]
      io_wen_o_REG <= 1'h0;
    end else begin
      io_wen_o_REG <= wen;
    end
    if (is_load) begin // @[Mem.scala 150:24]
      if (2'h2 == mem_reg_decodeop_mem_code) begin // @[Mux.scala 80:57]
        if (_is_load_T_1) begin // @[Mem.scala 129:22]
          if (2'h3 == mem_reg_decodeop_mem_size) begin // @[Mux.scala 80:57]
            io_wdata_o_REG <= ld_data_raw;
          end else begin
            io_wdata_o_REG <= _ld_data_u_T_7;
          end
        end else begin
          io_wdata_o_REG <= 64'h0;
        end
      end else if (2'h1 == mem_reg_decodeop_mem_code) begin // @[Mux.scala 80:57]
        if (_is_load_T) begin // @[Mem.scala 122:20]
          io_wdata_o_REG <= _ld_data_T_15;
        end else begin
          io_wdata_o_REG <= 64'h0;
        end
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
  io_is_ebreak_o_REG = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  mem_reg_decodeop_valid = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  mem_reg_decodeop_pc = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  mem_reg_decodeop_inst = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  mem_reg_decodeop_mem_code = _RAND_4[1:0];
  _RAND_5 = {1{`RANDOM}};
  mem_reg_decodeop_mem_size = _RAND_5[1:0];
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
  io_out_bits_REG_valid = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  io_out_bits_REG_pc = _RAND_13[31:0];
  _RAND_14 = {1{`RANDOM}};
  io_out_bits_REG_inst = _RAND_14[31:0];
  _RAND_15 = {1{`RANDOM}};
  io_waddr_o_REG = _RAND_15[4:0];
  _RAND_16 = {1{`RANDOM}};
  io_wen_o_REG = _RAND_16[0:0];
  _RAND_17 = {2{`RANDOM}};
  io_wdata_o_REG = _RAND_17[63:0];
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
  output [31:0] io_imem_raddr,
  output [31:0] io_imem_waddr,
  output [63:0] io_imem_wdata,
  output        io_imem_ren,
  output        io_imem_wen,
  output [7:0]  io_imem_wmask,
  input  [63:0] io_imem_rdata,
  input         io_imem_read_ok,
  input         io_imem_write_ok,
  output [31:0] io_dmem_raddr,
  output [31:0] io_dmem_waddr,
  output [63:0] io_dmem_wdata,
  output        io_dmem_ren,
  output        io_dmem_wen,
  output [7:0]  io_dmem_wmask,
  input  [63:0] io_dmem_rdata,
  input         io_dmem_read_ok,
  input         io_dmem_write_ok,
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
  input  [63:0] io_regs_in_0,
  input  [63:0] io_regs_in_1,
  input  [63:0] io_regs_in_2,
  input  [63:0] io_regs_in_3,
  input  [63:0] io_regs_in_4,
  input  [63:0] io_regs_in_5,
  input  [63:0] io_regs_in_6,
  input  [63:0] io_regs_in_7,
  input  [63:0] io_regs_in_8,
  input  [63:0] io_regs_in_9,
  input  [63:0] io_regs_in_10,
  input  [63:0] io_regs_in_11,
  input  [63:0] io_regs_in_12,
  input  [63:0] io_regs_in_13,
  input  [63:0] io_regs_in_14,
  input  [63:0] io_regs_in_15,
  input  [63:0] io_regs_in_16,
  input  [63:0] io_regs_in_17,
  input  [63:0] io_regs_in_18,
  input  [63:0] io_regs_in_19,
  input  [63:0] io_regs_in_20,
  input  [63:0] io_regs_in_21,
  input  [63:0] io_regs_in_22,
  input  [63:0] io_regs_in_23,
  input  [63:0] io_regs_in_24,
  input  [63:0] io_regs_in_25,
  input  [63:0] io_regs_in_26,
  input  [63:0] io_regs_in_27,
  input  [63:0] io_regs_in_28,
  input  [63:0] io_regs_in_29,
  input  [63:0] io_regs_in_30,
  input  [63:0] io_regs_in_31,
  input  [31:0] io_pc_in,
  input         io_write_regs,
  output        io_commit
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  wire  fetch_clock; // @[Core.scala 45:21]
  wire  fetch_reset; // @[Core.scala 45:21]
  wire [31:0] fetch_io_imem_req_bits_araddr; // @[Core.scala 45:21]
  wire [31:0] fetch_io_imem_resp_bits_rdata; // @[Core.scala 45:21]
  wire  fetch_io_imem_resp_bits_rvalid; // @[Core.scala 45:21]
  wire [31:0] fetch_io_imem_resp_bits_old_pc; // @[Core.scala 45:21]
  wire  fetch_io_out_ready; // @[Core.scala 45:21]
  wire  fetch_io_out_valid; // @[Core.scala 45:21]
  wire [31:0] fetch_io_out_bits_pc; // @[Core.scala 45:21]
  wire [31:0] fetch_io_out_bits_inst; // @[Core.scala 45:21]
  wire  fetch_io_out_bits_inst_valid; // @[Core.scala 45:21]
  wire  fetch_io_if_flush; // @[Core.scala 45:21]
  wire [31:0] fetch_io_p_npc; // @[Core.scala 45:21]
  wire [31:0] fetch_io_jmp_packet_i_jmp_npc; // @[Core.scala 45:21]
  wire  fetch_io_jmp_packet_i_mis; // @[Core.scala 45:21]
  wire  fetch_io_write_regs; // @[Core.scala 45:21]
  wire [31:0] fetch_io_input_pc; // @[Core.scala 45:21]
  wire  decode_clock; // @[Core.scala 61:22]
  wire  decode_reset; // @[Core.scala 61:22]
  wire  decode_io_in_ready; // @[Core.scala 61:22]
  wire [31:0] decode_io_in_bits_pc; // @[Core.scala 61:22]
  wire [31:0] decode_io_in_bits_inst; // @[Core.scala 61:22]
  wire  decode_io_in_bits_inst_valid; // @[Core.scala 61:22]
  wire  decode_io_out_ready; // @[Core.scala 61:22]
  wire  decode_io_out_valid; // @[Core.scala 61:22]
  wire  decode_io_out_bits_valid; // @[Core.scala 61:22]
  wire [31:0] decode_io_out_bits_pc; // @[Core.scala 61:22]
  wire [31:0] decode_io_out_bits_inst; // @[Core.scala 61:22]
  wire [3:0] decode_io_out_bits_alu_code; // @[Core.scala 61:22]
  wire [3:0] decode_io_out_bits_jmp_code; // @[Core.scala 61:22]
  wire [1:0] decode_io_out_bits_mem_code; // @[Core.scala 61:22]
  wire [1:0] decode_io_out_bits_mem_size; // @[Core.scala 61:22]
  wire  decode_io_out_bits_w_type; // @[Core.scala 61:22]
  wire [2:0] decode_io_out_bits_rs1_src; // @[Core.scala 61:22]
  wire [2:0] decode_io_out_bits_rs2_src; // @[Core.scala 61:22]
  wire [4:0] decode_io_out_bits_rd_addr; // @[Core.scala 61:22]
  wire  decode_io_out_bits_rd_en; // @[Core.scala 61:22]
  wire [31:0] decode_io_out_bits_imm; // @[Core.scala 61:22]
  wire  decode_io_id_flush; // @[Core.scala 61:22]
  wire  decode_io_ren1; // @[Core.scala 61:22]
  wire [4:0] decode_io_raddr1; // @[Core.scala 61:22]
  wire  decode_io_ren2; // @[Core.scala 61:22]
  wire [4:0] decode_io_raddr2; // @[Core.scala 61:22]
  wire  decode_io_is_ebreak; // @[Core.scala 61:22]
  wire [63:0] decode_io_rs1_data_i; // @[Core.scala 61:22]
  wire [63:0] decode_io_rs2_data_i; // @[Core.scala 61:22]
  wire [63:0] decode_io_rs1_data_o; // @[Core.scala 61:22]
  wire [63:0] decode_io_rs2_data_o; // @[Core.scala 61:22]
  wire [31:0] decode_io_p_npc_i; // @[Core.scala 61:22]
  wire [31:0] decode_io_p_npc_o; // @[Core.scala 61:22]
  wire  decode_io_decode_rf_stall_i; // @[Core.scala 61:22]
  wire  regfile_clock; // @[Core.scala 66:23]
  wire  regfile_reset; // @[Core.scala 66:23]
  wire  regfile_io_ren1; // @[Core.scala 66:23]
  wire [4:0] regfile_io_raddr1; // @[Core.scala 66:23]
  wire [63:0] regfile_io_rdata1; // @[Core.scala 66:23]
  wire  regfile_io_ren2; // @[Core.scala 66:23]
  wire [4:0] regfile_io_raddr2; // @[Core.scala 66:23]
  wire [63:0] regfile_io_rdata2; // @[Core.scala 66:23]
  wire  regfile_io_wen; // @[Core.scala 66:23]
  wire [4:0] regfile_io_waddr; // @[Core.scala 66:23]
  wire [63:0] regfile_io_wdata; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_0; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_1; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_2; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_3; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_4; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_5; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_6; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_7; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_8; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_9; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_10; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_11; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_12; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_13; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_14; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_15; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_16; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_17; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_18; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_19; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_20; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_21; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_22; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_23; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_24; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_25; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_26; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_27; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_28; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_29; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_30; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_31; // @[Core.scala 66:23]
  wire  regfile_io_ex_rd_en; // @[Core.scala 66:23]
  wire [31:0] regfile_io_ex_rd_addr; // @[Core.scala 66:23]
  wire [63:0] regfile_io_ex_rd_data; // @[Core.scala 66:23]
  wire  regfile_io_ex_is_load_i; // @[Core.scala 66:23]
  wire  regfile_io_mem_is_load_i; // @[Core.scala 66:23]
  wire  regfile_io_mem_rd_en; // @[Core.scala 66:23]
  wire [31:0] regfile_io_mem_rd_addr; // @[Core.scala 66:23]
  wire [63:0] regfile_io_mem_rd_data; // @[Core.scala 66:23]
  wire  regfile_io_rf_stall; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_0; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_1; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_2; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_3; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_4; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_5; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_6; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_7; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_8; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_9; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_10; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_11; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_12; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_13; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_14; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_15; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_16; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_17; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_18; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_19; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_20; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_21; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_22; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_23; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_24; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_25; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_26; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_27; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_28; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_29; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_30; // @[Core.scala 66:23]
  wire [63:0] regfile_io_regs_in_31; // @[Core.scala 66:23]
  wire  regfile_io_write_regs; // @[Core.scala 66:23]
  wire  execute_clock; // @[Core.scala 75:23]
  wire  execute_reset; // @[Core.scala 75:23]
  wire  execute_io_in_ready; // @[Core.scala 75:23]
  wire  execute_io_in_bits_valid; // @[Core.scala 75:23]
  wire [31:0] execute_io_in_bits_pc; // @[Core.scala 75:23]
  wire [31:0] execute_io_in_bits_inst; // @[Core.scala 75:23]
  wire [3:0] execute_io_in_bits_alu_code; // @[Core.scala 75:23]
  wire [3:0] execute_io_in_bits_jmp_code; // @[Core.scala 75:23]
  wire [1:0] execute_io_in_bits_mem_code; // @[Core.scala 75:23]
  wire [1:0] execute_io_in_bits_mem_size; // @[Core.scala 75:23]
  wire  execute_io_in_bits_w_type; // @[Core.scala 75:23]
  wire [2:0] execute_io_in_bits_rs1_src; // @[Core.scala 75:23]
  wire [2:0] execute_io_in_bits_rs2_src; // @[Core.scala 75:23]
  wire [4:0] execute_io_in_bits_rd_addr; // @[Core.scala 75:23]
  wire  execute_io_in_bits_rd_en; // @[Core.scala 75:23]
  wire [31:0] execute_io_in_bits_imm; // @[Core.scala 75:23]
  wire  execute_io_out_ready; // @[Core.scala 75:23]
  wire  execute_io_out_valid; // @[Core.scala 75:23]
  wire  execute_io_out_bits_valid; // @[Core.scala 75:23]
  wire [31:0] execute_io_out_bits_pc; // @[Core.scala 75:23]
  wire [31:0] execute_io_out_bits_inst; // @[Core.scala 75:23]
  wire [1:0] execute_io_out_bits_mem_code; // @[Core.scala 75:23]
  wire [1:0] execute_io_out_bits_mem_size; // @[Core.scala 75:23]
  wire [4:0] execute_io_out_bits_rd_addr; // @[Core.scala 75:23]
  wire  execute_io_out_bits_rd_en; // @[Core.scala 75:23]
  wire [63:0] execute_io_ex_rs1_i; // @[Core.scala 75:23]
  wire [63:0] execute_io_ex_rs2_i; // @[Core.scala 75:23]
  wire [63:0] execute_io_ex_data_o; // @[Core.scala 75:23]
  wire  execute_io_is_ebreak_i; // @[Core.scala 75:23]
  wire  execute_io_is_ebreak_o; // @[Core.scala 75:23]
  wire [31:0] execute_io_ex_rwaddr_o; // @[Core.scala 75:23]
  wire  execute_io_ex_rvalid_o; // @[Core.scala 75:23]
  wire  execute_io_ex_wvalid_o; // @[Core.scala 75:23]
  wire [63:0] execute_io_ex_wdata_o; // @[Core.scala 75:23]
  wire [1:0] execute_io_ex_wsize_o; // @[Core.scala 75:23]
  wire  execute_io_ex_rd_en; // @[Core.scala 75:23]
  wire [31:0] execute_io_ex_rd_addr; // @[Core.scala 75:23]
  wire  execute_io_ex_is_load; // @[Core.scala 75:23]
  wire [31:0] execute_io_p_npc_i; // @[Core.scala 75:23]
  wire [31:0] execute_io_jmp_packet_o_jmp_npc; // @[Core.scala 75:23]
  wire  execute_io_jmp_packet_o_mis; // @[Core.scala 75:23]
  wire  mem_clock; // @[Core.scala 84:19]
  wire  mem_reset; // @[Core.scala 84:19]
  wire  mem_io_in_ready; // @[Core.scala 84:19]
  wire  mem_io_in_bits_valid; // @[Core.scala 84:19]
  wire [31:0] mem_io_in_bits_pc; // @[Core.scala 84:19]
  wire [31:0] mem_io_in_bits_inst; // @[Core.scala 84:19]
  wire [1:0] mem_io_in_bits_mem_code; // @[Core.scala 84:19]
  wire [1:0] mem_io_in_bits_mem_size; // @[Core.scala 84:19]
  wire [4:0] mem_io_in_bits_rd_addr; // @[Core.scala 84:19]
  wire  mem_io_in_bits_rd_en; // @[Core.scala 84:19]
  wire  mem_io_out_bits_valid; // @[Core.scala 84:19]
  wire [31:0] mem_io_out_bits_pc; // @[Core.scala 84:19]
  wire [31:0] mem_io_out_bits_inst; // @[Core.scala 84:19]
  wire [63:0] mem_io_mem_data_i; // @[Core.scala 84:19]
  wire [4:0] mem_io_waddr_o; // @[Core.scala 84:19]
  wire  mem_io_wen_o; // @[Core.scala 84:19]
  wire [63:0] mem_io_wdata_o; // @[Core.scala 84:19]
  wire  mem_io_is_ebreak_i; // @[Core.scala 84:19]
  wire  mem_io_is_ebreak_o; // @[Core.scala 84:19]
  wire [31:0] mem_io_dmem_req_bits_arwaddr; // @[Core.scala 84:19]
  wire  mem_io_dmem_req_bits_rvalid; // @[Core.scala 84:19]
  wire  mem_io_dmem_req_bits_wvalid; // @[Core.scala 84:19]
  wire [63:0] mem_io_dmem_req_bits_wdata; // @[Core.scala 84:19]
  wire [7:0] mem_io_dmem_req_bits_wmask; // @[Core.scala 84:19]
  wire [63:0] mem_io_dmem_resp_bits_rdata; // @[Core.scala 84:19]
  wire  mem_io_dmem_resp_bits_rready; // @[Core.scala 84:19]
  wire  mem_io_dmem_resp_bits_wready; // @[Core.scala 84:19]
  wire [31:0] mem_io_mem_rwaddr_i; // @[Core.scala 84:19]
  wire  mem_io_mem_rvalid_i; // @[Core.scala 84:19]
  wire  mem_io_mem_wvalid_i; // @[Core.scala 84:19]
  wire [63:0] mem_io_mem_wdata_i; // @[Core.scala 84:19]
  wire [1:0] mem_io_mem_wsize_i; // @[Core.scala 84:19]
  wire [31:0] mem_io_reg_mem_addr_i; // @[Core.scala 84:19]
  wire  mem_io_mem_rd_en; // @[Core.scala 84:19]
  wire [31:0] mem_io_mem_rd_addr; // @[Core.scala 84:19]
  wire [63:0] mem_io_mem_rd_data; // @[Core.scala 84:19]
  wire  mem_io_mem_is_load; // @[Core.scala 84:19]
  wire  wb_dpi_clk; // @[Core.scala 137:22]
  wire [31:0] wb_dpi_inst; // @[Core.scala 137:22]
  wire [31:0] wb_dpi_pc; // @[Core.scala 137:22]
  wire  wb_dpi_ebreak; // @[Core.scala 137:22]
  reg [31:0] fetch_io_imem_resp_bits_old_pc_REG; // @[Core.scala 49:44]
  reg [31:0] io_commit_pc_REG; // @[Core.scala 113:26]
  reg  io_commit_REG; // @[Core.scala 114:23]
  wire [28:0] io_dmem_raddr_hi = mem_io_dmem_req_bits_arwaddr[31:3]; // @[Core.scala 116:52]
  InstFetch fetch ( // @[Core.scala 45:21]
    .clock(fetch_clock),
    .reset(fetch_reset),
    .io_imem_req_bits_araddr(fetch_io_imem_req_bits_araddr),
    .io_imem_resp_bits_rdata(fetch_io_imem_resp_bits_rdata),
    .io_imem_resp_bits_rvalid(fetch_io_imem_resp_bits_rvalid),
    .io_imem_resp_bits_old_pc(fetch_io_imem_resp_bits_old_pc),
    .io_out_ready(fetch_io_out_ready),
    .io_out_valid(fetch_io_out_valid),
    .io_out_bits_pc(fetch_io_out_bits_pc),
    .io_out_bits_inst(fetch_io_out_bits_inst),
    .io_out_bits_inst_valid(fetch_io_out_bits_inst_valid),
    .io_if_flush(fetch_io_if_flush),
    .io_p_npc(fetch_io_p_npc),
    .io_jmp_packet_i_jmp_npc(fetch_io_jmp_packet_i_jmp_npc),
    .io_jmp_packet_i_mis(fetch_io_jmp_packet_i_mis),
    .io_write_regs(fetch_io_write_regs),
    .io_input_pc(fetch_io_input_pc)
  );
  Decode decode ( // @[Core.scala 61:22]
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
  RegFile regfile ( // @[Core.scala 66:23]
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
    .io_mem_is_load_i(regfile_io_mem_is_load_i),
    .io_mem_rd_en(regfile_io_mem_rd_en),
    .io_mem_rd_addr(regfile_io_mem_rd_addr),
    .io_mem_rd_data(regfile_io_mem_rd_data),
    .io_rf_stall(regfile_io_rf_stall),
    .io_regs_in_0(regfile_io_regs_in_0),
    .io_regs_in_1(regfile_io_regs_in_1),
    .io_regs_in_2(regfile_io_regs_in_2),
    .io_regs_in_3(regfile_io_regs_in_3),
    .io_regs_in_4(regfile_io_regs_in_4),
    .io_regs_in_5(regfile_io_regs_in_5),
    .io_regs_in_6(regfile_io_regs_in_6),
    .io_regs_in_7(regfile_io_regs_in_7),
    .io_regs_in_8(regfile_io_regs_in_8),
    .io_regs_in_9(regfile_io_regs_in_9),
    .io_regs_in_10(regfile_io_regs_in_10),
    .io_regs_in_11(regfile_io_regs_in_11),
    .io_regs_in_12(regfile_io_regs_in_12),
    .io_regs_in_13(regfile_io_regs_in_13),
    .io_regs_in_14(regfile_io_regs_in_14),
    .io_regs_in_15(regfile_io_regs_in_15),
    .io_regs_in_16(regfile_io_regs_in_16),
    .io_regs_in_17(regfile_io_regs_in_17),
    .io_regs_in_18(regfile_io_regs_in_18),
    .io_regs_in_19(regfile_io_regs_in_19),
    .io_regs_in_20(regfile_io_regs_in_20),
    .io_regs_in_21(regfile_io_regs_in_21),
    .io_regs_in_22(regfile_io_regs_in_22),
    .io_regs_in_23(regfile_io_regs_in_23),
    .io_regs_in_24(regfile_io_regs_in_24),
    .io_regs_in_25(regfile_io_regs_in_25),
    .io_regs_in_26(regfile_io_regs_in_26),
    .io_regs_in_27(regfile_io_regs_in_27),
    .io_regs_in_28(regfile_io_regs_in_28),
    .io_regs_in_29(regfile_io_regs_in_29),
    .io_regs_in_30(regfile_io_regs_in_30),
    .io_regs_in_31(regfile_io_regs_in_31),
    .io_write_regs(regfile_io_write_regs)
  );
  Execute execute ( // @[Core.scala 75:23]
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
    .io_ex_rd_en(execute_io_ex_rd_en),
    .io_ex_rd_addr(execute_io_ex_rd_addr),
    .io_ex_is_load(execute_io_ex_is_load),
    .io_p_npc_i(execute_io_p_npc_i),
    .io_jmp_packet_o_jmp_npc(execute_io_jmp_packet_o_jmp_npc),
    .io_jmp_packet_o_mis(execute_io_jmp_packet_o_mis)
  );
  Mem mem ( // @[Core.scala 84:19]
    .clock(mem_clock),
    .reset(mem_reset),
    .io_in_ready(mem_io_in_ready),
    .io_in_bits_valid(mem_io_in_bits_valid),
    .io_in_bits_pc(mem_io_in_bits_pc),
    .io_in_bits_inst(mem_io_in_bits_inst),
    .io_in_bits_mem_code(mem_io_in_bits_mem_code),
    .io_in_bits_mem_size(mem_io_in_bits_mem_size),
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
    .io_mem_rd_en(mem_io_mem_rd_en),
    .io_mem_rd_addr(mem_io_mem_rd_addr),
    .io_mem_rd_data(mem_io_mem_rd_data),
    .io_mem_is_load(mem_io_mem_is_load)
  );
  Wb_Dpi wb_dpi ( // @[Core.scala 137:22]
    .clk(wb_dpi_clk),
    .inst(wb_dpi_inst),
    .pc(wb_dpi_pc),
    .ebreak(wb_dpi_ebreak)
  );
  assign io_imem_raddr = fetch_io_imem_req_bits_araddr; // @[Core.scala 54:17]
  assign io_imem_waddr = 32'h0; // @[Core.scala 56:17]
  assign io_imem_wdata = 64'h0; // @[Core.scala 57:17]
  assign io_imem_ren = 1'h1; // @[Core.scala 55:15]
  assign io_imem_wen = 1'h0; // @[Core.scala 58:15]
  assign io_imem_wmask = 8'h0; // @[Core.scala 59:17]
  assign io_dmem_raddr = {io_dmem_raddr_hi,3'h0}; // @[Cat.scala 30:58]
  assign io_dmem_waddr = {io_dmem_raddr_hi,3'h0}; // @[Cat.scala 30:58]
  assign io_dmem_wdata = mem_io_dmem_req_bits_wdata; // @[Core.scala 119:17]
  assign io_dmem_ren = mem_io_dmem_req_bits_rvalid; // @[Core.scala 117:15]
  assign io_dmem_wen = mem_io_dmem_req_bits_wvalid; // @[Core.scala 120:15]
  assign io_dmem_wmask = mem_io_dmem_req_bits_wmask; // @[Core.scala 121:17]
  assign io_commit_pc = io_commit_pc_REG; // @[Core.scala 113:16]
  assign io_regs_out_0 = regfile_io_regs_0; // @[Core.scala 112:15]
  assign io_regs_out_1 = regfile_io_regs_1; // @[Core.scala 112:15]
  assign io_regs_out_2 = regfile_io_regs_2; // @[Core.scala 112:15]
  assign io_regs_out_3 = regfile_io_regs_3; // @[Core.scala 112:15]
  assign io_regs_out_4 = regfile_io_regs_4; // @[Core.scala 112:15]
  assign io_regs_out_5 = regfile_io_regs_5; // @[Core.scala 112:15]
  assign io_regs_out_6 = regfile_io_regs_6; // @[Core.scala 112:15]
  assign io_regs_out_7 = regfile_io_regs_7; // @[Core.scala 112:15]
  assign io_regs_out_8 = regfile_io_regs_8; // @[Core.scala 112:15]
  assign io_regs_out_9 = regfile_io_regs_9; // @[Core.scala 112:15]
  assign io_regs_out_10 = regfile_io_regs_10; // @[Core.scala 112:15]
  assign io_regs_out_11 = regfile_io_regs_11; // @[Core.scala 112:15]
  assign io_regs_out_12 = regfile_io_regs_12; // @[Core.scala 112:15]
  assign io_regs_out_13 = regfile_io_regs_13; // @[Core.scala 112:15]
  assign io_regs_out_14 = regfile_io_regs_14; // @[Core.scala 112:15]
  assign io_regs_out_15 = regfile_io_regs_15; // @[Core.scala 112:15]
  assign io_regs_out_16 = regfile_io_regs_16; // @[Core.scala 112:15]
  assign io_regs_out_17 = regfile_io_regs_17; // @[Core.scala 112:15]
  assign io_regs_out_18 = regfile_io_regs_18; // @[Core.scala 112:15]
  assign io_regs_out_19 = regfile_io_regs_19; // @[Core.scala 112:15]
  assign io_regs_out_20 = regfile_io_regs_20; // @[Core.scala 112:15]
  assign io_regs_out_21 = regfile_io_regs_21; // @[Core.scala 112:15]
  assign io_regs_out_22 = regfile_io_regs_22; // @[Core.scala 112:15]
  assign io_regs_out_23 = regfile_io_regs_23; // @[Core.scala 112:15]
  assign io_regs_out_24 = regfile_io_regs_24; // @[Core.scala 112:15]
  assign io_regs_out_25 = regfile_io_regs_25; // @[Core.scala 112:15]
  assign io_regs_out_26 = regfile_io_regs_26; // @[Core.scala 112:15]
  assign io_regs_out_27 = regfile_io_regs_27; // @[Core.scala 112:15]
  assign io_regs_out_28 = regfile_io_regs_28; // @[Core.scala 112:15]
  assign io_regs_out_29 = regfile_io_regs_29; // @[Core.scala 112:15]
  assign io_regs_out_30 = regfile_io_regs_30; // @[Core.scala 112:15]
  assign io_regs_out_31 = regfile_io_regs_31; // @[Core.scala 112:15]
  assign io_commit = io_commit_REG; // @[Core.scala 114:13]
  assign fetch_clock = clock;
  assign fetch_reset = reset;
  assign fetch_io_imem_resp_bits_rdata = io_imem_rdata[31:0]; // @[Core.scala 48:49]
  assign fetch_io_imem_resp_bits_rvalid = io_imem_read_ok; // @[Core.scala 50:34]
  assign fetch_io_imem_resp_bits_old_pc = fetch_io_imem_resp_bits_old_pc_REG; // @[Core.scala 49:34]
  assign fetch_io_out_ready = decode_io_in_ready; // @[Core.scala 63:16]
  assign fetch_io_if_flush = execute_io_jmp_packet_o_mis; // @[Core.scala 144:21]
  assign fetch_io_jmp_packet_i_jmp_npc = execute_io_jmp_packet_o_jmp_npc; // @[Core.scala 82:25]
  assign fetch_io_jmp_packet_i_mis = execute_io_jmp_packet_o_mis; // @[Core.scala 82:25]
  assign fetch_io_write_regs = io_write_regs; // @[Core.scala 52:23]
  assign fetch_io_input_pc = io_pc_in; // @[Core.scala 51:21]
  assign decode_clock = clock;
  assign decode_reset = reset;
  assign decode_io_in_bits_pc = fetch_io_out_bits_pc; // @[Core.scala 63:16]
  assign decode_io_in_bits_inst = fetch_io_out_bits_inst; // @[Core.scala 63:16]
  assign decode_io_in_bits_inst_valid = fetch_io_out_bits_inst_valid; // @[Core.scala 63:16]
  assign decode_io_out_ready = execute_io_in_ready; // @[Core.scala 76:17]
  assign decode_io_id_flush = execute_io_jmp_packet_o_mis; // @[Core.scala 145:22]
  assign decode_io_rs1_data_i = regfile_io_rdata1; // @[Core.scala 72:24]
  assign decode_io_rs2_data_i = regfile_io_rdata2; // @[Core.scala 73:24]
  assign decode_io_p_npc_i = fetch_io_p_npc; // @[Core.scala 64:21]
  assign decode_io_decode_rf_stall_i = regfile_io_rf_stall; // @[Core.scala 92:32]
  assign regfile_clock = clock;
  assign regfile_reset = reset;
  assign regfile_io_ren1 = decode_io_ren1; // @[Core.scala 67:19]
  assign regfile_io_raddr1 = decode_io_raddr1; // @[Core.scala 69:21]
  assign regfile_io_ren2 = decode_io_ren2; // @[Core.scala 68:19]
  assign regfile_io_raddr2 = decode_io_raddr2; // @[Core.scala 70:21]
  assign regfile_io_wen = mem_io_wen_o; // @[Core.scala 108:18]
  assign regfile_io_waddr = mem_io_waddr_o; // @[Core.scala 107:20]
  assign regfile_io_wdata = mem_io_wdata_o; // @[Core.scala 109:20]
  assign regfile_io_ex_rd_en = execute_io_ex_rd_en; // @[Core.scala 87:32]
  assign regfile_io_ex_rd_addr = execute_io_ex_rd_addr; // @[Core.scala 88:32]
  assign regfile_io_ex_rd_data = execute_io_ex_data_o; // @[Core.scala 89:32]
  assign regfile_io_ex_is_load_i = execute_io_ex_is_load; // @[Core.scala 90:32]
  assign regfile_io_mem_is_load_i = mem_io_mem_is_load; // @[Core.scala 91:32]
  assign regfile_io_mem_rd_en = mem_io_mem_rd_en; // @[Core.scala 130:26]
  assign regfile_io_mem_rd_addr = mem_io_mem_rd_addr; // @[Core.scala 131:26]
  assign regfile_io_mem_rd_data = mem_io_mem_rd_data; // @[Core.scala 132:26]
  assign regfile_io_regs_in_0 = io_regs_in_0; // @[Core.scala 110:22]
  assign regfile_io_regs_in_1 = io_regs_in_1; // @[Core.scala 110:22]
  assign regfile_io_regs_in_2 = io_regs_in_2; // @[Core.scala 110:22]
  assign regfile_io_regs_in_3 = io_regs_in_3; // @[Core.scala 110:22]
  assign regfile_io_regs_in_4 = io_regs_in_4; // @[Core.scala 110:22]
  assign regfile_io_regs_in_5 = io_regs_in_5; // @[Core.scala 110:22]
  assign regfile_io_regs_in_6 = io_regs_in_6; // @[Core.scala 110:22]
  assign regfile_io_regs_in_7 = io_regs_in_7; // @[Core.scala 110:22]
  assign regfile_io_regs_in_8 = io_regs_in_8; // @[Core.scala 110:22]
  assign regfile_io_regs_in_9 = io_regs_in_9; // @[Core.scala 110:22]
  assign regfile_io_regs_in_10 = io_regs_in_10; // @[Core.scala 110:22]
  assign regfile_io_regs_in_11 = io_regs_in_11; // @[Core.scala 110:22]
  assign regfile_io_regs_in_12 = io_regs_in_12; // @[Core.scala 110:22]
  assign regfile_io_regs_in_13 = io_regs_in_13; // @[Core.scala 110:22]
  assign regfile_io_regs_in_14 = io_regs_in_14; // @[Core.scala 110:22]
  assign regfile_io_regs_in_15 = io_regs_in_15; // @[Core.scala 110:22]
  assign regfile_io_regs_in_16 = io_regs_in_16; // @[Core.scala 110:22]
  assign regfile_io_regs_in_17 = io_regs_in_17; // @[Core.scala 110:22]
  assign regfile_io_regs_in_18 = io_regs_in_18; // @[Core.scala 110:22]
  assign regfile_io_regs_in_19 = io_regs_in_19; // @[Core.scala 110:22]
  assign regfile_io_regs_in_20 = io_regs_in_20; // @[Core.scala 110:22]
  assign regfile_io_regs_in_21 = io_regs_in_21; // @[Core.scala 110:22]
  assign regfile_io_regs_in_22 = io_regs_in_22; // @[Core.scala 110:22]
  assign regfile_io_regs_in_23 = io_regs_in_23; // @[Core.scala 110:22]
  assign regfile_io_regs_in_24 = io_regs_in_24; // @[Core.scala 110:22]
  assign regfile_io_regs_in_25 = io_regs_in_25; // @[Core.scala 110:22]
  assign regfile_io_regs_in_26 = io_regs_in_26; // @[Core.scala 110:22]
  assign regfile_io_regs_in_27 = io_regs_in_27; // @[Core.scala 110:22]
  assign regfile_io_regs_in_28 = io_regs_in_28; // @[Core.scala 110:22]
  assign regfile_io_regs_in_29 = io_regs_in_29; // @[Core.scala 110:22]
  assign regfile_io_regs_in_30 = io_regs_in_30; // @[Core.scala 110:22]
  assign regfile_io_regs_in_31 = io_regs_in_31; // @[Core.scala 110:22]
  assign regfile_io_write_regs = io_write_regs; // @[Core.scala 111:25]
  assign execute_clock = clock;
  assign execute_reset = reset;
  assign execute_io_in_bits_valid = decode_io_out_bits_valid; // @[Core.scala 76:17]
  assign execute_io_in_bits_pc = decode_io_out_bits_pc; // @[Core.scala 76:17]
  assign execute_io_in_bits_inst = decode_io_out_bits_inst; // @[Core.scala 76:17]
  assign execute_io_in_bits_alu_code = decode_io_out_bits_alu_code; // @[Core.scala 76:17]
  assign execute_io_in_bits_jmp_code = decode_io_out_bits_jmp_code; // @[Core.scala 76:17]
  assign execute_io_in_bits_mem_code = decode_io_out_bits_mem_code; // @[Core.scala 76:17]
  assign execute_io_in_bits_mem_size = decode_io_out_bits_mem_size; // @[Core.scala 76:17]
  assign execute_io_in_bits_w_type = decode_io_out_bits_w_type; // @[Core.scala 76:17]
  assign execute_io_in_bits_rs1_src = decode_io_out_bits_rs1_src; // @[Core.scala 76:17]
  assign execute_io_in_bits_rs2_src = decode_io_out_bits_rs2_src; // @[Core.scala 76:17]
  assign execute_io_in_bits_rd_addr = decode_io_out_bits_rd_addr; // @[Core.scala 76:17]
  assign execute_io_in_bits_rd_en = decode_io_out_bits_rd_en; // @[Core.scala 76:17]
  assign execute_io_in_bits_imm = decode_io_out_bits_imm; // @[Core.scala 76:17]
  assign execute_io_out_ready = mem_io_in_ready; // @[Core.scala 94:13]
  assign execute_io_ex_rs1_i = decode_io_rs1_data_o; // @[Core.scala 77:23]
  assign execute_io_ex_rs2_i = decode_io_rs2_data_o; // @[Core.scala 78:23]
  assign execute_io_is_ebreak_i = decode_io_is_ebreak; // @[Core.scala 79:26]
  assign execute_io_p_npc_i = decode_io_p_npc_o; // @[Core.scala 80:22]
  assign mem_clock = clock;
  assign mem_reset = reset;
  assign mem_io_in_bits_valid = execute_io_out_bits_valid; // @[Core.scala 94:13]
  assign mem_io_in_bits_pc = execute_io_out_bits_pc; // @[Core.scala 94:13]
  assign mem_io_in_bits_inst = execute_io_out_bits_inst; // @[Core.scala 94:13]
  assign mem_io_in_bits_mem_code = execute_io_out_bits_mem_code; // @[Core.scala 94:13]
  assign mem_io_in_bits_mem_size = execute_io_out_bits_mem_size; // @[Core.scala 94:13]
  assign mem_io_in_bits_rd_addr = execute_io_out_bits_rd_addr; // @[Core.scala 94:13]
  assign mem_io_in_bits_rd_en = execute_io_out_bits_rd_en; // @[Core.scala 94:13]
  assign mem_io_mem_data_i = execute_io_ex_data_o; // @[Core.scala 95:21]
  assign mem_io_is_ebreak_i = execute_io_is_ebreak_o; // @[Core.scala 96:22]
  assign mem_io_dmem_resp_bits_rdata = io_dmem_rdata; // @[Core.scala 123:31]
  assign mem_io_dmem_resp_bits_rready = io_dmem_read_ok; // @[Core.scala 124:32]
  assign mem_io_dmem_resp_bits_wready = io_dmem_write_ok; // @[Core.scala 125:32]
  assign mem_io_mem_rwaddr_i = execute_io_ex_rwaddr_o; // @[Core.scala 99:24]
  assign mem_io_mem_rvalid_i = execute_io_ex_rvalid_o; // @[Core.scala 100:24]
  assign mem_io_mem_wvalid_i = execute_io_ex_wvalid_o; // @[Core.scala 101:24]
  assign mem_io_mem_wdata_i = execute_io_ex_wdata_o; // @[Core.scala 102:24]
  assign mem_io_mem_wsize_i = execute_io_ex_wsize_o; // @[Core.scala 103:24]
  assign mem_io_reg_mem_addr_i = mem_io_dmem_req_bits_arwaddr; // @[Core.scala 105:25]
  assign wb_dpi_clk = clock; // @[Core.scala 138:18]
  assign wb_dpi_inst = mem_io_out_bits_inst; // @[Core.scala 139:18]
  assign wb_dpi_pc = mem_io_out_bits_pc; // @[Core.scala 140:16]
  assign wb_dpi_ebreak = mem_io_is_ebreak_o; // @[Core.scala 141:20]
  always @(posedge clock) begin
    fetch_io_imem_resp_bits_old_pc_REG <= fetch_io_imem_req_bits_araddr; // @[Core.scala 49:44]
    io_commit_pc_REG <= mem_io_out_bits_pc; // @[Core.scala 113:26]
    io_commit_REG <= mem_io_out_bits_valid; // @[Core.scala 114:23]
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
  fetch_io_imem_resp_bits_old_pc_REG = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  io_commit_pc_REG = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  io_commit_REG = _RAND_2[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
