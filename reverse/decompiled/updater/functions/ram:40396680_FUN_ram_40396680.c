
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_40396680(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = *(int *)(*(int *)(param_1 + 0xc) + 0xc);
  piVar5 = *(int **)(iVar6 + 0x28);
  iVar2 = iVar6 + 0x18;
  *(undefined4 *)(*(int *)(iVar6 + 0x1c) + 8) = *(undefined4 *)(iVar6 + 0x20);
  *(undefined4 *)(*(int *)(iVar6 + 0x20) + 4) = *(undefined4 *)(iVar6 + 0x1c);
  if (piVar5[1] == iVar2) {
    piVar5[1] = *(int *)(iVar6 + 0x20);
  }
  *(undefined4 *)(iVar6 + 0x28) = 0;
  uVar3 = *(uint *)(iVar6 + 0x2c);
  *piVar5 = *piVar5 + -1;
  iVar4 = _DAT_ram_3fcb1794;
  if (_DAT_ram_3fcb65c4 == 0) {
    piVar5 = *(int **)(iVar6 + 0x14);
    *(undefined4 *)(*(int *)(iVar6 + 8) + 8) = *(undefined4 *)(iVar6 + 0xc);
    *(undefined4 *)(*(int *)(iVar6 + 0xc) + 4) = *(undefined4 *)(iVar6 + 8);
    iVar2 = iVar6 + 4;
    if (piVar5[1] == iVar2) {
      piVar5[1] = *(int *)(iVar6 + 0xc);
    }
    *(undefined4 *)(iVar6 + 0x14) = 0;
    *piVar5 = *piVar5 + -1;
    _DAT_ram_3fcb65e4 = 1 << (uVar3 & 0x1f) | _DAT_ram_3fcb65e4;
    piVar5 = (int *)(uVar3 * 0x14 + 0x3fcb17cc);
    iVar4 = *(int *)(uVar3 * 0x14 + 0x3fcb17d0);
    *(int *)(iVar6 + 8) = iVar4;
    *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar4 + 8);
    *(int *)(*(int *)(iVar4 + 8) + 4) = iVar2;
    *(int *)(iVar4 + 8) = iVar2;
    *(int **)(iVar6 + 0x14) = piVar5;
  }
  else {
    piVar5 = (int *)&DAT_ram_3fcb1790;
    *(int *)(iVar6 + 0x1c) = _DAT_ram_3fcb1794;
    *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(iVar4 + 8);
    *(int *)(*(int *)(iVar4 + 8) + 4) = iVar2;
    *(int *)(iVar4 + 8) = iVar2;
    *(undefined1 **)(iVar6 + 0x28) = &DAT_ram_3fcb1790;
  }
  *piVar5 = *piVar5 + 1;
  bVar1 = *(uint *)(_DAT_ram_3fcb65fc + 0x2c) < uVar3;
  if (bVar1) {
    _DAT_ram_3fcb65d8 = 1;
  }
  return bVar1;
}

