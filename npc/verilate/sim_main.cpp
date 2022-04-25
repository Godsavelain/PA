#include "VCore.h"    // Verilog模块会被编译成Vxxx
#include "verilated.h"
#include "svdpi.h"
#include "VCore__Dpi.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <verilated_vcd_c.h>

//Log

#define ASNI_FG_BLACK   "\33[1;30m"
#define ASNI_FG_RED     "\33[1;31m"
#define ASNI_FG_GREEN   "\33[1;32m"
#define ASNI_FG_YELLOW  "\33[1;33m"
#define ASNI_FG_BLUE    "\33[1;34m"
#define ASNI_FG_MAGENTA "\33[1;35m"
#define ASNI_FG_CYAN    "\33[1;36m"
#define ASNI_FG_WHITE   "\33[1;37m"
#define ASNI_BG_BLACK   "\33[1;40m"
#define ASNI_BG_RED     "\33[1;41m"
#define ASNI_BG_GREEN   "\33[1;42m"
#define ASNI_BG_YELLOW  "\33[1;43m"
#define ASNI_BG_BLUE    "\33[1;44m"
#define ASNI_BG_MAGENTA "\33[1;35m"
#define ASNI_BG_CYAN    "\33[1;46m"
#define ASNI_BG_WHITE   "\33[1;47m"
#define ASNI_NONE       "\33[0m"

#define ASNI_FMT(str, fmt) fmt str ASNI_NONE
#define TOP_REG(i) io_regs_out_##i

long long int Memory[10000];

bool has_end = false;

VCore *top;

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

void inst_load(char* filename){
    FILE *p;
    char real_name[100];
    sprintf(real_name,"%s%s%s","./tests/",filename,"-riscv64-npc.bin");
    printf("aaaaa%s\n",real_name);
    //real_name = strcat(strcat(pre,filename),after);
    // p = fopen("./tests/dummy-riscv64-npc.bin","rb");
    p = fopen(real_name,"rb");
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


void npc_run(){

}


int main(int argc, char **argv, char **env){
    //printf("name:%s",argv[1]);
    if(argc < 1){
        printf("need to specify test name\n");
        return 1;
    }
    inst_load(argv[1]);
    // write_mem(0x80000000 , 0x0020811300100093 ,0xff);
    // write_mem(0x80000008 , 0x0040821300308193 ,0xff);
    // write_mem(0x80000010 , 0x0010007300518193 ,0xff);
    // write_mem(0x80000000 , 0x0020811300100093 ,0xff);
    // write_mem(0x80000008 , 0x00408213008000EF ,0xff);
    // write_mem(0x80000010 , 0x0010007300518193 ,0xff);

    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);            // Verilator仿真运行时参数（和编译的参数不一样，详见Verilator手册第6章
    top = new VCore;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    top->trace(m_trace, 20);
    m_trace->open("waveform.vcd");

    vluint64_t sim_time = 0;
    top->io_write_regs = 0;
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
    }

    int a10 = 0;
    int success;
    a10 = top->io_regs_out_10;
    if(a10 == 0){
        printf("HIT GOOD TRAP at at pc = 0x%016x\n",top->io_commit_pc);
        success = 0;
    }
    else{
        printf("HIT BAD TRAP at at pc = 0x%016x\n",top->io_commit_pc);
        success = 1;
    }

    m_trace->close();
    delete top;
    delete contextp;
    return success;
}
