
int FUN_ram_4201f76a(int param_1,char *param_2,short *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  short asStack_42 [7];
  
  if (((param_1 == 0) || (param_2 == (char *)0x0)) || (param_3 == (short *)0x0)) {
    return -1;
  }
  uVar6 = (uint)*(byte *)(param_3 + 9);
  if (uVar6 == 0) {
    uVar6 = 1;
  }
  iVar9 = *(int *)(param_3 + 6);
  iVar2 = (int)*param_3;
  iVar10 = (int)param_3[1];
  iVar11 = uVar6 * 0x10;
  if ((iVar9 != 0) && (uVar8 = (uint)(ushort)param_3[2], uVar8 != 0)) {
    iVar3 = FUN_ram_4201f55a(param_2,uVar8 & -(uint)((char)param_3[8] != '\0'),uVar6);
    if (iVar9 == 1) {
      iVar2 = (int)(uVar8 - iVar3) / 2 + iVar2;
    }
    else {
      if (iVar9 != 2) goto LAB_ram_4201f7ee;
      iVar2 = (uVar8 + iVar2) - iVar3;
    }
    iVar2 = iVar2 * 0x10000 >> 0x10;
  }
LAB_ram_4201f7ee:
  iVar9 = 0;
LAB_ram_4201f7f2:
  do {
    while( true ) {
      if (*param_2 == '\0') {
        return iVar9;
      }
      iVar3 = FUN_ram_4201f4e6(param_2,asStack_42);
      sVar7 = asStack_42[0];
      if (iVar3 == 0) {
        return iVar9;
      }
      if (asStack_42[0] == 10) break;
      if (((char)param_3[8] != '\0') && (uVar8 = (uint)(ushort)param_3[2], uVar8 != 0)) {
        iVar4 = FUN_ram_4201f474(asStack_42[0]);
        iVar12 = (int)*param_3;
        if ((int)(iVar12 + uVar8) < (int)(iVar4 * uVar6 + iVar2)) {
          iVar4 = *(int *)(param_3 + 6);
          iVar10 = (int)(((uint)*(byte *)((int)param_3 + 0x11) + iVar11 + iVar10) * 0x10000) >> 0x10
          ;
          iVar2 = iVar12;
          if (iVar4 != 0) {
            iVar5 = FUN_ram_4201f55a(param_2,uVar8,uVar6);
            if (iVar4 == 1) {
              iVar12 = (int)(uVar8 - iVar5) / 2 + iVar12;
            }
            else {
              if (iVar4 != 2) goto LAB_ram_4201f90e;
              iVar12 = (iVar12 + uVar8) - iVar5;
            }
            iVar2 = iVar12 * 0x10000 >> 0x10;
          }
        }
      }
LAB_ram_4201f90e:
      if (((ushort)param_3[3] != 0) &&
         ((int)((int)param_3[1] + (uint)(ushort)param_3[3]) < iVar10 + iVar11)) {
        return iVar9;
      }
      iVar12 = FUN_ram_4201f5d4(param_1,iVar2,iVar10,sVar7,(char)param_3[4],
                                *(undefined1 *)((int)param_3 + 9),uVar6);
      if (iVar12 != 0) {
        iVar2 = (iVar12 + iVar2) * 0x10000 >> 0x10;
        iVar9 = iVar9 + 1;
      }
      param_2 = param_2 + iVar3;
    }
    iVar12 = *(int *)(param_3 + 6);
    param_2 = param_2 + iVar3;
    iVar10 = (int)(((uint)*(byte *)((int)param_3 + 0x11) + iVar11 + iVar10) * 0x10000) >> 0x10;
    if (iVar12 != 0) {
      uVar1 = param_3[2];
      uVar8 = (uint)uVar1;
      if (uVar8 == 0) goto LAB_ram_4201f8a2;
      iVar3 = FUN_ram_4201f55a(param_2,uVar8 & -(uint)((char)param_3[8] != '\0'),uVar6);
      sVar7 = *param_3;
      iVar2 = (int)sVar7;
      if (iVar12 != 1) break;
      sVar7 = (short)((int)(uVar8 - iVar3) / 2) + sVar7;
      goto LAB_ram_4201f88e;
    }
LAB_ram_4201f8a2:
    iVar2 = (int)*param_3;
  } while( true );
  if (iVar12 == 2) {
    sVar7 = (uVar1 + sVar7) - (short)iVar3;
LAB_ram_4201f88e:
    iVar2 = (int)sVar7;
  }
  goto LAB_ram_4201f7f2;
}

