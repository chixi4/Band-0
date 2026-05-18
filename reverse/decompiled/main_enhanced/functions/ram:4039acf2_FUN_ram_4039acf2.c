
void FUN_ram_4039acf2(int param_1)

{
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0x7fffffff;
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 2;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x10000000;
  return;
}

