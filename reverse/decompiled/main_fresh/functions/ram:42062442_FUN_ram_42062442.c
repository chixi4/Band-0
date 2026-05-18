
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42062442(int param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  
  FUN_ram_40396966();
  puVar1 = (uint *)((_DAT_ram_3fcc53a8[1] * 4 + param_1 + 0x14) * 8 + *_DAT_ram_3fcc53a8);
  *puVar1 = *puVar1 & 0xffc0000f | (param_2 & 0x3ffff) << 4;
  *puVar1 = *puVar1 & 0xfffffff0 | param_3 & 0xf;
  *puVar1 = *puVar1 | 0x2000000;
  FUN_ram_40396994();
  return 0;
}

