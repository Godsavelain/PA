import "DPI-C" function void wb_info (input bit[31:0] inst, input bit[31:0] pc ,input bit ebreak);

module Wb_Dpi
(
    input wire[31:0] inst,
    input wire[31:0] pc,
    input wire       ebreak,
);

wb_info(inst,pc,ebreak);

endmodule