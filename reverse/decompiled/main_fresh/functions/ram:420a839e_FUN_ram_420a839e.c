
uint FUN_ram_420a839e(int param_1,int param_2,uint param_3,uint param_4)

{
  return ~((param_2 - (param_3 & 0xff) | (param_3 & 0xff) - param_1) >> 8) & param_4 & 0xff;
}

