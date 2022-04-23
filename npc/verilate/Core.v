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
  input         io_jmp_packet_i_mis
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] pc; // @[InstFetch.scala 55:19]
  wire [29:0] pc_base_hi = pc[31:2]; // @[InstFetch.scala 57:23]
  wire [31:0] pc_base = {pc_base_hi,2'h0}; // @[Cat.scala 30:58]
  wire [31:0] npc_s = pc_base + 32'h4; // @[InstFetch.scala 58:23]
  wire  _stall_T_1 = io_out_ready & io_out_valid; // @[Decoupled.scala 40:37]
  wire  stall = ~io_imem_resp_bits_rvalid | ~_stall_T_1; // @[InstFetch.scala 60:34]
  reg [31:0] io_p_npc_REG; // @[InstFetch.scala 65:22]
  reg [31:0] io_out_bits_inst_REG; // @[InstFetch.scala 68:30]
  reg  io_out_bits_inst_valid_REG; // @[InstFetch.scala 69:36]
  assign io_imem_req_bits_araddr = {pc_base_hi,2'h0}; // @[Cat.scala 30:58]
  assign io_out_valid = 1'h1; // @[InstFetch.scala 77:18]
  assign io_out_bits_pc = io_imem_resp_bits_old_pc; // @[InstFetch.scala 67:18]
  assign io_out_bits_inst = io_out_bits_inst_REG; // @[InstFetch.scala 68:20]
  assign io_out_bits_inst_valid = io_out_bits_inst_valid_REG; // @[InstFetch.scala 69:26]
  assign io_p_npc = io_p_npc_REG; // @[InstFetch.scala 65:12]
  always @(posedge clock) begin
    if (reset) begin // @[InstFetch.scala 55:19]
      pc <= 32'h80000000; // @[InstFetch.scala 55:19]
    end else if (~stall) begin // @[InstFetch.scala 62:15]
      if (io_jmp_packet_i_mis) begin // @[InstFetch.scala 61:16]
        pc <= io_jmp_packet_i_jmp_npc;
      end else begin
        pc <= npc_s;
      end
    end
    io_p_npc_REG <= {pc_base_hi,2'h0}; // @[Cat.scala 30:58]
    io_out_bits_inst_REG <= io_imem_resp_bits_rdata; // @[InstFetch.scala 68:30]
    if (io_if_flush) begin // @[InstFetch.scala 69:40]
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
  output [31:0] io_p_npc_o
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
  reg [31:0] pc; // @[Decode.scala 25:22]
  reg [31:0] inst; // @[Decode.scala 26:22]
  reg  inst_valid; // @[Decode.scala 27:27]
  reg [63:0] io_rs1_data_o_REG; // @[Decode.scala 29:27]
  reg [63:0] io_rs2_data_o_REG; // @[Decode.scala 30:27]
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
  wire  _ctrl_T_81 = 32'h10500073 == inst; // @[Lookup.scala 31:38]
  wire  _ctrl_T_83 = 32'h6003 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_85 = 32'h3003 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_87 = 32'h3023 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_89 = 32'h1b == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_91 = 32'h101b == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_93 = 32'h501b == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_95 = 32'h4000501b == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_97 = 32'h3b == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_99 = 32'h4000003b == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_101 = 32'h103b == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_103 = 32'h503b == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_105 = 32'h4000503b == _ctrl_T_54; // @[Lookup.scala 31:38]
  wire  _ctrl_T_107 = 32'h1073 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_109 = 32'h2073 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_111 = 32'h3073 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_113 = 32'h5073 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_115 = 32'h6073 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_T_117 = 32'h7073 == _ctrl_T_6; // @[Lookup.scala 31:38]
  wire [3:0] _ctrl_T_250 = _ctrl_T_105 ? 4'ha : 4'h0; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_251 = _ctrl_T_103 ? 4'h9 : _ctrl_T_250; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_252 = _ctrl_T_101 ? 4'h8 : _ctrl_T_251; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_253 = _ctrl_T_99 ? 4'h2 : _ctrl_T_252; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_254 = _ctrl_T_97 ? 4'h1 : _ctrl_T_253; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_255 = _ctrl_T_95 ? 4'ha : _ctrl_T_254; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_256 = _ctrl_T_93 ? 4'h9 : _ctrl_T_255; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_257 = _ctrl_T_91 ? 4'h8 : _ctrl_T_256; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_258 = _ctrl_T_89 ? 4'h1 : _ctrl_T_257; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_259 = _ctrl_T_87 ? 4'h0 : _ctrl_T_258; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_260 = _ctrl_T_85 ? 4'h0 : _ctrl_T_259; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_261 = _ctrl_T_83 ? 4'h0 : _ctrl_T_260; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_262 = _ctrl_T_81 ? 4'h0 : _ctrl_T_261; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_263 = _ctrl_T_79 ? 4'h0 : _ctrl_T_262; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_264 = _ctrl_T_77 ? 4'h0 : _ctrl_T_263; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_265 = _ctrl_T_75 ? 4'h0 : _ctrl_T_264; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_266 = _ctrl_T_73 ? 4'h7 : _ctrl_T_265; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_267 = _ctrl_T_71 ? 4'h6 : _ctrl_T_266; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_268 = _ctrl_T_69 ? 4'ha : _ctrl_T_267; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_269 = _ctrl_T_67 ? 4'h9 : _ctrl_T_268; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_270 = _ctrl_T_65 ? 4'h5 : _ctrl_T_269; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_271 = _ctrl_T_63 ? 4'h4 : _ctrl_T_270; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_272 = _ctrl_T_61 ? 4'h3 : _ctrl_T_271; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_273 = _ctrl_T_59 ? 4'h8 : _ctrl_T_272; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_274 = _ctrl_T_57 ? 4'h2 : _ctrl_T_273; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_275 = _ctrl_T_55 ? 4'h1 : _ctrl_T_274; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_276 = _ctrl_T_53 ? 4'ha : _ctrl_T_275; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_277 = _ctrl_T_51 ? 4'h9 : _ctrl_T_276; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_278 = _ctrl_T_49 ? 4'h8 : _ctrl_T_277; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_279 = _ctrl_T_47 ? 4'h7 : _ctrl_T_278; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_280 = _ctrl_T_45 ? 4'h6 : _ctrl_T_279; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_281 = _ctrl_T_43 ? 4'h5 : _ctrl_T_280; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_282 = _ctrl_T_41 ? 4'h4 : _ctrl_T_281; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_283 = _ctrl_T_39 ? 4'h3 : _ctrl_T_282; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_284 = _ctrl_T_37 ? 4'h1 : _ctrl_T_283; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_285 = _ctrl_T_35 ? 4'h0 : _ctrl_T_284; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_286 = _ctrl_T_33 ? 4'h0 : _ctrl_T_285; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_287 = _ctrl_T_31 ? 4'h0 : _ctrl_T_286; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_288 = _ctrl_T_29 ? 4'h0 : _ctrl_T_287; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_289 = _ctrl_T_27 ? 4'h0 : _ctrl_T_288; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_290 = _ctrl_T_25 ? 4'h0 : _ctrl_T_289; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_291 = _ctrl_T_23 ? 4'h0 : _ctrl_T_290; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_292 = _ctrl_T_21 ? 4'h0 : _ctrl_T_291; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_293 = _ctrl_T_19 ? 4'h0 : _ctrl_T_292; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_294 = _ctrl_T_17 ? 4'h0 : _ctrl_T_293; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_295 = _ctrl_T_15 ? 4'h0 : _ctrl_T_294; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_296 = _ctrl_T_13 ? 4'h0 : _ctrl_T_295; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_297 = _ctrl_T_11 ? 4'h0 : _ctrl_T_296; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_298 = _ctrl_T_9 ? 4'h0 : _ctrl_T_297; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_299 = _ctrl_T_7 ? 4'h0 : _ctrl_T_298; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_300 = _ctrl_T_5 ? 4'h0 : _ctrl_T_299; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_301 = _ctrl_T_3 ? 4'h1 : _ctrl_T_300; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_353 = _ctrl_T_19 ? 4'h8 : 4'h0; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_354 = _ctrl_T_17 ? 4'h7 : _ctrl_T_353; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_355 = _ctrl_T_15 ? 4'h6 : _ctrl_T_354; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_356 = _ctrl_T_13 ? 4'h5 : _ctrl_T_355; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_357 = _ctrl_T_11 ? 4'h4 : _ctrl_T_356; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_358 = _ctrl_T_9 ? 4'h3 : _ctrl_T_357; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_359 = _ctrl_T_7 ? 4'h2 : _ctrl_T_358; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_360 = _ctrl_T_5 ? 4'h1 : _ctrl_T_359; // @[Lookup.scala 33:37]
  wire [3:0] _ctrl_T_361 = _ctrl_T_3 ? 4'h0 : _ctrl_T_360; // @[Lookup.scala 33:37]
  wire  _ctrl_T_559 = _ctrl_T_87 ? 1'h0 : _ctrl_T_89 | (_ctrl_T_91 | (_ctrl_T_93 | (_ctrl_T_95 | (_ctrl_T_97 | (
    _ctrl_T_99 | (_ctrl_T_101 | (_ctrl_T_103 | _ctrl_T_105))))))); // @[Lookup.scala 33:37]
  wire  _ctrl_T_560 = _ctrl_T_85 ? 1'h0 : _ctrl_T_559; // @[Lookup.scala 33:37]
  wire  _ctrl_T_561 = _ctrl_T_83 ? 1'h0 : _ctrl_T_560; // @[Lookup.scala 33:37]
  wire  _ctrl_T_562 = _ctrl_T_81 ? 1'h0 : _ctrl_T_561; // @[Lookup.scala 33:37]
  wire  _ctrl_T_563 = _ctrl_T_79 ? 1'h0 : _ctrl_T_562; // @[Lookup.scala 33:37]
  wire  _ctrl_T_564 = _ctrl_T_77 ? 1'h0 : _ctrl_T_563; // @[Lookup.scala 33:37]
  wire  _ctrl_T_565 = _ctrl_T_75 ? 1'h0 : _ctrl_T_564; // @[Lookup.scala 33:37]
  wire  _ctrl_T_566 = _ctrl_T_73 ? 1'h0 : _ctrl_T_565; // @[Lookup.scala 33:37]
  wire  _ctrl_T_567 = _ctrl_T_71 ? 1'h0 : _ctrl_T_566; // @[Lookup.scala 33:37]
  wire  _ctrl_T_568 = _ctrl_T_69 ? 1'h0 : _ctrl_T_567; // @[Lookup.scala 33:37]
  wire  _ctrl_T_569 = _ctrl_T_67 ? 1'h0 : _ctrl_T_568; // @[Lookup.scala 33:37]
  wire  _ctrl_T_570 = _ctrl_T_65 ? 1'h0 : _ctrl_T_569; // @[Lookup.scala 33:37]
  wire  _ctrl_T_571 = _ctrl_T_63 ? 1'h0 : _ctrl_T_570; // @[Lookup.scala 33:37]
  wire  _ctrl_T_572 = _ctrl_T_61 ? 1'h0 : _ctrl_T_571; // @[Lookup.scala 33:37]
  wire  _ctrl_T_573 = _ctrl_T_59 ? 1'h0 : _ctrl_T_572; // @[Lookup.scala 33:37]
  wire  _ctrl_T_574 = _ctrl_T_57 ? 1'h0 : _ctrl_T_573; // @[Lookup.scala 33:37]
  wire  _ctrl_T_575 = _ctrl_T_55 ? 1'h0 : _ctrl_T_574; // @[Lookup.scala 33:37]
  wire  _ctrl_T_576 = _ctrl_T_53 ? 1'h0 : _ctrl_T_575; // @[Lookup.scala 33:37]
  wire  _ctrl_T_577 = _ctrl_T_51 ? 1'h0 : _ctrl_T_576; // @[Lookup.scala 33:37]
  wire  _ctrl_T_578 = _ctrl_T_49 ? 1'h0 : _ctrl_T_577; // @[Lookup.scala 33:37]
  wire  _ctrl_T_579 = _ctrl_T_47 ? 1'h0 : _ctrl_T_578; // @[Lookup.scala 33:37]
  wire  _ctrl_T_580 = _ctrl_T_45 ? 1'h0 : _ctrl_T_579; // @[Lookup.scala 33:37]
  wire  _ctrl_T_581 = _ctrl_T_43 ? 1'h0 : _ctrl_T_580; // @[Lookup.scala 33:37]
  wire  _ctrl_T_582 = _ctrl_T_41 ? 1'h0 : _ctrl_T_581; // @[Lookup.scala 33:37]
  wire  _ctrl_T_583 = _ctrl_T_39 ? 1'h0 : _ctrl_T_582; // @[Lookup.scala 33:37]
  wire  _ctrl_T_584 = _ctrl_T_37 ? 1'h0 : _ctrl_T_583; // @[Lookup.scala 33:37]
  wire  _ctrl_T_585 = _ctrl_T_35 ? 1'h0 : _ctrl_T_584; // @[Lookup.scala 33:37]
  wire  _ctrl_T_586 = _ctrl_T_33 ? 1'h0 : _ctrl_T_585; // @[Lookup.scala 33:37]
  wire  _ctrl_T_587 = _ctrl_T_31 ? 1'h0 : _ctrl_T_586; // @[Lookup.scala 33:37]
  wire  _ctrl_T_588 = _ctrl_T_29 ? 1'h0 : _ctrl_T_587; // @[Lookup.scala 33:37]
  wire  _ctrl_T_589 = _ctrl_T_27 ? 1'h0 : _ctrl_T_588; // @[Lookup.scala 33:37]
  wire  _ctrl_T_590 = _ctrl_T_25 ? 1'h0 : _ctrl_T_589; // @[Lookup.scala 33:37]
  wire  _ctrl_T_591 = _ctrl_T_23 ? 1'h0 : _ctrl_T_590; // @[Lookup.scala 33:37]
  wire  _ctrl_T_592 = _ctrl_T_21 ? 1'h0 : _ctrl_T_591; // @[Lookup.scala 33:37]
  wire  _ctrl_T_593 = _ctrl_T_19 ? 1'h0 : _ctrl_T_592; // @[Lookup.scala 33:37]
  wire  _ctrl_T_594 = _ctrl_T_17 ? 1'h0 : _ctrl_T_593; // @[Lookup.scala 33:37]
  wire  _ctrl_T_595 = _ctrl_T_15 ? 1'h0 : _ctrl_T_594; // @[Lookup.scala 33:37]
  wire  _ctrl_T_596 = _ctrl_T_13 ? 1'h0 : _ctrl_T_595; // @[Lookup.scala 33:37]
  wire  _ctrl_T_597 = _ctrl_T_11 ? 1'h0 : _ctrl_T_596; // @[Lookup.scala 33:37]
  wire  _ctrl_T_598 = _ctrl_T_9 ? 1'h0 : _ctrl_T_597; // @[Lookup.scala 33:37]
  wire  _ctrl_T_599 = _ctrl_T_7 ? 1'h0 : _ctrl_T_598; // @[Lookup.scala 33:37]
  wire  _ctrl_T_600 = _ctrl_T_5 ? 1'h0 : _ctrl_T_599; // @[Lookup.scala 33:37]
  wire  _ctrl_T_601 = _ctrl_T_3 ? 1'h0 : _ctrl_T_600; // @[Lookup.scala 33:37]
  wire  c0_0 = _ctrl_T_1 ? 1'h0 : _ctrl_T_601; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_604 = _ctrl_T_117 ? 3'h2 : 3'h0; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_605 = _ctrl_T_115 ? 3'h2 : _ctrl_T_604; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_606 = _ctrl_T_113 ? 3'h2 : _ctrl_T_605; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_607 = _ctrl_T_111 ? 3'h1 : _ctrl_T_606; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_608 = _ctrl_T_109 ? 3'h1 : _ctrl_T_607; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_609 = _ctrl_T_107 ? 3'h1 : _ctrl_T_608; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_610 = _ctrl_T_105 ? 3'h1 : _ctrl_T_609; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_611 = _ctrl_T_103 ? 3'h1 : _ctrl_T_610; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_612 = _ctrl_T_101 ? 3'h1 : _ctrl_T_611; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_613 = _ctrl_T_99 ? 3'h1 : _ctrl_T_612; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_614 = _ctrl_T_97 ? 3'h1 : _ctrl_T_613; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_615 = _ctrl_T_95 ? 3'h1 : _ctrl_T_614; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_616 = _ctrl_T_93 ? 3'h1 : _ctrl_T_615; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_617 = _ctrl_T_91 ? 3'h1 : _ctrl_T_616; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_618 = _ctrl_T_89 ? 3'h1 : _ctrl_T_617; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_619 = _ctrl_T_87 ? 3'h1 : _ctrl_T_618; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_620 = _ctrl_T_85 ? 3'h1 : _ctrl_T_619; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_621 = _ctrl_T_83 ? 3'h1 : _ctrl_T_620; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_622 = _ctrl_T_81 ? 3'h0 : _ctrl_T_621; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_623 = _ctrl_T_79 ? 3'h0 : _ctrl_T_622; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_624 = _ctrl_T_77 ? 3'h0 : _ctrl_T_623; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_625 = _ctrl_T_75 ? 3'h0 : _ctrl_T_624; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_626 = _ctrl_T_73 ? 3'h1 : _ctrl_T_625; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_627 = _ctrl_T_71 ? 3'h1 : _ctrl_T_626; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_628 = _ctrl_T_69 ? 3'h1 : _ctrl_T_627; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_629 = _ctrl_T_67 ? 3'h1 : _ctrl_T_628; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_630 = _ctrl_T_65 ? 3'h1 : _ctrl_T_629; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_631 = _ctrl_T_63 ? 3'h1 : _ctrl_T_630; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_632 = _ctrl_T_61 ? 3'h1 : _ctrl_T_631; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_633 = _ctrl_T_59 ? 3'h1 : _ctrl_T_632; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_634 = _ctrl_T_57 ? 3'h1 : _ctrl_T_633; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_635 = _ctrl_T_55 ? 3'h1 : _ctrl_T_634; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_636 = _ctrl_T_53 ? 3'h1 : _ctrl_T_635; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_637 = _ctrl_T_51 ? 3'h1 : _ctrl_T_636; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_638 = _ctrl_T_49 ? 3'h1 : _ctrl_T_637; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_639 = _ctrl_T_47 ? 3'h1 : _ctrl_T_638; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_640 = _ctrl_T_45 ? 3'h1 : _ctrl_T_639; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_641 = _ctrl_T_43 ? 3'h1 : _ctrl_T_640; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_642 = _ctrl_T_41 ? 3'h1 : _ctrl_T_641; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_643 = _ctrl_T_39 ? 3'h1 : _ctrl_T_642; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_644 = _ctrl_T_37 ? 3'h1 : _ctrl_T_643; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_645 = _ctrl_T_35 ? 3'h1 : _ctrl_T_644; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_646 = _ctrl_T_33 ? 3'h1 : _ctrl_T_645; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_647 = _ctrl_T_31 ? 3'h1 : _ctrl_T_646; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_648 = _ctrl_T_29 ? 3'h1 : _ctrl_T_647; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_649 = _ctrl_T_27 ? 3'h1 : _ctrl_T_648; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_650 = _ctrl_T_25 ? 3'h1 : _ctrl_T_649; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_651 = _ctrl_T_23 ? 3'h1 : _ctrl_T_650; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_652 = _ctrl_T_21 ? 3'h1 : _ctrl_T_651; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_653 = _ctrl_T_19 ? 3'h1 : _ctrl_T_652; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_654 = _ctrl_T_17 ? 3'h1 : _ctrl_T_653; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_655 = _ctrl_T_15 ? 3'h1 : _ctrl_T_654; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_656 = _ctrl_T_13 ? 3'h1 : _ctrl_T_655; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_657 = _ctrl_T_11 ? 3'h1 : _ctrl_T_656; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_658 = _ctrl_T_9 ? 3'h1 : _ctrl_T_657; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_659 = _ctrl_T_7 ? 3'h1 : _ctrl_T_658; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_660 = _ctrl_T_5 ? 3'h4 : _ctrl_T_659; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_661 = _ctrl_T_3 ? 3'h4 : _ctrl_T_660; // @[Lookup.scala 33:37]
  wire [2:0] c0_1 = _ctrl_T_1 ? 3'h3 : _ctrl_T_661; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_670 = _ctrl_T_105 ? 3'h1 : 3'h0; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_671 = _ctrl_T_103 ? 3'h1 : _ctrl_T_670; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_672 = _ctrl_T_101 ? 3'h1 : _ctrl_T_671; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_673 = _ctrl_T_99 ? 3'h1 : _ctrl_T_672; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_674 = _ctrl_T_97 ? 3'h1 : _ctrl_T_673; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_675 = _ctrl_T_95 ? 3'h2 : _ctrl_T_674; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_676 = _ctrl_T_93 ? 3'h2 : _ctrl_T_675; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_677 = _ctrl_T_91 ? 3'h2 : _ctrl_T_676; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_678 = _ctrl_T_89 ? 3'h2 : _ctrl_T_677; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_679 = _ctrl_T_87 ? 3'h1 : _ctrl_T_678; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_680 = _ctrl_T_85 ? 3'h2 : _ctrl_T_679; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_681 = _ctrl_T_83 ? 3'h2 : _ctrl_T_680; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_682 = _ctrl_T_81 ? 3'h0 : _ctrl_T_681; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_683 = _ctrl_T_79 ? 3'h0 : _ctrl_T_682; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_684 = _ctrl_T_77 ? 3'h0 : _ctrl_T_683; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_685 = _ctrl_T_75 ? 3'h0 : _ctrl_T_684; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_686 = _ctrl_T_73 ? 3'h1 : _ctrl_T_685; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_687 = _ctrl_T_71 ? 3'h1 : _ctrl_T_686; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_688 = _ctrl_T_69 ? 3'h1 : _ctrl_T_687; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_689 = _ctrl_T_67 ? 3'h1 : _ctrl_T_688; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_690 = _ctrl_T_65 ? 3'h1 : _ctrl_T_689; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_691 = _ctrl_T_63 ? 3'h1 : _ctrl_T_690; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_692 = _ctrl_T_61 ? 3'h1 : _ctrl_T_691; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_693 = _ctrl_T_59 ? 3'h1 : _ctrl_T_692; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_694 = _ctrl_T_57 ? 3'h1 : _ctrl_T_693; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_695 = _ctrl_T_55 ? 3'h1 : _ctrl_T_694; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_696 = _ctrl_T_53 ? 3'h2 : _ctrl_T_695; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_697 = _ctrl_T_51 ? 3'h2 : _ctrl_T_696; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_698 = _ctrl_T_49 ? 3'h2 : _ctrl_T_697; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_699 = _ctrl_T_47 ? 3'h2 : _ctrl_T_698; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_700 = _ctrl_T_45 ? 3'h2 : _ctrl_T_699; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_701 = _ctrl_T_43 ? 3'h2 : _ctrl_T_700; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_702 = _ctrl_T_41 ? 3'h2 : _ctrl_T_701; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_703 = _ctrl_T_39 ? 3'h2 : _ctrl_T_702; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_704 = _ctrl_T_37 ? 3'h2 : _ctrl_T_703; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_705 = _ctrl_T_35 ? 3'h1 : _ctrl_T_704; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_706 = _ctrl_T_33 ? 3'h1 : _ctrl_T_705; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_707 = _ctrl_T_31 ? 3'h1 : _ctrl_T_706; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_708 = _ctrl_T_29 ? 3'h2 : _ctrl_T_707; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_709 = _ctrl_T_27 ? 3'h2 : _ctrl_T_708; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_710 = _ctrl_T_25 ? 3'h2 : _ctrl_T_709; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_711 = _ctrl_T_23 ? 3'h2 : _ctrl_T_710; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_712 = _ctrl_T_21 ? 3'h2 : _ctrl_T_711; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_713 = _ctrl_T_19 ? 3'h1 : _ctrl_T_712; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_714 = _ctrl_T_17 ? 3'h1 : _ctrl_T_713; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_715 = _ctrl_T_15 ? 3'h1 : _ctrl_T_714; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_716 = _ctrl_T_13 ? 3'h1 : _ctrl_T_715; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_717 = _ctrl_T_11 ? 3'h1 : _ctrl_T_716; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_718 = _ctrl_T_9 ? 3'h1 : _ctrl_T_717; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_719 = _ctrl_T_7 ? 3'h1 : _ctrl_T_718; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_720 = _ctrl_T_5 ? 3'h2 : _ctrl_T_719; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_721 = _ctrl_T_3 ? 3'h2 : _ctrl_T_720; // @[Lookup.scala 33:37]
  wire [2:0] c0_2 = _ctrl_T_1 ? 3'h2 : _ctrl_T_721; // @[Lookup.scala 33:37]
  wire  _ctrl_T_739 = _ctrl_T_87 ? 1'h0 : _ctrl_T_89 | (_ctrl_T_91 | (_ctrl_T_93 | (_ctrl_T_95 | (_ctrl_T_97 | (
    _ctrl_T_99 | (_ctrl_T_101 | (_ctrl_T_103 | (_ctrl_T_105 | (_ctrl_T_107 | (_ctrl_T_109 | (_ctrl_T_111 | (_ctrl_T_113
     | (_ctrl_T_115 | _ctrl_T_117))))))))))))); // @[Lookup.scala 33:37]
  wire  _ctrl_T_742 = _ctrl_T_81 ? 1'h0 : _ctrl_T_83 | (_ctrl_T_85 | _ctrl_T_739); // @[Lookup.scala 33:37]
  wire  _ctrl_T_743 = _ctrl_T_79 ? 1'h0 : _ctrl_T_742; // @[Lookup.scala 33:37]
  wire  _ctrl_T_744 = _ctrl_T_77 ? 1'h0 : _ctrl_T_743; // @[Lookup.scala 33:37]
  wire  _ctrl_T_745 = _ctrl_T_75 ? 1'h0 : _ctrl_T_744; // @[Lookup.scala 33:37]
  wire  _ctrl_T_765 = _ctrl_T_35 ? 1'h0 : _ctrl_T_37 | (_ctrl_T_39 | (_ctrl_T_41 | (_ctrl_T_43 | (_ctrl_T_45 | (
    _ctrl_T_47 | (_ctrl_T_49 | (_ctrl_T_51 | (_ctrl_T_53 | (_ctrl_T_55 | (_ctrl_T_57 | (_ctrl_T_59 | (_ctrl_T_61 | (
    _ctrl_T_63 | (_ctrl_T_65 | (_ctrl_T_67 | (_ctrl_T_69 | (_ctrl_T_71 | (_ctrl_T_73 | _ctrl_T_745)))))))))))))))))); // @[Lookup.scala 33:37]
  wire  _ctrl_T_766 = _ctrl_T_33 ? 1'h0 : _ctrl_T_765; // @[Lookup.scala 33:37]
  wire  _ctrl_T_767 = _ctrl_T_31 ? 1'h0 : _ctrl_T_766; // @[Lookup.scala 33:37]
  wire  _ctrl_T_773 = _ctrl_T_19 ? 1'h0 : _ctrl_T_21 | (_ctrl_T_23 | (_ctrl_T_25 | (_ctrl_T_27 | (_ctrl_T_29 |
    _ctrl_T_767)))); // @[Lookup.scala 33:37]
  wire  _ctrl_T_774 = _ctrl_T_17 ? 1'h0 : _ctrl_T_773; // @[Lookup.scala 33:37]
  wire  _ctrl_T_775 = _ctrl_T_15 ? 1'h0 : _ctrl_T_774; // @[Lookup.scala 33:37]
  wire  _ctrl_T_776 = _ctrl_T_13 ? 1'h0 : _ctrl_T_775; // @[Lookup.scala 33:37]
  wire  _ctrl_T_777 = _ctrl_T_11 ? 1'h0 : _ctrl_T_776; // @[Lookup.scala 33:37]
  wire  _ctrl_T_778 = _ctrl_T_9 ? 1'h0 : _ctrl_T_777; // @[Lookup.scala 33:37]
  wire  c0_3 = _ctrl_T_1 | (_ctrl_T_3 | (_ctrl_T_5 | (_ctrl_T_7 | _ctrl_T_778))); // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_784 = _ctrl_T_117 ? 3'h7 : 3'h0; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_785 = _ctrl_T_115 ? 3'h7 : _ctrl_T_784; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_786 = _ctrl_T_113 ? 3'h7 : _ctrl_T_785; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_787 = _ctrl_T_111 ? 3'h0 : _ctrl_T_786; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_788 = _ctrl_T_109 ? 3'h0 : _ctrl_T_787; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_789 = _ctrl_T_107 ? 3'h0 : _ctrl_T_788; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_790 = _ctrl_T_105 ? 3'h0 : _ctrl_T_789; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_791 = _ctrl_T_103 ? 3'h0 : _ctrl_T_790; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_792 = _ctrl_T_101 ? 3'h0 : _ctrl_T_791; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_793 = _ctrl_T_99 ? 3'h0 : _ctrl_T_792; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_794 = _ctrl_T_97 ? 3'h0 : _ctrl_T_793; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_795 = _ctrl_T_95 ? 3'h1 : _ctrl_T_794; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_796 = _ctrl_T_93 ? 3'h1 : _ctrl_T_795; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_797 = _ctrl_T_91 ? 3'h1 : _ctrl_T_796; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_798 = _ctrl_T_89 ? 3'h1 : _ctrl_T_797; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_799 = _ctrl_T_87 ? 3'h2 : _ctrl_T_798; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_800 = _ctrl_T_85 ? 3'h1 : _ctrl_T_799; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_801 = _ctrl_T_83 ? 3'h1 : _ctrl_T_800; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_802 = _ctrl_T_81 ? 3'h0 : _ctrl_T_801; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_803 = _ctrl_T_79 ? 3'h0 : _ctrl_T_802; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_804 = _ctrl_T_77 ? 3'h0 : _ctrl_T_803; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_805 = _ctrl_T_75 ? 3'h0 : _ctrl_T_804; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_806 = _ctrl_T_73 ? 3'h0 : _ctrl_T_805; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_807 = _ctrl_T_71 ? 3'h0 : _ctrl_T_806; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_808 = _ctrl_T_69 ? 3'h0 : _ctrl_T_807; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_809 = _ctrl_T_67 ? 3'h0 : _ctrl_T_808; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_810 = _ctrl_T_65 ? 3'h0 : _ctrl_T_809; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_811 = _ctrl_T_63 ? 3'h0 : _ctrl_T_810; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_812 = _ctrl_T_61 ? 3'h0 : _ctrl_T_811; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_813 = _ctrl_T_59 ? 3'h0 : _ctrl_T_812; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_814 = _ctrl_T_57 ? 3'h0 : _ctrl_T_813; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_815 = _ctrl_T_55 ? 3'h0 : _ctrl_T_814; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_816 = _ctrl_T_53 ? 3'h6 : _ctrl_T_815; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_817 = _ctrl_T_51 ? 3'h6 : _ctrl_T_816; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_818 = _ctrl_T_49 ? 3'h6 : _ctrl_T_817; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_819 = _ctrl_T_47 ? 3'h1 : _ctrl_T_818; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_820 = _ctrl_T_45 ? 3'h1 : _ctrl_T_819; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_821 = _ctrl_T_43 ? 3'h1 : _ctrl_T_820; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_822 = _ctrl_T_41 ? 3'h1 : _ctrl_T_821; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_823 = _ctrl_T_39 ? 3'h1 : _ctrl_T_822; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_824 = _ctrl_T_37 ? 3'h1 : _ctrl_T_823; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_825 = _ctrl_T_35 ? 3'h2 : _ctrl_T_824; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_826 = _ctrl_T_33 ? 3'h2 : _ctrl_T_825; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_827 = _ctrl_T_31 ? 3'h2 : _ctrl_T_826; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_828 = _ctrl_T_29 ? 3'h1 : _ctrl_T_827; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_829 = _ctrl_T_27 ? 3'h1 : _ctrl_T_828; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_830 = _ctrl_T_25 ? 3'h1 : _ctrl_T_829; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_831 = _ctrl_T_23 ? 3'h1 : _ctrl_T_830; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_832 = _ctrl_T_21 ? 3'h1 : _ctrl_T_831; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_833 = _ctrl_T_19 ? 3'h3 : _ctrl_T_832; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_834 = _ctrl_T_17 ? 3'h3 : _ctrl_T_833; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_835 = _ctrl_T_15 ? 3'h3 : _ctrl_T_834; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_836 = _ctrl_T_13 ? 3'h3 : _ctrl_T_835; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_837 = _ctrl_T_11 ? 3'h3 : _ctrl_T_836; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_838 = _ctrl_T_9 ? 3'h3 : _ctrl_T_837; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_839 = _ctrl_T_7 ? 3'h1 : _ctrl_T_838; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_840 = _ctrl_T_5 ? 3'h5 : _ctrl_T_839; // @[Lookup.scala 33:37]
  wire [2:0] _ctrl_T_841 = _ctrl_T_3 ? 3'h4 : _ctrl_T_840; // @[Lookup.scala 33:37]
  wire [2:0] c0_4 = _ctrl_T_1 ? 3'h4 : _ctrl_T_841; // @[Lookup.scala 33:37]
  reg  io_is_ebreak_REG; // @[Decode.scala 135:69]
  reg [31:0] io_p_npc_o_REG; // @[Decode.scala 137:24]
  wire [20:0] imm_i_hi = inst[31] ? 21'h1fffff : 21'h0; // @[Bitwise.scala 72:12]
  wire [10:0] imm_i_lo = inst[30:20]; // @[Decode.scala 139:43]
  wire [31:0] imm_i = {imm_i_hi,imm_i_lo}; // @[Cat.scala 30:58]
  wire [5:0] imm_s_hi_lo = inst[30:25]; // @[Decode.scala 140:43]
  wire [31:0] imm_s = {imm_i_hi,imm_s_hi_lo,inst[11:7]}; // @[Cat.scala 30:58]
  wire [19:0] imm_b_hi_hi_hi = inst[31] ? 20'hfffff : 20'h0; // @[Bitwise.scala 72:12]
  wire  imm_b_hi_hi_lo = inst[7]; // @[Decode.scala 141:43]
  wire [3:0] imm_b_lo_hi = inst[11:8]; // @[Decode.scala 141:66]
  wire [31:0] imm_b = {imm_b_hi_hi_hi,imm_b_hi_hi_lo,imm_s_hi_lo,imm_b_lo_hi,1'h0}; // @[Cat.scala 30:58]
  wire [19:0] imm_u_hi = inst[31:12]; // @[Decode.scala 142:23]
  wire [31:0] imm_u = {imm_u_hi,12'h0}; // @[Cat.scala 30:58]
  wire [11:0] imm_j_hi_hi_hi = inst[31] ? 12'hfff : 12'h0; // @[Bitwise.scala 72:12]
  wire [7:0] imm_j_hi_hi_lo = inst[19:12]; // @[Decode.scala 143:43]
  wire  imm_j_hi_lo = inst[20]; // @[Decode.scala 143:57]
  wire [9:0] imm_j_lo_hi = inst[30:21]; // @[Decode.scala 143:67]
  wire [31:0] imm_j = {imm_j_hi_hi_hi,imm_j_hi_hi_lo,imm_j_hi_lo,imm_j_lo_hi,1'h0}; // @[Cat.scala 30:58]
  wire [31:0] _imm_shamt_T = {27'h0,inst[24:20]}; // @[Cat.scala 30:58]
  wire [5:0] imm_shamt_lo_1 = inst[25:20]; // @[Decode.scala 144:88]
  wire [31:0] _imm_shamt_T_1 = {26'h0,imm_shamt_lo_1}; // @[Cat.scala 30:58]
  wire [31:0] imm_shamt = c0_0 ? _imm_shamt_T : _imm_shamt_T_1; // @[Decode.scala 144:22]
  wire [31:0] imm_csr = {27'h0,inst[19:15]}; // @[Cat.scala 30:58]
  wire [31:0] _io_out_bits_imm_T_1 = 3'h1 == c0_4 ? imm_i : 32'h0; // @[Mux.scala 80:57]
  wire [31:0] _io_out_bits_imm_T_3 = 3'h2 == c0_4 ? imm_s : _io_out_bits_imm_T_1; // @[Mux.scala 80:57]
  wire [31:0] _io_out_bits_imm_T_5 = 3'h3 == c0_4 ? imm_b : _io_out_bits_imm_T_3; // @[Mux.scala 80:57]
  wire [31:0] _io_out_bits_imm_T_7 = 3'h4 == c0_4 ? imm_u : _io_out_bits_imm_T_5; // @[Mux.scala 80:57]
  wire [31:0] _io_out_bits_imm_T_9 = 3'h5 == c0_4 ? imm_j : _io_out_bits_imm_T_7; // @[Mux.scala 80:57]
  wire [31:0] _io_out_bits_imm_T_11 = 3'h6 == c0_4 ? imm_shamt : _io_out_bits_imm_T_9; // @[Mux.scala 80:57]
  wire  _stall_T = io_out_ready & io_out_valid; // @[Decoupled.scala 40:37]
  wire  stall = ~_stall_T; // @[Decode.scala 157:15]
  assign io_in_ready = ~stall; // @[Decode.scala 158:18]
  assign io_out_valid = 1'h1; // @[Decode.scala 159:16]
  assign io_out_bits_valid = inst_valid; // @[Decode.scala 116:26]
  assign io_out_bits_pc = pc; // @[Decode.scala 114:23]
  assign io_out_bits_inst = inst; // @[Decode.scala 115:23]
  assign io_out_bits_alu_code = _ctrl_T_1 ? 4'h1 : _ctrl_T_301; // @[Lookup.scala 33:37]
  assign io_out_bits_jmp_code = _ctrl_T_1 ? 4'h0 : _ctrl_T_361; // @[Lookup.scala 33:37]
  assign io_out_bits_w_type = _ctrl_T_1 ? 1'h0 : _ctrl_T_601; // @[Lookup.scala 33:37]
  assign io_out_bits_rs1_src = _ctrl_T_1 ? 3'h3 : _ctrl_T_661; // @[Lookup.scala 33:37]
  assign io_out_bits_rs2_src = _ctrl_T_1 ? 3'h2 : _ctrl_T_721; // @[Lookup.scala 33:37]
  assign io_out_bits_rd_addr = inst[11:7]; // @[Decode.scala 129:30]
  assign io_out_bits_rd_en = io_id_flush ? 1'h0 : inst_valid & c0_3; // @[Decode.scala 126:27]
  assign io_out_bits_imm = 3'h7 == c0_4 ? imm_csr : _io_out_bits_imm_T_11; // @[Mux.scala 80:57]
  assign io_ren1 = c0_1 == 3'h1; // @[Decode.scala 131:23]
  assign io_raddr1 = inst[19:15]; // @[Decode.scala 133:20]
  assign io_ren2 = c0_2 == 3'h1; // @[Decode.scala 132:23]
  assign io_raddr2 = inst[24:20]; // @[Decode.scala 134:20]
  assign io_is_ebreak = io_id_flush ? 1'h0 : inst_valid & io_is_ebreak_REG; // @[Decode.scala 135:22]
  assign io_rs1_data_o = io_rs1_data_o_REG; // @[Decode.scala 29:17]
  assign io_rs2_data_o = io_rs2_data_o_REG; // @[Decode.scala 30:17]
  assign io_p_npc_o = io_p_npc_o_REG; // @[Decode.scala 137:14]
  always @(posedge clock) begin
    if (reset) begin // @[Decode.scala 25:22]
      pc <= 32'h0; // @[Decode.scala 25:22]
    end else if (io_in_ready) begin // @[Decode.scala 31:21]
      if (io_id_flush) begin // @[Decode.scala 32:14]
        pc <= 32'h0;
      end else begin
        pc <= io_in_bits_pc;
      end
    end
    if (reset) begin // @[Decode.scala 26:22]
      inst <= 32'h0; // @[Decode.scala 26:22]
    end else if (io_in_ready) begin // @[Decode.scala 31:21]
      if (io_id_flush) begin // @[Decode.scala 33:16]
        inst <= 32'h0;
      end else begin
        inst <= io_in_bits_inst;
      end
    end
    if (reset) begin // @[Decode.scala 27:27]
      inst_valid <= 1'h0; // @[Decode.scala 27:27]
    end else if (io_in_ready) begin // @[Decode.scala 31:21]
      if (io_id_flush) begin // @[Decode.scala 34:22]
        inst_valid <= 1'h0;
      end else begin
        inst_valid <= io_in_bits_inst_valid;
      end
    end
    io_rs1_data_o_REG <= io_rs1_data_i; // @[Decode.scala 29:27]
    io_rs2_data_o_REG <= io_rs2_data_i; // @[Decode.scala 30:27]
    io_is_ebreak_REG <= 32'h100073 == inst; // @[Decode.scala 135:75]
    io_p_npc_o_REG <= io_p_npc_i; // @[Decode.scala 137:24]
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
  input         io_mem_rd_en,
  input  [31:0] io_mem_rd_addr,
  input  [63:0] io_mem_rd_data
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
  wire [31:0] _GEN_128 = {{27'd0}, io_raddr1}; // @[RegFile.scala 28:53]
  wire  ex_rs1_hazard = io_ex_rd_en & io_ex_rd_addr == _GEN_128 & io_ren1; // @[RegFile.scala 28:68]
  wire [31:0] _GEN_129 = {{27'd0}, io_raddr2}; // @[RegFile.scala 29:53]
  wire  ex_rs2_hazard = io_ex_rd_en & io_ex_rd_addr == _GEN_129 & io_ren2; // @[RegFile.scala 29:68]
  wire  mem_rs1_hazard = io_mem_rd_en & io_mem_rd_addr == _GEN_128 & io_ren1; // @[RegFile.scala 30:71]
  wire  mem_rs2_hazard = io_mem_rd_en & io_mem_rd_addr == _GEN_129 & io_ren2; // @[RegFile.scala 31:71]
  wire  wb_rs1_hazard = io_wen & io_waddr == io_raddr1 & io_ren1; // @[RegFile.scala 32:58]
  wire  wb_rs2_hazard = io_wen & io_waddr == io_raddr2 & io_ren2; // @[RegFile.scala 33:58]
  reg [63:0] rf_0; // @[RegFile.scala 35:19]
  reg [63:0] rf_1; // @[RegFile.scala 35:19]
  reg [63:0] rf_2; // @[RegFile.scala 35:19]
  reg [63:0] rf_3; // @[RegFile.scala 35:19]
  reg [63:0] rf_4; // @[RegFile.scala 35:19]
  reg [63:0] rf_5; // @[RegFile.scala 35:19]
  reg [63:0] rf_6; // @[RegFile.scala 35:19]
  reg [63:0] rf_7; // @[RegFile.scala 35:19]
  reg [63:0] rf_8; // @[RegFile.scala 35:19]
  reg [63:0] rf_9; // @[RegFile.scala 35:19]
  reg [63:0] rf_10; // @[RegFile.scala 35:19]
  reg [63:0] rf_11; // @[RegFile.scala 35:19]
  reg [63:0] rf_12; // @[RegFile.scala 35:19]
  reg [63:0] rf_13; // @[RegFile.scala 35:19]
  reg [63:0] rf_14; // @[RegFile.scala 35:19]
  reg [63:0] rf_15; // @[RegFile.scala 35:19]
  reg [63:0] rf_16; // @[RegFile.scala 35:19]
  reg [63:0] rf_17; // @[RegFile.scala 35:19]
  reg [63:0] rf_18; // @[RegFile.scala 35:19]
  reg [63:0] rf_19; // @[RegFile.scala 35:19]
  reg [63:0] rf_20; // @[RegFile.scala 35:19]
  reg [63:0] rf_21; // @[RegFile.scala 35:19]
  reg [63:0] rf_22; // @[RegFile.scala 35:19]
  reg [63:0] rf_23; // @[RegFile.scala 35:19]
  reg [63:0] rf_24; // @[RegFile.scala 35:19]
  reg [63:0] rf_25; // @[RegFile.scala 35:19]
  reg [63:0] rf_26; // @[RegFile.scala 35:19]
  reg [63:0] rf_27; // @[RegFile.scala 35:19]
  reg [63:0] rf_28; // @[RegFile.scala 35:19]
  reg [63:0] rf_29; // @[RegFile.scala 35:19]
  reg [63:0] rf_30; // @[RegFile.scala 35:19]
  reg [63:0] rf_31; // @[RegFile.scala 35:19]
  wire [63:0] _GEN_1 = 5'h1 == io_raddr1 ? rf_1 : rf_0; // @[RegFile.scala 37:115 RegFile.scala 37:115]
  wire [63:0] _GEN_2 = 5'h2 == io_raddr1 ? rf_2 : _GEN_1; // @[RegFile.scala 37:115 RegFile.scala 37:115]
  wire [63:0] _GEN_3 = 5'h3 == io_raddr1 ? rf_3 : _GEN_2; // @[RegFile.scala 37:115 RegFile.scala 37:115]
  wire [63:0] _GEN_4 = 5'h4 == io_raddr1 ? rf_4 : _GEN_3; // @[RegFile.scala 37:115 RegFile.scala 37:115]
  wire [63:0] _GEN_5 = 5'h5 == io_raddr1 ? rf_5 : _GEN_4; // @[RegFile.scala 37:115 RegFile.scala 37:115]
  wire [63:0] _GEN_6 = 5'h6 == io_raddr1 ? rf_6 : _GEN_5; // @[RegFile.scala 37:115 RegFile.scala 37:115]
  wire [63:0] _GEN_7 = 5'h7 == io_raddr1 ? rf_7 : _GEN_6; // @[RegFile.scala 37:115 RegFile.scala 37:115]
  wire [63:0] _GEN_8 = 5'h8 == io_raddr1 ? rf_8 : _GEN_7; // @[RegFile.scala 37:115 RegFile.scala 37:115]
  wire [63:0] _GEN_9 = 5'h9 == io_raddr1 ? rf_9 : _GEN_8; // @[RegFile.scala 37:115 RegFile.scala 37:115]
  wire [63:0] _GEN_10 = 5'ha == io_raddr1 ? rf_10 : _GEN_9; // @[RegFile.scala 37:115 RegFile.scala 37:115]
  wire [63:0] _GEN_11 = 5'hb == io_raddr1 ? rf_11 : _GEN_10; // @[RegFile.scala 37:115 RegFile.scala 37:115]
  wire [63:0] _GEN_12 = 5'hc == io_raddr1 ? rf_12 : _GEN_11; // @[RegFile.scala 37:115 RegFile.scala 37:115]
  wire [63:0] _GEN_13 = 5'hd == io_raddr1 ? rf_13 : _GEN_12; // @[RegFile.scala 37:115 RegFile.scala 37:115]
  wire [63:0] _GEN_14 = 5'he == io_raddr1 ? rf_14 : _GEN_13; // @[RegFile.scala 37:115 RegFile.scala 37:115]
  wire [63:0] _GEN_15 = 5'hf == io_raddr1 ? rf_15 : _GEN_14; // @[RegFile.scala 37:115 RegFile.scala 37:115]
  wire [63:0] _GEN_16 = 5'h10 == io_raddr1 ? rf_16 : _GEN_15; // @[RegFile.scala 37:115 RegFile.scala 37:115]
  wire [63:0] _GEN_17 = 5'h11 == io_raddr1 ? rf_17 : _GEN_16; // @[RegFile.scala 37:115 RegFile.scala 37:115]
  wire [63:0] _GEN_18 = 5'h12 == io_raddr1 ? rf_18 : _GEN_17; // @[RegFile.scala 37:115 RegFile.scala 37:115]
  wire [63:0] _GEN_19 = 5'h13 == io_raddr1 ? rf_19 : _GEN_18; // @[RegFile.scala 37:115 RegFile.scala 37:115]
  wire [63:0] _GEN_20 = 5'h14 == io_raddr1 ? rf_20 : _GEN_19; // @[RegFile.scala 37:115 RegFile.scala 37:115]
  wire [63:0] _GEN_21 = 5'h15 == io_raddr1 ? rf_21 : _GEN_20; // @[RegFile.scala 37:115 RegFile.scala 37:115]
  wire [63:0] _GEN_22 = 5'h16 == io_raddr1 ? rf_22 : _GEN_21; // @[RegFile.scala 37:115 RegFile.scala 37:115]
  wire [63:0] _GEN_23 = 5'h17 == io_raddr1 ? rf_23 : _GEN_22; // @[RegFile.scala 37:115 RegFile.scala 37:115]
  wire [63:0] _GEN_24 = 5'h18 == io_raddr1 ? rf_24 : _GEN_23; // @[RegFile.scala 37:115 RegFile.scala 37:115]
  wire [63:0] _GEN_25 = 5'h19 == io_raddr1 ? rf_25 : _GEN_24; // @[RegFile.scala 37:115 RegFile.scala 37:115]
  wire [63:0] _GEN_26 = 5'h1a == io_raddr1 ? rf_26 : _GEN_25; // @[RegFile.scala 37:115 RegFile.scala 37:115]
  wire [63:0] _GEN_27 = 5'h1b == io_raddr1 ? rf_27 : _GEN_26; // @[RegFile.scala 37:115 RegFile.scala 37:115]
  wire [63:0] _GEN_28 = 5'h1c == io_raddr1 ? rf_28 : _GEN_27; // @[RegFile.scala 37:115 RegFile.scala 37:115]
  wire [63:0] _GEN_29 = 5'h1d == io_raddr1 ? rf_29 : _GEN_28; // @[RegFile.scala 37:115 RegFile.scala 37:115]
  wire [63:0] _GEN_30 = 5'h1e == io_raddr1 ? rf_30 : _GEN_29; // @[RegFile.scala 37:115 RegFile.scala 37:115]
  wire [63:0] _GEN_31 = 5'h1f == io_raddr1 ? rf_31 : _GEN_30; // @[RegFile.scala 37:115 RegFile.scala 37:115]
  wire [63:0] _io_rdata1_T_1 = wb_rs1_hazard ? io_wdata : _GEN_31; // @[RegFile.scala 37:115]
  wire [63:0] _io_rdata1_T_2 = mem_rs1_hazard ? io_mem_rd_data : _io_rdata1_T_1; // @[RegFile.scala 37:79]
  wire [63:0] _io_rdata1_T_3 = ex_rs1_hazard ? io_ex_rd_data : _io_rdata1_T_2; // @[RegFile.scala 37:44]
  wire [63:0] _GEN_33 = 5'h1 == io_raddr2 ? rf_1 : rf_0; // @[RegFile.scala 38:115 RegFile.scala 38:115]
  wire [63:0] _GEN_34 = 5'h2 == io_raddr2 ? rf_2 : _GEN_33; // @[RegFile.scala 38:115 RegFile.scala 38:115]
  wire [63:0] _GEN_35 = 5'h3 == io_raddr2 ? rf_3 : _GEN_34; // @[RegFile.scala 38:115 RegFile.scala 38:115]
  wire [63:0] _GEN_36 = 5'h4 == io_raddr2 ? rf_4 : _GEN_35; // @[RegFile.scala 38:115 RegFile.scala 38:115]
  wire [63:0] _GEN_37 = 5'h5 == io_raddr2 ? rf_5 : _GEN_36; // @[RegFile.scala 38:115 RegFile.scala 38:115]
  wire [63:0] _GEN_38 = 5'h6 == io_raddr2 ? rf_6 : _GEN_37; // @[RegFile.scala 38:115 RegFile.scala 38:115]
  wire [63:0] _GEN_39 = 5'h7 == io_raddr2 ? rf_7 : _GEN_38; // @[RegFile.scala 38:115 RegFile.scala 38:115]
  wire [63:0] _GEN_40 = 5'h8 == io_raddr2 ? rf_8 : _GEN_39; // @[RegFile.scala 38:115 RegFile.scala 38:115]
  wire [63:0] _GEN_41 = 5'h9 == io_raddr2 ? rf_9 : _GEN_40; // @[RegFile.scala 38:115 RegFile.scala 38:115]
  wire [63:0] _GEN_42 = 5'ha == io_raddr2 ? rf_10 : _GEN_41; // @[RegFile.scala 38:115 RegFile.scala 38:115]
  wire [63:0] _GEN_43 = 5'hb == io_raddr2 ? rf_11 : _GEN_42; // @[RegFile.scala 38:115 RegFile.scala 38:115]
  wire [63:0] _GEN_44 = 5'hc == io_raddr2 ? rf_12 : _GEN_43; // @[RegFile.scala 38:115 RegFile.scala 38:115]
  wire [63:0] _GEN_45 = 5'hd == io_raddr2 ? rf_13 : _GEN_44; // @[RegFile.scala 38:115 RegFile.scala 38:115]
  wire [63:0] _GEN_46 = 5'he == io_raddr2 ? rf_14 : _GEN_45; // @[RegFile.scala 38:115 RegFile.scala 38:115]
  wire [63:0] _GEN_47 = 5'hf == io_raddr2 ? rf_15 : _GEN_46; // @[RegFile.scala 38:115 RegFile.scala 38:115]
  wire [63:0] _GEN_48 = 5'h10 == io_raddr2 ? rf_16 : _GEN_47; // @[RegFile.scala 38:115 RegFile.scala 38:115]
  wire [63:0] _GEN_49 = 5'h11 == io_raddr2 ? rf_17 : _GEN_48; // @[RegFile.scala 38:115 RegFile.scala 38:115]
  wire [63:0] _GEN_50 = 5'h12 == io_raddr2 ? rf_18 : _GEN_49; // @[RegFile.scala 38:115 RegFile.scala 38:115]
  wire [63:0] _GEN_51 = 5'h13 == io_raddr2 ? rf_19 : _GEN_50; // @[RegFile.scala 38:115 RegFile.scala 38:115]
  wire [63:0] _GEN_52 = 5'h14 == io_raddr2 ? rf_20 : _GEN_51; // @[RegFile.scala 38:115 RegFile.scala 38:115]
  wire [63:0] _GEN_53 = 5'h15 == io_raddr2 ? rf_21 : _GEN_52; // @[RegFile.scala 38:115 RegFile.scala 38:115]
  wire [63:0] _GEN_54 = 5'h16 == io_raddr2 ? rf_22 : _GEN_53; // @[RegFile.scala 38:115 RegFile.scala 38:115]
  wire [63:0] _GEN_55 = 5'h17 == io_raddr2 ? rf_23 : _GEN_54; // @[RegFile.scala 38:115 RegFile.scala 38:115]
  wire [63:0] _GEN_56 = 5'h18 == io_raddr2 ? rf_24 : _GEN_55; // @[RegFile.scala 38:115 RegFile.scala 38:115]
  wire [63:0] _GEN_57 = 5'h19 == io_raddr2 ? rf_25 : _GEN_56; // @[RegFile.scala 38:115 RegFile.scala 38:115]
  wire [63:0] _GEN_58 = 5'h1a == io_raddr2 ? rf_26 : _GEN_57; // @[RegFile.scala 38:115 RegFile.scala 38:115]
  wire [63:0] _GEN_59 = 5'h1b == io_raddr2 ? rf_27 : _GEN_58; // @[RegFile.scala 38:115 RegFile.scala 38:115]
  wire [63:0] _GEN_60 = 5'h1c == io_raddr2 ? rf_28 : _GEN_59; // @[RegFile.scala 38:115 RegFile.scala 38:115]
  wire [63:0] _GEN_61 = 5'h1d == io_raddr2 ? rf_29 : _GEN_60; // @[RegFile.scala 38:115 RegFile.scala 38:115]
  wire [63:0] _GEN_62 = 5'h1e == io_raddr2 ? rf_30 : _GEN_61; // @[RegFile.scala 38:115 RegFile.scala 38:115]
  wire [63:0] _GEN_63 = 5'h1f == io_raddr2 ? rf_31 : _GEN_62; // @[RegFile.scala 38:115 RegFile.scala 38:115]
  wire [63:0] _io_rdata2_T_1 = wb_rs2_hazard ? io_wdata : _GEN_63; // @[RegFile.scala 38:115]
  wire [63:0] _io_rdata2_T_2 = mem_rs2_hazard ? io_mem_rd_data : _io_rdata2_T_1; // @[RegFile.scala 38:79]
  wire [63:0] _io_rdata2_T_3 = ex_rs2_hazard ? io_ex_rd_data : _io_rdata2_T_2; // @[RegFile.scala 38:44]
  assign io_rdata1 = io_raddr1 != 5'h0 ? _io_rdata1_T_3 : 64'h0; // @[RegFile.scala 37:19]
  assign io_rdata2 = io_raddr2 != 5'h0 ? _io_rdata2_T_3 : 64'h0; // @[RegFile.scala 38:19]
  assign io_regs_0 = rf_0; // @[RegFile.scala 43:11]
  assign io_regs_1 = rf_1; // @[RegFile.scala 43:11]
  assign io_regs_2 = rf_2; // @[RegFile.scala 43:11]
  assign io_regs_3 = rf_3; // @[RegFile.scala 43:11]
  assign io_regs_4 = rf_4; // @[RegFile.scala 43:11]
  assign io_regs_5 = rf_5; // @[RegFile.scala 43:11]
  assign io_regs_6 = rf_6; // @[RegFile.scala 43:11]
  assign io_regs_7 = rf_7; // @[RegFile.scala 43:11]
  assign io_regs_8 = rf_8; // @[RegFile.scala 43:11]
  assign io_regs_9 = rf_9; // @[RegFile.scala 43:11]
  assign io_regs_10 = rf_10; // @[RegFile.scala 43:11]
  assign io_regs_11 = rf_11; // @[RegFile.scala 43:11]
  assign io_regs_12 = rf_12; // @[RegFile.scala 43:11]
  assign io_regs_13 = rf_13; // @[RegFile.scala 43:11]
  assign io_regs_14 = rf_14; // @[RegFile.scala 43:11]
  assign io_regs_15 = rf_15; // @[RegFile.scala 43:11]
  assign io_regs_16 = rf_16; // @[RegFile.scala 43:11]
  assign io_regs_17 = rf_17; // @[RegFile.scala 43:11]
  assign io_regs_18 = rf_18; // @[RegFile.scala 43:11]
  assign io_regs_19 = rf_19; // @[RegFile.scala 43:11]
  assign io_regs_20 = rf_20; // @[RegFile.scala 43:11]
  assign io_regs_21 = rf_21; // @[RegFile.scala 43:11]
  assign io_regs_22 = rf_22; // @[RegFile.scala 43:11]
  assign io_regs_23 = rf_23; // @[RegFile.scala 43:11]
  assign io_regs_24 = rf_24; // @[RegFile.scala 43:11]
  assign io_regs_25 = rf_25; // @[RegFile.scala 43:11]
  assign io_regs_26 = rf_26; // @[RegFile.scala 43:11]
  assign io_regs_27 = rf_27; // @[RegFile.scala 43:11]
  assign io_regs_28 = rf_28; // @[RegFile.scala 43:11]
  assign io_regs_29 = rf_29; // @[RegFile.scala 43:11]
  assign io_regs_30 = rf_30; // @[RegFile.scala 43:11]
  assign io_regs_31 = rf_31; // @[RegFile.scala 43:11]
  always @(posedge clock) begin
    if (reset) begin // @[RegFile.scala 35:19]
      rf_0 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'h0 == io_waddr) begin // @[RegFile.scala 41:18]
        rf_0 <= io_wdata; // @[RegFile.scala 41:18]
      end
    end
    if (reset) begin // @[RegFile.scala 35:19]
      rf_1 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'h1 == io_waddr) begin // @[RegFile.scala 41:18]
        rf_1 <= io_wdata; // @[RegFile.scala 41:18]
      end
    end
    if (reset) begin // @[RegFile.scala 35:19]
      rf_2 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'h2 == io_waddr) begin // @[RegFile.scala 41:18]
        rf_2 <= io_wdata; // @[RegFile.scala 41:18]
      end
    end
    if (reset) begin // @[RegFile.scala 35:19]
      rf_3 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'h3 == io_waddr) begin // @[RegFile.scala 41:18]
        rf_3 <= io_wdata; // @[RegFile.scala 41:18]
      end
    end
    if (reset) begin // @[RegFile.scala 35:19]
      rf_4 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'h4 == io_waddr) begin // @[RegFile.scala 41:18]
        rf_4 <= io_wdata; // @[RegFile.scala 41:18]
      end
    end
    if (reset) begin // @[RegFile.scala 35:19]
      rf_5 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'h5 == io_waddr) begin // @[RegFile.scala 41:18]
        rf_5 <= io_wdata; // @[RegFile.scala 41:18]
      end
    end
    if (reset) begin // @[RegFile.scala 35:19]
      rf_6 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'h6 == io_waddr) begin // @[RegFile.scala 41:18]
        rf_6 <= io_wdata; // @[RegFile.scala 41:18]
      end
    end
    if (reset) begin // @[RegFile.scala 35:19]
      rf_7 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'h7 == io_waddr) begin // @[RegFile.scala 41:18]
        rf_7 <= io_wdata; // @[RegFile.scala 41:18]
      end
    end
    if (reset) begin // @[RegFile.scala 35:19]
      rf_8 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'h8 == io_waddr) begin // @[RegFile.scala 41:18]
        rf_8 <= io_wdata; // @[RegFile.scala 41:18]
      end
    end
    if (reset) begin // @[RegFile.scala 35:19]
      rf_9 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'h9 == io_waddr) begin // @[RegFile.scala 41:18]
        rf_9 <= io_wdata; // @[RegFile.scala 41:18]
      end
    end
    if (reset) begin // @[RegFile.scala 35:19]
      rf_10 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'ha == io_waddr) begin // @[RegFile.scala 41:18]
        rf_10 <= io_wdata; // @[RegFile.scala 41:18]
      end
    end
    if (reset) begin // @[RegFile.scala 35:19]
      rf_11 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'hb == io_waddr) begin // @[RegFile.scala 41:18]
        rf_11 <= io_wdata; // @[RegFile.scala 41:18]
      end
    end
    if (reset) begin // @[RegFile.scala 35:19]
      rf_12 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'hc == io_waddr) begin // @[RegFile.scala 41:18]
        rf_12 <= io_wdata; // @[RegFile.scala 41:18]
      end
    end
    if (reset) begin // @[RegFile.scala 35:19]
      rf_13 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'hd == io_waddr) begin // @[RegFile.scala 41:18]
        rf_13 <= io_wdata; // @[RegFile.scala 41:18]
      end
    end
    if (reset) begin // @[RegFile.scala 35:19]
      rf_14 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'he == io_waddr) begin // @[RegFile.scala 41:18]
        rf_14 <= io_wdata; // @[RegFile.scala 41:18]
      end
    end
    if (reset) begin // @[RegFile.scala 35:19]
      rf_15 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'hf == io_waddr) begin // @[RegFile.scala 41:18]
        rf_15 <= io_wdata; // @[RegFile.scala 41:18]
      end
    end
    if (reset) begin // @[RegFile.scala 35:19]
      rf_16 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'h10 == io_waddr) begin // @[RegFile.scala 41:18]
        rf_16 <= io_wdata; // @[RegFile.scala 41:18]
      end
    end
    if (reset) begin // @[RegFile.scala 35:19]
      rf_17 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'h11 == io_waddr) begin // @[RegFile.scala 41:18]
        rf_17 <= io_wdata; // @[RegFile.scala 41:18]
      end
    end
    if (reset) begin // @[RegFile.scala 35:19]
      rf_18 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'h12 == io_waddr) begin // @[RegFile.scala 41:18]
        rf_18 <= io_wdata; // @[RegFile.scala 41:18]
      end
    end
    if (reset) begin // @[RegFile.scala 35:19]
      rf_19 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'h13 == io_waddr) begin // @[RegFile.scala 41:18]
        rf_19 <= io_wdata; // @[RegFile.scala 41:18]
      end
    end
    if (reset) begin // @[RegFile.scala 35:19]
      rf_20 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'h14 == io_waddr) begin // @[RegFile.scala 41:18]
        rf_20 <= io_wdata; // @[RegFile.scala 41:18]
      end
    end
    if (reset) begin // @[RegFile.scala 35:19]
      rf_21 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'h15 == io_waddr) begin // @[RegFile.scala 41:18]
        rf_21 <= io_wdata; // @[RegFile.scala 41:18]
      end
    end
    if (reset) begin // @[RegFile.scala 35:19]
      rf_22 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'h16 == io_waddr) begin // @[RegFile.scala 41:18]
        rf_22 <= io_wdata; // @[RegFile.scala 41:18]
      end
    end
    if (reset) begin // @[RegFile.scala 35:19]
      rf_23 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'h17 == io_waddr) begin // @[RegFile.scala 41:18]
        rf_23 <= io_wdata; // @[RegFile.scala 41:18]
      end
    end
    if (reset) begin // @[RegFile.scala 35:19]
      rf_24 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'h18 == io_waddr) begin // @[RegFile.scala 41:18]
        rf_24 <= io_wdata; // @[RegFile.scala 41:18]
      end
    end
    if (reset) begin // @[RegFile.scala 35:19]
      rf_25 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'h19 == io_waddr) begin // @[RegFile.scala 41:18]
        rf_25 <= io_wdata; // @[RegFile.scala 41:18]
      end
    end
    if (reset) begin // @[RegFile.scala 35:19]
      rf_26 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'h1a == io_waddr) begin // @[RegFile.scala 41:18]
        rf_26 <= io_wdata; // @[RegFile.scala 41:18]
      end
    end
    if (reset) begin // @[RegFile.scala 35:19]
      rf_27 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'h1b == io_waddr) begin // @[RegFile.scala 41:18]
        rf_27 <= io_wdata; // @[RegFile.scala 41:18]
      end
    end
    if (reset) begin // @[RegFile.scala 35:19]
      rf_28 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'h1c == io_waddr) begin // @[RegFile.scala 41:18]
        rf_28 <= io_wdata; // @[RegFile.scala 41:18]
      end
    end
    if (reset) begin // @[RegFile.scala 35:19]
      rf_29 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'h1d == io_waddr) begin // @[RegFile.scala 41:18]
        rf_29 <= io_wdata; // @[RegFile.scala 41:18]
      end
    end
    if (reset) begin // @[RegFile.scala 35:19]
      rf_30 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'h1e == io_waddr) begin // @[RegFile.scala 41:18]
        rf_30 <= io_wdata; // @[RegFile.scala 41:18]
      end
    end
    if (reset) begin // @[RegFile.scala 35:19]
      rf_31 <= 64'h0; // @[RegFile.scala 35:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 40:38]
      if (5'h1f == io_waddr) begin // @[RegFile.scala 41:18]
        rf_31 <= io_wdata; // @[RegFile.scala 41:18]
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
  wire  _out0_T = io_jmp_code == 4'h2; // @[Execute.scala 89:29]
  wire [31:0] _out0_T_4 = io_pc_i + 32'h4; // @[Execute.scala 89:83]
  wire [63:0] _out0_T_6 = io_in1 + io_in2; // @[Execute.scala 90:22]
  wire [63:0] _out0_T_8 = io_in1 - io_in2; // @[Execute.scala 91:22]
  wire  _out0_T_11 = $signed(io_in1) < $signed(io_in2); // @[Execute.scala 92:31]
  wire  _out0_T_12 = io_in1 < io_in2; // @[Execute.scala 93:22]
  wire [63:0] _out0_T_13 = io_in1 ^ io_in2; // @[Execute.scala 94:22]
  wire [63:0] _out0_T_14 = io_in1 | io_in2; // @[Execute.scala 95:22]
  wire [63:0] _out0_T_15 = io_in1 & io_in2; // @[Execute.scala 96:22]
  wire [63:0] _out0_T_17 = 4'h1 == io_aluop_i ? _out0_T_6 : 64'h0; // @[Mux.scala 80:57]
  wire [63:0] _out0_T_19 = 4'h2 == io_aluop_i ? _out0_T_8 : _out0_T_17; // @[Mux.scala 80:57]
  wire [63:0] _out0_T_21 = 4'h3 == io_aluop_i ? {{63'd0}, _out0_T_11} : _out0_T_19; // @[Mux.scala 80:57]
  wire [63:0] _out0_T_23 = 4'h4 == io_aluop_i ? {{63'd0}, _out0_T_12} : _out0_T_21; // @[Mux.scala 80:57]
  wire [63:0] _out0_T_25 = 4'h5 == io_aluop_i ? _out0_T_13 : _out0_T_23; // @[Mux.scala 80:57]
  wire [63:0] _out0_T_27 = 4'h6 == io_aluop_i ? _out0_T_14 : _out0_T_25; // @[Mux.scala 80:57]
  wire [63:0] _out0_T_29 = 4'h7 == io_aluop_i ? _out0_T_15 : _out0_T_27; // @[Mux.scala 80:57]
  wire [63:0] out0 = io_jmp_code == 4'h2 | io_jmp_code == 4'h1 ? {{32'd0}, _out0_T_4} : _out0_T_29; // @[Execute.scala 89:14]
  wire  _io_jmp_T = io_in1 == io_in2; // @[Execute.scala 105:22]
  wire  _io_jmp_T_1 = io_in1 != io_in2; // @[Execute.scala 106:22]
  wire  _io_jmp_T_7 = $signed(io_in1) >= $signed(io_in2); // @[Execute.scala 108:31]
  wire  _io_jmp_T_9 = io_in1 >= io_in2; // @[Execute.scala 110:31]
  wire  _io_jmp_T_15 = 4'h3 == io_jmp_code ? _io_jmp_T : 4'h2 == io_jmp_code | 4'h1 == io_jmp_code; // @[Mux.scala 80:57]
  wire  _io_jmp_T_17 = 4'h4 == io_jmp_code ? _io_jmp_T_1 : _io_jmp_T_15; // @[Mux.scala 80:57]
  wire  _io_jmp_T_19 = 4'h5 == io_jmp_code ? _out0_T_11 : _io_jmp_T_17; // @[Mux.scala 80:57]
  wire  _io_jmp_T_21 = 4'h6 == io_jmp_code ? _io_jmp_T_7 : _io_jmp_T_19; // @[Mux.scala 80:57]
  wire  _io_jmp_T_23 = 4'h7 == io_jmp_code ? _out0_T_12 : _io_jmp_T_21; // @[Mux.scala 80:57]
  wire [31:0] _io_jmp_pc_T_2 = _out0_T ? io_in1[31:0] : io_pc_i; // @[Execute.scala 113:19]
  wire [31:0] out1_lo = out0[31:0]; // @[Execute.scala 115:41]
  wire [31:0] out1_hi = out1_lo[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _out1_T_2 = {out1_hi,out1_lo}; // @[Cat.scala 30:58]
  assign io_alu_out = io_wtype_i ? _out1_T_2 : out0; // @[Execute.scala 115:14]
  assign io_jmp = 4'h8 == io_jmp_code ? _io_jmp_T_9 : _io_jmp_T_23; // @[Mux.scala 80:57]
  assign io_jmp_pc = _io_jmp_pc_T_2 + io_imm; // @[Execute.scala 113:67]
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
  input         io_in_bits_w_type,
  input  [2:0]  io_in_bits_rs1_src,
  input  [2:0]  io_in_bits_rs2_src,
  input  [4:0]  io_in_bits_rd_addr,
  input         io_in_bits_rd_en,
  input  [31:0] io_in_bits_imm,
  output        io_out_valid,
  output [31:0] io_out_bits_pc,
  output [31:0] io_out_bits_inst,
  output [4:0]  io_out_bits_rd_addr,
  output        io_out_bits_rd_en,
  input  [63:0] io_ex_rs1_i,
  input  [63:0] io_ex_rs2_i,
  output [63:0] io_ex_data_o,
  input         io_is_ebreak_i,
  output        io_is_ebreak_o,
  output        io_ex_rd_en,
  output [31:0] io_ex_rd_addr,
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
`endif // RANDOMIZE_REG_INIT
  wire [63:0] alu_io_in1; // @[Execute.scala 51:19]
  wire [63:0] alu_io_in2; // @[Execute.scala 51:19]
  wire [3:0] alu_io_aluop_i; // @[Execute.scala 51:19]
  wire  alu_io_wtype_i; // @[Execute.scala 51:19]
  wire [63:0] alu_io_alu_out; // @[Execute.scala 51:19]
  wire  alu_io_jmp; // @[Execute.scala 51:19]
  wire [3:0] alu_io_jmp_code; // @[Execute.scala 51:19]
  wire [31:0] alu_io_imm; // @[Execute.scala 51:19]
  wire [31:0] alu_io_pc_i; // @[Execute.scala 51:19]
  wire [31:0] alu_io_jmp_pc; // @[Execute.scala 51:19]
  wire  stall = ~io_out_valid; // @[Execute.scala 24:15]
  reg  io_is_ebreak_o_REG; // @[Execute.scala 27:28]
  reg  ex_reg_decodeop_valid; // @[Execute.scala 28:32]
  reg [31:0] ex_reg_decodeop_pc; // @[Execute.scala 28:32]
  reg [31:0] ex_reg_decodeop_inst; // @[Execute.scala 28:32]
  reg [3:0] ex_reg_decodeop_alu_code; // @[Execute.scala 28:32]
  reg [3:0] ex_reg_decodeop_jmp_code; // @[Execute.scala 28:32]
  reg  ex_reg_decodeop_w_type; // @[Execute.scala 28:32]
  reg [2:0] ex_reg_decodeop_rs1_src; // @[Execute.scala 28:32]
  reg [2:0] ex_reg_decodeop_rs2_src; // @[Execute.scala 28:32]
  reg [4:0] ex_reg_decodeop_rd_addr; // @[Execute.scala 28:32]
  reg  ex_reg_decodeop_rd_en; // @[Execute.scala 28:32]
  reg [31:0] ex_reg_decodeop_imm; // @[Execute.scala 28:32]
  wire [31:0] rs1_temp_hi = ex_reg_decodeop_imm[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _rs1_temp_T_2 = {rs1_temp_hi,ex_reg_decodeop_imm}; // @[Cat.scala 30:58]
  wire [63:0] _rs1_temp_T_3 = {32'h0,ex_reg_decodeop_pc}; // @[Cat.scala 30:58]
  wire [31:0] rs1_temp_lo = ex_reg_decodeop_pc + 32'h4; // @[Execute.scala 38:49]
  wire [63:0] _rs1_temp_T_5 = {32'h0,rs1_temp_lo}; // @[Cat.scala 30:58]
  wire [63:0] _rs1_temp_T_7 = 3'h1 == ex_reg_decodeop_rs1_src ? io_ex_rs1_i : 64'h0; // @[Mux.scala 80:57]
  wire [63:0] _rs1_temp_T_9 = 3'h2 == ex_reg_decodeop_rs1_src ? _rs1_temp_T_2 : _rs1_temp_T_7; // @[Mux.scala 80:57]
  wire [63:0] _rs1_temp_T_11 = 3'h4 == ex_reg_decodeop_rs1_src ? _rs1_temp_T_3 : _rs1_temp_T_9; // @[Mux.scala 80:57]
  wire [63:0] _rs2_temp_T_7 = 3'h1 == ex_reg_decodeop_rs2_src ? io_ex_rs2_i : 64'h0; // @[Mux.scala 80:57]
  wire [63:0] _rs2_temp_T_9 = 3'h2 == ex_reg_decodeop_rs2_src ? _rs1_temp_T_2 : _rs2_temp_T_7; // @[Mux.scala 80:57]
  wire [63:0] _rs2_temp_T_11 = 3'h4 == ex_reg_decodeop_rs2_src ? _rs1_temp_T_3 : _rs2_temp_T_9; // @[Mux.scala 80:57]
  wire [31:0] real_npc = alu_io_jmp ? alu_io_jmp_pc : rs1_temp_lo; // @[Execute.scala 60:21]
  Alu alu ( // @[Execute.scala 51:19]
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
  assign io_in_ready = ~stall; // @[Execute.scala 25:18]
  assign io_out_valid = 1'h1; // @[Execute.scala 26:16]
  assign io_out_bits_pc = ex_reg_decodeop_pc; // @[Execute.scala 65:15]
  assign io_out_bits_inst = ex_reg_decodeop_inst; // @[Execute.scala 65:15]
  assign io_out_bits_rd_addr = ex_reg_decodeop_rd_addr; // @[Execute.scala 65:15]
  assign io_out_bits_rd_en = ex_reg_decodeop_rd_en; // @[Execute.scala 65:15]
  assign io_ex_data_o = alu_io_alu_out; // @[Execute.scala 63:16]
  assign io_is_ebreak_o = io_is_ebreak_o_REG; // @[Execute.scala 27:18]
  assign io_ex_rd_en = ex_reg_decodeop_rd_en; // @[Execute.scala 67:17]
  assign io_ex_rd_addr = {{27'd0}, ex_reg_decodeop_rd_addr}; // @[Execute.scala 68:17]
  assign io_jmp_packet_o_jmp_npc = alu_io_jmp ? alu_io_jmp_pc : rs1_temp_lo; // @[Execute.scala 60:21]
  assign io_jmp_packet_o_mis = real_npc != io_p_npc_i & ex_reg_decodeop_valid; // @[Execute.scala 61:52]
  assign alu_io_in1 = 3'h5 == ex_reg_decodeop_rs1_src ? _rs1_temp_T_5 : _rs1_temp_T_11; // @[Mux.scala 80:57]
  assign alu_io_in2 = 3'h5 == ex_reg_decodeop_rs2_src ? _rs1_temp_T_5 : _rs2_temp_T_11; // @[Mux.scala 80:57]
  assign alu_io_aluop_i = ex_reg_decodeop_alu_code; // @[Execute.scala 54:18]
  assign alu_io_wtype_i = ex_reg_decodeop_w_type; // @[Execute.scala 55:18]
  assign alu_io_jmp_code = ex_reg_decodeop_jmp_code; // @[Execute.scala 56:19]
  assign alu_io_imm = ex_reg_decodeop_imm; // @[Execute.scala 57:14]
  assign alu_io_pc_i = ex_reg_decodeop_pc; // @[Execute.scala 58:15]
  always @(posedge clock) begin
    io_is_ebreak_o_REG <= io_is_ebreak_i; // @[Execute.scala 27:28]
    if (reset) begin // @[Execute.scala 28:32]
      ex_reg_decodeop_valid <= 1'h0; // @[Execute.scala 28:32]
    end else if (io_in_ready) begin // @[Execute.scala 30:21]
      ex_reg_decodeop_valid <= io_in_bits_valid; // @[Execute.scala 31:21]
    end
    if (reset) begin // @[Execute.scala 28:32]
      ex_reg_decodeop_pc <= 32'h0; // @[Execute.scala 28:32]
    end else if (io_in_ready) begin // @[Execute.scala 30:21]
      ex_reg_decodeop_pc <= io_in_bits_pc; // @[Execute.scala 31:21]
    end
    if (reset) begin // @[Execute.scala 28:32]
      ex_reg_decodeop_inst <= 32'h0; // @[Execute.scala 28:32]
    end else if (io_in_ready) begin // @[Execute.scala 30:21]
      ex_reg_decodeop_inst <= io_in_bits_inst; // @[Execute.scala 31:21]
    end
    if (reset) begin // @[Execute.scala 28:32]
      ex_reg_decodeop_alu_code <= 4'h0; // @[Execute.scala 28:32]
    end else if (io_in_ready) begin // @[Execute.scala 30:21]
      ex_reg_decodeop_alu_code <= io_in_bits_alu_code; // @[Execute.scala 31:21]
    end
    if (reset) begin // @[Execute.scala 28:32]
      ex_reg_decodeop_jmp_code <= 4'h0; // @[Execute.scala 28:32]
    end else if (io_in_ready) begin // @[Execute.scala 30:21]
      ex_reg_decodeop_jmp_code <= io_in_bits_jmp_code; // @[Execute.scala 31:21]
    end
    if (reset) begin // @[Execute.scala 28:32]
      ex_reg_decodeop_w_type <= 1'h0; // @[Execute.scala 28:32]
    end else if (io_in_ready) begin // @[Execute.scala 30:21]
      ex_reg_decodeop_w_type <= io_in_bits_w_type; // @[Execute.scala 31:21]
    end
    if (reset) begin // @[Execute.scala 28:32]
      ex_reg_decodeop_rs1_src <= 3'h0; // @[Execute.scala 28:32]
    end else if (io_in_ready) begin // @[Execute.scala 30:21]
      ex_reg_decodeop_rs1_src <= io_in_bits_rs1_src; // @[Execute.scala 31:21]
    end
    if (reset) begin // @[Execute.scala 28:32]
      ex_reg_decodeop_rs2_src <= 3'h0; // @[Execute.scala 28:32]
    end else if (io_in_ready) begin // @[Execute.scala 30:21]
      ex_reg_decodeop_rs2_src <= io_in_bits_rs2_src; // @[Execute.scala 31:21]
    end
    if (reset) begin // @[Execute.scala 28:32]
      ex_reg_decodeop_rd_addr <= 5'h0; // @[Execute.scala 28:32]
    end else if (io_in_ready) begin // @[Execute.scala 30:21]
      ex_reg_decodeop_rd_addr <= io_in_bits_rd_addr; // @[Execute.scala 31:21]
    end
    if (reset) begin // @[Execute.scala 28:32]
      ex_reg_decodeop_rd_en <= 1'h0; // @[Execute.scala 28:32]
    end else if (io_in_ready) begin // @[Execute.scala 30:21]
      ex_reg_decodeop_rd_en <= io_in_bits_rd_en; // @[Execute.scala 31:21]
    end
    if (reset) begin // @[Execute.scala 28:32]
      ex_reg_decodeop_imm <= 32'h0; // @[Execute.scala 28:32]
    end else if (io_in_ready) begin // @[Execute.scala 30:21]
      ex_reg_decodeop_imm <= io_in_bits_imm; // @[Execute.scala 31:21]
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
  ex_reg_decodeop_w_type = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  ex_reg_decodeop_rs1_src = _RAND_7[2:0];
  _RAND_8 = {1{`RANDOM}};
  ex_reg_decodeop_rs2_src = _RAND_8[2:0];
  _RAND_9 = {1{`RANDOM}};
  ex_reg_decodeop_rd_addr = _RAND_9[4:0];
  _RAND_10 = {1{`RANDOM}};
  ex_reg_decodeop_rd_en = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  ex_reg_decodeop_imm = _RAND_11[31:0];
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
  input  [31:0] io_in_bits_pc,
  input  [31:0] io_in_bits_inst,
  input  [4:0]  io_in_bits_rd_addr,
  input         io_in_bits_rd_en,
  output [31:0] io_out_bits_pc,
  output [31:0] io_out_bits_inst,
  input  [63:0] io_mem_data_i,
  output [4:0]  io_waddr_o,
  output        io_wen_o,
  output [63:0] io_wdata_o,
  input         io_is_ebreak_i,
  output        io_is_ebreak_o,
  output        io_mem_rd_en,
  output [31:0] io_mem_rd_addr,
  output [63:0] io_mem_rd_data
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [63:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [63:0] _RAND_10;
`endif // RANDOMIZE_REG_INIT
  reg  io_is_ebreak_o_REG; // @[Mem.scala 22:28]
  reg [31:0] io_out_bits_REG_pc; // @[Mem.scala 23:25]
  reg [31:0] io_out_bits_REG_inst; // @[Mem.scala 23:25]
  reg [4:0] mem_reg_decodeop_rd_addr; // @[Mem.scala 27:33]
  reg  mem_reg_decodeop_rd_en; // @[Mem.scala 27:33]
  reg [4:0] waddr; // @[Mem.scala 28:22]
  reg  wen; // @[Mem.scala 29:22]
  reg [63:0] wdata; // @[Mem.scala 30:22]
  reg [4:0] io_waddr_o_REG; // @[Mem.scala 38:24]
  reg  io_wen_o_REG; // @[Mem.scala 39:24]
  reg [63:0] io_wdata_o_REG; // @[Mem.scala 40:24]
  assign io_in_ready = 1'h1; // @[Mem.scala 26:18]
  assign io_out_bits_pc = io_out_bits_REG_pc; // @[Mem.scala 23:15]
  assign io_out_bits_inst = io_out_bits_REG_inst; // @[Mem.scala 23:15]
  assign io_waddr_o = io_waddr_o_REG; // @[Mem.scala 38:14]
  assign io_wen_o = io_wen_o_REG; // @[Mem.scala 39:14]
  assign io_wdata_o = io_wdata_o_REG; // @[Mem.scala 40:14]
  assign io_is_ebreak_o = io_is_ebreak_o_REG; // @[Mem.scala 22:18]
  assign io_mem_rd_en = mem_reg_decodeop_rd_en; // @[Mem.scala 43:18]
  assign io_mem_rd_addr = {{27'd0}, mem_reg_decodeop_rd_addr}; // @[Mem.scala 44:18]
  assign io_mem_rd_data = wdata; // @[Mem.scala 45:18]
  always @(posedge clock) begin
    io_is_ebreak_o_REG <= io_is_ebreak_i; // @[Mem.scala 22:28]
    io_out_bits_REG_pc <= io_in_bits_pc; // @[Mem.scala 23:29]
    io_out_bits_REG_inst <= io_in_bits_inst; // @[Mem.scala 23:29]
    if (reset) begin // @[Mem.scala 27:33]
      mem_reg_decodeop_rd_addr <= 5'h0; // @[Mem.scala 27:33]
    end else if (io_in_ready) begin // @[Mem.scala 31:21]
      mem_reg_decodeop_rd_addr <= io_in_bits_rd_addr; // @[Mem.scala 32:22]
    end
    if (reset) begin // @[Mem.scala 27:33]
      mem_reg_decodeop_rd_en <= 1'h0; // @[Mem.scala 27:33]
    end else if (io_in_ready) begin // @[Mem.scala 31:21]
      mem_reg_decodeop_rd_en <= io_in_bits_rd_en; // @[Mem.scala 32:22]
    end
    if (reset) begin // @[Mem.scala 28:22]
      waddr <= 5'h0; // @[Mem.scala 28:22]
    end else if (io_in_ready) begin // @[Mem.scala 31:21]
      waddr <= io_in_bits_rd_addr; // @[Mem.scala 33:11]
    end
    if (reset) begin // @[Mem.scala 29:22]
      wen <= 1'h0; // @[Mem.scala 29:22]
    end else if (io_in_ready) begin // @[Mem.scala 31:21]
      wen <= io_in_bits_rd_en; // @[Mem.scala 34:11]
    end
    if (reset) begin // @[Mem.scala 30:22]
      wdata <= 64'h0; // @[Mem.scala 30:22]
    end else if (io_in_ready) begin // @[Mem.scala 31:21]
      wdata <= io_mem_data_i; // @[Mem.scala 35:11]
    end
    io_waddr_o_REG <= waddr; // @[Mem.scala 38:24]
    io_wen_o_REG <= wen; // @[Mem.scala 39:24]
    io_wdata_o_REG <= wdata; // @[Mem.scala 40:24]
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
  io_out_bits_REG_pc = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  io_out_bits_REG_inst = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  mem_reg_decodeop_rd_addr = _RAND_3[4:0];
  _RAND_4 = {1{`RANDOM}};
  mem_reg_decodeop_rd_en = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  waddr = _RAND_5[4:0];
  _RAND_6 = {1{`RANDOM}};
  wen = _RAND_6[0:0];
  _RAND_7 = {2{`RANDOM}};
  wdata = _RAND_7[63:0];
  _RAND_8 = {1{`RANDOM}};
  io_waddr_o_REG = _RAND_8[4:0];
  _RAND_9 = {1{`RANDOM}};
  io_wen_o_REG = _RAND_9[0:0];
  _RAND_10 = {2{`RANDOM}};
  io_wdata_o_REG = _RAND_10[63:0];
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
  output [31:0] io_commit_pc
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  fetch_clock; // @[Core.scala 41:21]
  wire  fetch_reset; // @[Core.scala 41:21]
  wire [31:0] fetch_io_imem_req_bits_araddr; // @[Core.scala 41:21]
  wire [31:0] fetch_io_imem_resp_bits_rdata; // @[Core.scala 41:21]
  wire  fetch_io_imem_resp_bits_rvalid; // @[Core.scala 41:21]
  wire [31:0] fetch_io_imem_resp_bits_old_pc; // @[Core.scala 41:21]
  wire  fetch_io_out_ready; // @[Core.scala 41:21]
  wire  fetch_io_out_valid; // @[Core.scala 41:21]
  wire [31:0] fetch_io_out_bits_pc; // @[Core.scala 41:21]
  wire [31:0] fetch_io_out_bits_inst; // @[Core.scala 41:21]
  wire  fetch_io_out_bits_inst_valid; // @[Core.scala 41:21]
  wire  fetch_io_if_flush; // @[Core.scala 41:21]
  wire [31:0] fetch_io_p_npc; // @[Core.scala 41:21]
  wire [31:0] fetch_io_jmp_packet_i_jmp_npc; // @[Core.scala 41:21]
  wire  fetch_io_jmp_packet_i_mis; // @[Core.scala 41:21]
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
  wire  regfile_io_mem_rd_en; // @[Core.scala 66:23]
  wire [31:0] regfile_io_mem_rd_addr; // @[Core.scala 66:23]
  wire [63:0] regfile_io_mem_rd_data; // @[Core.scala 66:23]
  wire  execute_clock; // @[Core.scala 75:23]
  wire  execute_reset; // @[Core.scala 75:23]
  wire  execute_io_in_ready; // @[Core.scala 75:23]
  wire  execute_io_in_bits_valid; // @[Core.scala 75:23]
  wire [31:0] execute_io_in_bits_pc; // @[Core.scala 75:23]
  wire [31:0] execute_io_in_bits_inst; // @[Core.scala 75:23]
  wire [3:0] execute_io_in_bits_alu_code; // @[Core.scala 75:23]
  wire [3:0] execute_io_in_bits_jmp_code; // @[Core.scala 75:23]
  wire  execute_io_in_bits_w_type; // @[Core.scala 75:23]
  wire [2:0] execute_io_in_bits_rs1_src; // @[Core.scala 75:23]
  wire [2:0] execute_io_in_bits_rs2_src; // @[Core.scala 75:23]
  wire [4:0] execute_io_in_bits_rd_addr; // @[Core.scala 75:23]
  wire  execute_io_in_bits_rd_en; // @[Core.scala 75:23]
  wire [31:0] execute_io_in_bits_imm; // @[Core.scala 75:23]
  wire  execute_io_out_valid; // @[Core.scala 75:23]
  wire [31:0] execute_io_out_bits_pc; // @[Core.scala 75:23]
  wire [31:0] execute_io_out_bits_inst; // @[Core.scala 75:23]
  wire [4:0] execute_io_out_bits_rd_addr; // @[Core.scala 75:23]
  wire  execute_io_out_bits_rd_en; // @[Core.scala 75:23]
  wire [63:0] execute_io_ex_rs1_i; // @[Core.scala 75:23]
  wire [63:0] execute_io_ex_rs2_i; // @[Core.scala 75:23]
  wire [63:0] execute_io_ex_data_o; // @[Core.scala 75:23]
  wire  execute_io_is_ebreak_i; // @[Core.scala 75:23]
  wire  execute_io_is_ebreak_o; // @[Core.scala 75:23]
  wire  execute_io_ex_rd_en; // @[Core.scala 75:23]
  wire [31:0] execute_io_ex_rd_addr; // @[Core.scala 75:23]
  wire [31:0] execute_io_p_npc_i; // @[Core.scala 75:23]
  wire [31:0] execute_io_jmp_packet_o_jmp_npc; // @[Core.scala 75:23]
  wire  execute_io_jmp_packet_o_mis; // @[Core.scala 75:23]
  wire  mem_clock; // @[Core.scala 88:19]
  wire  mem_reset; // @[Core.scala 88:19]
  wire  mem_io_in_ready; // @[Core.scala 88:19]
  wire [31:0] mem_io_in_bits_pc; // @[Core.scala 88:19]
  wire [31:0] mem_io_in_bits_inst; // @[Core.scala 88:19]
  wire [4:0] mem_io_in_bits_rd_addr; // @[Core.scala 88:19]
  wire  mem_io_in_bits_rd_en; // @[Core.scala 88:19]
  wire [31:0] mem_io_out_bits_pc; // @[Core.scala 88:19]
  wire [31:0] mem_io_out_bits_inst; // @[Core.scala 88:19]
  wire [63:0] mem_io_mem_data_i; // @[Core.scala 88:19]
  wire [4:0] mem_io_waddr_o; // @[Core.scala 88:19]
  wire  mem_io_wen_o; // @[Core.scala 88:19]
  wire [63:0] mem_io_wdata_o; // @[Core.scala 88:19]
  wire  mem_io_is_ebreak_i; // @[Core.scala 88:19]
  wire  mem_io_is_ebreak_o; // @[Core.scala 88:19]
  wire  mem_io_mem_rd_en; // @[Core.scala 88:19]
  wire [31:0] mem_io_mem_rd_addr; // @[Core.scala 88:19]
  wire [63:0] mem_io_mem_rd_data; // @[Core.scala 88:19]
  wire  wb_dpi_clk; // @[Core.scala 107:22]
  wire [31:0] wb_dpi_inst; // @[Core.scala 107:22]
  wire [31:0] wb_dpi_pc; // @[Core.scala 107:22]
  wire  wb_dpi_ebreak; // @[Core.scala 107:22]
  reg [31:0] fetch_io_imem_resp_bits_old_pc_REG; // @[Core.scala 45:44]
  InstFetch fetch ( // @[Core.scala 41:21]
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
    .io_jmp_packet_i_mis(fetch_io_jmp_packet_i_mis)
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
    .io_p_npc_o(decode_io_p_npc_o)
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
    .io_mem_rd_en(regfile_io_mem_rd_en),
    .io_mem_rd_addr(regfile_io_mem_rd_addr),
    .io_mem_rd_data(regfile_io_mem_rd_data)
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
    .io_in_bits_w_type(execute_io_in_bits_w_type),
    .io_in_bits_rs1_src(execute_io_in_bits_rs1_src),
    .io_in_bits_rs2_src(execute_io_in_bits_rs2_src),
    .io_in_bits_rd_addr(execute_io_in_bits_rd_addr),
    .io_in_bits_rd_en(execute_io_in_bits_rd_en),
    .io_in_bits_imm(execute_io_in_bits_imm),
    .io_out_valid(execute_io_out_valid),
    .io_out_bits_pc(execute_io_out_bits_pc),
    .io_out_bits_inst(execute_io_out_bits_inst),
    .io_out_bits_rd_addr(execute_io_out_bits_rd_addr),
    .io_out_bits_rd_en(execute_io_out_bits_rd_en),
    .io_ex_rs1_i(execute_io_ex_rs1_i),
    .io_ex_rs2_i(execute_io_ex_rs2_i),
    .io_ex_data_o(execute_io_ex_data_o),
    .io_is_ebreak_i(execute_io_is_ebreak_i),
    .io_is_ebreak_o(execute_io_is_ebreak_o),
    .io_ex_rd_en(execute_io_ex_rd_en),
    .io_ex_rd_addr(execute_io_ex_rd_addr),
    .io_p_npc_i(execute_io_p_npc_i),
    .io_jmp_packet_o_jmp_npc(execute_io_jmp_packet_o_jmp_npc),
    .io_jmp_packet_o_mis(execute_io_jmp_packet_o_mis)
  );
  Mem mem ( // @[Core.scala 88:19]
    .clock(mem_clock),
    .reset(mem_reset),
    .io_in_ready(mem_io_in_ready),
    .io_in_bits_pc(mem_io_in_bits_pc),
    .io_in_bits_inst(mem_io_in_bits_inst),
    .io_in_bits_rd_addr(mem_io_in_bits_rd_addr),
    .io_in_bits_rd_en(mem_io_in_bits_rd_en),
    .io_out_bits_pc(mem_io_out_bits_pc),
    .io_out_bits_inst(mem_io_out_bits_inst),
    .io_mem_data_i(mem_io_mem_data_i),
    .io_waddr_o(mem_io_waddr_o),
    .io_wen_o(mem_io_wen_o),
    .io_wdata_o(mem_io_wdata_o),
    .io_is_ebreak_i(mem_io_is_ebreak_i),
    .io_is_ebreak_o(mem_io_is_ebreak_o),
    .io_mem_rd_en(mem_io_mem_rd_en),
    .io_mem_rd_addr(mem_io_mem_rd_addr),
    .io_mem_rd_data(mem_io_mem_rd_data)
  );
  Wb_Dpi wb_dpi ( // @[Core.scala 107:22]
    .clk(wb_dpi_clk),
    .inst(wb_dpi_inst),
    .pc(wb_dpi_pc),
    .ebreak(wb_dpi_ebreak)
  );
  assign io_imem_raddr = fetch_io_imem_req_bits_araddr; // @[Core.scala 47:17]
  assign io_imem_waddr = 32'h0; // @[Core.scala 49:17]
  assign io_imem_wdata = 64'h0; // @[Core.scala 50:17]
  assign io_imem_ren = 1'h1; // @[Core.scala 48:15]
  assign io_imem_wen = 1'h0; // @[Core.scala 51:15]
  assign io_imem_wmask = 8'h0; // @[Core.scala 52:17]
  assign io_dmem_raddr = 32'h0; // @[Core.scala 54:17]
  assign io_dmem_waddr = 32'h0; // @[Core.scala 56:17]
  assign io_dmem_wdata = 64'h0; // @[Core.scala 57:17]
  assign io_dmem_ren = 1'h0; // @[Core.scala 55:15]
  assign io_dmem_wen = 1'h0; // @[Core.scala 58:15]
  assign io_dmem_wmask = 8'h0; // @[Core.scala 59:17]
  assign io_regs_0 = regfile_io_regs_0; // @[Core.scala 97:11]
  assign io_regs_1 = regfile_io_regs_1; // @[Core.scala 97:11]
  assign io_regs_2 = regfile_io_regs_2; // @[Core.scala 97:11]
  assign io_regs_3 = regfile_io_regs_3; // @[Core.scala 97:11]
  assign io_regs_4 = regfile_io_regs_4; // @[Core.scala 97:11]
  assign io_regs_5 = regfile_io_regs_5; // @[Core.scala 97:11]
  assign io_regs_6 = regfile_io_regs_6; // @[Core.scala 97:11]
  assign io_regs_7 = regfile_io_regs_7; // @[Core.scala 97:11]
  assign io_regs_8 = regfile_io_regs_8; // @[Core.scala 97:11]
  assign io_regs_9 = regfile_io_regs_9; // @[Core.scala 97:11]
  assign io_regs_10 = regfile_io_regs_10; // @[Core.scala 97:11]
  assign io_regs_11 = regfile_io_regs_11; // @[Core.scala 97:11]
  assign io_regs_12 = regfile_io_regs_12; // @[Core.scala 97:11]
  assign io_regs_13 = regfile_io_regs_13; // @[Core.scala 97:11]
  assign io_regs_14 = regfile_io_regs_14; // @[Core.scala 97:11]
  assign io_regs_15 = regfile_io_regs_15; // @[Core.scala 97:11]
  assign io_regs_16 = regfile_io_regs_16; // @[Core.scala 97:11]
  assign io_regs_17 = regfile_io_regs_17; // @[Core.scala 97:11]
  assign io_regs_18 = regfile_io_regs_18; // @[Core.scala 97:11]
  assign io_regs_19 = regfile_io_regs_19; // @[Core.scala 97:11]
  assign io_regs_20 = regfile_io_regs_20; // @[Core.scala 97:11]
  assign io_regs_21 = regfile_io_regs_21; // @[Core.scala 97:11]
  assign io_regs_22 = regfile_io_regs_22; // @[Core.scala 97:11]
  assign io_regs_23 = regfile_io_regs_23; // @[Core.scala 97:11]
  assign io_regs_24 = regfile_io_regs_24; // @[Core.scala 97:11]
  assign io_regs_25 = regfile_io_regs_25; // @[Core.scala 97:11]
  assign io_regs_26 = regfile_io_regs_26; // @[Core.scala 97:11]
  assign io_regs_27 = regfile_io_regs_27; // @[Core.scala 97:11]
  assign io_regs_28 = regfile_io_regs_28; // @[Core.scala 97:11]
  assign io_regs_29 = regfile_io_regs_29; // @[Core.scala 97:11]
  assign io_regs_30 = regfile_io_regs_30; // @[Core.scala 97:11]
  assign io_regs_31 = regfile_io_regs_31; // @[Core.scala 97:11]
  assign io_commit_pc = mem_io_out_bits_pc; // @[Core.scala 98:16]
  assign fetch_clock = clock;
  assign fetch_reset = reset;
  assign fetch_io_imem_resp_bits_rdata = io_imem_rdata[31:0]; // @[Core.scala 44:49]
  assign fetch_io_imem_resp_bits_rvalid = io_imem_read_ok; // @[Core.scala 46:34]
  assign fetch_io_imem_resp_bits_old_pc = fetch_io_imem_resp_bits_old_pc_REG; // @[Core.scala 45:34]
  assign fetch_io_out_ready = decode_io_in_ready; // @[Core.scala 63:16]
  assign fetch_io_if_flush = execute_io_jmp_packet_o_mis; // @[Core.scala 114:21]
  assign fetch_io_jmp_packet_i_jmp_npc = execute_io_jmp_packet_o_jmp_npc; // @[Core.scala 82:25]
  assign fetch_io_jmp_packet_i_mis = execute_io_jmp_packet_o_mis; // @[Core.scala 82:25]
  assign decode_clock = clock;
  assign decode_reset = reset;
  assign decode_io_in_bits_pc = fetch_io_out_bits_pc; // @[Core.scala 63:16]
  assign decode_io_in_bits_inst = fetch_io_out_bits_inst; // @[Core.scala 63:16]
  assign decode_io_in_bits_inst_valid = fetch_io_out_bits_inst_valid; // @[Core.scala 63:16]
  assign decode_io_out_ready = execute_io_in_ready; // @[Core.scala 76:17]
  assign decode_io_id_flush = execute_io_jmp_packet_o_mis; // @[Core.scala 115:22]
  assign decode_io_rs1_data_i = regfile_io_rdata1; // @[Core.scala 72:24]
  assign decode_io_rs2_data_i = regfile_io_rdata2; // @[Core.scala 73:24]
  assign decode_io_p_npc_i = fetch_io_p_npc; // @[Core.scala 64:21]
  assign regfile_clock = clock;
  assign regfile_reset = reset;
  assign regfile_io_ren1 = decode_io_ren1; // @[Core.scala 67:19]
  assign regfile_io_raddr1 = decode_io_raddr1; // @[Core.scala 69:21]
  assign regfile_io_ren2 = decode_io_ren2; // @[Core.scala 68:19]
  assign regfile_io_raddr2 = decode_io_raddr2; // @[Core.scala 70:21]
  assign regfile_io_wen = mem_io_wen_o; // @[Core.scala 95:18]
  assign regfile_io_waddr = mem_io_waddr_o; // @[Core.scala 94:20]
  assign regfile_io_wdata = mem_io_wdata_o; // @[Core.scala 96:20]
  assign regfile_io_ex_rd_en = execute_io_ex_rd_en; // @[Core.scala 84:25]
  assign regfile_io_ex_rd_addr = execute_io_ex_rd_addr; // @[Core.scala 85:25]
  assign regfile_io_ex_rd_data = execute_io_ex_data_o; // @[Core.scala 86:25]
  assign regfile_io_mem_rd_en = mem_io_mem_rd_en; // @[Core.scala 101:26]
  assign regfile_io_mem_rd_addr = mem_io_mem_rd_addr; // @[Core.scala 102:26]
  assign regfile_io_mem_rd_data = mem_io_mem_rd_data; // @[Core.scala 103:26]
  assign execute_clock = clock;
  assign execute_reset = reset;
  assign execute_io_in_bits_valid = decode_io_out_bits_valid; // @[Core.scala 76:17]
  assign execute_io_in_bits_pc = decode_io_out_bits_pc; // @[Core.scala 76:17]
  assign execute_io_in_bits_inst = decode_io_out_bits_inst; // @[Core.scala 76:17]
  assign execute_io_in_bits_alu_code = decode_io_out_bits_alu_code; // @[Core.scala 76:17]
  assign execute_io_in_bits_jmp_code = decode_io_out_bits_jmp_code; // @[Core.scala 76:17]
  assign execute_io_in_bits_w_type = decode_io_out_bits_w_type; // @[Core.scala 76:17]
  assign execute_io_in_bits_rs1_src = decode_io_out_bits_rs1_src; // @[Core.scala 76:17]
  assign execute_io_in_bits_rs2_src = decode_io_out_bits_rs2_src; // @[Core.scala 76:17]
  assign execute_io_in_bits_rd_addr = decode_io_out_bits_rd_addr; // @[Core.scala 76:17]
  assign execute_io_in_bits_rd_en = decode_io_out_bits_rd_en; // @[Core.scala 76:17]
  assign execute_io_in_bits_imm = decode_io_out_bits_imm; // @[Core.scala 76:17]
  assign execute_io_ex_rs1_i = decode_io_rs1_data_o; // @[Core.scala 77:23]
  assign execute_io_ex_rs2_i = decode_io_rs2_data_o; // @[Core.scala 78:23]
  assign execute_io_is_ebreak_i = decode_io_is_ebreak; // @[Core.scala 79:26]
  assign execute_io_p_npc_i = decode_io_p_npc_o; // @[Core.scala 80:22]
  assign mem_clock = clock;
  assign mem_reset = reset;
  assign mem_io_in_bits_pc = execute_io_out_bits_pc; // @[Core.scala 89:13]
  assign mem_io_in_bits_inst = execute_io_out_bits_inst; // @[Core.scala 89:13]
  assign mem_io_in_bits_rd_addr = execute_io_out_bits_rd_addr; // @[Core.scala 89:13]
  assign mem_io_in_bits_rd_en = execute_io_out_bits_rd_en; // @[Core.scala 89:13]
  assign mem_io_mem_data_i = execute_io_ex_data_o; // @[Core.scala 90:21]
  assign mem_io_is_ebreak_i = execute_io_is_ebreak_o; // @[Core.scala 91:22]
  assign wb_dpi_clk = clock; // @[Core.scala 108:18]
  assign wb_dpi_inst = mem_io_out_bits_inst; // @[Core.scala 109:18]
  assign wb_dpi_pc = mem_io_out_bits_pc; // @[Core.scala 110:16]
  assign wb_dpi_ebreak = mem_io_is_ebreak_o; // @[Core.scala 111:20]
  always @(posedge clock) begin
    fetch_io_imem_resp_bits_old_pc_REG <= fetch_io_imem_req_bits_araddr; // @[Core.scala 45:44]
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
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
