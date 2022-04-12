#include "VInstFetch.h"    // Verilog模块会被编译成Vxxx
#include "verilated.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <verilated_vcd_c.h>

int main(int argc, char **argv, char **env){
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);            // Verilator仿真运行时参数（和编译的参数不一样，详见Verilator手册第6章
    VInstFetch *top = new VInstFetch;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    top->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    vluint64_t sim_time = 0;
    
    //while (!Verilated::gotFinish()) { 
    top->reset = 1;
    top->clock = 0;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;
    top->clock = 1;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;


    top->reset = 0;
    top->clock = 0;
    top->io_imem_req_ready = 1;
    top->io_imem_resp_valid = 0;
    top->io_imem_resp_bits_rvalid = 0;
    int previous_pc = 0;
    previous_pc = top->io_imem_req_bits_araddr;
    top->io_imem_resp_bits_old_pc = 0;
    top->io_out_ready = 1;
    top->io_imem_resp_bits_rdata = 0;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->clock = 1;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;
   
    top->reset = 0;
    top->clock = 0;
    top->io_imem_req_ready = 1;
    top->io_imem_resp_valid = 1;
    top->io_imem_resp_bits_rvalid = 1;
    top->io_imem_resp_bits_old_pc = previous_pc;
    previous_pc = top->io_imem_req_bits_araddr;
    top->io_out_ready = 1;
    top->io_imem_resp_bits_rdata = 0;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;
    
    top->clock = 1;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;
   

    top->reset = 0;
    top->clock = 0;
    top->io_imem_req_ready = 1;
    top->io_imem_resp_valid = 1;
    top->io_imem_resp_bits_rvalid = 1;
    top->io_imem_resp_bits_old_pc = previous_pc;
    previous_pc = top->io_imem_req_bits_araddr;
    top->io_out_ready = 1;
    top->io_imem_resp_bits_rdata = 0;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->clock = 1;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->reset = 0;
    top->clock = 0;
    top->io_imem_req_ready = 1;
    top->io_imem_resp_valid = 1;
    top->io_imem_resp_bits_rvalid = 1;
    top->io_imem_resp_bits_old_pc = previous_pc;
    previous_pc = top->io_imem_req_bits_araddr;
    top->io_out_ready = 1;
    top->io_imem_resp_bits_rdata = 0;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->clock = 1;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;
   

    m_trace->close();
    delete top;
    delete contextp;
    return 0;
}
