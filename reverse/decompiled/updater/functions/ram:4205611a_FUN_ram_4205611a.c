
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4205611a(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return;
  }
  if (_DAT_ram_3fcb6804 == param_1) {
    _DAT_ram_3fcb6804 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar2 = _DAT_ram_3fcb6804;
    if (_DAT_ram_3fcb6804 != 0) {
      do {
        iVar1 = iVar2;
        iVar2 = *(int *)(iVar1 + 0xc);
        if (iVar2 == 0) goto LAB_ram_42056130;
      } while (iVar2 != param_1);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    }
  }
LAB_ram_42056130:
  FUN_ram_4205151c(1);
  return;
}

