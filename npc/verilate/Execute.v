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
  input         io_in_valid,
  input         io_in_bits_valid,
  input  [31:0] io_in_bits_pc,
  input  [31:0] io_in_bits_inst,
  input  [2:0]  io_in_bits_fu_code,
  input  [3:0]  io_in_bits_alu_code,
  input  [3:0]  io_in_bits_jmp_code,
  input  [1:0]  io_in_bits_mem_code,
  input  [1:0]  io_in_bits_mem_size,
  input  [2:0]  io_in_bits_csr_code,
  input         io_in_bits_w_type,
  input  [2:0]  io_in_bits_rs1_src,
  input  [2:0]  io_in_bits_rs2_src,
  input  [4:0]  io_in_bits_rs1_addr,
  input  [4:0]  io_in_bits_rs2_addr,
  input  [4:0]  io_in_bits_rd_addr,
  input         io_in_bits_rd_en,
  input  [31:0] io_in_bits_imm,
  input         io_out_ready,
  output        io_out_valid,
  output        io_out_bits_valid,
  output [31:0] io_out_bits_pc,
  output [31:0] io_out_bits_inst,
  output [2:0]  io_out_bits_fu_code,
  output [3:0]  io_out_bits_alu_code,
  output [3:0]  io_out_bits_jmp_code,
  output [1:0]  io_out_bits_mem_code,
  output [1:0]  io_out_bits_mem_size,
  output [2:0]  io_out_bits_csr_code,
  output        io_out_bits_w_type,
  output [2:0]  io_out_bits_rs1_src,
  output [2:0]  io_out_bits_rs2_src,
  output [4:0]  io_out_bits_rs1_addr,
  output [4:0]  io_out_bits_rs2_addr,
  output [4:0]  io_out_bits_rd_addr,
  output        io_out_bits_rd_en,
  output [31:0] io_out_bits_imm,
  input  [63:0] io_ex_rs1_i,
  input  [63:0] io_ex_rs2_i,
  output [63:0] io_ex_data_o,
  input         io_ex_flush
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
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [63:0] _RAND_17;
  reg [63:0] _RAND_18;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] alu_io_in1; // @[Execute.scala 29:19]
  wire [63:0] alu_io_in2; // @[Execute.scala 29:19]
  wire [3:0] alu_io_aluop_i; // @[Execute.scala 29:19]
  wire  alu_io_wtype_i; // @[Execute.scala 29:19]
  wire [63:0] alu_io_alu_out; // @[Execute.scala 29:19]
  wire  _stall_T = io_out_ready & io_out_valid; // @[Decoupled.scala 40:37]
  wire  stall = ~_stall_T; // @[Execute.scala 16:15]
  reg  ex_reg_decodeop_valid; // @[Execute.scala 19:32]
  reg [31:0] ex_reg_decodeop_pc; // @[Execute.scala 19:32]
  reg [31:0] ex_reg_decodeop_inst; // @[Execute.scala 19:32]
  reg [2:0] ex_reg_decodeop_fu_code; // @[Execute.scala 19:32]
  reg [3:0] ex_reg_decodeop_alu_code; // @[Execute.scala 19:32]
  reg [3:0] ex_reg_decodeop_jmp_code; // @[Execute.scala 19:32]
  reg [1:0] ex_reg_decodeop_mem_code; // @[Execute.scala 19:32]
  reg [1:0] ex_reg_decodeop_mem_size; // @[Execute.scala 19:32]
  reg [2:0] ex_reg_decodeop_csr_code; // @[Execute.scala 19:32]
  reg  ex_reg_decodeop_w_type; // @[Execute.scala 19:32]
  reg [2:0] ex_reg_decodeop_rs1_src; // @[Execute.scala 19:32]
  reg [2:0] ex_reg_decodeop_rs2_src; // @[Execute.scala 19:32]
  reg [4:0] ex_reg_decodeop_rs1_addr; // @[Execute.scala 19:32]
  reg [4:0] ex_reg_decodeop_rs2_addr; // @[Execute.scala 19:32]
  reg [4:0] ex_reg_decodeop_rd_addr; // @[Execute.scala 19:32]
  reg  ex_reg_decodeop_rd_en; // @[Execute.scala 19:32]
  reg [31:0] ex_reg_decodeop_imm; // @[Execute.scala 19:32]
  reg [63:0] rs1; // @[Execute.scala 20:20]
  reg [63:0] rs2; // @[Execute.scala 21:20]
  wire  _T = io_in_ready & io_in_valid; // @[Decoupled.scala 40:37]
  Alu alu ( // @[Execute.scala 29:19]
    .io_in1(alu_io_in1),
    .io_in2(alu_io_in2),
    .io_aluop_i(alu_io_aluop_i),
    .io_wtype_i(alu_io_wtype_i),
    .io_alu_out(alu_io_alu_out)
  );
  assign io_in_ready = ~stall; // @[Execute.scala 17:18]
  assign io_out_valid = 1'h1; // @[Execute.scala 18:16]
  assign io_out_bits_valid = ex_reg_decodeop_valid; // @[Execute.scala 36:15]
  assign io_out_bits_pc = ex_reg_decodeop_pc; // @[Execute.scala 36:15]
  assign io_out_bits_inst = ex_reg_decodeop_inst; // @[Execute.scala 36:15]
  assign io_out_bits_fu_code = ex_reg_decodeop_fu_code; // @[Execute.scala 36:15]
  assign io_out_bits_alu_code = ex_reg_decodeop_alu_code; // @[Execute.scala 36:15]
  assign io_out_bits_jmp_code = ex_reg_decodeop_jmp_code; // @[Execute.scala 36:15]
  assign io_out_bits_mem_code = ex_reg_decodeop_mem_code; // @[Execute.scala 36:15]
  assign io_out_bits_mem_size = ex_reg_decodeop_mem_size; // @[Execute.scala 36:15]
  assign io_out_bits_csr_code = ex_reg_decodeop_csr_code; // @[Execute.scala 36:15]
  assign io_out_bits_w_type = ex_reg_decodeop_w_type; // @[Execute.scala 36:15]
  assign io_out_bits_rs1_src = ex_reg_decodeop_rs1_src; // @[Execute.scala 36:15]
  assign io_out_bits_rs2_src = ex_reg_decodeop_rs2_src; // @[Execute.scala 36:15]
  assign io_out_bits_rs1_addr = ex_reg_decodeop_rs1_addr; // @[Execute.scala 36:15]
  assign io_out_bits_rs2_addr = ex_reg_decodeop_rs2_addr; // @[Execute.scala 36:15]
  assign io_out_bits_rd_addr = ex_reg_decodeop_rd_addr; // @[Execute.scala 36:15]
  assign io_out_bits_rd_en = ex_reg_decodeop_rd_en; // @[Execute.scala 36:15]
  assign io_out_bits_imm = ex_reg_decodeop_imm; // @[Execute.scala 36:15]
  assign io_ex_data_o = alu_io_alu_out; // @[Execute.scala 34:16]
  assign alu_io_in1 = rs1; // @[Execute.scala 30:14]
  assign alu_io_in2 = rs2; // @[Execute.scala 31:14]
  assign alu_io_aluop_i = ex_reg_decodeop_alu_code; // @[Execute.scala 32:18]
  assign alu_io_wtype_i = ex_reg_decodeop_w_type; // @[Execute.scala 33:18]
  always @(posedge clock) begin
    if (reset) begin // @[Execute.scala 19:32]
      ex_reg_decodeop_valid <= 1'h0; // @[Execute.scala 19:32]
    end else if (_T) begin // @[Execute.scala 23:21]
      if (io_ex_flush) begin // @[Execute.scala 24:27]
        ex_reg_decodeop_valid <= 1'h0;
      end else begin
        ex_reg_decodeop_valid <= io_in_bits_valid;
      end
    end
    if (reset) begin // @[Execute.scala 19:32]
      ex_reg_decodeop_pc <= 32'h0; // @[Execute.scala 19:32]
    end else if (_T) begin // @[Execute.scala 23:21]
      if (io_ex_flush) begin // @[Execute.scala 24:27]
        ex_reg_decodeop_pc <= 32'h0;
      end else begin
        ex_reg_decodeop_pc <= io_in_bits_pc;
      end
    end
    if (reset) begin // @[Execute.scala 19:32]
      ex_reg_decodeop_inst <= 32'h0; // @[Execute.scala 19:32]
    end else if (_T) begin // @[Execute.scala 23:21]
      if (io_ex_flush) begin // @[Execute.scala 24:27]
        ex_reg_decodeop_inst <= 32'h0;
      end else begin
        ex_reg_decodeop_inst <= io_in_bits_inst;
      end
    end
    if (reset) begin // @[Execute.scala 19:32]
      ex_reg_decodeop_fu_code <= 3'h0; // @[Execute.scala 19:32]
    end else if (_T) begin // @[Execute.scala 23:21]
      if (io_ex_flush) begin // @[Execute.scala 24:27]
        ex_reg_decodeop_fu_code <= 3'h0;
      end else begin
        ex_reg_decodeop_fu_code <= io_in_bits_fu_code;
      end
    end
    if (reset) begin // @[Execute.scala 19:32]
      ex_reg_decodeop_alu_code <= 4'h0; // @[Execute.scala 19:32]
    end else if (_T) begin // @[Execute.scala 23:21]
      if (io_ex_flush) begin // @[Execute.scala 24:27]
        ex_reg_decodeop_alu_code <= 4'h0;
      end else begin
        ex_reg_decodeop_alu_code <= io_in_bits_alu_code;
      end
    end
    if (reset) begin // @[Execute.scala 19:32]
      ex_reg_decodeop_jmp_code <= 4'h0; // @[Execute.scala 19:32]
    end else if (_T) begin // @[Execute.scala 23:21]
      if (io_ex_flush) begin // @[Execute.scala 24:27]
        ex_reg_decodeop_jmp_code <= 4'h0;
      end else begin
        ex_reg_decodeop_jmp_code <= io_in_bits_jmp_code;
      end
    end
    if (reset) begin // @[Execute.scala 19:32]
      ex_reg_decodeop_mem_code <= 2'h0; // @[Execute.scala 19:32]
    end else if (_T) begin // @[Execute.scala 23:21]
      if (io_ex_flush) begin // @[Execute.scala 24:27]
        ex_reg_decodeop_mem_code <= 2'h0;
      end else begin
        ex_reg_decodeop_mem_code <= io_in_bits_mem_code;
      end
    end
    if (reset) begin // @[Execute.scala 19:32]
      ex_reg_decodeop_mem_size <= 2'h0; // @[Execute.scala 19:32]
    end else if (_T) begin // @[Execute.scala 23:21]
      if (io_ex_flush) begin // @[Execute.scala 24:27]
        ex_reg_decodeop_mem_size <= 2'h0;
      end else begin
        ex_reg_decodeop_mem_size <= io_in_bits_mem_size;
      end
    end
    if (reset) begin // @[Execute.scala 19:32]
      ex_reg_decodeop_csr_code <= 3'h0; // @[Execute.scala 19:32]
    end else if (_T) begin // @[Execute.scala 23:21]
      if (io_ex_flush) begin // @[Execute.scala 24:27]
        ex_reg_decodeop_csr_code <= 3'h0;
      end else begin
        ex_reg_decodeop_csr_code <= io_in_bits_csr_code;
      end
    end
    if (reset) begin // @[Execute.scala 19:32]
      ex_reg_decodeop_w_type <= 1'h0; // @[Execute.scala 19:32]
    end else if (_T) begin // @[Execute.scala 23:21]
      if (io_ex_flush) begin // @[Execute.scala 24:27]
        ex_reg_decodeop_w_type <= 1'h0;
      end else begin
        ex_reg_decodeop_w_type <= io_in_bits_w_type;
      end
    end
    if (reset) begin // @[Execute.scala 19:32]
      ex_reg_decodeop_rs1_src <= 3'h0; // @[Execute.scala 19:32]
    end else if (_T) begin // @[Execute.scala 23:21]
      if (io_ex_flush) begin // @[Execute.scala 24:27]
        ex_reg_decodeop_rs1_src <= 3'h0;
      end else begin
        ex_reg_decodeop_rs1_src <= io_in_bits_rs1_src;
      end
    end
    if (reset) begin // @[Execute.scala 19:32]
      ex_reg_decodeop_rs2_src <= 3'h0; // @[Execute.scala 19:32]
    end else if (_T) begin // @[Execute.scala 23:21]
      if (io_ex_flush) begin // @[Execute.scala 24:27]
        ex_reg_decodeop_rs2_src <= 3'h0;
      end else begin
        ex_reg_decodeop_rs2_src <= io_in_bits_rs2_src;
      end
    end
    if (reset) begin // @[Execute.scala 19:32]
      ex_reg_decodeop_rs1_addr <= 5'h0; // @[Execute.scala 19:32]
    end else if (_T) begin // @[Execute.scala 23:21]
      if (io_ex_flush) begin // @[Execute.scala 24:27]
        ex_reg_decodeop_rs1_addr <= 5'h0;
      end else begin
        ex_reg_decodeop_rs1_addr <= io_in_bits_rs1_addr;
      end
    end
    if (reset) begin // @[Execute.scala 19:32]
      ex_reg_decodeop_rs2_addr <= 5'h0; // @[Execute.scala 19:32]
    end else if (_T) begin // @[Execute.scala 23:21]
      if (io_ex_flush) begin // @[Execute.scala 24:27]
        ex_reg_decodeop_rs2_addr <= 5'h0;
      end else begin
        ex_reg_decodeop_rs2_addr <= io_in_bits_rs2_addr;
      end
    end
    if (reset) begin // @[Execute.scala 19:32]
      ex_reg_decodeop_rd_addr <= 5'h0; // @[Execute.scala 19:32]
    end else if (_T) begin // @[Execute.scala 23:21]
      if (io_ex_flush) begin // @[Execute.scala 24:27]
        ex_reg_decodeop_rd_addr <= 5'h0;
      end else begin
        ex_reg_decodeop_rd_addr <= io_in_bits_rd_addr;
      end
    end
    if (reset) begin // @[Execute.scala 19:32]
      ex_reg_decodeop_rd_en <= 1'h0; // @[Execute.scala 19:32]
    end else if (_T) begin // @[Execute.scala 23:21]
      if (io_ex_flush) begin // @[Execute.scala 24:27]
        ex_reg_decodeop_rd_en <= 1'h0;
      end else begin
        ex_reg_decodeop_rd_en <= io_in_bits_rd_en;
      end
    end
    if (reset) begin // @[Execute.scala 19:32]
      ex_reg_decodeop_imm <= 32'h0; // @[Execute.scala 19:32]
    end else if (_T) begin // @[Execute.scala 23:21]
      if (io_ex_flush) begin // @[Execute.scala 24:27]
        ex_reg_decodeop_imm <= 32'h0;
      end else begin
        ex_reg_decodeop_imm <= io_in_bits_imm;
      end
    end
    if (reset) begin // @[Execute.scala 20:20]
      rs1 <= 64'h0; // @[Execute.scala 20:20]
    end else if (_T) begin // @[Execute.scala 23:21]
      if (io_ex_flush) begin // @[Execute.scala 25:15]
        rs1 <= 64'h0;
      end else begin
        rs1 <= io_ex_rs1_i;
      end
    end
    if (reset) begin // @[Execute.scala 21:20]
      rs2 <= 64'h0; // @[Execute.scala 21:20]
    end else if (_T) begin // @[Execute.scala 23:21]
      if (io_ex_flush) begin // @[Execute.scala 26:15]
        rs2 <= 64'h0;
      end else begin
        rs2 <= io_ex_rs2_i;
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
  ex_reg_decodeop_valid = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  ex_reg_decodeop_pc = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  ex_reg_decodeop_inst = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  ex_reg_decodeop_fu_code = _RAND_3[2:0];
  _RAND_4 = {1{`RANDOM}};
  ex_reg_decodeop_alu_code = _RAND_4[3:0];
  _RAND_5 = {1{`RANDOM}};
  ex_reg_decodeop_jmp_code = _RAND_5[3:0];
  _RAND_6 = {1{`RANDOM}};
  ex_reg_decodeop_mem_code = _RAND_6[1:0];
  _RAND_7 = {1{`RANDOM}};
  ex_reg_decodeop_mem_size = _RAND_7[1:0];
  _RAND_8 = {1{`RANDOM}};
  ex_reg_decodeop_csr_code = _RAND_8[2:0];
  _RAND_9 = {1{`RANDOM}};
  ex_reg_decodeop_w_type = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  ex_reg_decodeop_rs1_src = _RAND_10[2:0];
  _RAND_11 = {1{`RANDOM}};
  ex_reg_decodeop_rs2_src = _RAND_11[2:0];
  _RAND_12 = {1{`RANDOM}};
  ex_reg_decodeop_rs1_addr = _RAND_12[4:0];
  _RAND_13 = {1{`RANDOM}};
  ex_reg_decodeop_rs2_addr = _RAND_13[4:0];
  _RAND_14 = {1{`RANDOM}};
  ex_reg_decodeop_rd_addr = _RAND_14[4:0];
  _RAND_15 = {1{`RANDOM}};
  ex_reg_decodeop_rd_en = _RAND_15[0:0];
  _RAND_16 = {1{`RANDOM}};
  ex_reg_decodeop_imm = _RAND_16[31:0];
  _RAND_17 = {2{`RANDOM}};
  rs1 = _RAND_17[63:0];
  _RAND_18 = {2{`RANDOM}};
  rs2 = _RAND_18[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
