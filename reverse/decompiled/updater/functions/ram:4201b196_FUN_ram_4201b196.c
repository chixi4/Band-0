
void FUN_ram_4201b196(int *param_1,uint *param_2)

{
  *param_2 = *(uint *)(*param_1 + 0x20) >> 2 & 3;
  return;
}

