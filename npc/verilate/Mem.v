module Mem(
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
  input  [63:0] io_mem_data_i,
  input         io_mem_flush_i,
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
  wire  _T = io_in_ready & io_in_valid; // @[Decoupled.scala 40:37]
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
    end else if (_T) begin // @[Mem.scala 22:21]
      waddr <= io_in_bits_rd_addr; // @[Mem.scala 24:11]
    end
    if (reset) begin // @[Mem.scala 20:22]
      wen <= 1'h0; // @[Mem.scala 20:22]
    end else if (_T) begin // @[Mem.scala 22:21]
      if (io_mem_flush_i) begin // @[Mem.scala 23:28]
        wen <= 1'h0;
      end else begin
        wen <= io_in_bits_rd_en;
      end
    end
    if (reset) begin // @[Mem.scala 21:22]
      wdata <= 64'h0; // @[Mem.scala 21:22]
    end else if (_T) begin // @[Mem.scala 22:21]
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
