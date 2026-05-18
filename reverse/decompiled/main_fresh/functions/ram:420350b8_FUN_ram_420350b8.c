
uint FUN_ram_420350b8(int param_1,uint param_2)

{
  return *(uint *)(param_1 + ((int)param_2 >> 5) * 4) & 1 << (param_2 & 0x1f);
}

