
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420530a0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = 0;
  iVar1 = 0;
  for (iVar4 = _DAT_ram_3fcb67c0; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xc)) {
    if ((*(int *)(iVar4 + 0x14) == param_1) &&
       (uVar3 = _DAT_ram_3fcb67cc - *(int *)(iVar4 + 0x24), uVar2 <= uVar3)) {
      iVar1 = iVar4;
      uVar2 = uVar3;
    }
  }
  if (iVar1 != 0) {
    FUN_ram_42052f60(iVar1,0);
    return;
  }
  return;
}

