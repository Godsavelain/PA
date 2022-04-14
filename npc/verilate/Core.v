module InstFetch(
  input         clock,
  input         reset,
  output [31:0] io_imem_req_bits_araddr,
  input  [31:0] io_imem_resp_bits_rdata,
  input         io_imem_resp_bits_rvalid,
  input         io_out_ready,
  output        io_out_valid,
  output [31:0] io_out_bits_inst
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] pc; // @[InstFetch.scala 46:19]
  wire [29:0] pc_base_hi = pc[31:2]; // @[InstFetch.scala 48:23]
  wire [31:0] pc_base = {pc_base_hi,2'h0}; // @[Cat.scala 30:58]
  wire [31:0] npc = pc_base + 32'h4; // @[InstFetch.scala 49:23]
  wire  _stall_T_1 = io_out_ready & io_out_valid; // @[Decoupled.scala 40:37]
  wire  stall = ~io_imem_resp_bits_rvalid | ~_stall_T_1; // @[InstFetch.scala 51:34]
  assign io_imem_req_bits_araddr = {pc_base_hi,2'h0}; // @[Cat.scala 30:58]
  assign io_out_valid = 1'h1; // @[InstFetch.scala 67:18]
  assign io_out_bits_inst = io_imem_resp_bits_rdata; // @[InstFetch.scala 58:20]
  always @(posedge clock) begin
    if (reset) begin // @[InstFetch.scala 46:19]
      pc <= 32'h80000000; // @[InstFetch.scala 46:19]
    end else if (~stall) begin // @[InstFetch.scala 53:15]
      pc <= npc; // @[InstFetch.scala 54:8]
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
  input  [31:0] io_in_bits_inst,
  input         io_out_ready,
  output        io_out_valid,
  output [3:0]  io_out_bits_alu_code,
  output        io_out_bits_w_type,
  output [4:0]  io_out_bits_rd_addr,
  output        io_out_bits_rd_en,
  output [4:0]  io_raddr1,
  output [4:0]  io_raddr2
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] inst; // @[Decode.scala 19:22]
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
  wire  _stall_T = io_out_ready & io_out_valid; // @[Decoupled.scala 40:37]
  wire  stall = ~_stall_T; // @[Decode.scala 144:15]
  assign io_in_ready = ~stall; // @[Decode.scala 145:18]
  assign io_out_valid = 1'h1; // @[Decode.scala 146:16]
  assign io_out_bits_alu_code = _ctrl_T_1 ? 4'h1 : _ctrl_T_301; // @[Lookup.scala 33:37]
  assign io_out_bits_w_type = _ctrl_T_1 ? 1'h0 : _ctrl_T_601; // @[Lookup.scala 33:37]
  assign io_out_bits_rd_addr = inst[11:7]; // @[Decode.scala 119:30]
  assign io_out_bits_rd_en = _ctrl_T_1 | (_ctrl_T_3 | (_ctrl_T_5 | (_ctrl_T_7 | _ctrl_T_778))); // @[Lookup.scala 33:37]
  assign io_raddr1 = inst[19:15]; // @[Decode.scala 123:20]
  assign io_raddr2 = inst[24:20]; // @[Decode.scala 124:20]
  always @(posedge clock) begin
    if (reset) begin // @[Decode.scala 19:22]
      inst <= 32'h0; // @[Decode.scala 19:22]
    end else if (io_in_ready) begin // @[Decode.scala 22:21]
      inst <= io_in_bits_inst; // @[Decode.scala 24:10]
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
  inst = _RAND_0[31:0];
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
  input  [4:0]  io_raddr1,
  output [63:0] io_rdata1,
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
  output [63:0] io_regs_31
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
  reg [63:0] rf_0; // @[RegFile.scala 21:19]
  reg [63:0] rf_1; // @[RegFile.scala 21:19]
  reg [63:0] rf_2; // @[RegFile.scala 21:19]
  reg [63:0] rf_3; // @[RegFile.scala 21:19]
  reg [63:0] rf_4; // @[RegFile.scala 21:19]
  reg [63:0] rf_5; // @[RegFile.scala 21:19]
  reg [63:0] rf_6; // @[RegFile.scala 21:19]
  reg [63:0] rf_7; // @[RegFile.scala 21:19]
  reg [63:0] rf_8; // @[RegFile.scala 21:19]
  reg [63:0] rf_9; // @[RegFile.scala 21:19]
  reg [63:0] rf_10; // @[RegFile.scala 21:19]
  reg [63:0] rf_11; // @[RegFile.scala 21:19]
  reg [63:0] rf_12; // @[RegFile.scala 21:19]
  reg [63:0] rf_13; // @[RegFile.scala 21:19]
  reg [63:0] rf_14; // @[RegFile.scala 21:19]
  reg [63:0] rf_15; // @[RegFile.scala 21:19]
  reg [63:0] rf_16; // @[RegFile.scala 21:19]
  reg [63:0] rf_17; // @[RegFile.scala 21:19]
  reg [63:0] rf_18; // @[RegFile.scala 21:19]
  reg [63:0] rf_19; // @[RegFile.scala 21:19]
  reg [63:0] rf_20; // @[RegFile.scala 21:19]
  reg [63:0] rf_21; // @[RegFile.scala 21:19]
  reg [63:0] rf_22; // @[RegFile.scala 21:19]
  reg [63:0] rf_23; // @[RegFile.scala 21:19]
  reg [63:0] rf_24; // @[RegFile.scala 21:19]
  reg [63:0] rf_25; // @[RegFile.scala 21:19]
  reg [63:0] rf_26; // @[RegFile.scala 21:19]
  reg [63:0] rf_27; // @[RegFile.scala 21:19]
  reg [63:0] rf_28; // @[RegFile.scala 21:19]
  reg [63:0] rf_29; // @[RegFile.scala 21:19]
  reg [63:0] rf_30; // @[RegFile.scala 21:19]
  reg [63:0] rf_31; // @[RegFile.scala 21:19]
  wire [63:0] _GEN_1 = 5'h1 == io_raddr1 ? rf_1 : rf_0; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_2 = 5'h2 == io_raddr1 ? rf_2 : _GEN_1; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_3 = 5'h3 == io_raddr1 ? rf_3 : _GEN_2; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_4 = 5'h4 == io_raddr1 ? rf_4 : _GEN_3; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_5 = 5'h5 == io_raddr1 ? rf_5 : _GEN_4; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_6 = 5'h6 == io_raddr1 ? rf_6 : _GEN_5; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_7 = 5'h7 == io_raddr1 ? rf_7 : _GEN_6; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_8 = 5'h8 == io_raddr1 ? rf_8 : _GEN_7; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_9 = 5'h9 == io_raddr1 ? rf_9 : _GEN_8; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_10 = 5'ha == io_raddr1 ? rf_10 : _GEN_9; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_11 = 5'hb == io_raddr1 ? rf_11 : _GEN_10; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_12 = 5'hc == io_raddr1 ? rf_12 : _GEN_11; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_13 = 5'hd == io_raddr1 ? rf_13 : _GEN_12; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_14 = 5'he == io_raddr1 ? rf_14 : _GEN_13; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_15 = 5'hf == io_raddr1 ? rf_15 : _GEN_14; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_16 = 5'h10 == io_raddr1 ? rf_16 : _GEN_15; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_17 = 5'h11 == io_raddr1 ? rf_17 : _GEN_16; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_18 = 5'h12 == io_raddr1 ? rf_18 : _GEN_17; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_19 = 5'h13 == io_raddr1 ? rf_19 : _GEN_18; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_20 = 5'h14 == io_raddr1 ? rf_20 : _GEN_19; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_21 = 5'h15 == io_raddr1 ? rf_21 : _GEN_20; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_22 = 5'h16 == io_raddr1 ? rf_22 : _GEN_21; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_23 = 5'h17 == io_raddr1 ? rf_23 : _GEN_22; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_24 = 5'h18 == io_raddr1 ? rf_24 : _GEN_23; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_25 = 5'h19 == io_raddr1 ? rf_25 : _GEN_24; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_26 = 5'h1a == io_raddr1 ? rf_26 : _GEN_25; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_27 = 5'h1b == io_raddr1 ? rf_27 : _GEN_26; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_28 = 5'h1c == io_raddr1 ? rf_28 : _GEN_27; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_29 = 5'h1d == io_raddr1 ? rf_29 : _GEN_28; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_30 = 5'h1e == io_raddr1 ? rf_30 : _GEN_29; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_31 = 5'h1f == io_raddr1 ? rf_31 : _GEN_30; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_33 = 5'h1 == io_raddr2 ? rf_1 : rf_0; // @[RegFile.scala 24:19 RegFile.scala 24:19]
  wire [63:0] _GEN_34 = 5'h2 == io_raddr2 ? rf_2 : _GEN_33; // @[RegFile.scala 24:19 RegFile.scala 24:19]
  wire [63:0] _GEN_35 = 5'h3 == io_raddr2 ? rf_3 : _GEN_34; // @[RegFile.scala 24:19 RegFile.scala 24:19]
  wire [63:0] _GEN_36 = 5'h4 == io_raddr2 ? rf_4 : _GEN_35; // @[RegFile.scala 24:19 RegFile.scala 24:19]
  wire [63:0] _GEN_37 = 5'h5 == io_raddr2 ? rf_5 : _GEN_36; // @[RegFile.scala 24:19 RegFile.scala 24:19]
  wire [63:0] _GEN_38 = 5'h6 == io_raddr2 ? rf_6 : _GEN_37; // @[RegFile.scala 24:19 RegFile.scala 24:19]
  wire [63:0] _GEN_39 = 5'h7 == io_raddr2 ? rf_7 : _GEN_38; // @[RegFile.scala 24:19 RegFile.scala 24:19]
  wire [63:0] _GEN_40 = 5'h8 == io_raddr2 ? rf_8 : _GEN_39; // @[RegFile.scala 24:19 RegFile.scala 24:19]
  wire [63:0] _GEN_41 = 5'h9 == io_raddr2 ? rf_9 : _GEN_40; // @[RegFile.scala 24:19 RegFile.scala 24:19]
  wire [63:0] _GEN_42 = 5'ha == io_raddr2 ? rf_10 : _GEN_41; // @[RegFile.scala 24:19 RegFile.scala 24:19]
  wire [63:0] _GEN_43 = 5'hb == io_raddr2 ? rf_11 : _GEN_42; // @[RegFile.scala 24:19 RegFile.scala 24:19]
  wire [63:0] _GEN_44 = 5'hc == io_raddr2 ? rf_12 : _GEN_43; // @[RegFile.scala 24:19 RegFile.scala 24:19]
  wire [63:0] _GEN_45 = 5'hd == io_raddr2 ? rf_13 : _GEN_44; // @[RegFile.scala 24:19 RegFile.scala 24:19]
  wire [63:0] _GEN_46 = 5'he == io_raddr2 ? rf_14 : _GEN_45; // @[RegFile.scala 24:19 RegFile.scala 24:19]
  wire [63:0] _GEN_47 = 5'hf == io_raddr2 ? rf_15 : _GEN_46; // @[RegFile.scala 24:19 RegFile.scala 24:19]
  wire [63:0] _GEN_48 = 5'h10 == io_raddr2 ? rf_16 : _GEN_47; // @[RegFile.scala 24:19 RegFile.scala 24:19]
  wire [63:0] _GEN_49 = 5'h11 == io_raddr2 ? rf_17 : _GEN_48; // @[RegFile.scala 24:19 RegFile.scala 24:19]
  wire [63:0] _GEN_50 = 5'h12 == io_raddr2 ? rf_18 : _GEN_49; // @[RegFile.scala 24:19 RegFile.scala 24:19]
  wire [63:0] _GEN_51 = 5'h13 == io_raddr2 ? rf_19 : _GEN_50; // @[RegFile.scala 24:19 RegFile.scala 24:19]
  wire [63:0] _GEN_52 = 5'h14 == io_raddr2 ? rf_20 : _GEN_51; // @[RegFile.scala 24:19 RegFile.scala 24:19]
  wire [63:0] _GEN_53 = 5'h15 == io_raddr2 ? rf_21 : _GEN_52; // @[RegFile.scala 24:19 RegFile.scala 24:19]
  wire [63:0] _GEN_54 = 5'h16 == io_raddr2 ? rf_22 : _GEN_53; // @[RegFile.scala 24:19 RegFile.scala 24:19]
  wire [63:0] _GEN_55 = 5'h17 == io_raddr2 ? rf_23 : _GEN_54; // @[RegFile.scala 24:19 RegFile.scala 24:19]
  wire [63:0] _GEN_56 = 5'h18 == io_raddr2 ? rf_24 : _GEN_55; // @[RegFile.scala 24:19 RegFile.scala 24:19]
  wire [63:0] _GEN_57 = 5'h19 == io_raddr2 ? rf_25 : _GEN_56; // @[RegFile.scala 24:19 RegFile.scala 24:19]
  wire [63:0] _GEN_58 = 5'h1a == io_raddr2 ? rf_26 : _GEN_57; // @[RegFile.scala 24:19 RegFile.scala 24:19]
  wire [63:0] _GEN_59 = 5'h1b == io_raddr2 ? rf_27 : _GEN_58; // @[RegFile.scala 24:19 RegFile.scala 24:19]
  wire [63:0] _GEN_60 = 5'h1c == io_raddr2 ? rf_28 : _GEN_59; // @[RegFile.scala 24:19 RegFile.scala 24:19]
  wire [63:0] _GEN_61 = 5'h1d == io_raddr2 ? rf_29 : _GEN_60; // @[RegFile.scala 24:19 RegFile.scala 24:19]
  wire [63:0] _GEN_62 = 5'h1e == io_raddr2 ? rf_30 : _GEN_61; // @[RegFile.scala 24:19 RegFile.scala 24:19]
  wire [63:0] _GEN_63 = 5'h1f == io_raddr2 ? rf_31 : _GEN_62; // @[RegFile.scala 24:19 RegFile.scala 24:19]
  assign io_rdata1 = io_raddr1 != 5'h0 ? _GEN_31 : 64'h0; // @[RegFile.scala 23:19]
  assign io_rdata2 = io_raddr2 != 5'h0 ? _GEN_63 : 64'h0; // @[RegFile.scala 24:19]
  assign io_regs_0 = rf_0; // @[RegFile.scala 29:11]
  assign io_regs_1 = rf_1; // @[RegFile.scala 29:11]
  assign io_regs_2 = rf_2; // @[RegFile.scala 29:11]
  assign io_regs_3 = rf_3; // @[RegFile.scala 29:11]
  assign io_regs_4 = rf_4; // @[RegFile.scala 29:11]
  assign io_regs_5 = rf_5; // @[RegFile.scala 29:11]
  assign io_regs_6 = rf_6; // @[RegFile.scala 29:11]
  assign io_regs_7 = rf_7; // @[RegFile.scala 29:11]
  assign io_regs_8 = rf_8; // @[RegFile.scala 29:11]
  assign io_regs_9 = rf_9; // @[RegFile.scala 29:11]
  assign io_regs_10 = rf_10; // @[RegFile.scala 29:11]
  assign io_regs_11 = rf_11; // @[RegFile.scala 29:11]
  assign io_regs_12 = rf_12; // @[RegFile.scala 29:11]
  assign io_regs_13 = rf_13; // @[RegFile.scala 29:11]
  assign io_regs_14 = rf_14; // @[RegFile.scala 29:11]
  assign io_regs_15 = rf_15; // @[RegFile.scala 29:11]
  assign io_regs_16 = rf_16; // @[RegFile.scala 29:11]
  assign io_regs_17 = rf_17; // @[RegFile.scala 29:11]
  assign io_regs_18 = rf_18; // @[RegFile.scala 29:11]
  assign io_regs_19 = rf_19; // @[RegFile.scala 29:11]
  assign io_regs_20 = rf_20; // @[RegFile.scala 29:11]
  assign io_regs_21 = rf_21; // @[RegFile.scala 29:11]
  assign io_regs_22 = rf_22; // @[RegFile.scala 29:11]
  assign io_regs_23 = rf_23; // @[RegFile.scala 29:11]
  assign io_regs_24 = rf_24; // @[RegFile.scala 29:11]
  assign io_regs_25 = rf_25; // @[RegFile.scala 29:11]
  assign io_regs_26 = rf_26; // @[RegFile.scala 29:11]
  assign io_regs_27 = rf_27; // @[RegFile.scala 29:11]
  assign io_regs_28 = rf_28; // @[RegFile.scala 29:11]
  assign io_regs_29 = rf_29; // @[RegFile.scala 29:11]
  assign io_regs_30 = rf_30; // @[RegFile.scala 29:11]
  assign io_regs_31 = rf_31; // @[RegFile.scala 29:11]
  always @(posedge clock) begin
    if (reset) begin // @[RegFile.scala 21:19]
      rf_0 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'h0 == io_waddr) begin // @[RegFile.scala 27:18]
        rf_0 <= io_wdata; // @[RegFile.scala 27:18]
      end
    end
    if (reset) begin // @[RegFile.scala 21:19]
      rf_1 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'h1 == io_waddr) begin // @[RegFile.scala 27:18]
        rf_1 <= io_wdata; // @[RegFile.scala 27:18]
      end
    end
    if (reset) begin // @[RegFile.scala 21:19]
      rf_2 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'h2 == io_waddr) begin // @[RegFile.scala 27:18]
        rf_2 <= io_wdata; // @[RegFile.scala 27:18]
      end
    end
    if (reset) begin // @[RegFile.scala 21:19]
      rf_3 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'h3 == io_waddr) begin // @[RegFile.scala 27:18]
        rf_3 <= io_wdata; // @[RegFile.scala 27:18]
      end
    end
    if (reset) begin // @[RegFile.scala 21:19]
      rf_4 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'h4 == io_waddr) begin // @[RegFile.scala 27:18]
        rf_4 <= io_wdata; // @[RegFile.scala 27:18]
      end
    end
    if (reset) begin // @[RegFile.scala 21:19]
      rf_5 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'h5 == io_waddr) begin // @[RegFile.scala 27:18]
        rf_5 <= io_wdata; // @[RegFile.scala 27:18]
      end
    end
    if (reset) begin // @[RegFile.scala 21:19]
      rf_6 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'h6 == io_waddr) begin // @[RegFile.scala 27:18]
        rf_6 <= io_wdata; // @[RegFile.scala 27:18]
      end
    end
    if (reset) begin // @[RegFile.scala 21:19]
      rf_7 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'h7 == io_waddr) begin // @[RegFile.scala 27:18]
        rf_7 <= io_wdata; // @[RegFile.scala 27:18]
      end
    end
    if (reset) begin // @[RegFile.scala 21:19]
      rf_8 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'h8 == io_waddr) begin // @[RegFile.scala 27:18]
        rf_8 <= io_wdata; // @[RegFile.scala 27:18]
      end
    end
    if (reset) begin // @[RegFile.scala 21:19]
      rf_9 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'h9 == io_waddr) begin // @[RegFile.scala 27:18]
        rf_9 <= io_wdata; // @[RegFile.scala 27:18]
      end
    end
    if (reset) begin // @[RegFile.scala 21:19]
      rf_10 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'ha == io_waddr) begin // @[RegFile.scala 27:18]
        rf_10 <= io_wdata; // @[RegFile.scala 27:18]
      end
    end
    if (reset) begin // @[RegFile.scala 21:19]
      rf_11 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'hb == io_waddr) begin // @[RegFile.scala 27:18]
        rf_11 <= io_wdata; // @[RegFile.scala 27:18]
      end
    end
    if (reset) begin // @[RegFile.scala 21:19]
      rf_12 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'hc == io_waddr) begin // @[RegFile.scala 27:18]
        rf_12 <= io_wdata; // @[RegFile.scala 27:18]
      end
    end
    if (reset) begin // @[RegFile.scala 21:19]
      rf_13 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'hd == io_waddr) begin // @[RegFile.scala 27:18]
        rf_13 <= io_wdata; // @[RegFile.scala 27:18]
      end
    end
    if (reset) begin // @[RegFile.scala 21:19]
      rf_14 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'he == io_waddr) begin // @[RegFile.scala 27:18]
        rf_14 <= io_wdata; // @[RegFile.scala 27:18]
      end
    end
    if (reset) begin // @[RegFile.scala 21:19]
      rf_15 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'hf == io_waddr) begin // @[RegFile.scala 27:18]
        rf_15 <= io_wdata; // @[RegFile.scala 27:18]
      end
    end
    if (reset) begin // @[RegFile.scala 21:19]
      rf_16 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'h10 == io_waddr) begin // @[RegFile.scala 27:18]
        rf_16 <= io_wdata; // @[RegFile.scala 27:18]
      end
    end
    if (reset) begin // @[RegFile.scala 21:19]
      rf_17 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'h11 == io_waddr) begin // @[RegFile.scala 27:18]
        rf_17 <= io_wdata; // @[RegFile.scala 27:18]
      end
    end
    if (reset) begin // @[RegFile.scala 21:19]
      rf_18 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'h12 == io_waddr) begin // @[RegFile.scala 27:18]
        rf_18 <= io_wdata; // @[RegFile.scala 27:18]
      end
    end
    if (reset) begin // @[RegFile.scala 21:19]
      rf_19 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'h13 == io_waddr) begin // @[RegFile.scala 27:18]
        rf_19 <= io_wdata; // @[RegFile.scala 27:18]
      end
    end
    if (reset) begin // @[RegFile.scala 21:19]
      rf_20 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'h14 == io_waddr) begin // @[RegFile.scala 27:18]
        rf_20 <= io_wdata; // @[RegFile.scala 27:18]
      end
    end
    if (reset) begin // @[RegFile.scala 21:19]
      rf_21 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'h15 == io_waddr) begin // @[RegFile.scala 27:18]
        rf_21 <= io_wdata; // @[RegFile.scala 27:18]
      end
    end
    if (reset) begin // @[RegFile.scala 21:19]
      rf_22 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'h16 == io_waddr) begin // @[RegFile.scala 27:18]
        rf_22 <= io_wdata; // @[RegFile.scala 27:18]
      end
    end
    if (reset) begin // @[RegFile.scala 21:19]
      rf_23 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'h17 == io_waddr) begin // @[RegFile.scala 27:18]
        rf_23 <= io_wdata; // @[RegFile.scala 27:18]
      end
    end
    if (reset) begin // @[RegFile.scala 21:19]
      rf_24 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'h18 == io_waddr) begin // @[RegFile.scala 27:18]
        rf_24 <= io_wdata; // @[RegFile.scala 27:18]
      end
    end
    if (reset) begin // @[RegFile.scala 21:19]
      rf_25 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'h19 == io_waddr) begin // @[RegFile.scala 27:18]
        rf_25 <= io_wdata; // @[RegFile.scala 27:18]
      end
    end
    if (reset) begin // @[RegFile.scala 21:19]
      rf_26 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'h1a == io_waddr) begin // @[RegFile.scala 27:18]
        rf_26 <= io_wdata; // @[RegFile.scala 27:18]
      end
    end
    if (reset) begin // @[RegFile.scala 21:19]
      rf_27 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'h1b == io_waddr) begin // @[RegFile.scala 27:18]
        rf_27 <= io_wdata; // @[RegFile.scala 27:18]
      end
    end
    if (reset) begin // @[RegFile.scala 21:19]
      rf_28 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'h1c == io_waddr) begin // @[RegFile.scala 27:18]
        rf_28 <= io_wdata; // @[RegFile.scala 27:18]
      end
    end
    if (reset) begin // @[RegFile.scala 21:19]
      rf_29 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'h1d == io_waddr) begin // @[RegFile.scala 27:18]
        rf_29 <= io_wdata; // @[RegFile.scala 27:18]
      end
    end
    if (reset) begin // @[RegFile.scala 21:19]
      rf_30 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'h1e == io_waddr) begin // @[RegFile.scala 27:18]
        rf_30 <= io_wdata; // @[RegFile.scala 27:18]
      end
    end
    if (reset) begin // @[RegFile.scala 21:19]
      rf_31 <= 64'h0; // @[RegFile.scala 21:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 26:38]
      if (5'h1f == io_waddr) begin // @[RegFile.scala 27:18]
        rf_31 <= io_wdata; // @[RegFile.scala 27:18]
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
  output [63:0] io_alu_out
);
  wire [63:0] _out0_T_1 = io_in1 + io_in2; // @[Execute.scala 53:22]
  wire [63:0] _out0_T_3 = io_in1 - io_in2; // @[Execute.scala 54:22]
  wire  _out0_T_6 = $signed(io_in1) < $signed(io_in2); // @[Execute.scala 55:31]
  wire  _out0_T_7 = io_in1 < io_in2; // @[Execute.scala 56:22]
  wire [63:0] _out0_T_8 = io_in1 ^ io_in2; // @[Execute.scala 57:22]
  wire [63:0] _out0_T_9 = io_in1 | io_in2; // @[Execute.scala 58:22]
  wire [63:0] _out0_T_10 = io_in1 & io_in2; // @[Execute.scala 59:22]
  wire [63:0] _out0_T_12 = 4'h1 == io_aluop_i ? _out0_T_1 : 64'h0; // @[Mux.scala 80:57]
  wire [63:0] _out0_T_14 = 4'h2 == io_aluop_i ? _out0_T_3 : _out0_T_12; // @[Mux.scala 80:57]
  wire [63:0] _out0_T_16 = 4'h3 == io_aluop_i ? {{63'd0}, _out0_T_6} : _out0_T_14; // @[Mux.scala 80:57]
  wire [63:0] _out0_T_18 = 4'h4 == io_aluop_i ? {{63'd0}, _out0_T_7} : _out0_T_16; // @[Mux.scala 80:57]
  wire [63:0] _out0_T_20 = 4'h5 == io_aluop_i ? _out0_T_8 : _out0_T_18; // @[Mux.scala 80:57]
  wire [63:0] _out0_T_22 = 4'h6 == io_aluop_i ? _out0_T_9 : _out0_T_20; // @[Mux.scala 80:57]
  wire [63:0] out0 = 4'h7 == io_aluop_i ? _out0_T_10 : _out0_T_22; // @[Mux.scala 80:57]
  wire [31:0] out1_lo = out0[31:0]; // @[Execute.scala 65:41]
  wire [31:0] out1_hi = out1_lo[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _out1_T_2 = {out1_hi,out1_lo}; // @[Cat.scala 30:58]
  assign io_alu_out = io_wtype_i ? _out1_T_2 : out0; // @[Execute.scala 65:14]
endmodule
module Execute(
  input         clock,
  input         reset,
  output        io_in_ready,
  input  [3:0]  io_in_bits_alu_code,
  input         io_in_bits_w_type,
  input  [4:0]  io_in_bits_rd_addr,
  input         io_in_bits_rd_en,
  output        io_out_valid,
  output [4:0]  io_out_bits_rd_addr,
  output        io_out_bits_rd_en,
  input  [63:0] io_ex_rs1_i,
  input  [63:0] io_ex_rs2_i,
  output [63:0] io_ex_data_o
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [63:0] _RAND_5;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] alu_io_in1; // @[Execute.scala 29:19]
  wire [63:0] alu_io_in2; // @[Execute.scala 29:19]
  wire [3:0] alu_io_aluop_i; // @[Execute.scala 29:19]
  wire  alu_io_wtype_i; // @[Execute.scala 29:19]
  wire [63:0] alu_io_alu_out; // @[Execute.scala 29:19]
  wire  stall = ~io_out_valid; // @[Execute.scala 16:15]
  reg [3:0] ex_reg_decodeop_alu_code; // @[Execute.scala 19:32]
  reg  ex_reg_decodeop_w_type; // @[Execute.scala 19:32]
  reg [4:0] ex_reg_decodeop_rd_addr; // @[Execute.scala 19:32]
  reg  ex_reg_decodeop_rd_en; // @[Execute.scala 19:32]
  reg [63:0] rs1; // @[Execute.scala 20:20]
  reg [63:0] rs2; // @[Execute.scala 21:20]
  Alu alu ( // @[Execute.scala 29:19]
    .io_in1(alu_io_in1),
    .io_in2(alu_io_in2),
    .io_aluop_i(alu_io_aluop_i),
    .io_wtype_i(alu_io_wtype_i),
    .io_alu_out(alu_io_alu_out)
  );
  assign io_in_ready = ~stall; // @[Execute.scala 17:18]
  assign io_out_valid = 1'h1; // @[Execute.scala 18:16]
  assign io_out_bits_rd_addr = ex_reg_decodeop_rd_addr; // @[Execute.scala 36:15]
  assign io_out_bits_rd_en = ex_reg_decodeop_rd_en; // @[Execute.scala 36:15]
  assign io_ex_data_o = alu_io_alu_out; // @[Execute.scala 34:16]
  assign alu_io_in1 = rs1; // @[Execute.scala 30:14]
  assign alu_io_in2 = rs2; // @[Execute.scala 31:14]
  assign alu_io_aluop_i = ex_reg_decodeop_alu_code; // @[Execute.scala 32:18]
  assign alu_io_wtype_i = ex_reg_decodeop_w_type; // @[Execute.scala 33:18]
  always @(posedge clock) begin
    if (reset) begin // @[Execute.scala 19:32]
      ex_reg_decodeop_alu_code <= 4'h0; // @[Execute.scala 19:32]
    end else if (io_in_ready) begin // @[Execute.scala 23:21]
      ex_reg_decodeop_alu_code <= io_in_bits_alu_code; // @[Execute.scala 24:21]
    end
    if (reset) begin // @[Execute.scala 19:32]
      ex_reg_decodeop_w_type <= 1'h0; // @[Execute.scala 19:32]
    end else if (io_in_ready) begin // @[Execute.scala 23:21]
      ex_reg_decodeop_w_type <= io_in_bits_w_type; // @[Execute.scala 24:21]
    end
    if (reset) begin // @[Execute.scala 19:32]
      ex_reg_decodeop_rd_addr <= 5'h0; // @[Execute.scala 19:32]
    end else if (io_in_ready) begin // @[Execute.scala 23:21]
      ex_reg_decodeop_rd_addr <= io_in_bits_rd_addr; // @[Execute.scala 24:21]
    end
    if (reset) begin // @[Execute.scala 19:32]
      ex_reg_decodeop_rd_en <= 1'h0; // @[Execute.scala 19:32]
    end else if (io_in_ready) begin // @[Execute.scala 23:21]
      ex_reg_decodeop_rd_en <= io_in_bits_rd_en; // @[Execute.scala 24:21]
    end
    if (reset) begin // @[Execute.scala 20:20]
      rs1 <= 64'h0; // @[Execute.scala 20:20]
    end else if (io_in_ready) begin // @[Execute.scala 23:21]
      rs1 <= io_ex_rs1_i; // @[Execute.scala 25:9]
    end
    if (reset) begin // @[Execute.scala 21:20]
      rs2 <= 64'h0; // @[Execute.scala 21:20]
    end else if (io_in_ready) begin // @[Execute.scala 23:21]
      rs2 <= io_ex_rs2_i; // @[Execute.scala 26:9]
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
  ex_reg_decodeop_alu_code = _RAND_0[3:0];
  _RAND_1 = {1{`RANDOM}};
  ex_reg_decodeop_w_type = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  ex_reg_decodeop_rd_addr = _RAND_2[4:0];
  _RAND_3 = {1{`RANDOM}};
  ex_reg_decodeop_rd_en = _RAND_3[0:0];
  _RAND_4 = {2{`RANDOM}};
  rs1 = _RAND_4[63:0];
  _RAND_5 = {2{`RANDOM}};
  rs2 = _RAND_5[63:0];
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
  input  [4:0]  io_in_bits_rd_addr,
  input         io_in_bits_rd_en,
  input  [63:0] io_mem_data_i,
  output [4:0]  io_waddr_o,
  output        io_wen_o,
  output [63:0] io_wdata_o
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [63:0] _RAND_5;
`endif // RANDOMIZE_REG_INIT
  reg [4:0] waddr; // @[Mem.scala 19:22]
  reg  wen; // @[Mem.scala 20:22]
  reg [63:0] wdata; // @[Mem.scala 21:22]
  reg [4:0] io_waddr_o_REG; // @[Mem.scala 29:24]
  reg  io_wen_o_REG; // @[Mem.scala 30:24]
  reg [63:0] io_wdata_o_REG; // @[Mem.scala 31:24]
  assign io_in_ready = 1'h1; // @[Mem.scala 17:18]
  assign io_waddr_o = io_waddr_o_REG; // @[Mem.scala 29:14]
  assign io_wen_o = io_wen_o_REG; // @[Mem.scala 30:14]
  assign io_wdata_o = io_wdata_o_REG; // @[Mem.scala 31:14]
  always @(posedge clock) begin
    if (reset) begin // @[Mem.scala 19:22]
      waddr <= 5'h0; // @[Mem.scala 19:22]
    end else if (io_in_ready) begin // @[Mem.scala 22:21]
      waddr <= io_in_bits_rd_addr; // @[Mem.scala 24:11]
    end
    if (reset) begin // @[Mem.scala 20:22]
      wen <= 1'h0; // @[Mem.scala 20:22]
    end else if (io_in_ready) begin // @[Mem.scala 22:21]
      wen <= io_in_bits_rd_en; // @[Mem.scala 25:11]
    end
    if (reset) begin // @[Mem.scala 21:22]
      wdata <= 64'h0; // @[Mem.scala 21:22]
    end else if (io_in_ready) begin // @[Mem.scala 22:21]
      wdata <= io_mem_data_i; // @[Mem.scala 26:11]
    end
    io_waddr_o_REG <= waddr; // @[Mem.scala 29:24]
    io_wen_o_REG <= wen; // @[Mem.scala 30:24]
    io_wdata_o_REG <= wdata; // @[Mem.scala 31:24]
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
  waddr = _RAND_0[4:0];
  _RAND_1 = {1{`RANDOM}};
  wen = _RAND_1[0:0];
  _RAND_2 = {2{`RANDOM}};
  wdata = _RAND_2[63:0];
  _RAND_3 = {1{`RANDOM}};
  io_waddr_o_REG = _RAND_3[4:0];
  _RAND_4 = {1{`RANDOM}};
  io_wen_o_REG = _RAND_4[0:0];
  _RAND_5 = {2{`RANDOM}};
  io_wdata_o_REG = _RAND_5[63:0];
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
  output [63:0] io_regs_31
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  wire  fetch_clock; // @[Core.scala 29:21]
  wire  fetch_reset; // @[Core.scala 29:21]
  wire [31:0] fetch_io_imem_req_bits_araddr; // @[Core.scala 29:21]
  wire [31:0] fetch_io_imem_resp_bits_rdata; // @[Core.scala 29:21]
  wire  fetch_io_imem_resp_bits_rvalid; // @[Core.scala 29:21]
  wire  fetch_io_out_ready; // @[Core.scala 29:21]
  wire  fetch_io_out_valid; // @[Core.scala 29:21]
  wire [31:0] fetch_io_out_bits_inst; // @[Core.scala 29:21]
  wire  decode_clock; // @[Core.scala 51:22]
  wire  decode_reset; // @[Core.scala 51:22]
  wire  decode_io_in_ready; // @[Core.scala 51:22]
  wire [31:0] decode_io_in_bits_inst; // @[Core.scala 51:22]
  wire  decode_io_out_ready; // @[Core.scala 51:22]
  wire  decode_io_out_valid; // @[Core.scala 51:22]
  wire [3:0] decode_io_out_bits_alu_code; // @[Core.scala 51:22]
  wire  decode_io_out_bits_w_type; // @[Core.scala 51:22]
  wire [4:0] decode_io_out_bits_rd_addr; // @[Core.scala 51:22]
  wire  decode_io_out_bits_rd_en; // @[Core.scala 51:22]
  wire [4:0] decode_io_raddr1; // @[Core.scala 51:22]
  wire [4:0] decode_io_raddr2; // @[Core.scala 51:22]
  wire  regfile_clock; // @[Core.scala 56:23]
  wire  regfile_reset; // @[Core.scala 56:23]
  wire [4:0] regfile_io_raddr1; // @[Core.scala 56:23]
  wire [63:0] regfile_io_rdata1; // @[Core.scala 56:23]
  wire [4:0] regfile_io_raddr2; // @[Core.scala 56:23]
  wire [63:0] regfile_io_rdata2; // @[Core.scala 56:23]
  wire  regfile_io_wen; // @[Core.scala 56:23]
  wire [4:0] regfile_io_waddr; // @[Core.scala 56:23]
  wire [63:0] regfile_io_wdata; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_0; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_1; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_2; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_3; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_4; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_5; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_6; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_7; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_8; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_9; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_10; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_11; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_12; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_13; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_14; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_15; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_16; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_17; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_18; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_19; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_20; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_21; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_22; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_23; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_24; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_25; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_26; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_27; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_28; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_29; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_30; // @[Core.scala 56:23]
  wire [63:0] regfile_io_regs_31; // @[Core.scala 56:23]
  wire  execute_clock; // @[Core.scala 62:23]
  wire  execute_reset; // @[Core.scala 62:23]
  wire  execute_io_in_ready; // @[Core.scala 62:23]
  wire [3:0] execute_io_in_bits_alu_code; // @[Core.scala 62:23]
  wire  execute_io_in_bits_w_type; // @[Core.scala 62:23]
  wire [4:0] execute_io_in_bits_rd_addr; // @[Core.scala 62:23]
  wire  execute_io_in_bits_rd_en; // @[Core.scala 62:23]
  wire  execute_io_out_valid; // @[Core.scala 62:23]
  wire [4:0] execute_io_out_bits_rd_addr; // @[Core.scala 62:23]
  wire  execute_io_out_bits_rd_en; // @[Core.scala 62:23]
  wire [63:0] execute_io_ex_rs1_i; // @[Core.scala 62:23]
  wire [63:0] execute_io_ex_rs2_i; // @[Core.scala 62:23]
  wire [63:0] execute_io_ex_data_o; // @[Core.scala 62:23]
  wire  mem_clock; // @[Core.scala 68:19]
  wire  mem_reset; // @[Core.scala 68:19]
  wire  mem_io_in_ready; // @[Core.scala 68:19]
  wire [4:0] mem_io_in_bits_rd_addr; // @[Core.scala 68:19]
  wire  mem_io_in_bits_rd_en; // @[Core.scala 68:19]
  wire [63:0] mem_io_mem_data_i; // @[Core.scala 68:19]
  wire [4:0] mem_io_waddr_o; // @[Core.scala 68:19]
  wire  mem_io_wen_o; // @[Core.scala 68:19]
  wire [63:0] mem_io_wdata_o; // @[Core.scala 68:19]
  reg [63:0] execute_io_ex_rs1_i_REG; // @[Core.scala 64:33]
  reg [63:0] execute_io_ex_rs2_i_REG; // @[Core.scala 65:33]
  InstFetch fetch ( // @[Core.scala 29:21]
    .clock(fetch_clock),
    .reset(fetch_reset),
    .io_imem_req_bits_araddr(fetch_io_imem_req_bits_araddr),
    .io_imem_resp_bits_rdata(fetch_io_imem_resp_bits_rdata),
    .io_imem_resp_bits_rvalid(fetch_io_imem_resp_bits_rvalid),
    .io_out_ready(fetch_io_out_ready),
    .io_out_valid(fetch_io_out_valid),
    .io_out_bits_inst(fetch_io_out_bits_inst)
  );
  Decode decode ( // @[Core.scala 51:22]
    .clock(decode_clock),
    .reset(decode_reset),
    .io_in_ready(decode_io_in_ready),
    .io_in_bits_inst(decode_io_in_bits_inst),
    .io_out_ready(decode_io_out_ready),
    .io_out_valid(decode_io_out_valid),
    .io_out_bits_alu_code(decode_io_out_bits_alu_code),
    .io_out_bits_w_type(decode_io_out_bits_w_type),
    .io_out_bits_rd_addr(decode_io_out_bits_rd_addr),
    .io_out_bits_rd_en(decode_io_out_bits_rd_en),
    .io_raddr1(decode_io_raddr1),
    .io_raddr2(decode_io_raddr2)
  );
  RegFile regfile ( // @[Core.scala 56:23]
    .clock(regfile_clock),
    .reset(regfile_reset),
    .io_raddr1(regfile_io_raddr1),
    .io_rdata1(regfile_io_rdata1),
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
    .io_regs_31(regfile_io_regs_31)
  );
  Execute execute ( // @[Core.scala 62:23]
    .clock(execute_clock),
    .reset(execute_reset),
    .io_in_ready(execute_io_in_ready),
    .io_in_bits_alu_code(execute_io_in_bits_alu_code),
    .io_in_bits_w_type(execute_io_in_bits_w_type),
    .io_in_bits_rd_addr(execute_io_in_bits_rd_addr),
    .io_in_bits_rd_en(execute_io_in_bits_rd_en),
    .io_out_valid(execute_io_out_valid),
    .io_out_bits_rd_addr(execute_io_out_bits_rd_addr),
    .io_out_bits_rd_en(execute_io_out_bits_rd_en),
    .io_ex_rs1_i(execute_io_ex_rs1_i),
    .io_ex_rs2_i(execute_io_ex_rs2_i),
    .io_ex_data_o(execute_io_ex_data_o)
  );
  Mem mem ( // @[Core.scala 68:19]
    .clock(mem_clock),
    .reset(mem_reset),
    .io_in_ready(mem_io_in_ready),
    .io_in_bits_rd_addr(mem_io_in_bits_rd_addr),
    .io_in_bits_rd_en(mem_io_in_bits_rd_en),
    .io_mem_data_i(mem_io_mem_data_i),
    .io_waddr_o(mem_io_waddr_o),
    .io_wen_o(mem_io_wen_o),
    .io_wdata_o(mem_io_wdata_o)
  );
  assign io_imem_raddr = fetch_io_imem_req_bits_araddr; // @[Core.scala 35:17]
  assign io_imem_waddr = 32'h0; // @[Core.scala 37:17]
  assign io_imem_wdata = 64'h0; // @[Core.scala 38:17]
  assign io_imem_ren = 1'h1; // @[Core.scala 36:15]
  assign io_imem_wen = 1'h0; // @[Core.scala 39:15]
  assign io_imem_wmask = 8'h0; // @[Core.scala 40:17]
  assign io_dmem_raddr = 32'h0; // @[Core.scala 42:17]
  assign io_dmem_waddr = 32'h0; // @[Core.scala 44:17]
  assign io_dmem_wdata = 64'h0; // @[Core.scala 45:17]
  assign io_dmem_ren = 1'h0; // @[Core.scala 43:15]
  assign io_dmem_wen = 1'h0; // @[Core.scala 46:15]
  assign io_dmem_wmask = 8'h0; // @[Core.scala 47:17]
  assign io_regs_0 = regfile_io_regs_0; // @[Core.scala 75:11]
  assign io_regs_1 = regfile_io_regs_1; // @[Core.scala 75:11]
  assign io_regs_2 = regfile_io_regs_2; // @[Core.scala 75:11]
  assign io_regs_3 = regfile_io_regs_3; // @[Core.scala 75:11]
  assign io_regs_4 = regfile_io_regs_4; // @[Core.scala 75:11]
  assign io_regs_5 = regfile_io_regs_5; // @[Core.scala 75:11]
  assign io_regs_6 = regfile_io_regs_6; // @[Core.scala 75:11]
  assign io_regs_7 = regfile_io_regs_7; // @[Core.scala 75:11]
  assign io_regs_8 = regfile_io_regs_8; // @[Core.scala 75:11]
  assign io_regs_9 = regfile_io_regs_9; // @[Core.scala 75:11]
  assign io_regs_10 = regfile_io_regs_10; // @[Core.scala 75:11]
  assign io_regs_11 = regfile_io_regs_11; // @[Core.scala 75:11]
  assign io_regs_12 = regfile_io_regs_12; // @[Core.scala 75:11]
  assign io_regs_13 = regfile_io_regs_13; // @[Core.scala 75:11]
  assign io_regs_14 = regfile_io_regs_14; // @[Core.scala 75:11]
  assign io_regs_15 = regfile_io_regs_15; // @[Core.scala 75:11]
  assign io_regs_16 = regfile_io_regs_16; // @[Core.scala 75:11]
  assign io_regs_17 = regfile_io_regs_17; // @[Core.scala 75:11]
  assign io_regs_18 = regfile_io_regs_18; // @[Core.scala 75:11]
  assign io_regs_19 = regfile_io_regs_19; // @[Core.scala 75:11]
  assign io_regs_20 = regfile_io_regs_20; // @[Core.scala 75:11]
  assign io_regs_21 = regfile_io_regs_21; // @[Core.scala 75:11]
  assign io_regs_22 = regfile_io_regs_22; // @[Core.scala 75:11]
  assign io_regs_23 = regfile_io_regs_23; // @[Core.scala 75:11]
  assign io_regs_24 = regfile_io_regs_24; // @[Core.scala 75:11]
  assign io_regs_25 = regfile_io_regs_25; // @[Core.scala 75:11]
  assign io_regs_26 = regfile_io_regs_26; // @[Core.scala 75:11]
  assign io_regs_27 = regfile_io_regs_27; // @[Core.scala 75:11]
  assign io_regs_28 = regfile_io_regs_28; // @[Core.scala 75:11]
  assign io_regs_29 = regfile_io_regs_29; // @[Core.scala 75:11]
  assign io_regs_30 = regfile_io_regs_30; // @[Core.scala 75:11]
  assign io_regs_31 = regfile_io_regs_31; // @[Core.scala 75:11]
  assign fetch_clock = clock;
  assign fetch_reset = reset;
  assign fetch_io_imem_resp_bits_rdata = io_imem_rdata[31:0]; // @[Core.scala 32:49]
  assign fetch_io_imem_resp_bits_rvalid = io_imem_read_ok; // @[Core.scala 34:34]
  assign fetch_io_out_ready = decode_io_in_ready; // @[Core.scala 53:16]
  assign decode_clock = clock;
  assign decode_reset = reset;
  assign decode_io_in_bits_inst = fetch_io_out_bits_inst; // @[Core.scala 53:16]
  assign decode_io_out_ready = execute_io_in_ready; // @[Core.scala 63:17]
  assign regfile_clock = clock;
  assign regfile_reset = reset;
  assign regfile_io_raddr1 = decode_io_raddr1; // @[Core.scala 59:21]
  assign regfile_io_raddr2 = decode_io_raddr2; // @[Core.scala 60:21]
  assign regfile_io_wen = mem_io_wen_o; // @[Core.scala 73:18]
  assign regfile_io_waddr = mem_io_waddr_o; // @[Core.scala 72:20]
  assign regfile_io_wdata = mem_io_wdata_o; // @[Core.scala 74:20]
  assign execute_clock = clock;
  assign execute_reset = reset;
  assign execute_io_in_bits_alu_code = decode_io_out_bits_alu_code; // @[Core.scala 63:17]
  assign execute_io_in_bits_w_type = decode_io_out_bits_w_type; // @[Core.scala 63:17]
  assign execute_io_in_bits_rd_addr = decode_io_out_bits_rd_addr; // @[Core.scala 63:17]
  assign execute_io_in_bits_rd_en = decode_io_out_bits_rd_en; // @[Core.scala 63:17]
  assign execute_io_ex_rs1_i = execute_io_ex_rs1_i_REG; // @[Core.scala 64:23]
  assign execute_io_ex_rs2_i = execute_io_ex_rs2_i_REG; // @[Core.scala 65:23]
  assign mem_clock = clock;
  assign mem_reset = reset;
  assign mem_io_in_bits_rd_addr = execute_io_out_bits_rd_addr; // @[Core.scala 69:13]
  assign mem_io_in_bits_rd_en = execute_io_out_bits_rd_en; // @[Core.scala 69:13]
  assign mem_io_mem_data_i = execute_io_ex_data_o; // @[Core.scala 70:21]
  always @(posedge clock) begin
    execute_io_ex_rs1_i_REG <= regfile_io_rdata1; // @[Core.scala 64:33]
    execute_io_ex_rs2_i_REG <= regfile_io_rdata2; // @[Core.scala 65:33]
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
  execute_io_ex_rs1_i_REG = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  execute_io_ex_rs2_i_REG = _RAND_1[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
