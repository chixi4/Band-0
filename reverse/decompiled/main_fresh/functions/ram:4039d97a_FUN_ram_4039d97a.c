
void FUN_ram_4039d97a(int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)((0xc008f9d - param_1) * 8);
  *puVar1 = *puVar1 | 0xc0000000;
  return;
}

