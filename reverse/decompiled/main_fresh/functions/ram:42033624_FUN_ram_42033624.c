
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42033624(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = _DAT_ram_3fcb6bc4;
  *(undefined4 *)(_DAT_ram_3fcb6bc4 + 0x18) = param_1;
  *(undefined4 *)(iVar1 + 0x1c) = param_2;
  return;
}

