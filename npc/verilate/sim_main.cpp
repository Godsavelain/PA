#include "VCore.h"    // Verilog模块会被编译成Vxxx
#include "verilated.h"
#include "svdpi.h"
#include "VCore__Dpi.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <verilated_vcd_c.h>

bool has_end = false;

extern "C" void wb_info (const svBitVecVal* inst,const svBitVecVal* pc ,svBit ebreak)
{
    int instruction = *inst;
    int pc_valie = *pc;
    bool has_ebreak = ebreak;
    if(has_ebreak){
        has_end = true;
    }
    printf("pc:%08x inst:%08x\n",pc_valie,instruction );
}


long long int Memory[10000];

long long int read_mem(int addr){
    int offset = (addr - 0x80000000);
    int i = offset / 8;
    int j = offset % 8;
    long long int result = 0;
    if(j == 4){
        result = Memory[i]>>32;
    }
    else{
        result = Memory[i];
    }
    return result;
}

void write_mem(int addr,long long int data, unsigned char write_mask){
    int offset = (addr - 0x80000000);
    int i = offset / 8;
    long long int old_data = Memory[i];
    long long int temp_data = 0;
    for(int j=0;j<8;j++){
        if(write_mask % 2 == 1){
            temp_data = temp_data | (((long long int)0xff << (j*8)) & data);
        }
        else{
            temp_data = temp_data | (((long long int)0xff << (j*8)) & old_data);
        }
        write_mask = write_mask/2;
    }
    Memory[i] = temp_data;
}

void inst_load(){
    FILE *p;
    p = fopen("./tests/dummy-riscv64-npc.bin","rb");
    if(!p){
        printf("fail to open file\n");
    }
    int base_addr = 0x80000000;
    int data = 0;
    bool low = true;
    while(fread(&data,sizeof(int),1,p)!=0)
    {
        if(low){
            write_mem(base_addr , data ,0x0f);
            low = false;
        }
        else{
            write_mem(base_addr , ((long long int)data << 32)  ,0xf0);
            low = true;
        }
        base_addr = base_addr + 4;
        printf("read inst %08x \n",data);
    }
}


int main(int argc, char **argv, char **env){
    inst_load();
    // write_mem(0x80000000 , 0x0020811300100093 ,0xff);
    // write_mem(0x80000008 , 0x0040821300308193 ,0xff);
    // write_mem(0x80000010 , 0x0010007300518193 ,0xff);
    // write_mem(0x80000000 , 0x0020811300100093 ,0xff);
    // write_mem(0x80000008 , 0x00408213008000EF ,0xff);
    // write_mem(0x80000010 , 0x0010007300518193 ,0xff);

    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);            // Verilator仿真运行时参数（和编译的参数不一样，详见Verilator手册第6章
    VCore *top = new VCore;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    top->trace(m_trace, 20);
    m_trace->open("waveform.vcd");

    vluint64_t sim_time = 0;
    int max_cycle = 10;
    
    top->reset = 1;
    for(int i=0;i<3;i++){
        top->clock = 0;
        top->eval();
        m_trace->dump(sim_time);
        sim_time++;
        top->clock = 1;
        top->eval();
        m_trace->dump(sim_time);
        sim_time++;
    }
    top->reset = 0;
    top->clock = 0;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;
    
    top->io_imem_read_ok = 0;
    top->io_imem_write_ok = false;
    top->io_dmem_rdata = 0;
    top->io_dmem_read_ok = false;
    top->io_dmem_write_ok = false;

    top->clock = 1;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;
    top->clock = 0;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;
    int addr;
    bool read_en;
    addr = top->io_imem_raddr;
    read_en = top->io_imem_ren;
    // while (!Verilated::gotFinish()) { 
    while (!has_end) { 
    top->clock = 1;
    if(read_en){
        top->io_imem_rdata = read_mem(addr);
        top->io_imem_read_ok = true;
    }
    else{
        top->io_imem_read_ok = false;
    }
    top->eval();
    addr = top->io_imem_raddr;
    m_trace->dump(sim_time);
    sim_time++;
    top->clock = 0;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    max_cycle--;

    }

    m_trace->close();
    delete top;
    delete contextp;
    return 0;
}
