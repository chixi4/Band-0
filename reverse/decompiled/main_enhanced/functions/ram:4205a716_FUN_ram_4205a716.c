
int FUN_ram_4205a716(int *param_1,uint param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ushort uVar12;
  ushort uVar13;
  
  iVar11 = 10;
  piVar8 = (int *)&DAT_ram_3fcc2578;
  uVar13 = 0;
  uVar12 = 0;
  uVar3 = 0;
  iVar5 = 0;
  iVar4 = 10;
  iVar7 = 10;
  iVar9 = 10;
  do {
    bVar1 = *(byte *)(piVar8 + 5);
    iVar6 = iVar9;
    if (iVar9 == 10) {
      iVar6 = iVar5;
    }
    if (bVar1 != 0) {
      if ((param_1 != (int *)0x0) && (*param_1 == piVar8[1])) {
        if (param_3 == 0) {
          return iVar5;
        }
        if (piVar8[2] == param_3) {
          return iVar5;
        }
      }
      if (bVar1 == 1) {
        uVar2 = *(ushort *)((int)piVar8 + 0x12);
        if (*piVar8 == 0) {
          iVar6 = iVar9;
          if (uVar12 <= uVar2) {
            iVar7 = iVar5;
            uVar12 = uVar2;
          }
        }
        else {
          iVar6 = iVar9;
          if (uVar3 <= uVar2) {
            iVar11 = iVar5;
            uVar3 = uVar2;
          }
        }
      }
      else {
        iVar6 = iVar9;
        if ((bVar1 < 5) && (uVar13 <= *(ushort *)((int)piVar8 + 0x12))) {
          iVar4 = iVar5;
          uVar13 = *(ushort *)((int)piVar8 + 0x12);
        }
      }
    }
    uVar10 = iVar5 + 1;
    iVar5 = (int)(uVar10 * 0x10000) >> 0x10;
    piVar8 = piVar8 + 6;
    iVar9 = iVar6;
  } while ((uVar10 & 0xffff) != 10);
  if ((param_2 & 2) == 0) {
    if (iVar6 == 10) {
      if ((param_2 & 1) == 0) goto LAB_ram_4205a7b0;
LAB_ram_4205a7da:
      if (iVar4 < 10) {
        iVar7 = iVar4;
        if (*(int *)(&DAT_ram_3fcc2578 + iVar4 * 0x18) != 0) goto LAB_ram_4205a7ec;
      }
      else if ((iVar7 == 10) && (iVar7 = iVar11, 9 < iVar11)) goto LAB_ram_4205a7b0;
      FUN_ram_4205a6a6(iVar7);
      iVar6 = iVar7;
    }
    else if (9 < iVar6) goto LAB_ram_4205a7da;
    if ((&DAT_ram_3fcc258c)[iVar6 * 0x18] != '\0') {
LAB_ram_4205a7ec:
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf1e();
    }
    if (param_1 != (int *)0x0) {
      *(int *)(&DAT_ram_3fcc257c + iVar6 * 0x18) = *param_1;
    }
    *(undefined2 *)(&DAT_ram_3fcc258a + iVar6 * 0x18) = 0;
    *(int *)(&DAT_ram_3fcc2580 + iVar6 * 0x18) = param_3;
  }
  else {
LAB_ram_4205a7b0:
    iVar6 = -1;
  }
  return iVar6;
}

