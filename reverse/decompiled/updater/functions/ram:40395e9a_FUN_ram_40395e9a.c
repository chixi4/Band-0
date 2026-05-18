
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40395e9a(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  FUN_ram_40394d60();
  _DAT_ram_3fcb65ec = _DAT_ram_3fcb65ec + 1;
  if (_DAT_ram_3fcb65ec == 1) {
    iVar1 = 0x3fcb17cc;
    do {
      iVar4 = iVar1 + 0x14;
      FUN_ram_40395112(iVar1);
      iVar1 = iVar4;
    } while (iVar4 != 0x3fcb19c0);
    FUN_ram_40395112(0x3fcb17b8);
    FUN_ram_40395112(0x3fcb17a4);
    FUN_ram_40395112(&DAT_ram_3fcb1790);
    FUN_ram_40395112(0x3fcb177c);
    FUN_ram_40395112(&DAT_ram_3fcb1768);
    _DAT_ram_3fcb65f8 = 0x3fcb17b8;
    _DAT_ram_3fcb65f4 = 0x3fcb17a4;
  }
  uVar2 = *(uint *)(param_1 + 0x2c);
  if ((_DAT_ram_3fcb65fc == 0) ||
     (((_DAT_ram_3fcb65e0 == 0 && (_DAT_ram_3fcb65fc != 0)) &&
      (*(uint *)(_DAT_ram_3fcb65fc + 0x2c) <= uVar2)))) {
    _DAT_ram_3fcb65fc = param_1;
  }
  _DAT_ram_3fcb65d0 = _DAT_ram_3fcb65d0 + 1;
  _DAT_ram_3fcb65e4 = 1 << (uVar2 & 0x1f) | _DAT_ram_3fcb65e4;
  piVar3 = (int *)(uVar2 * 0x14 + 0x3fcb17cc);
  iVar1 = *(int *)(uVar2 * 0x14 + 0x3fcb17d0);
  *(int *)(param_1 + 8) = iVar1;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar1 + 8);
  *(int *)(*(int *)(iVar1 + 8) + 4) = param_1 + 4;
  *(int *)(iVar1 + 8) = param_1 + 4;
  *(int **)(param_1 + 0x14) = piVar3;
  *piVar3 = *piVar3 + 1;
  if (_DAT_ram_3fcb65e0 != 0) {
    if (*(uint *)(_DAT_ram_3fcb65fc + 0x2c) < uVar2 + 1) {
      FUN_ram_40394dce();
    }
  }
  FUN_ram_40394d8e();
  return;
}

