
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40395db0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = _DAT_ram_3fcb65fc;
  uVar2 = _DAT_ram_3fcb65e8;
  *(undefined1 *)(_DAT_ram_3fcb65fc + 0x14e) = 0;
  iVar4 = FUN_ram_40395174(iVar1 + 4);
  iVar1 = _DAT_ram_3fcb176c;
  if (iVar4 == 0) {
    _DAT_ram_3fcb65e4 = ~(1 << (*(uint *)(_DAT_ram_3fcb65fc + 0x2c) & 0x1f)) & _DAT_ram_3fcb65e4;
  }
  if ((param_1 == -1) && (param_2 != 0)) {
    *(int *)(_DAT_ram_3fcb65fc + 8) = _DAT_ram_3fcb176c;
    *(undefined4 *)(_DAT_ram_3fcb65fc + 0xc) = *(undefined4 *)(iVar1 + 8);
    *(int *)(*(int *)(iVar1 + 8) + 4) = _DAT_ram_3fcb65fc + 4;
    *(int *)(iVar1 + 8) = _DAT_ram_3fcb65fc + 4;
    *(undefined1 **)(_DAT_ram_3fcb65fc + 0x14) = &DAT_ram_3fcb1768;
    _DAT_ram_3fcb1768 = _DAT_ram_3fcb1768 + 1;
  }
  else {
    uVar3 = param_1 + uVar2;
    *(uint *)(_DAT_ram_3fcb65fc + 4) = uVar3;
    if (uVar3 < uVar2) {
      FUN_ram_40395144(_DAT_ram_3fcb65f4,_DAT_ram_3fcb65fc + 4);
      return;
    }
    FUN_ram_40395144(_DAT_ram_3fcb65f8,_DAT_ram_3fcb65fc + 4);
    if (uVar3 < _DAT_ram_3fcb65cc) {
      _DAT_ram_3fcb65cc = uVar3;
    }
  }
  return;
}

