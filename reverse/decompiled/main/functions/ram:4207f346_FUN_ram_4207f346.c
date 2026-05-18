
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4207f346(int param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(_DAT_ram_3fcc4014 + 0xe4);
  *(undefined1 *)(iVar1 + 0x135) = param_2;
  *(undefined1 *)(iVar1 + param_1 + 0x137) = param_2;
  return;
}

