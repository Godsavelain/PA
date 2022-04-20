#include <stdio.h>

long long int Memory[10000];

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
    while(fread(&data,sizeof(int),1,p)!=0)
    {
        write_mem(base_addr , data ,0x0f);
        base_addr = base_addr + 4;
        printf("read inst %08x \n",data);
    }
}

int main(){
  inst_load();
  return 0;
}
