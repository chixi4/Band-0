
void FUN_ram_4039890e(int param_1)

{
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x20000000;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xdfffffff;
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x8000000;
  return;
}

