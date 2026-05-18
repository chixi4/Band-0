
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_403963e2(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  FUN_ram_40394d60();
  _DAT_ram_3fcb65c4 = _DAT_ram_3fcb65c4 + -1;
  if ((_DAT_ram_3fcb65c4 == 0) && (_DAT_ram_3fcb65ec != 0)) {
    iVar6 = 0;
    while (_DAT_ram_3fcb1790 != 0) {
      iVar6 = *(int *)(_DAT_ram_3fcb179c + 0xc);
      piVar5 = *(int **)(iVar6 + 0x28);
      *(undefined4 *)(*(int *)(iVar6 + 0x1c) + 8) = *(undefined4 *)(iVar6 + 0x20);
      *(undefined4 *)(*(int *)(iVar6 + 0x20) + 4) = *(undefined4 *)(iVar6 + 0x1c);
      if (piVar5[1] == iVar6 + 0x18) {
        piVar5[1] = *(int *)(iVar6 + 0x20);
      }
      *(undefined4 *)(iVar6 + 0x28) = 0;
      iVar2 = iVar6 + 4;
      *piVar5 = *piVar5 + -1;
      piVar5 = *(int **)(iVar6 + 0x14);
      *(undefined4 *)(*(int *)(iVar6 + 8) + 8) = *(undefined4 *)(iVar6 + 0xc);
      *(undefined4 *)(*(int *)(iVar6 + 0xc) + 4) = *(undefined4 *)(iVar6 + 8);
      if (piVar5[1] == iVar2) {
        piVar5[1] = *(int *)(iVar6 + 0xc);
      }
      *(undefined4 *)(iVar6 + 0x14) = 0;
      *piVar5 = *piVar5 + -1;
      uVar4 = *(uint *)(iVar6 + 0x2c);
      _DAT_ram_3fcb65e4 = 1 << (uVar4 & 0x1f) | _DAT_ram_3fcb65e4;
      piVar5 = (int *)(uVar4 * 0x14 + 0x3fcb17cc);
      iVar3 = *(int *)(uVar4 * 0x14 + 0x3fcb17d0);
      *(int *)(iVar6 + 8) = iVar3;
      *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar3 + 8);
      *(int *)(*(int *)(iVar3 + 8) + 4) = iVar2;
      *(int *)(iVar3 + 8) = iVar2;
      *(int **)(iVar6 + 0x14) = piVar5;
      *piVar5 = *piVar5 + 1;
      if (*(uint *)(_DAT_ram_3fcb65fc + 0x2c) < uVar4 + 1) {
        _DAT_ram_3fcb65d8 = 1;
      }
    }
    if (iVar6 != 0) {
      FUN_ram_40395fce();
    }
    iVar6 = _DAT_ram_3fcb65dc;
    if (_DAT_ram_3fcb65dc != 0) {
      do {
        iVar2 = FUN_ram_40396270();
        if (iVar2 != 0) {
          _DAT_ram_3fcb65d8 = 1;
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      _DAT_ram_3fcb65dc = 0;
    }
    if (_DAT_ram_3fcb65d8 != 0) {
      FUN_ram_40394dce();
      uVar1 = 1;
      goto LAB_ram_4039640c;
    }
  }
  uVar1 = 0;
LAB_ram_4039640c:
  FUN_ram_40394d8e();
  return uVar1;
}

