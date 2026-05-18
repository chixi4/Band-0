
uint FUN_ram_42096386(int param_1)

{
  return *(uint *)((0xc008f9d - param_1) * 8) >> 0x1e & 1;
}

