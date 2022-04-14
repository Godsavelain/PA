module InstFetch(
  input         clock,
  input         reset,
  output [31:0] io_imem_req_bits_araddr,
  input         io_imem_resp_bits_rvalid,
  input         io_out_ready,
  output        io_out_valid
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
  output  io_in_ready,
  input   io_out_ready,
  output  io_out_valid
);
  wire  _stall_T = io_out_ready & io_out_valid; // @[Decoupled.scala 40:37]
  wire  stall = ~_stall_T; // @[Decode.scala 144:15]
  assign io_in_ready = ~stall; // @[Decode.scala 145:18]
  assign io_out_valid = 1'h1; // @[Decode.scala 146:16]
endmodule
module Execute(
  output  io_in_ready,
  output  io_out_valid
);
  wire  stall = ~io_out_valid; // @[Execute.scala 16:15]
  assign io_in_ready = ~stall; // @[Execute.scala 17:18]
  assign io_out_valid = 1'h1; // @[Execute.scala 18:16]
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
  input         io_dmem_write_ok
);
  wire  fetch_clock; // @[Core.scala 28:21]
  wire  fetch_reset; // @[Core.scala 28:21]
  wire [31:0] fetch_io_imem_req_bits_araddr; // @[Core.scala 28:21]
  wire  fetch_io_imem_resp_bits_rvalid; // @[Core.scala 28:21]
  wire  fetch_io_out_ready; // @[Core.scala 28:21]
  wire  fetch_io_out_valid; // @[Core.scala 28:21]
  wire  decode_io_in_ready; // @[Core.scala 50:22]
  wire  decode_io_out_ready; // @[Core.scala 50:22]
  wire  decode_io_out_valid; // @[Core.scala 50:22]
  wire  execute_io_in_ready; // @[Core.scala 61:23]
  wire  execute_io_out_valid; // @[Core.scala 61:23]
  InstFetch fetch ( // @[Core.scala 28:21]
    .clock(fetch_clock),
    .reset(fetch_reset),
    .io_imem_req_bits_araddr(fetch_io_imem_req_bits_araddr),
    .io_imem_resp_bits_rvalid(fetch_io_imem_resp_bits_rvalid),
    .io_out_ready(fetch_io_out_ready),
    .io_out_valid(fetch_io_out_valid)
  );
  Decode decode ( // @[Core.scala 50:22]
    .io_in_ready(decode_io_in_ready),
    .io_out_ready(decode_io_out_ready),
    .io_out_valid(decode_io_out_valid)
  );
  Execute execute ( // @[Core.scala 61:23]
    .io_in_ready(execute_io_in_ready),
    .io_out_valid(execute_io_out_valid)
  );
  assign io_imem_raddr = fetch_io_imem_req_bits_araddr; // @[Core.scala 34:17]
  assign io_imem_waddr = 32'h0; // @[Core.scala 36:17]
  assign io_imem_wdata = 64'h0; // @[Core.scala 37:17]
  assign io_imem_ren = 1'h1; // @[Core.scala 35:15]
  assign io_imem_wen = 1'h0; // @[Core.scala 38:15]
  assign io_imem_wmask = 8'h0; // @[Core.scala 39:17]
  assign io_dmem_raddr = 32'h0; // @[Core.scala 41:17]
  assign io_dmem_waddr = 32'h0; // @[Core.scala 43:17]
  assign io_dmem_wdata = 64'h0; // @[Core.scala 44:17]
  assign io_dmem_ren = 1'h0; // @[Core.scala 42:15]
  assign io_dmem_wen = 1'h0; // @[Core.scala 45:15]
  assign io_dmem_wmask = 8'h0; // @[Core.scala 46:17]
  assign fetch_clock = clock;
  assign fetch_reset = reset;
  assign fetch_io_imem_resp_bits_rvalid = io_imem_read_ok; // @[Core.scala 33:34]
  assign fetch_io_out_ready = decode_io_in_ready; // @[Core.scala 52:16]
  assign decode_io_out_ready = execute_io_in_ready; // @[Core.scala 62:17]
endmodule
