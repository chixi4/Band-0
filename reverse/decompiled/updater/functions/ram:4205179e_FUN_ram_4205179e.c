
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4205179e(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_ram_3fcb67b0 != 0) {
    if (_DAT_ram_3fcb67b0 == param_1) {
      _DAT_ram_3fcb67b0 = *(int *)(param_1 + 4);
    }
    else {
      iVar1 = _DAT_ram_3fcb67b0;
      for (iVar2 = *(int *)(_DAT_ram_3fcb67b0 + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
        if (iVar2 == param_1) {
          *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 4);
          break;
        }
        iVar1 = iVar2;
      }
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

