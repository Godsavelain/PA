
module Wb_Dpi
(
    input            clk,
    input wire[31:0] inst,
    input wire[31:0] pc,
    input wire       ebreak
);

// import "DPI-C" function void wb_info (input bit[31:0] inst, input bit[31:0] pc ,input bit ebreak);
import "DPI-C" function void wb_info ( bit[31:0] inst, bit[31:0] pc ,input bit ebreak);
bit[31:0]  inst1,pc1;

always @(posedge clk ) begin
assign inst1 = inst;
assign pc1 = pc;
    wb_info(inst1,pc1,ebreak);
end
endmodule