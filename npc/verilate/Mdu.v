module Booth(
  input  [64:0]  io_x,
  input  [2:0]   io_y,
  output [127:0] io_z,
  output [1:0]   io_c
);
  wire [64:0] x_neg = ~io_x; // @[Mdu.scala 16:15]
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
  wire [127:0] _io_s_T = io_x ^ io_y; // @[Mdu.scala 48:18]
  wire [127:0] _io_c_T = io_x & io_y; // @[Mdu.scala 49:24]
  wire [127:0] _io_c_T_1 = io_y & io_z; // @[Mdu.scala 49:40]
  wire [127:0] _io_c_T_2 = _io_c_T | _io_c_T_1; // @[Mdu.scala 49:32]
  wire [127:0] _io_c_T_3 = io_z & io_x; // @[Mdu.scala 49:56]
  wire [127:0] _io_c_T_4 = _io_c_T_2 | _io_c_T_3; // @[Mdu.scala 49:48]
  wire [126:0] io_c_hi = _io_c_T_4[126:0]; // @[Mdu.scala 49:64]
  assign io_s = _io_s_T ^ io_z; // @[Mdu.scala 48:25]
  assign io_c = {io_c_hi,1'h0}; // @[Cat.scala 30:58]
endmodule
module Mul(
  input          clock,
  input          reset,
  input  [64:0]  io_in1,
  input  [64:0]  io_in2,
  output [127:0] io_out,
  input          io_mul_valid
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
  wire [64:0] booth_0_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_0_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_0_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_0_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_1_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_1_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_1_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_1_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_2_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_2_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_2_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_2_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_3_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_3_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_3_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_3_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_4_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_4_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_4_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_4_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_5_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_5_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_5_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_5_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_6_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_6_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_6_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_6_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_7_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_7_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_7_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_7_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_8_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_8_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_8_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_8_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_9_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_9_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_9_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_9_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_10_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_10_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_10_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_10_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_11_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_11_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_11_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_11_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_12_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_12_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_12_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_12_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_13_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_13_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_13_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_13_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_14_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_14_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_14_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_14_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_15_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_15_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_15_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_15_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_16_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_16_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_16_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_16_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_17_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_17_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_17_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_17_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_18_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_18_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_18_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_18_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_19_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_19_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_19_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_19_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_20_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_20_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_20_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_20_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_21_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_21_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_21_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_21_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_22_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_22_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_22_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_22_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_23_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_23_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_23_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_23_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_24_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_24_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_24_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_24_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_25_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_25_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_25_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_25_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_26_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_26_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_26_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_26_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_27_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_27_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_27_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_27_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_28_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_28_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_28_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_28_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_29_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_29_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_29_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_29_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_30_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_30_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_30_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_30_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_31_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_31_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_31_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_31_io_c; // @[Mdu.scala 91:23]
  wire [64:0] booth_32_io_x; // @[Mdu.scala 91:23]
  wire [2:0] booth_32_io_y; // @[Mdu.scala 91:23]
  wire [127:0] booth_32_io_z; // @[Mdu.scala 91:23]
  wire [1:0] booth_32_io_c; // @[Mdu.scala 91:23]
  wire [127:0] csa_0_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_0_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_0_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_0_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_0_io_c; // @[Mdu.scala 107:21]
  wire [127:0] csa_1_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_1_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_1_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_1_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_1_io_c; // @[Mdu.scala 107:21]
  wire [127:0] csa_2_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_2_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_2_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_2_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_2_io_c; // @[Mdu.scala 107:21]
  wire [127:0] csa_3_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_3_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_3_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_3_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_3_io_c; // @[Mdu.scala 107:21]
  wire [127:0] csa_4_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_4_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_4_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_4_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_4_io_c; // @[Mdu.scala 107:21]
  wire [127:0] csa_5_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_5_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_5_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_5_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_5_io_c; // @[Mdu.scala 107:21]
  wire [127:0] csa_6_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_6_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_6_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_6_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_6_io_c; // @[Mdu.scala 107:21]
  wire [127:0] csa_7_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_7_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_7_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_7_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_7_io_c; // @[Mdu.scala 107:21]
  wire [127:0] csa_8_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_8_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_8_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_8_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_8_io_c; // @[Mdu.scala 107:21]
  wire [127:0] csa_9_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_9_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_9_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_9_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_9_io_c; // @[Mdu.scala 107:21]
  wire [127:0] csa_10_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_10_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_10_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_10_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_10_io_c; // @[Mdu.scala 107:21]
  wire [127:0] csa_11_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_11_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_11_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_11_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_11_io_c; // @[Mdu.scala 107:21]
  wire [127:0] csa_12_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_12_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_12_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_12_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_12_io_c; // @[Mdu.scala 107:21]
  wire [127:0] csa_13_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_13_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_13_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_13_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_13_io_c; // @[Mdu.scala 107:21]
  wire [127:0] csa_14_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_14_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_14_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_14_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_14_io_c; // @[Mdu.scala 107:21]
  wire [127:0] csa_15_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_15_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_15_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_15_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_15_io_c; // @[Mdu.scala 107:21]
  wire [127:0] csa_16_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_16_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_16_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_16_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_16_io_c; // @[Mdu.scala 107:21]
  wire [127:0] csa_17_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_17_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_17_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_17_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_17_io_c; // @[Mdu.scala 107:21]
  wire [127:0] csa_18_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_18_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_18_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_18_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_18_io_c; // @[Mdu.scala 107:21]
  wire [127:0] csa_19_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_19_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_19_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_19_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_19_io_c; // @[Mdu.scala 107:21]
  wire [127:0] csa_20_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_20_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_20_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_20_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_20_io_c; // @[Mdu.scala 107:21]
  wire [127:0] csa_21_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_21_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_21_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_21_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_21_io_c; // @[Mdu.scala 107:21]
  wire [127:0] csa_22_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_22_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_22_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_22_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_22_io_c; // @[Mdu.scala 107:21]
  wire [127:0] csa_23_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_23_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_23_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_23_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_23_io_c; // @[Mdu.scala 107:21]
  wire [127:0] csa_24_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_24_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_24_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_24_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_24_io_c; // @[Mdu.scala 107:21]
  wire [127:0] csa_25_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_25_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_25_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_25_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_25_io_c; // @[Mdu.scala 107:21]
  wire [127:0] csa_26_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_26_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_26_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_26_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_26_io_c; // @[Mdu.scala 107:21]
  wire [127:0] csa_27_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_27_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_27_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_27_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_27_io_c; // @[Mdu.scala 107:21]
  wire [127:0] csa_28_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_28_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_28_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_28_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_28_io_c; // @[Mdu.scala 107:21]
  wire [127:0] csa_29_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_29_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_29_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_29_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_29_io_c; // @[Mdu.scala 107:21]
  wire [127:0] csa_30_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_30_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_30_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_30_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_30_io_c; // @[Mdu.scala 107:21]
  wire [127:0] csa_31_io_x; // @[Mdu.scala 107:21]
  wire [127:0] csa_31_io_y; // @[Mdu.scala 107:21]
  wire [127:0] csa_31_io_z; // @[Mdu.scala 107:21]
  wire [127:0] csa_31_io_s; // @[Mdu.scala 107:21]
  wire [127:0] csa_31_io_c; // @[Mdu.scala 107:21]
  reg [1:0] state; // @[Mdu.scala 62:22]
  reg [64:0] reg_in1; // @[Mdu.scala 63:24]
  reg [66:0] reg_in2; // @[Mdu.scala 64:24]
  reg [127:0] pp_0; // @[Mdu.scala 69:21]
  reg [127:0] pp_1; // @[Mdu.scala 69:21]
  reg [127:0] pp_2; // @[Mdu.scala 69:21]
  reg [127:0] pp_3; // @[Mdu.scala 69:21]
  reg [127:0] pp_4; // @[Mdu.scala 69:21]
  reg [127:0] pp_5; // @[Mdu.scala 69:21]
  reg [127:0] pp_6; // @[Mdu.scala 69:21]
  reg [127:0] pp_7; // @[Mdu.scala 69:21]
  reg [127:0] pp_8; // @[Mdu.scala 69:21]
  reg [127:0] pp_9; // @[Mdu.scala 69:21]
  reg [127:0] pp_10; // @[Mdu.scala 69:21]
  reg [127:0] pp_11; // @[Mdu.scala 69:21]
  reg [127:0] pp_12; // @[Mdu.scala 69:21]
  reg [127:0] pp_13; // @[Mdu.scala 69:21]
  reg [127:0] pp_14; // @[Mdu.scala 69:21]
  reg [127:0] pp_15; // @[Mdu.scala 69:21]
  reg [127:0] pp_16; // @[Mdu.scala 69:21]
  reg [127:0] pp_17; // @[Mdu.scala 69:21]
  reg [127:0] pp_18; // @[Mdu.scala 69:21]
  reg [127:0] pp_19; // @[Mdu.scala 69:21]
  reg [127:0] pp_20; // @[Mdu.scala 69:21]
  reg [127:0] pp_21; // @[Mdu.scala 69:21]
  reg [127:0] pp_22; // @[Mdu.scala 69:21]
  reg [127:0] pp_23; // @[Mdu.scala 69:21]
  reg [127:0] pp_24; // @[Mdu.scala 69:21]
  reg [127:0] pp_25; // @[Mdu.scala 69:21]
  reg [127:0] pp_26; // @[Mdu.scala 69:21]
  reg [127:0] pp_27; // @[Mdu.scala 69:21]
  reg [127:0] pp_28; // @[Mdu.scala 69:21]
  reg [127:0] pp_29; // @[Mdu.scala 69:21]
  reg [127:0] pp_30; // @[Mdu.scala 69:21]
  reg [127:0] pp_31; // @[Mdu.scala 69:21]
  reg [127:0] pp_32; // @[Mdu.scala 69:21]
  reg [127:0] pp_l2_0; // @[Mdu.scala 86:24]
  reg [127:0] pp_l2_1; // @[Mdu.scala 86:24]
  reg [127:0] pp_l2_2; // @[Mdu.scala 86:24]
  reg [127:0] pp_l2_3; // @[Mdu.scala 86:24]
  reg [127:0] pp_l2_4; // @[Mdu.scala 86:24]
  reg [127:0] pp_l2_5; // @[Mdu.scala 86:24]
  reg [127:0] pp_l2_6; // @[Mdu.scala 86:24]
  reg [127:0] pp_l2_7; // @[Mdu.scala 86:24]
  wire  c_1 = booth_0_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_0 = booth_0_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_3 = booth_1_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_2 = booth_1_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_5 = booth_2_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_4 = booth_2_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_7 = booth_3_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_6 = booth_3_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_9 = booth_4_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_8 = booth_4_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_11 = booth_5_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_10 = booth_5_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_13 = booth_6_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_12 = booth_6_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_15 = booth_7_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_14 = booth_7_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_17 = booth_8_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_16 = booth_8_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_19 = booth_9_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_18 = booth_9_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_21 = booth_10_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_20 = booth_10_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_23 = booth_11_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_22 = booth_11_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_25 = booth_12_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_24 = booth_12_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_27 = booth_13_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_26 = booth_13_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_29 = booth_14_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_28 = booth_14_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_31 = booth_15_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_30 = booth_15_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_33 = booth_16_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_32 = booth_16_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_35 = booth_17_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_34 = booth_17_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_37 = booth_18_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_36 = booth_18_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_39 = booth_19_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_38 = booth_19_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_41 = booth_20_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_40 = booth_20_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_43 = booth_21_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_42 = booth_21_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_45 = booth_22_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_44 = booth_22_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_47 = booth_23_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_46 = booth_23_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_49 = booth_24_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_48 = booth_24_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_51 = booth_25_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_50 = booth_25_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_53 = booth_26_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_52 = booth_26_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_55 = booth_27_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_54 = booth_27_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_57 = booth_28_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_56 = booth_28_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_59 = booth_29_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_58 = booth_29_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_61 = booth_30_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_60 = booth_30_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_63 = booth_31_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_62 = booth_31_io_c[0]; // @[Mdu.scala 99:30]
  wire  c_65 = booth_32_io_c[1]; // @[Mdu.scala 98:34]
  wire  c_64 = booth_32_io_c[0]; // @[Mdu.scala 99:30]
  reg [127:0] pp33; // @[Mdu.scala 103:21]
  reg [127:0] reg_out; // @[Mdu.scala 104:24]
  wire [125:0] csa_0_io_y_hi = pp_1[125:0]; // @[Mdu.scala 173:27]
  wire [123:0] csa_0_io_z_hi = pp_2[123:0]; // @[Mdu.scala 174:27]
  wire [121:0] csa_1_io_x_hi = pp_3[121:0]; // @[Mdu.scala 178:33]
  wire [119:0] csa_1_io_y_hi = pp_4[119:0]; // @[Mdu.scala 179:37]
  wire [117:0] csa_1_io_z_hi = pp_5[117:0]; // @[Mdu.scala 180:37]
  wire [115:0] csa_2_io_x_hi = pp_6[115:0]; // @[Mdu.scala 178:33]
  wire [113:0] csa_2_io_y_hi = pp_7[113:0]; // @[Mdu.scala 179:37]
  wire [111:0] csa_2_io_z_hi = pp_8[111:0]; // @[Mdu.scala 180:37]
  wire [109:0] csa_3_io_x_hi = pp_9[109:0]; // @[Mdu.scala 178:33]
  wire [107:0] csa_3_io_y_hi = pp_10[107:0]; // @[Mdu.scala 179:37]
  wire [105:0] csa_3_io_z_hi = pp_11[105:0]; // @[Mdu.scala 180:37]
  wire [103:0] csa_4_io_x_hi = pp_12[103:0]; // @[Mdu.scala 178:33]
  wire [101:0] csa_4_io_y_hi = pp_13[101:0]; // @[Mdu.scala 179:37]
  wire [99:0] csa_4_io_z_hi = pp_14[99:0]; // @[Mdu.scala 180:37]
  wire [97:0] csa_5_io_x_hi = pp_15[97:0]; // @[Mdu.scala 178:33]
  wire [95:0] csa_5_io_y_hi = pp_16[95:0]; // @[Mdu.scala 179:37]
  wire [93:0] csa_5_io_z_hi = pp_17[93:0]; // @[Mdu.scala 180:37]
  wire [91:0] csa_6_io_x_hi = pp_18[91:0]; // @[Mdu.scala 178:33]
  wire [89:0] csa_6_io_y_hi = pp_19[89:0]; // @[Mdu.scala 179:37]
  wire [87:0] csa_6_io_z_hi = pp_20[87:0]; // @[Mdu.scala 180:37]
  wire [85:0] csa_7_io_x_hi = pp_21[85:0]; // @[Mdu.scala 178:33]
  wire [83:0] csa_7_io_y_hi = pp_22[83:0]; // @[Mdu.scala 179:37]
  wire [81:0] csa_7_io_z_hi = pp_23[81:0]; // @[Mdu.scala 180:37]
  wire [79:0] csa_8_io_x_hi = pp_24[79:0]; // @[Mdu.scala 178:33]
  wire [77:0] csa_8_io_y_hi = pp_25[77:0]; // @[Mdu.scala 179:37]
  wire [75:0] csa_8_io_z_hi = pp_26[75:0]; // @[Mdu.scala 180:37]
  wire [73:0] csa_9_io_x_hi = pp_27[73:0]; // @[Mdu.scala 178:33]
  wire [71:0] csa_9_io_y_hi = pp_28[71:0]; // @[Mdu.scala 179:37]
  wire [69:0] csa_9_io_z_hi = pp_29[69:0]; // @[Mdu.scala 180:37]
  wire [67:0] csa_10_io_x_hi = pp_30[67:0]; // @[Mdu.scala 178:33]
  wire [65:0] csa_10_io_y_hi = pp_31[65:0]; // @[Mdu.scala 179:37]
  wire [63:0] csa_10_io_z_hi = pp_32[63:0]; // @[Mdu.scala 180:37]
  wire [127:0] s_l8 = csa_31_io_s; // @[Mdu.scala 167:18 Mdu.scala 309:8]
  wire [127:0] c_l8 = csa_31_io_c; // @[Mdu.scala 168:18 Mdu.scala 310:8]
  wire [127:0] temp_out = s_l8 + c_l8; // @[Mdu.scala 311:20]
  wire  _T = 2'h0 == state; // @[Conditional.scala 37:30]
  wire  reg_in2_hi_hi = io_in2[64]; // @[Mdu.scala 321:30]
  wire [66:0] _reg_in2_T = {reg_in2_hi_hi,io_in2,1'h0}; // @[Cat.scala 30:58]
  wire  _T_1 = 2'h1 == state; // @[Conditional.scala 37:30]
  wire [7:0] pp33_lo_lo_lo = {c_7,c_6,c_5,c_4,c_3,c_2,c_1,c_0}; // @[Mdu.scala 327:41]
  wire [7:0] pp33_lo_hi_lo = {c_23,c_22,c_21,c_20,c_19,c_18,c_17,c_16}; // @[Mdu.scala 327:41]
  wire [16:0] pp33_lo_hi = {c_32,c_31,c_30,c_29,c_28,c_27,c_26,c_25,c_24,pp33_lo_hi_lo}; // @[Mdu.scala 327:41]
  wire [32:0] pp33_lo = {pp33_lo_hi,c_15,c_14,c_13,c_12,c_11,c_10,c_9,c_8,pp33_lo_lo_lo}; // @[Mdu.scala 327:41]
  wire [7:0] pp33_hi_lo_lo = {c_40,c_39,c_38,c_37,c_36,c_35,c_34,c_33}; // @[Mdu.scala 327:41]
  wire [7:0] pp33_hi_hi_lo = {c_56,c_55,c_54,c_53,c_52,c_51,c_50,c_49}; // @[Mdu.scala 327:41]
  wire [16:0] pp33_hi_hi = {c_65,c_64,c_63,c_62,c_61,c_60,c_59,c_58,c_57,pp33_hi_hi_lo}; // @[Mdu.scala 327:41]
  wire [32:0] pp33_hi_1 = {pp33_hi_hi,c_48,c_47,c_46,c_45,c_44,c_43,c_42,c_41,pp33_hi_lo_lo}; // @[Mdu.scala 327:41]
  wire [127:0] _pp33_T = {62'h0,pp33_hi_1,pp33_lo}; // @[Cat.scala 30:58]
  wire [127:0] _GEN_5 = booth_0_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_6 = booth_1_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_7 = booth_2_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_8 = booth_3_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_9 = booth_4_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_10 = booth_5_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_11 = booth_6_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_12 = booth_7_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_13 = booth_8_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_14 = booth_9_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_15 = booth_10_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_16 = booth_11_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_17 = booth_12_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_18 = booth_13_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_19 = booth_14_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_20 = booth_15_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_21 = booth_16_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_22 = booth_17_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_23 = booth_18_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_24 = booth_19_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_25 = booth_20_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_26 = booth_21_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_27 = booth_22_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_28 = booth_23_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_29 = booth_24_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_30 = booth_25_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_31 = booth_26_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_32 = booth_27_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_33 = booth_28_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_34 = booth_29_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_35 = booth_30_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_36 = booth_31_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire [127:0] _GEN_37 = booth_32_io_z; // @[Mdu.scala 325:20 Mdu.scala 329:17 Mdu.scala 69:21]
  wire  _T_2 = 2'h2 == state; // @[Conditional.scala 37:30]
  wire [127:0] s_l4_0 = csa_23_io_s; // @[Mdu.scala 139:20 Mdu.scala 261:11]
  wire [127:0] s_l4_1 = csa_24_io_s; // @[Mdu.scala 139:20 Mdu.scala 263:11]
  wire [127:0] s_l4_2 = csa_25_io_s; // @[Mdu.scala 139:20 Mdu.scala 265:11]
  wire [127:0] c_l4_0 = csa_23_io_c; // @[Mdu.scala 143:20 Mdu.scala 262:11]
  wire [127:0] c_l4_1 = csa_24_io_c; // @[Mdu.scala 143:20 Mdu.scala 264:11]
  wire [127:0] c_l4_2 = csa_25_io_c; // @[Mdu.scala 143:20 Mdu.scala 266:11]
  wire [127:0] s_l3_4 = csa_22_io_s; // @[Mdu.scala 130:20 Mdu.scala 247:11]
  wire [127:0] c_l3_4 = csa_22_io_c; // @[Mdu.scala 134:20 Mdu.scala 248:11]
  wire  _T_3 = 2'h3 == state; // @[Conditional.scala 37:30]
  wire [1:0] _GEN_49 = _T_3 ? 2'h0 : state; // @[Conditional.scala 39:67 Mdu.scala 62:22]
  wire [127:0] _GEN_50 = _T_3 ? temp_out : reg_out; // @[Conditional.scala 39:67 Mdu.scala 104:24]
  Booth booth_0 ( // @[Mdu.scala 91:23]
    .io_x(booth_0_io_x),
    .io_y(booth_0_io_y),
    .io_z(booth_0_io_z),
    .io_c(booth_0_io_c)
  );
  Booth booth_1 ( // @[Mdu.scala 91:23]
    .io_x(booth_1_io_x),
    .io_y(booth_1_io_y),
    .io_z(booth_1_io_z),
    .io_c(booth_1_io_c)
  );
  Booth booth_2 ( // @[Mdu.scala 91:23]
    .io_x(booth_2_io_x),
    .io_y(booth_2_io_y),
    .io_z(booth_2_io_z),
    .io_c(booth_2_io_c)
  );
  Booth booth_3 ( // @[Mdu.scala 91:23]
    .io_x(booth_3_io_x),
    .io_y(booth_3_io_y),
    .io_z(booth_3_io_z),
    .io_c(booth_3_io_c)
  );
  Booth booth_4 ( // @[Mdu.scala 91:23]
    .io_x(booth_4_io_x),
    .io_y(booth_4_io_y),
    .io_z(booth_4_io_z),
    .io_c(booth_4_io_c)
  );
  Booth booth_5 ( // @[Mdu.scala 91:23]
    .io_x(booth_5_io_x),
    .io_y(booth_5_io_y),
    .io_z(booth_5_io_z),
    .io_c(booth_5_io_c)
  );
  Booth booth_6 ( // @[Mdu.scala 91:23]
    .io_x(booth_6_io_x),
    .io_y(booth_6_io_y),
    .io_z(booth_6_io_z),
    .io_c(booth_6_io_c)
  );
  Booth booth_7 ( // @[Mdu.scala 91:23]
    .io_x(booth_7_io_x),
    .io_y(booth_7_io_y),
    .io_z(booth_7_io_z),
    .io_c(booth_7_io_c)
  );
  Booth booth_8 ( // @[Mdu.scala 91:23]
    .io_x(booth_8_io_x),
    .io_y(booth_8_io_y),
    .io_z(booth_8_io_z),
    .io_c(booth_8_io_c)
  );
  Booth booth_9 ( // @[Mdu.scala 91:23]
    .io_x(booth_9_io_x),
    .io_y(booth_9_io_y),
    .io_z(booth_9_io_z),
    .io_c(booth_9_io_c)
  );
  Booth booth_10 ( // @[Mdu.scala 91:23]
    .io_x(booth_10_io_x),
    .io_y(booth_10_io_y),
    .io_z(booth_10_io_z),
    .io_c(booth_10_io_c)
  );
  Booth booth_11 ( // @[Mdu.scala 91:23]
    .io_x(booth_11_io_x),
    .io_y(booth_11_io_y),
    .io_z(booth_11_io_z),
    .io_c(booth_11_io_c)
  );
  Booth booth_12 ( // @[Mdu.scala 91:23]
    .io_x(booth_12_io_x),
    .io_y(booth_12_io_y),
    .io_z(booth_12_io_z),
    .io_c(booth_12_io_c)
  );
  Booth booth_13 ( // @[Mdu.scala 91:23]
    .io_x(booth_13_io_x),
    .io_y(booth_13_io_y),
    .io_z(booth_13_io_z),
    .io_c(booth_13_io_c)
  );
  Booth booth_14 ( // @[Mdu.scala 91:23]
    .io_x(booth_14_io_x),
    .io_y(booth_14_io_y),
    .io_z(booth_14_io_z),
    .io_c(booth_14_io_c)
  );
  Booth booth_15 ( // @[Mdu.scala 91:23]
    .io_x(booth_15_io_x),
    .io_y(booth_15_io_y),
    .io_z(booth_15_io_z),
    .io_c(booth_15_io_c)
  );
  Booth booth_16 ( // @[Mdu.scala 91:23]
    .io_x(booth_16_io_x),
    .io_y(booth_16_io_y),
    .io_z(booth_16_io_z),
    .io_c(booth_16_io_c)
  );
  Booth booth_17 ( // @[Mdu.scala 91:23]
    .io_x(booth_17_io_x),
    .io_y(booth_17_io_y),
    .io_z(booth_17_io_z),
    .io_c(booth_17_io_c)
  );
  Booth booth_18 ( // @[Mdu.scala 91:23]
    .io_x(booth_18_io_x),
    .io_y(booth_18_io_y),
    .io_z(booth_18_io_z),
    .io_c(booth_18_io_c)
  );
  Booth booth_19 ( // @[Mdu.scala 91:23]
    .io_x(booth_19_io_x),
    .io_y(booth_19_io_y),
    .io_z(booth_19_io_z),
    .io_c(booth_19_io_c)
  );
  Booth booth_20 ( // @[Mdu.scala 91:23]
    .io_x(booth_20_io_x),
    .io_y(booth_20_io_y),
    .io_z(booth_20_io_z),
    .io_c(booth_20_io_c)
  );
  Booth booth_21 ( // @[Mdu.scala 91:23]
    .io_x(booth_21_io_x),
    .io_y(booth_21_io_y),
    .io_z(booth_21_io_z),
    .io_c(booth_21_io_c)
  );
  Booth booth_22 ( // @[Mdu.scala 91:23]
    .io_x(booth_22_io_x),
    .io_y(booth_22_io_y),
    .io_z(booth_22_io_z),
    .io_c(booth_22_io_c)
  );
  Booth booth_23 ( // @[Mdu.scala 91:23]
    .io_x(booth_23_io_x),
    .io_y(booth_23_io_y),
    .io_z(booth_23_io_z),
    .io_c(booth_23_io_c)
  );
  Booth booth_24 ( // @[Mdu.scala 91:23]
    .io_x(booth_24_io_x),
    .io_y(booth_24_io_y),
    .io_z(booth_24_io_z),
    .io_c(booth_24_io_c)
  );
  Booth booth_25 ( // @[Mdu.scala 91:23]
    .io_x(booth_25_io_x),
    .io_y(booth_25_io_y),
    .io_z(booth_25_io_z),
    .io_c(booth_25_io_c)
  );
  Booth booth_26 ( // @[Mdu.scala 91:23]
    .io_x(booth_26_io_x),
    .io_y(booth_26_io_y),
    .io_z(booth_26_io_z),
    .io_c(booth_26_io_c)
  );
  Booth booth_27 ( // @[Mdu.scala 91:23]
    .io_x(booth_27_io_x),
    .io_y(booth_27_io_y),
    .io_z(booth_27_io_z),
    .io_c(booth_27_io_c)
  );
  Booth booth_28 ( // @[Mdu.scala 91:23]
    .io_x(booth_28_io_x),
    .io_y(booth_28_io_y),
    .io_z(booth_28_io_z),
    .io_c(booth_28_io_c)
  );
  Booth booth_29 ( // @[Mdu.scala 91:23]
    .io_x(booth_29_io_x),
    .io_y(booth_29_io_y),
    .io_z(booth_29_io_z),
    .io_c(booth_29_io_c)
  );
  Booth booth_30 ( // @[Mdu.scala 91:23]
    .io_x(booth_30_io_x),
    .io_y(booth_30_io_y),
    .io_z(booth_30_io_z),
    .io_c(booth_30_io_c)
  );
  Booth booth_31 ( // @[Mdu.scala 91:23]
    .io_x(booth_31_io_x),
    .io_y(booth_31_io_y),
    .io_z(booth_31_io_z),
    .io_c(booth_31_io_c)
  );
  Booth booth_32 ( // @[Mdu.scala 91:23]
    .io_x(booth_32_io_x),
    .io_y(booth_32_io_y),
    .io_z(booth_32_io_z),
    .io_c(booth_32_io_c)
  );
  Csa csa_0 ( // @[Mdu.scala 107:21]
    .io_x(csa_0_io_x),
    .io_y(csa_0_io_y),
    .io_z(csa_0_io_z),
    .io_s(csa_0_io_s),
    .io_c(csa_0_io_c)
  );
  Csa csa_1 ( // @[Mdu.scala 107:21]
    .io_x(csa_1_io_x),
    .io_y(csa_1_io_y),
    .io_z(csa_1_io_z),
    .io_s(csa_1_io_s),
    .io_c(csa_1_io_c)
  );
  Csa csa_2 ( // @[Mdu.scala 107:21]
    .io_x(csa_2_io_x),
    .io_y(csa_2_io_y),
    .io_z(csa_2_io_z),
    .io_s(csa_2_io_s),
    .io_c(csa_2_io_c)
  );
  Csa csa_3 ( // @[Mdu.scala 107:21]
    .io_x(csa_3_io_x),
    .io_y(csa_3_io_y),
    .io_z(csa_3_io_z),
    .io_s(csa_3_io_s),
    .io_c(csa_3_io_c)
  );
  Csa csa_4 ( // @[Mdu.scala 107:21]
    .io_x(csa_4_io_x),
    .io_y(csa_4_io_y),
    .io_z(csa_4_io_z),
    .io_s(csa_4_io_s),
    .io_c(csa_4_io_c)
  );
  Csa csa_5 ( // @[Mdu.scala 107:21]
    .io_x(csa_5_io_x),
    .io_y(csa_5_io_y),
    .io_z(csa_5_io_z),
    .io_s(csa_5_io_s),
    .io_c(csa_5_io_c)
  );
  Csa csa_6 ( // @[Mdu.scala 107:21]
    .io_x(csa_6_io_x),
    .io_y(csa_6_io_y),
    .io_z(csa_6_io_z),
    .io_s(csa_6_io_s),
    .io_c(csa_6_io_c)
  );
  Csa csa_7 ( // @[Mdu.scala 107:21]
    .io_x(csa_7_io_x),
    .io_y(csa_7_io_y),
    .io_z(csa_7_io_z),
    .io_s(csa_7_io_s),
    .io_c(csa_7_io_c)
  );
  Csa csa_8 ( // @[Mdu.scala 107:21]
    .io_x(csa_8_io_x),
    .io_y(csa_8_io_y),
    .io_z(csa_8_io_z),
    .io_s(csa_8_io_s),
    .io_c(csa_8_io_c)
  );
  Csa csa_9 ( // @[Mdu.scala 107:21]
    .io_x(csa_9_io_x),
    .io_y(csa_9_io_y),
    .io_z(csa_9_io_z),
    .io_s(csa_9_io_s),
    .io_c(csa_9_io_c)
  );
  Csa csa_10 ( // @[Mdu.scala 107:21]
    .io_x(csa_10_io_x),
    .io_y(csa_10_io_y),
    .io_z(csa_10_io_z),
    .io_s(csa_10_io_s),
    .io_c(csa_10_io_c)
  );
  Csa csa_11 ( // @[Mdu.scala 107:21]
    .io_x(csa_11_io_x),
    .io_y(csa_11_io_y),
    .io_z(csa_11_io_z),
    .io_s(csa_11_io_s),
    .io_c(csa_11_io_c)
  );
  Csa csa_12 ( // @[Mdu.scala 107:21]
    .io_x(csa_12_io_x),
    .io_y(csa_12_io_y),
    .io_z(csa_12_io_z),
    .io_s(csa_12_io_s),
    .io_c(csa_12_io_c)
  );
  Csa csa_13 ( // @[Mdu.scala 107:21]
    .io_x(csa_13_io_x),
    .io_y(csa_13_io_y),
    .io_z(csa_13_io_z),
    .io_s(csa_13_io_s),
    .io_c(csa_13_io_c)
  );
  Csa csa_14 ( // @[Mdu.scala 107:21]
    .io_x(csa_14_io_x),
    .io_y(csa_14_io_y),
    .io_z(csa_14_io_z),
    .io_s(csa_14_io_s),
    .io_c(csa_14_io_c)
  );
  Csa csa_15 ( // @[Mdu.scala 107:21]
    .io_x(csa_15_io_x),
    .io_y(csa_15_io_y),
    .io_z(csa_15_io_z),
    .io_s(csa_15_io_s),
    .io_c(csa_15_io_c)
  );
  Csa csa_16 ( // @[Mdu.scala 107:21]
    .io_x(csa_16_io_x),
    .io_y(csa_16_io_y),
    .io_z(csa_16_io_z),
    .io_s(csa_16_io_s),
    .io_c(csa_16_io_c)
  );
  Csa csa_17 ( // @[Mdu.scala 107:21]
    .io_x(csa_17_io_x),
    .io_y(csa_17_io_y),
    .io_z(csa_17_io_z),
    .io_s(csa_17_io_s),
    .io_c(csa_17_io_c)
  );
  Csa csa_18 ( // @[Mdu.scala 107:21]
    .io_x(csa_18_io_x),
    .io_y(csa_18_io_y),
    .io_z(csa_18_io_z),
    .io_s(csa_18_io_s),
    .io_c(csa_18_io_c)
  );
  Csa csa_19 ( // @[Mdu.scala 107:21]
    .io_x(csa_19_io_x),
    .io_y(csa_19_io_y),
    .io_z(csa_19_io_z),
    .io_s(csa_19_io_s),
    .io_c(csa_19_io_c)
  );
  Csa csa_20 ( // @[Mdu.scala 107:21]
    .io_x(csa_20_io_x),
    .io_y(csa_20_io_y),
    .io_z(csa_20_io_z),
    .io_s(csa_20_io_s),
    .io_c(csa_20_io_c)
  );
  Csa csa_21 ( // @[Mdu.scala 107:21]
    .io_x(csa_21_io_x),
    .io_y(csa_21_io_y),
    .io_z(csa_21_io_z),
    .io_s(csa_21_io_s),
    .io_c(csa_21_io_c)
  );
  Csa csa_22 ( // @[Mdu.scala 107:21]
    .io_x(csa_22_io_x),
    .io_y(csa_22_io_y),
    .io_z(csa_22_io_z),
    .io_s(csa_22_io_s),
    .io_c(csa_22_io_c)
  );
  Csa csa_23 ( // @[Mdu.scala 107:21]
    .io_x(csa_23_io_x),
    .io_y(csa_23_io_y),
    .io_z(csa_23_io_z),
    .io_s(csa_23_io_s),
    .io_c(csa_23_io_c)
  );
  Csa csa_24 ( // @[Mdu.scala 107:21]
    .io_x(csa_24_io_x),
    .io_y(csa_24_io_y),
    .io_z(csa_24_io_z),
    .io_s(csa_24_io_s),
    .io_c(csa_24_io_c)
  );
  Csa csa_25 ( // @[Mdu.scala 107:21]
    .io_x(csa_25_io_x),
    .io_y(csa_25_io_y),
    .io_z(csa_25_io_z),
    .io_s(csa_25_io_s),
    .io_c(csa_25_io_c)
  );
  Csa csa_26 ( // @[Mdu.scala 107:21]
    .io_x(csa_26_io_x),
    .io_y(csa_26_io_y),
    .io_z(csa_26_io_z),
    .io_s(csa_26_io_s),
    .io_c(csa_26_io_c)
  );
  Csa csa_27 ( // @[Mdu.scala 107:21]
    .io_x(csa_27_io_x),
    .io_y(csa_27_io_y),
    .io_z(csa_27_io_z),
    .io_s(csa_27_io_s),
    .io_c(csa_27_io_c)
  );
  Csa csa_28 ( // @[Mdu.scala 107:21]
    .io_x(csa_28_io_x),
    .io_y(csa_28_io_y),
    .io_z(csa_28_io_z),
    .io_s(csa_28_io_s),
    .io_c(csa_28_io_c)
  );
  Csa csa_29 ( // @[Mdu.scala 107:21]
    .io_x(csa_29_io_x),
    .io_y(csa_29_io_y),
    .io_z(csa_29_io_z),
    .io_s(csa_29_io_s),
    .io_c(csa_29_io_c)
  );
  Csa csa_30 ( // @[Mdu.scala 107:21]
    .io_x(csa_30_io_x),
    .io_y(csa_30_io_y),
    .io_z(csa_30_io_z),
    .io_s(csa_30_io_s),
    .io_c(csa_30_io_c)
  );
  Csa csa_31 ( // @[Mdu.scala 107:21]
    .io_x(csa_31_io_x),
    .io_y(csa_31_io_y),
    .io_z(csa_31_io_z),
    .io_s(csa_31_io_s),
    .io_c(csa_31_io_c)
  );
  assign io_out = reg_out; // @[Mdu.scala 314:10]
  assign booth_0_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_0_io_y = reg_in2[2:0]; // @[Mdu.scala 97:29]
  assign booth_1_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_1_io_y = reg_in2[4:2]; // @[Mdu.scala 97:29]
  assign booth_2_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_2_io_y = reg_in2[6:4]; // @[Mdu.scala 97:29]
  assign booth_3_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_3_io_y = reg_in2[8:6]; // @[Mdu.scala 97:29]
  assign booth_4_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_4_io_y = reg_in2[10:8]; // @[Mdu.scala 97:29]
  assign booth_5_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_5_io_y = reg_in2[12:10]; // @[Mdu.scala 97:29]
  assign booth_6_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_6_io_y = reg_in2[14:12]; // @[Mdu.scala 97:29]
  assign booth_7_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_7_io_y = reg_in2[16:14]; // @[Mdu.scala 97:29]
  assign booth_8_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_8_io_y = reg_in2[18:16]; // @[Mdu.scala 97:29]
  assign booth_9_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_9_io_y = reg_in2[20:18]; // @[Mdu.scala 97:29]
  assign booth_10_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_10_io_y = reg_in2[22:20]; // @[Mdu.scala 97:29]
  assign booth_11_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_11_io_y = reg_in2[24:22]; // @[Mdu.scala 97:29]
  assign booth_12_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_12_io_y = reg_in2[26:24]; // @[Mdu.scala 97:29]
  assign booth_13_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_13_io_y = reg_in2[28:26]; // @[Mdu.scala 97:29]
  assign booth_14_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_14_io_y = reg_in2[30:28]; // @[Mdu.scala 97:29]
  assign booth_15_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_15_io_y = reg_in2[32:30]; // @[Mdu.scala 97:29]
  assign booth_16_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_16_io_y = reg_in2[34:32]; // @[Mdu.scala 97:29]
  assign booth_17_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_17_io_y = reg_in2[36:34]; // @[Mdu.scala 97:29]
  assign booth_18_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_18_io_y = reg_in2[38:36]; // @[Mdu.scala 97:29]
  assign booth_19_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_19_io_y = reg_in2[40:38]; // @[Mdu.scala 97:29]
  assign booth_20_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_20_io_y = reg_in2[42:40]; // @[Mdu.scala 97:29]
  assign booth_21_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_21_io_y = reg_in2[44:42]; // @[Mdu.scala 97:29]
  assign booth_22_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_22_io_y = reg_in2[46:44]; // @[Mdu.scala 97:29]
  assign booth_23_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_23_io_y = reg_in2[48:46]; // @[Mdu.scala 97:29]
  assign booth_24_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_24_io_y = reg_in2[50:48]; // @[Mdu.scala 97:29]
  assign booth_25_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_25_io_y = reg_in2[52:50]; // @[Mdu.scala 97:29]
  assign booth_26_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_26_io_y = reg_in2[54:52]; // @[Mdu.scala 97:29]
  assign booth_27_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_27_io_y = reg_in2[56:54]; // @[Mdu.scala 97:29]
  assign booth_28_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_28_io_y = reg_in2[58:56]; // @[Mdu.scala 97:29]
  assign booth_29_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_29_io_y = reg_in2[60:58]; // @[Mdu.scala 97:29]
  assign booth_30_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_30_io_y = reg_in2[62:60]; // @[Mdu.scala 97:29]
  assign booth_31_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_31_io_y = reg_in2[64:62]; // @[Mdu.scala 97:29]
  assign booth_32_io_x = reg_in1; // @[Mdu.scala 96:19]
  assign booth_32_io_y = reg_in2[66:64]; // @[Mdu.scala 97:29]
  assign csa_0_io_x = pp_0; // @[Mdu.scala 172:23]
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
  assign csa_11_io_x = csa_0_io_s; // @[Mdu.scala 112:20 Mdu.scala 175:11]
  assign csa_11_io_y = csa_0_io_c; // @[Mdu.scala 116:20 Mdu.scala 176:11]
  assign csa_11_io_z = csa_1_io_c; // @[Mdu.scala 116:20 Mdu.scala 182:13]
  assign csa_12_io_x = csa_1_io_s; // @[Mdu.scala 112:20 Mdu.scala 181:13]
  assign csa_12_io_y = csa_2_io_c; // @[Mdu.scala 116:20 Mdu.scala 182:13]
  assign csa_12_io_z = csa_2_io_s; // @[Mdu.scala 112:20 Mdu.scala 181:13]
  assign csa_13_io_x = csa_3_io_s; // @[Mdu.scala 112:20 Mdu.scala 181:13]
  assign csa_13_io_y = csa_3_io_c; // @[Mdu.scala 116:20 Mdu.scala 182:13]
  assign csa_13_io_z = csa_4_io_c; // @[Mdu.scala 116:20 Mdu.scala 182:13]
  assign csa_14_io_x = csa_4_io_s; // @[Mdu.scala 112:20 Mdu.scala 181:13]
  assign csa_14_io_y = csa_5_io_c; // @[Mdu.scala 116:20 Mdu.scala 182:13]
  assign csa_14_io_z = csa_5_io_s; // @[Mdu.scala 112:20 Mdu.scala 181:13]
  assign csa_15_io_x = csa_6_io_s; // @[Mdu.scala 112:20 Mdu.scala 181:13]
  assign csa_15_io_y = csa_6_io_c; // @[Mdu.scala 116:20 Mdu.scala 182:13]
  assign csa_15_io_z = csa_7_io_c; // @[Mdu.scala 116:20 Mdu.scala 182:13]
  assign csa_16_io_x = csa_7_io_s; // @[Mdu.scala 112:20 Mdu.scala 181:13]
  assign csa_16_io_y = csa_8_io_c; // @[Mdu.scala 116:20 Mdu.scala 182:13]
  assign csa_16_io_z = csa_8_io_s; // @[Mdu.scala 112:20 Mdu.scala 181:13]
  assign csa_17_io_x = csa_9_io_s; // @[Mdu.scala 112:20 Mdu.scala 181:13]
  assign csa_17_io_y = csa_9_io_c; // @[Mdu.scala 116:20 Mdu.scala 182:13]
  assign csa_17_io_z = pp33; // @[Mdu.scala 205:16]
  assign csa_18_io_x = csa_10_io_s; // @[Mdu.scala 112:20 Mdu.scala 181:13]
  assign csa_18_io_y = csa_10_io_c; // @[Mdu.scala 116:20 Mdu.scala 182:13]
  assign csa_18_io_z = csa_11_io_s; // @[Mdu.scala 121:20 Mdu.scala 207:11]
  assign csa_19_io_x = csa_11_io_c; // @[Mdu.scala 125:20 Mdu.scala 208:11]
  assign csa_19_io_y = csa_12_io_s; // @[Mdu.scala 121:20 Mdu.scala 209:11]
  assign csa_19_io_z = csa_12_io_c; // @[Mdu.scala 125:20 Mdu.scala 210:11]
  assign csa_20_io_x = csa_13_io_s; // @[Mdu.scala 121:20 Mdu.scala 211:11]
  assign csa_20_io_y = csa_13_io_c; // @[Mdu.scala 125:20 Mdu.scala 212:11]
  assign csa_20_io_z = csa_14_io_s; // @[Mdu.scala 121:20 Mdu.scala 213:11]
  assign csa_21_io_x = csa_14_io_c; // @[Mdu.scala 125:20 Mdu.scala 214:11]
  assign csa_21_io_y = csa_15_io_s; // @[Mdu.scala 121:20 Mdu.scala 215:11]
  assign csa_21_io_z = csa_15_io_c; // @[Mdu.scala 125:20 Mdu.scala 216:11]
  assign csa_22_io_x = csa_16_io_s; // @[Mdu.scala 121:20 Mdu.scala 217:11]
  assign csa_22_io_y = csa_16_io_c; // @[Mdu.scala 125:20 Mdu.scala 218:11]
  assign csa_22_io_z = csa_17_io_s; // @[Mdu.scala 121:20 Mdu.scala 219:11]
  assign csa_23_io_x = csa_17_io_c; // @[Mdu.scala 125:20 Mdu.scala 220:11]
  assign csa_23_io_y = csa_18_io_s; // @[Mdu.scala 130:20 Mdu.scala 239:11]
  assign csa_23_io_z = csa_18_io_c; // @[Mdu.scala 134:20 Mdu.scala 240:11]
  assign csa_24_io_x = csa_19_io_s; // @[Mdu.scala 130:20 Mdu.scala 241:11]
  assign csa_24_io_y = csa_19_io_c; // @[Mdu.scala 134:20 Mdu.scala 242:11]
  assign csa_24_io_z = csa_20_io_s; // @[Mdu.scala 130:20 Mdu.scala 243:11]
  assign csa_25_io_x = csa_20_io_c; // @[Mdu.scala 134:20 Mdu.scala 244:11]
  assign csa_25_io_y = csa_21_io_s; // @[Mdu.scala 130:20 Mdu.scala 245:11]
  assign csa_25_io_z = csa_21_io_c; // @[Mdu.scala 134:20 Mdu.scala 246:11]
  assign csa_26_io_x = pp_l2_0; // @[Mdu.scala 271:16]
  assign csa_26_io_y = pp_l2_1; // @[Mdu.scala 272:16]
  assign csa_26_io_z = pp_l2_2; // @[Mdu.scala 273:16]
  assign csa_27_io_x = pp_l2_3; // @[Mdu.scala 274:16]
  assign csa_27_io_y = pp_l2_4; // @[Mdu.scala 275:16]
  assign csa_27_io_z = pp_l2_5; // @[Mdu.scala 276:16]
  assign csa_28_io_x = pp_l2_6; // @[Mdu.scala 284:16]
  assign csa_28_io_y = pp_l2_7; // @[Mdu.scala 285:16]
  assign csa_28_io_z = csa_26_io_s; // @[Mdu.scala 148:20 Mdu.scala 278:11]
  assign csa_29_io_x = csa_27_io_s; // @[Mdu.scala 148:20 Mdu.scala 280:11]
  assign csa_29_io_y = csa_26_io_c; // @[Mdu.scala 152:20 Mdu.scala 279:11]
  assign csa_29_io_z = csa_27_io_c; // @[Mdu.scala 152:20 Mdu.scala 281:11]
  assign csa_30_io_x = csa_28_io_s; // @[Mdu.scala 157:20 Mdu.scala 291:11]
  assign csa_30_io_y = csa_29_io_s; // @[Mdu.scala 157:20 Mdu.scala 293:11]
  assign csa_30_io_z = csa_28_io_c; // @[Mdu.scala 161:20 Mdu.scala 292:11]
  assign csa_31_io_x = csa_30_io_s; // @[Mdu.scala 165:18 Mdu.scala 301:8]
  assign csa_31_io_y = csa_30_io_c; // @[Mdu.scala 166:18 Mdu.scala 302:8]
  assign csa_31_io_z = csa_29_io_c; // @[Mdu.scala 161:20 Mdu.scala 294:11]
  always @(posedge clock) begin
    if (reset) begin // @[Mdu.scala 62:22]
      state <= 2'h0; // @[Mdu.scala 62:22]
    end else if (_T) begin // @[Conditional.scala 40:58]
      if (io_mul_valid) begin // @[Mdu.scala 318:26]
        state <= 2'h1; // @[Mdu.scala 319:15]
      end
    end else if (_T_1) begin // @[Conditional.scala 39:67]
      state <= 2'h2;
    end else if (_T_2) begin // @[Conditional.scala 39:67]
      state <= 2'h3;
    end else begin
      state <= _GEN_49;
    end
    if (reset) begin // @[Mdu.scala 63:24]
      reg_in1 <= 65'h0; // @[Mdu.scala 63:24]
    end else if (_T) begin // @[Conditional.scala 40:58]
      if (io_mul_valid) begin // @[Mdu.scala 318:26]
        reg_in1 <= io_in1; // @[Mdu.scala 320:17]
      end
    end
    if (reset) begin // @[Mdu.scala 64:24]
      reg_in2 <= 67'h0; // @[Mdu.scala 64:24]
    end else if (_T) begin // @[Conditional.scala 40:58]
      if (io_mul_valid) begin // @[Mdu.scala 318:26]
        reg_in2 <= _reg_in2_T; // @[Mdu.scala 321:17]
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_0 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_0 <= _GEN_5;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_1 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_1 <= _GEN_6;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_2 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_2 <= _GEN_7;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_3 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_3 <= _GEN_8;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_4 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_4 <= _GEN_9;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_5 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_5 <= _GEN_10;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_6 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_6 <= _GEN_11;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_7 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_7 <= _GEN_12;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_8 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_8 <= _GEN_13;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_9 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_9 <= _GEN_14;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_10 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_10 <= _GEN_15;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_11 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_11 <= _GEN_16;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_12 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_12 <= _GEN_17;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_13 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_13 <= _GEN_18;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_14 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_14 <= _GEN_19;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_15 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_15 <= _GEN_20;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_16 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_16 <= _GEN_21;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_17 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_17 <= _GEN_22;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_18 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_18 <= _GEN_23;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_19 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_19 <= _GEN_24;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_20 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_20 <= _GEN_25;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_21 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_21 <= _GEN_26;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_22 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_22 <= _GEN_27;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_23 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_23 <= _GEN_28;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_24 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_24 <= _GEN_29;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_25 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_25 <= _GEN_30;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_26 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_26 <= _GEN_31;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_27 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_27 <= _GEN_32;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_28 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_28 <= _GEN_33;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_29 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_29 <= _GEN_34;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_30 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_30 <= _GEN_35;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_31 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_31 <= _GEN_36;
      end
    end
    if (reset) begin // @[Mdu.scala 69:21]
      pp_32 <= 128'h0; // @[Mdu.scala 69:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp_32 <= _GEN_37;
      end
    end
    if (reset) begin // @[Mdu.scala 86:24]
      pp_l2_0 <= 128'h0; // @[Mdu.scala 86:24]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (!(_T_1)) begin // @[Conditional.scala 39:67]
        if (_T_2) begin // @[Conditional.scala 39:67]
          pp_l2_0 <= s_l4_0;
        end
      end
    end
    if (reset) begin // @[Mdu.scala 86:24]
      pp_l2_1 <= 128'h0; // @[Mdu.scala 86:24]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (!(_T_1)) begin // @[Conditional.scala 39:67]
        if (_T_2) begin // @[Conditional.scala 39:67]
          pp_l2_1 <= s_l4_1;
        end
      end
    end
    if (reset) begin // @[Mdu.scala 86:24]
      pp_l2_2 <= 128'h0; // @[Mdu.scala 86:24]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (!(_T_1)) begin // @[Conditional.scala 39:67]
        if (_T_2) begin // @[Conditional.scala 39:67]
          pp_l2_2 <= s_l4_2;
        end
      end
    end
    if (reset) begin // @[Mdu.scala 86:24]
      pp_l2_3 <= 128'h0; // @[Mdu.scala 86:24]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (!(_T_1)) begin // @[Conditional.scala 39:67]
        if (_T_2) begin // @[Conditional.scala 39:67]
          pp_l2_3 <= c_l4_0;
        end
      end
    end
    if (reset) begin // @[Mdu.scala 86:24]
      pp_l2_4 <= 128'h0; // @[Mdu.scala 86:24]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (!(_T_1)) begin // @[Conditional.scala 39:67]
        if (_T_2) begin // @[Conditional.scala 39:67]
          pp_l2_4 <= c_l4_1;
        end
      end
    end
    if (reset) begin // @[Mdu.scala 86:24]
      pp_l2_5 <= 128'h0; // @[Mdu.scala 86:24]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (!(_T_1)) begin // @[Conditional.scala 39:67]
        if (_T_2) begin // @[Conditional.scala 39:67]
          pp_l2_5 <= c_l4_2;
        end
      end
    end
    if (reset) begin // @[Mdu.scala 86:24]
      pp_l2_6 <= 128'h0; // @[Mdu.scala 86:24]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (!(_T_1)) begin // @[Conditional.scala 39:67]
        if (_T_2) begin // @[Conditional.scala 39:67]
          pp_l2_6 <= s_l3_4;
        end
      end
    end
    if (reset) begin // @[Mdu.scala 86:24]
      pp_l2_7 <= 128'h0; // @[Mdu.scala 86:24]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (!(_T_1)) begin // @[Conditional.scala 39:67]
        if (_T_2) begin // @[Conditional.scala 39:67]
          pp_l2_7 <= c_l3_4;
        end
      end
    end
    if (reset) begin // @[Mdu.scala 103:21]
      pp33 <= 128'h0; // @[Mdu.scala 103:21]
    end else if (!(_T)) begin // @[Conditional.scala 40:58]
      if (_T_1) begin // @[Conditional.scala 39:67]
        pp33 <= _pp33_T;
      end
    end
    if (reset) begin // @[Mdu.scala 104:24]
      reg_out <= 128'h0; // @[Mdu.scala 104:24]
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
module Mdu(
  input         clock,
  input         reset,
  input  [63:0] io_in1,
  input  [63:0] io_in2,
  input         io_is_sign,
  input         io_mdu_valid,
  output [63:0] io_out1,
  output [63:0] io_out2
);
  wire  mul_clock; // @[Mdu.scala 378:21]
  wire  mul_reset; // @[Mdu.scala 378:21]
  wire [64:0] mul_io_in1; // @[Mdu.scala 378:21]
  wire [64:0] mul_io_in2; // @[Mdu.scala 378:21]
  wire [127:0] mul_io_out; // @[Mdu.scala 378:21]
  wire  mul_io_mul_valid; // @[Mdu.scala 378:21]
  wire  mul_io_in1_hi = io_in1[63]; // @[Mdu.scala 380:43]
  wire [64:0] _mul_io_in1_T = {mul_io_in1_hi,io_in1}; // @[Cat.scala 30:58]
  wire [64:0] _mul_io_in1_T_1 = {1'h0,io_in1}; // @[Cat.scala 30:58]
  wire  mul_io_in2_hi = io_in2[63]; // @[Mdu.scala 381:43]
  wire [64:0] _mul_io_in2_T = {mul_io_in2_hi,io_in2}; // @[Cat.scala 30:58]
  wire [64:0] _mul_io_in2_T_1 = {1'h0,io_in2}; // @[Cat.scala 30:58]
  Mul mul ( // @[Mdu.scala 378:21]
    .clock(mul_clock),
    .reset(mul_reset),
    .io_in1(mul_io_in1),
    .io_in2(mul_io_in2),
    .io_out(mul_io_out),
    .io_mul_valid(mul_io_mul_valid)
  );
  assign io_out1 = mul_io_out[63:0]; // @[Mdu.scala 383:26]
  assign io_out2 = mul_io_out[127:64]; // @[Mdu.scala 384:26]
  assign mul_clock = clock;
  assign mul_reset = reset;
  assign mul_io_in1 = io_is_sign ? _mul_io_in1_T : _mul_io_in1_T_1; // @[Mdu.scala 380:22]
  assign mul_io_in2 = io_is_sign ? _mul_io_in2_T : _mul_io_in2_T_1; // @[Mdu.scala 381:22]
  assign mul_io_mul_valid = io_mdu_valid; // @[Mdu.scala 382:22]
endmodule
