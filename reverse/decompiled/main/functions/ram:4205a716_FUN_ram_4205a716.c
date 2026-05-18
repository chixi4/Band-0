
int FUN_ram_4205a716(int *param_1,uint param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int extraout_a2;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int extraout_a5;
  int iVar11;
  int extraout_a6;
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
  iVar10 = 10;
  do {
    bVar1 = *(byte *)(piVar8 + 5);
    iVar6 = iVar10;
    if (iVar10 == 10) {
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
          iVar6 = iVar10;
          if (uVar12 <= uVar2) {
            iVar7 = iVar5;
            uVar12 = uVar2;
          }
        }
        else {
          iVar6 = iVar10;
          if (uVar3 <= uVar2) {
            iVar11 = iVar5;
            uVar3 = uVar2;
          }
        }
      }
      else {
        iVar6 = iVar10;
        if ((bVar1 < 5) && (uVar13 <= *(ushort *)((int)piVar8 + 0x12))) {
          iVar4 = iVar5;
          uVar13 = *(ushort *)((int)piVar8 + 0x12);
        }
      }
    }
    uVar9 = iVar5 + 1;
    iVar5 = (int)(uVar9 * 0x10000) >> 0x10;
    piVar8 = piVar8 + 6;
    iVar10 = iVar6;
  } while ((uVar9 & 0xffff) != 10);
  if ((param_2 & 2) == 0) {
    if (iVar6 == 10) {
      if ((param_2 & 1) == 0) goto LAB_ram_4205a7b0;
    }
    else if (iVar6 < 10) goto LAB_ram_4205a808;
    iVar10 = 9;
    if (9 < iVar4) goto LAB_ram_4205a7f4;
    iVar7 = iVar4;
    if (*(int *)(&DAT_ram_3fcc2578 + iVar4 * 0x18) == 0) goto LAB_ram_4205a800;
    do {
      FUN_ram_4039bf1e();
      iVar7 = extraout_a2;
      iVar10 = extraout_a5;
      iVar11 = extraout_a6;
LAB_ram_4205a7f4:
      if ((iVar7 == 10) && (iVar7 = iVar11, iVar10 < iVar11)) goto LAB_ram_4205a7b0;
LAB_ram_4205a800:
      FUN_ram_4205a6a6(iVar7);
      iVar6 = iVar7;
LAB_ram_4205a808:
    } while ((&DAT_ram_3fcc258c)[iVar6 * 0x18] != '\0');
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

