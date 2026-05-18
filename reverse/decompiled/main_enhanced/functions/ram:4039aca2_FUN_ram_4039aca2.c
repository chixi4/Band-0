
void FUN_ram_4039aca2(int param_1,uint param_2,uint param_3)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xf7ffffff | (param_2 & 1) << 0x1b;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xefffffff | (param_3 & 1) << 0x1c;
  return;
}

