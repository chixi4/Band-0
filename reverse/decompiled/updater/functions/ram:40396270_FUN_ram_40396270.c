
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_ram_40396270(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  byte bVar7;
  
  piVar5 = _DAT_ram_3fcb65f8;
  if (_DAT_ram_3fcb65c4 != 0) {
    _DAT_ram_3fcb65dc = _DAT_ram_3fcb65dc + 1;
    return 0;
  }
  uVar1 = _DAT_ram_3fcb65e8 + 1;
  _DAT_ram_3fcb65e8 = uVar1;
  if (uVar1 == 0) {
    _DAT_ram_3fcb65f8 = _DAT_ram_3fcb65f4;
    _DAT_ram_3fcb65f4 = piVar5;
    _DAT_ram_3fcb65d4 = _DAT_ram_3fcb65d4 + 1;
    FUN_ram_40395fce();
  }
  bVar7 = 0;
  if (_DAT_ram_3fcb65cc <= uVar1) {
    while (*_DAT_ram_3fcb65f8 != 0) {
      iVar6 = *(int *)(_DAT_ram_3fcb65f8[3] + 0xc);
      _DAT_ram_3fcb65cc = *(uint *)(iVar6 + 4);
      if (uVar1 < _DAT_ram_3fcb65cc) goto LAB_ram_403962f6;
      piVar5 = *(int **)(iVar6 + 0x14);
      iVar2 = iVar6 + 4;
      *(undefined4 *)(*(int *)(iVar6 + 8) + 8) = *(undefined4 *)(iVar6 + 0xc);
      *(undefined4 *)(*(int *)(iVar6 + 0xc) + 4) = *(undefined4 *)(iVar6 + 8);
      if (piVar5[1] == iVar2) {
        piVar5[1] = *(int *)(iVar6 + 0xc);
      }
      *(undefined4 *)(iVar6 + 0x14) = 0;
      *piVar5 = *piVar5 + -1;
      if (*(int *)(iVar6 + 0x28) != 0) {
        piVar5 = *(int **)(iVar6 + 0x28);
        *(undefined4 *)(*(int *)(iVar6 + 0x1c) + 8) = *(undefined4 *)(iVar6 + 0x20);
        *(undefined4 *)(*(int *)(iVar6 + 0x20) + 4) = *(undefined4 *)(iVar6 + 0x1c);
        if (piVar5[1] == iVar6 + 0x18) {
          piVar5[1] = *(int *)(iVar6 + 0x20);
        }
        *(undefined4 *)(iVar6 + 0x28) = 0;
        *piVar5 = *piVar5 + -1;
      }
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
      bVar7 = bVar7 | *(uint *)(_DAT_ram_3fcb65fc + 0x2c) < uVar4;
    }
    _DAT_ram_3fcb65cc = 0xffffffff;
  }
LAB_ram_403962f6:
  return (1 < *(uint *)(*(int *)(_DAT_ram_3fcb65fc + 0x2c) * 0x14 + 0x3fcb17cc) ||
         _DAT_ram_3fcb65d8 != 0) | bVar7;
}

