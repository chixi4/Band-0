
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_403a4210(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint extraout_a4;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ushort auStack_32 [5];
  
  uVar1 = *(ushort *)(param_1 + 0xc);
  uVar11 = (uint)uVar1;
  auStack_32[0] = 0;
  uVar3 = uVar11 & 0x10;
  iVar2 = 0;
  if ((uVar1 & 0x10) == 0) {
    uVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0xa10))
                      (*(undefined1 *)(param_1 + 0xe5),*_DAT_ram_3fcdfebc);
    if (**(int **)(param_1 + 0x80) != 0) {
      uVar3 = (uint)*(ushort *)(**(int **)(param_1 + 0x80) + 0x10);
    }
    if ((uVar1 & 1) == 0) {
      uVar9 = uVar11 & 2;
      if ((uVar1 & 2) == 0) {
        uVar12 = *(uint *)(param_1 + 0x108);
        uVar10 = 0;
        iVar2 = 0;
        do {
          uVar6 = (**(code **)(_DAT_ram_3fcdfed0 + 0x8c))
                            (uVar3,auStack_32,uVar11,uVar12 >> 1 & 1,uVar9,
                             *(code **)(_DAT_ram_3fcdfed0 + 0x8c));
          uVar10 = uVar10 + 1 & 0xff;
          iVar7 = (**(code **)(_DAT_ram_3fcdfecc + 0xd0))(uVar6,uVar4);
          iVar2 = iVar2 + iVar7;
          uVar9 = extraout_a4;
        } while (auStack_32[0] < uVar3);
      }
      else {
        uVar10 = 0;
        uVar5 = (**(code **)(_DAT_ram_3fcdfed0 + 0x18))(param_1);
        iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0xd0))(uVar5,uVar4);
        iVar7 = (**(code **)(_DAT_ram_3fcdfecc + 0xd0))(0xc,uVar4);
        iVar2 = iVar2 + iVar7 + 300;
        do {
          uVar6 = (**(code **)(_DAT_ram_3fcdfed0 + 0x8c))(uVar3,auStack_32,uVar11,0);
          uVar10 = uVar10 + 1 & 0xff;
          iVar7 = (**(code **)(_DAT_ram_3fcdfecc + 0xd0))(uVar6,uVar4);
          iVar2 = iVar2 + iVar7;
        } while (auStack_32[0] < uVar3);
      }
      if (1 < uVar10) {
        iVar2 = iVar2 + (_DAT_ram_3fcdfe50 + 300) * (uVar10 - 1);
      }
    }
    else {
      uVar6 = (**(code **)(_DAT_ram_3fcdfed0 + 0x8c))
                        (uVar3,auStack_32,uVar11,0,uVar11 & 1,*(code **)(_DAT_ram_3fcdfed0 + 0x8c));
      iVar7 = (**(code **)(_DAT_ram_3fcdfecc + 0xd0))(uVar6,uVar4);
      iVar8 = (**(code **)(_DAT_ram_3fcdfecc + 0xd0))(0x30,uVar4);
      iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0xd0))(0xe,uVar4);
      iVar2 = iVar7 + iVar8 + 300 + iVar2;
    }
  }
  return iVar2;
}

