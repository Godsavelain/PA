
module Wb_Dpi
(
    input wire[31:0] inst,
    input wire[31:0] pc,
    input wire       ebreak
);

import "DPI-C" function void wb_info (input bit[31:0] inst, input bit[31:0] pc ,input bit ebreak);

initial begin
    wb_info(inst,pc,ebreak);
end
endmodule