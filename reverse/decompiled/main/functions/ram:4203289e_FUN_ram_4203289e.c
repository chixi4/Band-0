
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203289e(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  thunk_FUN_ram_4202b7dc();
  iVar3 = FUN_ram_420319ca();
  uVar2 = 0xf;
  if (iVar3 != 0) {
    iVar3 = FUN_ram_42031998();
    piVar1 = _DAT_ram_3fcb6bb8;
    if (iVar3 == 0) {
      iVar3 = thunk_FUN_ram_40390538(_DAT_ram_3fcb6bbc,(*_DAT_ram_3fcb6bb8 + 1) * 4);
      if (iVar3 != 0) {
        iVar4 = *piVar1;
        _DAT_ram_3fcb6bbc = iVar3;
        *(undefined4 *)(iVar3 + iVar4 * 4) = param_1;
        *piVar1 = iVar4 + 1;
        uVar2 = 0;
        goto LAB_ram_420328c2;
      }
    }
    uVar2 = 6;
  }
LAB_ram_420328c2:
  thunk_FUN_ram_4202b7f6();
  return uVar2;
}

