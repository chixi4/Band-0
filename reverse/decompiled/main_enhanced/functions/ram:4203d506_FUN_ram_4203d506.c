
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203d506(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  code *pcVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  
  iVar2 = (**(code **)(_DAT_ram_3fcdfed0 + 0x584))(param_4);
  iVar2 = (param_2 + -1) - iVar2;
  iVar3 = (**(code **)(_DAT_ram_3fcdfed0 + 0x580))();
  uVar6 = *(ushort *)(_DAT_ram_3fcdff6c + 0x24) & 0xff;
  uVar10 = ((param_3 + uVar6) - param_4) + iVar3 & 0xff;
  if (*(ushort *)(_DAT_ram_3fcdff6c + 0x24) <= uVar10) {
    iVar2 = iVar2 + 1;
    uVar10 = uVar10 - uVar6 & 0xff;
  }
  (**(code **)(_DAT_ram_3fcdfecc + 0xd0))(_DAT_ram_3fcdfe56,param_5);
  iVar4 = (**(code **)(_DAT_ram_3fcdfed0 + 0x584))();
  bVar1 = *(byte *)(_DAT_ram_3fcdff70 + 1);
  *(char *)(param_1 + 2) = (char)uVar10;
  iVar3 = _DAT_ram_3fcdfed0;
  *(uint *)(param_1 + 4) = iVar2 - (uint)bVar1;
  pcVar8 = *(code **)(iVar3 + 0x56c);
  *(int *)(param_1 + 8) = iVar4 + iVar2;
  iVar3 = (*pcVar8)();
  if ((int)((iVar2 - (uint)bVar1) - iVar3) < 1) {
    uVar5 = *(undefined4 *)(param_1 + 4);
    pcVar8 = *(code **)(_DAT_ram_3fcdfecc + 0xa00);
    uVar11 = (**(code **)(_DAT_ram_3fcdfed0 + 0x56c))();
    (*pcVar8)(0x5008,uVar5,uVar11);
    return 0xffffffff;
  }
  uVar5 = (**(code **)(_DAT_ram_3fcdfec4 + 0xa0))();
  iVar2 = (**(code **)(_DAT_ram_3fcdfed0 + 0x3bc))(param_1);
  if (iVar2 != 0) {
    (**(code **)(_DAT_ram_3fcdfec4 + 0xa4))(uVar5);
    (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x5009,*(undefined4 *)(param_1 + 4));
    return 0xffffffff;
  }
  (**(code **)(_DAT_ram_3fcdfed0 + 0x57c))(*_DAT_ram_3fcdff70);
  iVar2 = _DAT_ram_3fcdff70[2];
  uVar11 = 0;
  if (iVar2 == 0) {
LAB_ram_4203d6b0:
    puVar9 = _DAT_ram_3fcdff70;
    piVar7 = (int *)_DAT_ram_3fcdff70[3];
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(int **)(param_1 + 0x18) = piVar7;
    *piVar7 = param_1;
    puVar9[3] = param_1 + 0x14;
    *(undefined1 *)(param_1 + 1) = 1;
LAB_ram_4203d636:
    iVar2 = puVar9[2];
  }
  else {
    iVar3 = *(int *)(param_1 + 8) - *(int *)(iVar2 + 4);
    puVar9 = _DAT_ram_3fcdff70;
    while (_DAT_ram_3fcdff70 = puVar9, 0 < iVar3) {
      iVar3 = (**(code **)(_DAT_ram_3fcdfed0 + 0x38c))(param_1,iVar2);
      if (iVar3 != 0) {
        (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x500b,*(undefined4 *)(param_1 + 4));
        uVar11 = 0xffffffff;
        puVar9 = _DAT_ram_3fcdff70;
        goto LAB_ram_4203d636;
      }
      iVar2 = *(int *)(iVar2 + 0x14);
      if (iVar2 == 0) goto LAB_ram_4203d6b0;
      puVar9 = _DAT_ram_3fcdff70;
      iVar3 = *(int *)(param_1 + 8) - *(int *)(iVar2 + 4);
    }
    piVar7 = *(int **)(iVar2 + 0x18);
    *(int *)(param_1 + 0x14) = iVar2;
    *(int **)(param_1 + 0x18) = piVar7;
    *piVar7 = param_1;
    *(int *)(iVar2 + 0x18) = param_1 + 0x14;
    *(undefined1 *)(param_1 + 1) = 1;
    iVar2 = puVar9[2];
  }
  if (param_1 == iVar2) {
    (**(code **)(_DAT_ram_3fcdfed0 + 0x554))(iVar2);
    (**(code **)(_DAT_ram_3fcdfec4 + 0xa4))(uVar5);
  }
  else {
    (**(code **)(_DAT_ram_3fcdfec4 + 0xa4))(uVar5);
    if (iVar2 == 0) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x110))(0x3c2,&DAT_ram_3c0f6cdc,0,0);
      ebreak();
      iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))(&DAT_ram_3fcdff70,0x10,1);
      if (iVar2 == 0) {
        iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))(_DAT_ram_3fcdff70,0x18,1);
        uVar5 = 0;
        if (iVar2 != 0) {
          uVar5 = 0xfffffffe;
        }
      }
      else {
        uVar5 = 0xffffffff;
      }
      return uVar5;
    }
  }
  (**(code **)(_DAT_ram_3fcdfed0 + 0x578))(*_DAT_ram_3fcdff70,*(undefined4 *)(iVar2 + 4));
  return uVar11;
}

