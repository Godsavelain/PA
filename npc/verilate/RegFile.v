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
  input  [63:0] io_wdata
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
  reg [63:0] rf_0; // @[RegFile.scala 20:19]
  reg [63:0] rf_1; // @[RegFile.scala 20:19]
  reg [63:0] rf_2; // @[RegFile.scala 20:19]
  reg [63:0] rf_3; // @[RegFile.scala 20:19]
  reg [63:0] rf_4; // @[RegFile.scala 20:19]
  reg [63:0] rf_5; // @[RegFile.scala 20:19]
  reg [63:0] rf_6; // @[RegFile.scala 20:19]
  reg [63:0] rf_7; // @[RegFile.scala 20:19]
  reg [63:0] rf_8; // @[RegFile.scala 20:19]
  reg [63:0] rf_9; // @[RegFile.scala 20:19]
  reg [63:0] rf_10; // @[RegFile.scala 20:19]
  reg [63:0] rf_11; // @[RegFile.scala 20:19]
  reg [63:0] rf_12; // @[RegFile.scala 20:19]
  reg [63:0] rf_13; // @[RegFile.scala 20:19]
  reg [63:0] rf_14; // @[RegFile.scala 20:19]
  reg [63:0] rf_15; // @[RegFile.scala 20:19]
  reg [63:0] rf_16; // @[RegFile.scala 20:19]
  reg [63:0] rf_17; // @[RegFile.scala 20:19]
  reg [63:0] rf_18; // @[RegFile.scala 20:19]
  reg [63:0] rf_19; // @[RegFile.scala 20:19]
  reg [63:0] rf_20; // @[RegFile.scala 20:19]
  reg [63:0] rf_21; // @[RegFile.scala 20:19]
  reg [63:0] rf_22; // @[RegFile.scala 20:19]
  reg [63:0] rf_23; // @[RegFile.scala 20:19]
  reg [63:0] rf_24; // @[RegFile.scala 20:19]
  reg [63:0] rf_25; // @[RegFile.scala 20:19]
  reg [63:0] rf_26; // @[RegFile.scala 20:19]
  reg [63:0] rf_27; // @[RegFile.scala 20:19]
  reg [63:0] rf_28; // @[RegFile.scala 20:19]
  reg [63:0] rf_29; // @[RegFile.scala 20:19]
  reg [63:0] rf_30; // @[RegFile.scala 20:19]
  reg [63:0] rf_31; // @[RegFile.scala 20:19]
  wire [63:0] _GEN_1 = 5'h1 == io_raddr1 ? rf_1 : rf_0; // @[RegFile.scala 22:19 RegFile.scala 22:19]
  wire [63:0] _GEN_2 = 5'h2 == io_raddr1 ? rf_2 : _GEN_1; // @[RegFile.scala 22:19 RegFile.scala 22:19]
  wire [63:0] _GEN_3 = 5'h3 == io_raddr1 ? rf_3 : _GEN_2; // @[RegFile.scala 22:19 RegFile.scala 22:19]
  wire [63:0] _GEN_4 = 5'h4 == io_raddr1 ? rf_4 : _GEN_3; // @[RegFile.scala 22:19 RegFile.scala 22:19]
  wire [63:0] _GEN_5 = 5'h5 == io_raddr1 ? rf_5 : _GEN_4; // @[RegFile.scala 22:19 RegFile.scala 22:19]
  wire [63:0] _GEN_6 = 5'h6 == io_raddr1 ? rf_6 : _GEN_5; // @[RegFile.scala 22:19 RegFile.scala 22:19]
  wire [63:0] _GEN_7 = 5'h7 == io_raddr1 ? rf_7 : _GEN_6; // @[RegFile.scala 22:19 RegFile.scala 22:19]
  wire [63:0] _GEN_8 = 5'h8 == io_raddr1 ? rf_8 : _GEN_7; // @[RegFile.scala 22:19 RegFile.scala 22:19]
  wire [63:0] _GEN_9 = 5'h9 == io_raddr1 ? rf_9 : _GEN_8; // @[RegFile.scala 22:19 RegFile.scala 22:19]
  wire [63:0] _GEN_10 = 5'ha == io_raddr1 ? rf_10 : _GEN_9; // @[RegFile.scala 22:19 RegFile.scala 22:19]
  wire [63:0] _GEN_11 = 5'hb == io_raddr1 ? rf_11 : _GEN_10; // @[RegFile.scala 22:19 RegFile.scala 22:19]
  wire [63:0] _GEN_12 = 5'hc == io_raddr1 ? rf_12 : _GEN_11; // @[RegFile.scala 22:19 RegFile.scala 22:19]
  wire [63:0] _GEN_13 = 5'hd == io_raddr1 ? rf_13 : _GEN_12; // @[RegFile.scala 22:19 RegFile.scala 22:19]
  wire [63:0] _GEN_14 = 5'he == io_raddr1 ? rf_14 : _GEN_13; // @[RegFile.scala 22:19 RegFile.scala 22:19]
  wire [63:0] _GEN_15 = 5'hf == io_raddr1 ? rf_15 : _GEN_14; // @[RegFile.scala 22:19 RegFile.scala 22:19]
  wire [63:0] _GEN_16 = 5'h10 == io_raddr1 ? rf_16 : _GEN_15; // @[RegFile.scala 22:19 RegFile.scala 22:19]
  wire [63:0] _GEN_17 = 5'h11 == io_raddr1 ? rf_17 : _GEN_16; // @[RegFile.scala 22:19 RegFile.scala 22:19]
  wire [63:0] _GEN_18 = 5'h12 == io_raddr1 ? rf_18 : _GEN_17; // @[RegFile.scala 22:19 RegFile.scala 22:19]
  wire [63:0] _GEN_19 = 5'h13 == io_raddr1 ? rf_19 : _GEN_18; // @[RegFile.scala 22:19 RegFile.scala 22:19]
  wire [63:0] _GEN_20 = 5'h14 == io_raddr1 ? rf_20 : _GEN_19; // @[RegFile.scala 22:19 RegFile.scala 22:19]
  wire [63:0] _GEN_21 = 5'h15 == io_raddr1 ? rf_21 : _GEN_20; // @[RegFile.scala 22:19 RegFile.scala 22:19]
  wire [63:0] _GEN_22 = 5'h16 == io_raddr1 ? rf_22 : _GEN_21; // @[RegFile.scala 22:19 RegFile.scala 22:19]
  wire [63:0] _GEN_23 = 5'h17 == io_raddr1 ? rf_23 : _GEN_22; // @[RegFile.scala 22:19 RegFile.scala 22:19]
  wire [63:0] _GEN_24 = 5'h18 == io_raddr1 ? rf_24 : _GEN_23; // @[RegFile.scala 22:19 RegFile.scala 22:19]
  wire [63:0] _GEN_25 = 5'h19 == io_raddr1 ? rf_25 : _GEN_24; // @[RegFile.scala 22:19 RegFile.scala 22:19]
  wire [63:0] _GEN_26 = 5'h1a == io_raddr1 ? rf_26 : _GEN_25; // @[RegFile.scala 22:19 RegFile.scala 22:19]
  wire [63:0] _GEN_27 = 5'h1b == io_raddr1 ? rf_27 : _GEN_26; // @[RegFile.scala 22:19 RegFile.scala 22:19]
  wire [63:0] _GEN_28 = 5'h1c == io_raddr1 ? rf_28 : _GEN_27; // @[RegFile.scala 22:19 RegFile.scala 22:19]
  wire [63:0] _GEN_29 = 5'h1d == io_raddr1 ? rf_29 : _GEN_28; // @[RegFile.scala 22:19 RegFile.scala 22:19]
  wire [63:0] _GEN_30 = 5'h1e == io_raddr1 ? rf_30 : _GEN_29; // @[RegFile.scala 22:19 RegFile.scala 22:19]
  wire [63:0] _GEN_31 = 5'h1f == io_raddr1 ? rf_31 : _GEN_30; // @[RegFile.scala 22:19 RegFile.scala 22:19]
  wire [63:0] _GEN_33 = 5'h1 == io_raddr2 ? rf_1 : rf_0; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_34 = 5'h2 == io_raddr2 ? rf_2 : _GEN_33; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_35 = 5'h3 == io_raddr2 ? rf_3 : _GEN_34; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_36 = 5'h4 == io_raddr2 ? rf_4 : _GEN_35; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_37 = 5'h5 == io_raddr2 ? rf_5 : _GEN_36; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_38 = 5'h6 == io_raddr2 ? rf_6 : _GEN_37; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_39 = 5'h7 == io_raddr2 ? rf_7 : _GEN_38; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_40 = 5'h8 == io_raddr2 ? rf_8 : _GEN_39; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_41 = 5'h9 == io_raddr2 ? rf_9 : _GEN_40; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_42 = 5'ha == io_raddr2 ? rf_10 : _GEN_41; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_43 = 5'hb == io_raddr2 ? rf_11 : _GEN_42; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_44 = 5'hc == io_raddr2 ? rf_12 : _GEN_43; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_45 = 5'hd == io_raddr2 ? rf_13 : _GEN_44; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_46 = 5'he == io_raddr2 ? rf_14 : _GEN_45; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_47 = 5'hf == io_raddr2 ? rf_15 : _GEN_46; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_48 = 5'h10 == io_raddr2 ? rf_16 : _GEN_47; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_49 = 5'h11 == io_raddr2 ? rf_17 : _GEN_48; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_50 = 5'h12 == io_raddr2 ? rf_18 : _GEN_49; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_51 = 5'h13 == io_raddr2 ? rf_19 : _GEN_50; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_52 = 5'h14 == io_raddr2 ? rf_20 : _GEN_51; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_53 = 5'h15 == io_raddr2 ? rf_21 : _GEN_52; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_54 = 5'h16 == io_raddr2 ? rf_22 : _GEN_53; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_55 = 5'h17 == io_raddr2 ? rf_23 : _GEN_54; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_56 = 5'h18 == io_raddr2 ? rf_24 : _GEN_55; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_57 = 5'h19 == io_raddr2 ? rf_25 : _GEN_56; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_58 = 5'h1a == io_raddr2 ? rf_26 : _GEN_57; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_59 = 5'h1b == io_raddr2 ? rf_27 : _GEN_58; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_60 = 5'h1c == io_raddr2 ? rf_28 : _GEN_59; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_61 = 5'h1d == io_raddr2 ? rf_29 : _GEN_60; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_62 = 5'h1e == io_raddr2 ? rf_30 : _GEN_61; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  wire [63:0] _GEN_63 = 5'h1f == io_raddr2 ? rf_31 : _GEN_62; // @[RegFile.scala 23:19 RegFile.scala 23:19]
  assign io_rdata1 = io_raddr1 != 5'h0 ? _GEN_31 : 64'h0; // @[RegFile.scala 22:19]
  assign io_rdata2 = io_raddr2 != 5'h0 ? _GEN_63 : 64'h0; // @[RegFile.scala 23:19]
  always @(posedge clock) begin
    if (reset) begin // @[RegFile.scala 20:19]
      rf_0 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'h0 == io_waddr) begin // @[RegFile.scala 26:18]
        rf_0 <= io_wdata; // @[RegFile.scala 26:18]
      end
    end
    if (reset) begin // @[RegFile.scala 20:19]
      rf_1 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'h1 == io_waddr) begin // @[RegFile.scala 26:18]
        rf_1 <= io_wdata; // @[RegFile.scala 26:18]
      end
    end
    if (reset) begin // @[RegFile.scala 20:19]
      rf_2 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'h2 == io_waddr) begin // @[RegFile.scala 26:18]
        rf_2 <= io_wdata; // @[RegFile.scala 26:18]
      end
    end
    if (reset) begin // @[RegFile.scala 20:19]
      rf_3 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'h3 == io_waddr) begin // @[RegFile.scala 26:18]
        rf_3 <= io_wdata; // @[RegFile.scala 26:18]
      end
    end
    if (reset) begin // @[RegFile.scala 20:19]
      rf_4 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'h4 == io_waddr) begin // @[RegFile.scala 26:18]
        rf_4 <= io_wdata; // @[RegFile.scala 26:18]
      end
    end
    if (reset) begin // @[RegFile.scala 20:19]
      rf_5 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'h5 == io_waddr) begin // @[RegFile.scala 26:18]
        rf_5 <= io_wdata; // @[RegFile.scala 26:18]
      end
    end
    if (reset) begin // @[RegFile.scala 20:19]
      rf_6 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'h6 == io_waddr) begin // @[RegFile.scala 26:18]
        rf_6 <= io_wdata; // @[RegFile.scala 26:18]
      end
    end
    if (reset) begin // @[RegFile.scala 20:19]
      rf_7 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'h7 == io_waddr) begin // @[RegFile.scala 26:18]
        rf_7 <= io_wdata; // @[RegFile.scala 26:18]
      end
    end
    if (reset) begin // @[RegFile.scala 20:19]
      rf_8 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'h8 == io_waddr) begin // @[RegFile.scala 26:18]
        rf_8 <= io_wdata; // @[RegFile.scala 26:18]
      end
    end
    if (reset) begin // @[RegFile.scala 20:19]
      rf_9 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'h9 == io_waddr) begin // @[RegFile.scala 26:18]
        rf_9 <= io_wdata; // @[RegFile.scala 26:18]
      end
    end
    if (reset) begin // @[RegFile.scala 20:19]
      rf_10 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'ha == io_waddr) begin // @[RegFile.scala 26:18]
        rf_10 <= io_wdata; // @[RegFile.scala 26:18]
      end
    end
    if (reset) begin // @[RegFile.scala 20:19]
      rf_11 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'hb == io_waddr) begin // @[RegFile.scala 26:18]
        rf_11 <= io_wdata; // @[RegFile.scala 26:18]
      end
    end
    if (reset) begin // @[RegFile.scala 20:19]
      rf_12 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'hc == io_waddr) begin // @[RegFile.scala 26:18]
        rf_12 <= io_wdata; // @[RegFile.scala 26:18]
      end
    end
    if (reset) begin // @[RegFile.scala 20:19]
      rf_13 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'hd == io_waddr) begin // @[RegFile.scala 26:18]
        rf_13 <= io_wdata; // @[RegFile.scala 26:18]
      end
    end
    if (reset) begin // @[RegFile.scala 20:19]
      rf_14 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'he == io_waddr) begin // @[RegFile.scala 26:18]
        rf_14 <= io_wdata; // @[RegFile.scala 26:18]
      end
    end
    if (reset) begin // @[RegFile.scala 20:19]
      rf_15 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'hf == io_waddr) begin // @[RegFile.scala 26:18]
        rf_15 <= io_wdata; // @[RegFile.scala 26:18]
      end
    end
    if (reset) begin // @[RegFile.scala 20:19]
      rf_16 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'h10 == io_waddr) begin // @[RegFile.scala 26:18]
        rf_16 <= io_wdata; // @[RegFile.scala 26:18]
      end
    end
    if (reset) begin // @[RegFile.scala 20:19]
      rf_17 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'h11 == io_waddr) begin // @[RegFile.scala 26:18]
        rf_17 <= io_wdata; // @[RegFile.scala 26:18]
      end
    end
    if (reset) begin // @[RegFile.scala 20:19]
      rf_18 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'h12 == io_waddr) begin // @[RegFile.scala 26:18]
        rf_18 <= io_wdata; // @[RegFile.scala 26:18]
      end
    end
    if (reset) begin // @[RegFile.scala 20:19]
      rf_19 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'h13 == io_waddr) begin // @[RegFile.scala 26:18]
        rf_19 <= io_wdata; // @[RegFile.scala 26:18]
      end
    end
    if (reset) begin // @[RegFile.scala 20:19]
      rf_20 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'h14 == io_waddr) begin // @[RegFile.scala 26:18]
        rf_20 <= io_wdata; // @[RegFile.scala 26:18]
      end
    end
    if (reset) begin // @[RegFile.scala 20:19]
      rf_21 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'h15 == io_waddr) begin // @[RegFile.scala 26:18]
        rf_21 <= io_wdata; // @[RegFile.scala 26:18]
      end
    end
    if (reset) begin // @[RegFile.scala 20:19]
      rf_22 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'h16 == io_waddr) begin // @[RegFile.scala 26:18]
        rf_22 <= io_wdata; // @[RegFile.scala 26:18]
      end
    end
    if (reset) begin // @[RegFile.scala 20:19]
      rf_23 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'h17 == io_waddr) begin // @[RegFile.scala 26:18]
        rf_23 <= io_wdata; // @[RegFile.scala 26:18]
      end
    end
    if (reset) begin // @[RegFile.scala 20:19]
      rf_24 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'h18 == io_waddr) begin // @[RegFile.scala 26:18]
        rf_24 <= io_wdata; // @[RegFile.scala 26:18]
      end
    end
    if (reset) begin // @[RegFile.scala 20:19]
      rf_25 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'h19 == io_waddr) begin // @[RegFile.scala 26:18]
        rf_25 <= io_wdata; // @[RegFile.scala 26:18]
      end
    end
    if (reset) begin // @[RegFile.scala 20:19]
      rf_26 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'h1a == io_waddr) begin // @[RegFile.scala 26:18]
        rf_26 <= io_wdata; // @[RegFile.scala 26:18]
      end
    end
    if (reset) begin // @[RegFile.scala 20:19]
      rf_27 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'h1b == io_waddr) begin // @[RegFile.scala 26:18]
        rf_27 <= io_wdata; // @[RegFile.scala 26:18]
      end
    end
    if (reset) begin // @[RegFile.scala 20:19]
      rf_28 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'h1c == io_waddr) begin // @[RegFile.scala 26:18]
        rf_28 <= io_wdata; // @[RegFile.scala 26:18]
      end
    end
    if (reset) begin // @[RegFile.scala 20:19]
      rf_29 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'h1d == io_waddr) begin // @[RegFile.scala 26:18]
        rf_29 <= io_wdata; // @[RegFile.scala 26:18]
      end
    end
    if (reset) begin // @[RegFile.scala 20:19]
      rf_30 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'h1e == io_waddr) begin // @[RegFile.scala 26:18]
        rf_30 <= io_wdata; // @[RegFile.scala 26:18]
      end
    end
    if (reset) begin // @[RegFile.scala 20:19]
      rf_31 <= 64'h0; // @[RegFile.scala 20:19]
    end else if (io_waddr != 5'h0 & io_wen) begin // @[RegFile.scala 25:38]
      if (5'h1f == io_waddr) begin // @[RegFile.scala 26:18]
        rf_31 <= io_wdata; // @[RegFile.scala 26:18]
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
