
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403a26e0(void)

{
  int iVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  code *pcVar10;
  undefined4 uVar11;
  int iVar12;
  
  iVar1 = _DAT_ram_3fcdfebc;
  uVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0xf4))();
  iVar12 = _DAT_ram_3fcdfebc;
  *(undefined2 *)(iVar1 + 0x1e) = uVar3;
  iVar5 = _DAT_ram_3fcdfed0;
  uVar2 = *(undefined1 *)(iVar12 + 9);
  *(undefined1 *)(iVar1 + 0x19) = 0;
  *(undefined1 *)(iVar1 + 0x18) = uVar2;
  uVar2 = (**(code **)(iVar5 + 0x3f0))();
  iVar12 = _DAT_ram_3fcdfed0;
  *(undefined1 *)(iVar1 + 0x1c) = uVar2;
  uVar2 = (**(code **)(iVar12 + 0x490))();
  iVar5 = _DAT_ram_3fcdfed0;
  iVar12 = _DAT_ram_3fcdfebc;
  *(undefined1 *)(iVar1 + 0x1d) = uVar2;
  uVar11 = *(undefined4 *)(iVar12 + 0x44);
  pcVar10 = *(code **)(iVar5 + 0x414);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x34) = uVar11;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  iVar12 = _DAT_ram_6004b848;
  iVar5 = (*pcVar10)();
  iVar5 = (iVar12 - (uint)*(byte *)(*(int *)(_DAT_ram_3fcdfebc + 0x88) +
                                   (uint)*(byte *)(iVar1 + 0x1d))) - iVar5;
  iVar6 = (**(code **)(_DAT_ram_3fcdfed0 + 0x584))(iVar5);
  iVar7 = (**(code **)(_DAT_ram_3fcdfed0 + 0x580))();
  iVar12 = _DAT_ram_3fcdfecc;
  uVar8 = iVar5 - iVar7;
  if (*(ushort *)(_DAT_ram_3fcdff6c + 0x24) == uVar8) {
    iVar6 = iVar6 + 1;
    uVar8 = 0;
  }
  *(uint *)(iVar1 + 0x38) = uVar8;
  *(int *)(iVar1 + 0x34) = *(int *)(iVar1 + 0x34) + iVar6;
  pcVar10 = *(code **)(iVar12 + 0xf4);
  *(short *)(iVar1 + 0x20) = (short)_DAT_ram_60045804;
  uVar8 = (*pcVar10)();
  iVar12 = _DAT_ram_3fcdfebc;
  if (uVar8 < 4) {
    if (uVar8 < 2) {
      if (uVar8 == 1) {
        uVar4 = (**(code **)(_DAT_ram_3fcdfed0 + 0x3fc))();
        uVar8 = _DAT_ram_60045134;
        *(ushort *)(iVar1 + 0x22) = uVar4;
        iVar12 = _DAT_ram_3fcdfebc;
        if ((uVar8 & 0x20) != 0) {
          *(ushort *)(iVar1 + 0x22) = uVar4 | 0x8000;
          _DAT_ram_60045134 = _DAT_ram_60045134 & 0xffffffdf;
          iVar12 = _DAT_ram_3fcdfebc;
        }
      }
    }
    else {
      uVar4 = (**(code **)(_DAT_ram_3fcdfed0 + 0x3fc))(0);
      uVar8 = _DAT_ram_60045134;
      *(ushort *)(iVar1 + 0x22) = uVar4;
      if ((uVar8 & 0x20) != 0) {
        *(ushort *)(iVar1 + 0x22) = uVar4 | 0x8000;
        _DAT_ram_60045134 = _DAT_ram_60045134 & 0xffffffdf;
      }
      uVar3 = (**(code **)(_DAT_ram_3fcdfed0 + 0x3fc))(2);
      *(undefined2 *)(iVar1 + 0x24) = uVar3;
      iVar12 = _DAT_ram_3fcdfebc;
    }
  }
  else if (uVar8 == 5) {
    uVar4 = (**(code **)(_DAT_ram_3fcdfed0 + 0x3fc))(0);
    iVar12 = _DAT_ram_3fcdfebc;
    *(ushort *)(iVar1 + 0x22) = uVar4;
    uVar9 = *(ushort *)(iVar1 + 0x1e) & 0xff7f;
    *(char *)(iVar1 + 0x1a) = (char)_DAT_ram_60045548 + *(char *)(iVar12 + 0x11);
    if ((uVar4 & 0x10) == 0) {
      uVar9 = uVar9 | 0x80;
    }
    *(ushort *)(iVar1 + 0x1e) = uVar9;
  }
  else if (uVar8 < 5) {
    uVar3 = (**(code **)(_DAT_ram_3fcdfed0 + 0x3fc))(0);
    iVar12 = _DAT_ram_3fcdfed0;
    *(undefined2 *)(iVar1 + 0x22) = uVar3;
    uVar3 = (**(code **)(iVar12 + 0x3fc))(1);
    *(undefined2 *)(iVar1 + 0x24) = uVar3;
    iVar12 = _DAT_ram_3fcdfebc;
  }
  else if (uVar8 == 6) {
    uVar3 = (**(code **)(_DAT_ram_3fcdfed0 + 0x3fc))(0);
    *(undefined2 *)(iVar1 + 0x22) = uVar3;
    iVar12 = _DAT_ram_3fcdfebc;
  }
                    /* WARNING: Could not recover jumptable at 0x403a2812. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfed0 + 0x5cc))
            (iVar12 + 0x18,*(undefined4 *)(iVar12 + 100),*(undefined4 *)(iVar12 + 0x68));
  return;
}

