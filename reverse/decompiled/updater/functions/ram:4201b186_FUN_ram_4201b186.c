
void FUN_ram_4201b186(int *param_1,uint param_2)

{
  *(uint *)(*param_1 + 0x20) = *(uint *)(*param_1 + 0x20) & 0xfffffff3 | (param_2 & 3) << 2;
  return;
}

