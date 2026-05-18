
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40390608(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = _DAT_ram_3fcb6598;
  if (param_1 + 0xbfc80000U < 0x40000) {
    param_1 = *(int *)(param_1 + -4);
  }
  while( true ) {
    if (iVar1 == 0) {
      ebreak();
      iVar1 = _DAT_ram_0000001c;
    }
    if (((*(int *)(iVar1 + 0x1c) != 0) && (*(int *)(iVar1 + 0xc) <= param_1)) &&
       (param_1 < *(int *)(iVar1 + 0x10))) break;
    iVar1 = *(int *)(iVar1 + 0x20);
  }
  (*(code *)&LAB_ram_4001035c)();
  return;
}

