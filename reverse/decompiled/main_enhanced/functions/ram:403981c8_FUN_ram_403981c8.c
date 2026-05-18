
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_ram_403981c8(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  byte bVar7;
  
  piVar5 = _DAT_ram_3fcc4e98;
  if (_DAT_ram_3fcc4e64 != 0) {
    _DAT_ram_3fcc4e7c = _DAT_ram_3fcc4e7c + 1;
    return 0;
  }
  uVar1 = _DAT_ram_3fcc4e88 + 1;
  _DAT_ram_3fcc4e88 = uVar1;
  if (uVar1 == 0) {
    if (*_DAT_ram_3fcc4e98 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf9e(0,0,0,0);
    }
    _DAT_ram_3fcc4e98 = _DAT_ram_3fcc4e94;
    _DAT_ram_3fcc4e94 = piVar5;
    _DAT_ram_3fcc4e74 = _DAT_ram_3fcc4e74 + 1;
    FUN_ram_40397dd8();
  }
  bVar7 = 0;
  if (_DAT_ram_3fcc4e6c <= uVar1) {
    while (*_DAT_ram_3fcc4e98 != 0) {
      iVar6 = *(int *)(_DAT_ram_3fcc4e98[3] + 0xc);
      _DAT_ram_3fcc4e6c = *(uint *)(iVar6 + 4);
      if (uVar1 < _DAT_ram_3fcc4e6c) goto LAB_ram_4039825c;
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
      _DAT_ram_3fcc4e84 = 1 << (uVar4 & 0x1f) | _DAT_ram_3fcc4e84;
      piVar5 = (int *)(&DAT_ram_3fcb8cc8 + uVar4 * 0x14);
      iVar3 = *(int *)(uVar4 * 0x14 + 0x3fcb8ccc);
      *(int *)(iVar6 + 8) = iVar3;
      *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar3 + 8);
      *(int *)(*(int *)(iVar3 + 8) + 4) = iVar2;
      *(int *)(iVar3 + 8) = iVar2;
      *(int **)(iVar6 + 0x14) = piVar5;
      *piVar5 = *piVar5 + 1;
      bVar7 = bVar7 | *(uint *)(_DAT_ram_3fcc4e9c + 0x2c) < uVar4;
    }
    _DAT_ram_3fcc4e6c = 0xffffffff;
  }
LAB_ram_4039825c:
  return (1 < *(uint *)(&DAT_ram_3fcb8cc8 + *(int *)(_DAT_ram_3fcc4e9c + 0x2c) * 0x14) ||
         _DAT_ram_3fcc4e78 != 0) | bVar7;
}

