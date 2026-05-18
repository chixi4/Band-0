
void FUN_ram_4039b5a6(int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)((0xc008f9d - param_1) * 8);
  *puVar1 = *puVar1 | 0xc0000000;
  return;
}

