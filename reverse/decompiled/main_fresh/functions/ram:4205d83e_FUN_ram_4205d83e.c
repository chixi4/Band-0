
void FUN_ram_4205d83e(int param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  short sVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  byte bVar18;
  undefined8 uVar19;
  
  uVar19 = CONCAT44(param_2,param_1);
  if (param_1 != 0) goto LAB_ram_4205d85e;
LAB_ram_4205d856:
  do {
    uVar19 = FUN_ram_4039bf1e((int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
LAB_ram_4205d85e:
    iVar7 = (int)uVar19;
  } while ((((*(int *)(iVar7 + 4) != 1) || (iVar15 = *(int *)(iVar7 + 0x2c), iVar15 == 0)) ||
           (*(int *)(iVar7 + 8) == 0)) ||
          ((*(uint *)(iVar15 + 0x14) <= *(uint *)(iVar15 + 0x18) || (*(short *)(iVar15 + 0xc) == 0))
          ));
  bVar18 = *(byte *)(iVar15 + 0x1c);
  bVar1 = *(byte *)(iVar7 + 0x28);
  bVar2 = bVar18 & 4;
  bVar4 = bVar18 & 4;
  bVar5 = bVar18 & 4;
  bVar6 = bVar18 & 4;
  if (*(int *)(iVar7 + 0x20) != 0) {
    iVar8 = FUN_ram_4205c954();
    iVar15 = *(int *)(iVar7 + 0x2c);
    if (*(int *)(iVar7 + 0x20) <= iVar8 - *(int *)(iVar15 + 0x20)) {
LAB_ram_4205d8a6:
      if (*(int *)(iVar15 + 0x18) == 0) {
LAB_ram_4205d8ac:
        iVar15 = -7;
      }
      else {
LAB_ram_4205da2c:
        iVar15 = 0;
      }
LAB_ram_4205d8ae:
      iVar8 = *(int *)(iVar7 + 0x2c);
      *(char *)(iVar8 + 4) = (char)iVar15;
      uVar9 = *(undefined4 *)(iVar8 + 0x24);
      *(undefined4 *)(iVar7 + 0x2c) = 0;
      *(undefined4 *)(iVar7 + 4) = 0;
      FUN_ram_4205c6fa(uVar9);
      return;
    }
  }
LAB_ram_4205d8e0:
  iVar11 = *(int *)(iVar15 + 0x10);
  uVar16 = (*(int **)(iVar15 + 8))[1];
  uVar14 = uVar16 - iVar11;
  iVar8 = **(int **)(iVar15 + 8) + iVar11;
  if (uVar14 < 0x10000) {
    uVar12 = uVar14 & 0xffff;
  }
  else {
    bVar18 = bVar18 | 2;
    uVar12 = 0xffff;
  }
  iVar10 = *(int *)(iVar7 + 8);
  uVar19 = CONCAT44(iVar8,iVar10);
  uVar17 = (uint)*(ushort *)(iVar10 + 0x68);
  if (uVar17 < uVar12) {
    uVar12 = uVar17;
    if ((bVar1 & 2) == 0 && bVar2 == 0) {
      bVar18 = bVar18 | 2;
      goto LAB_ram_4205d962;
    }
    if (uVar17 != 0) goto LAB_ram_4205d962;
    iVar8 = (-(uint)(*(int *)(iVar15 + 0x18) != 0) & 7) - 7;
    goto LAB_ram_4205d91a;
  }
LAB_ram_4205d962:
  if (iVar11 + uVar12 <= uVar16) {
    if (((uVar12 == 0xffff) && (0xffff < uVar14)) ||
       ((bVar3 = false, uVar12 == (uVar14 & 0xffff) && (1 < *(ushort *)(iVar15 + 0xc))))) {
      bVar18 = bVar18 | 2;
      bVar3 = true;
    }
    iVar15 = FUN_ram_42057568(iVar10,iVar8,uVar12,bVar18);
    if (iVar15 == 0) goto LAB_ram_4205d9aa;
    if ((iVar15 + 1U & 0xff) < 2) {
      iVar8 = -1;
      goto LAB_ram_4205d9de;
    }
    goto LAB_ram_4205d8ae;
  }
  goto LAB_ram_4205d856;
LAB_ram_4205d9aa:
  iVar15 = *(int *)(iVar7 + 0x2c);
  *(uint *)(iVar15 + 0x18) = *(int *)(iVar15 + 0x18) + uVar12;
  iVar11 = uVar12 + *(int *)(iVar15 + 0x10);
  iVar8 = *(int *)(*(int *)(iVar15 + 8) + 4);
  *(int *)(iVar15 + 0x10) = iVar11;
  if ((iVar11 == iVar8) &&
     (sVar13 = *(short *)(iVar15 + 0xc) + -1, *(short *)(iVar15 + 0xc) = sVar13, sVar13 != 0)) {
    *(int *)(iVar15 + 8) = *(int *)(iVar15 + 8) + 8;
    *(undefined4 *)(iVar15 + 0x10) = 0;
  }
  iVar8 = 0;
  if (bVar3) goto LAB_ram_4205d8e0;
LAB_ram_4205d9de:
  if ((bVar1 & 2) != 0 || bVar4 != 0) {
LAB_ram_4205d91a:
    if (*(uint *)(*(int *)(iVar7 + 0x2c) + 0x18) < *(uint *)(*(int *)(iVar7 + 0x2c) + 0x14)) {
      if (*(code **)(iVar7 + 0x30) != (code *)0x0) {
        (**(code **)(iVar7 + 0x30))(iVar7,3,0);
      }
      *(byte *)(iVar7 + 0x28) = *(byte *)(iVar7 + 0x28) | 0x10;
      goto LAB_ram_4205d93c;
    }
  }
  if (((*(ushort *)(*(int *)(iVar7 + 8) + 0x68) < 0xb42) ||
      (7 < *(ushort *)(*(int *)(iVar7 + 8) + 0x6a))) && (*(code **)(iVar7 + 0x30) != (code *)0x0)) {
    (**(code **)(iVar7 + 0x30))(iVar7,3,0);
  }
LAB_ram_4205d93c:
  if (iVar8 == 0) {
    iVar11 = *(int *)(*(int *)(iVar7 + 0x2c) + 0x18);
    iVar15 = *(int *)(*(int *)(iVar7 + 0x2c) + 0x14);
    iVar8 = FUN_ram_42057e96(*(undefined4 *)(iVar7 + 8));
    if (iVar8 != -4) {
      if (((bVar1 & 2) == 0 && bVar6 == 0) && (iVar11 != iVar15)) {
        return;
      }
      goto LAB_ram_4205da2c;
    }
  }
  else {
    if (iVar8 != -1) goto LAB_ram_4205d8ac;
    iVar15 = FUN_ram_42057e96(*(undefined4 *)(iVar7 + 8));
    if (iVar15 != -4) {
      if ((bVar1 & 2) == 0 && bVar5 == 0) {
        return;
      }
      iVar15 = *(int *)(iVar7 + 0x2c);
      goto LAB_ram_4205d8a6;
    }
  }
  iVar15 = -4;
  goto LAB_ram_4205d8ae;
}

