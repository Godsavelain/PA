module InstFetch(
  input         clock,
  input         reset,
  input         io_imem_req_ready,
  output        io_imem_req_valid,
  output [31:0] io_imem_req_bits_araddr,
  output        io_imem_req_bits_arvalid,
  output        io_imem_req_bits_rready,
  output        io_imem_resp_ready,
  input         io_imem_resp_valid,
  input  [31:0] io_imem_resp_bits_rdata,
  input         io_imem_resp_bits_rvalid,
  input  [31:0] io_imem_resp_bits_old_pc,
  input         io_out_ready,
  output        io_out_valid,
  output [31:0] io_out_bits_pc,
  output [31:0] io_out_bits_inst,
  output        io_out_bits_inst_valid
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] pc; // @[InstFetch.scala 45:19]
  wire [29:0] pc_base_hi = pc[31:2]; // @[InstFetch.scala 47:23]
  wire [31:0] pc_base = {pc_base_hi,2'h0}; // @[Cat.scala 30:58]
  wire [31:0] npc = pc_base + 32'h4; // @[InstFetch.scala 48:23]
  wire  stall = ~io_imem_resp_bits_rvalid | ~io_out_ready; // @[InstFetch.scala 50:34]
  assign io_imem_req_valid = io_out_ready; // @[InstFetch.scala 64:18]
  assign io_imem_req_bits_araddr = {pc_base_hi,2'h0}; // @[Cat.scala 30:58]
  assign io_imem_req_bits_arvalid = 1'h1; // @[InstFetch.scala 61:20]
  assign io_imem_req_bits_rready = 1'h1; // @[InstFetch.scala 62:19]
  assign io_imem_resp_ready = 1'h1; // @[InstFetch.scala 65:18]
  assign io_out_valid = 1'h1; // @[InstFetch.scala 66:18]
  assign io_out_bits_pc = io_imem_resp_bits_old_pc; // @[InstFetch.scala 56:18]
  assign io_out_bits_inst = io_imem_resp_bits_rdata; // @[InstFetch.scala 57:20]
  assign io_out_bits_inst_valid = io_imem_resp_bits_rvalid; // @[InstFetch.scala 58:26]
  always @(posedge clock) begin
    if (reset) begin // @[InstFetch.scala 45:19]
      pc <= 32'h80000000; // @[InstFetch.scala 45:19]
    end else if (~stall) begin // @[InstFetch.scala 52:15]
      pc <= npc; // @[InstFetch.scala 53:8]
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
