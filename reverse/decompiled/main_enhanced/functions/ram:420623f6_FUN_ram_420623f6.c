
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420623f6(int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 * 0x14 + _DAT_ram_3fcc53a8[1] * 0x78 + *_DAT_ram_3fcc53a8);
  *puVar1 = *puVar1 | 4;
  FUN_ram_40399350();
  FUN_ram_40399330(_DAT_ram_3fcc53a8,param_1);
  return;
}

