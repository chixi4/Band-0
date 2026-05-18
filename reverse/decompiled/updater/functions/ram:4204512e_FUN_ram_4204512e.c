
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204512e(uint param_1)

{
  int iVar1;
  
  iVar1 = _DAT_ram_3fcdfb20;
  if (param_1 < 3) {
    *(undefined1 *)(_DAT_ram_3fcdfb20 + param_1 + 0x98) = 0;
    *(undefined4 *)(iVar1 + param_1 * 0x24 + 0x50) = 0;
  }
  return;
}

