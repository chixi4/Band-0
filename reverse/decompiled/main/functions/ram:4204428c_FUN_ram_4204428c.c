
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_ram_4204428c(byte *param_1,int param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  code *pcVar7;
  int *piVar8;
  byte bVar9;
  char cVar10;
  
  if (*_DAT_ram_3fcdfedc == 0) {
    if (param_2 != 0xe) {
      return '\x12';
    }
    bVar9 = 7;
    if ((_DAT_ram_3fcdfe60 < 0xc) && (bVar9 = 3, _DAT_ram_3fcdfe60 < 10)) {
      bVar9 = 1;
    }
    if (bVar9 < *param_1) {
      return '\x12';
    }
    if (499 < *(ushort *)(param_1 + 9)) {
      return '\x12';
    }
    uVar1 = *(ushort *)(param_1 + 0xb);
    if (0x3ff6 < (uVar1 - 10 & 0xffff)) {
      return '\x12';
    }
    if (param_1[0xd] != 0) {
      return (4 < param_1[0xd]) + '\x11';
    }
    if ((*param_1 & 1) == 0) {
      if (0xf < param_1[1]) {
        return '\x12';
      }
      if (1 < param_1[2]) {
        return '\x12';
      }
      iVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x65c))(param_1 + 3);
      if (iVar4 != 0) {
        return '\v';
      }
    }
    else {
      iVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x678))();
      if (iVar4 != 0) goto LAB_ram_42044338;
    }
    piVar8 = _DAT_ram_3fcdfedc;
    iVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x30))(2);
    piVar3 = _DAT_ram_3fcdfedc;
    *piVar8 = iVar4;
    if (*piVar3 == 0) {
      cVar10 = '\a';
    }
    else {
      uVar5 = (**(code **)(_DAT_ram_3fcdfec4 + 0xa0))();
      pbVar6 = (byte *)(**(code **)(_DAT_ram_3fcdfecc + 0x6ac))();
      if (pbVar6 == (byte *)0x0) {
        (**(code **)(_DAT_ram_3fcdfecc + 0x34))(*_DAT_ram_3fcdfedc);
        pcVar7 = *(code **)(_DAT_ram_3fcdfec4 + 0xa4);
        *_DAT_ram_3fcdfedc = 0;
        (*pcVar7)(uVar5);
        cVar10 = '\a';
      }
      else {
        bVar9 = *param_1;
        if ((bVar9 & 1) == 0) {
          pbVar6[4] = param_1[1];
          pbVar6[0xb] = param_1[2];
          FUN_ram_4039c11e(pbVar6 + 5,param_1 + 3,6);
          bVar9 = *param_1;
        }
        if ((bVar9 & 4) == 0) {
          *pbVar6 = *pbVar6 & 0x7f;
        }
        else {
          *pbVar6 = *pbVar6 | 0x80;
        }
        piVar8 = (int *)_DAT_ram_3fcdfedc[6];
        pcVar7 = *(code **)(_DAT_ram_3fcdfec4 + 0xa4);
        *piVar8 = (uint)uVar1 * 10000;
        uVar2 = *(undefined2 *)(param_1 + 9);
        *(ushort *)((int)piVar8 + 6) = (ushort)bVar9;
        *(undefined2 *)(piVar8 + 1) = uVar2;
        (*pcVar7)(uVar5,pcVar7);
        if ((_DAT_ram_3fcdfe70 != 0) && (*(int *)(_DAT_ram_3fcdfe70 + 0x10) != 0)) {
          (**(code **)(_DAT_ram_3fcdfed0 + 0x2b8))(pbVar6,0);
        }
        (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x5010,0);
        cVar10 = '\0';
      }
    }
  }
  else {
LAB_ram_42044338:
    cVar10 = '\f';
  }
  return cVar10;
}

