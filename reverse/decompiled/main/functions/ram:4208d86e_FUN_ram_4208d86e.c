
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4208d86e(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = _DAT_ram_3fcdfb20;
  *(undefined4 *)(_DAT_ram_3fcdfb20 + 0x34) = param_1;
  *(undefined4 *)(iVar1 + 0x30) = param_2;
  return;
}

