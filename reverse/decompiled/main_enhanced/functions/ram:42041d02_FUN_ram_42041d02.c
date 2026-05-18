
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42041d02(uint *param_1,undefined1 *param_2,int param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  
  uVar4 = *(short *)((int)param_1 + 0x5e) + *(short *)((int)param_1 + 0x86) + 7;
  uVar5 = (uint)uVar4;
  if (param_3 == 0) {
    iVar6 = *(int *)(_DAT_ram_3fcdff6c + 0x1c);
    *(short *)((int)param_1 + 0x17a) = (short)param_1[0x5b];
    if ((((*(uint *)(iVar6 + 0x38) & 2) != 0) && (0xb < _DAT_ram_3fcdfe60)) &&
       ((char)param_1[0x7b] != '\0')) {
      *(undefined2 *)((int)param_1 + 0x17a) = *(undefined2 *)((int)param_1 + 0x16a);
    }
    uVar8 = *(undefined1 *)((int)param_1 + 0x4f);
    *(short *)((int)param_1 + 0x17e) = (short)param_1[0x5c];
    *(undefined2 *)(param_1 + 0x5f) = *(undefined2 *)((int)param_1 + 0x16e);
    *(undefined2 *)(param_1 + 0x5e) = 0;
    *(undefined1 *)((int)param_1 + 0x176) = uVar8;
  }
  else {
    uVar7 = (uint)*(ushort *)(param_3 + 0xc);
    uVar1 = *(ushort *)(param_3 + 2);
    if (uVar7 == 0xffff) {
      *(undefined2 *)(param_1 + 0x5e) = 0;
    }
    else {
      iVar6 = *(ushort *)(param_3 + 10) - uVar5;
      uVar9 = (uint)uVar1 * 0x4e2;
      iVar10 = (uint)(ushort)param_1[0x21] * 0x4e2;
      if (iVar6 * 0x10000 < 0) {
        uVar9 = uVar9 - ((uVar5 - *(ushort *)(param_3 + 10)) * iVar10 + uVar7 * -0x4e2) % uVar9;
      }
      else {
        uVar9 = (uVar7 * 0x4e2 + iVar6 * iVar10) % uVar9;
      }
      *(short *)(param_1 + 0x5e) = (short)(uVar9 / 0x4e2);
    }
    uVar2 = *(undefined2 *)(param_3 + 4);
    uVar3 = *(undefined2 *)(param_3 + 6);
    *(ushort *)((int)param_1 + 0x17a) = uVar1;
    *(undefined2 *)(param_1 + 0x5f) = uVar2;
    *(undefined1 *)((int)param_1 + 0x176) = 1;
    *(undefined2 *)((int)param_1 + 0x17e) = uVar3;
    uVar8 = 1;
  }
  *(ushort *)(param_1 + 0x60) = uVar4;
  *param_2 = uVar8;
  (**(code **)(_DAT_ram_3fcdfecc + 0x82c))(param_2 + 1,(short)param_1[0x5e]);
  (**(code **)(_DAT_ram_3fcdfecc + 0x82c))(param_2 + 3,*(undefined2 *)((int)param_1 + 0x17a));
  (**(code **)(_DAT_ram_3fcdfecc + 0x82c))(param_2 + 5,(short)param_1[0x5f]);
  (**(code **)(_DAT_ram_3fcdfecc + 0x82c))(param_2 + 7,*(undefined2 *)((int)param_1 + 0x17e));
  (**(code **)(_DAT_ram_3fcdfecc + 0x82c))(param_2 + 9,uVar5);
  *param_1 = *param_1 | 0x80;
  return;
}

