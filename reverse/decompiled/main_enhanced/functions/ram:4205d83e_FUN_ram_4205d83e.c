
void FUN_ram_4205d83e(int param_1)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  short sVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  byte bVar16;
  
  if ((((param_1 == 0) || (*(int *)(param_1 + 4) != 1)) ||
      (iVar12 = *(int *)(param_1 + 0x2c), iVar12 == 0)) ||
     (((*(int *)(param_1 + 8) == 0 || (*(uint *)(iVar12 + 0x14) <= *(uint *)(iVar12 + 0x18))) ||
      (*(short *)(iVar12 + 0xc) == 0)))) {
LAB_ram_4205d856:
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  bVar16 = *(byte *)(iVar12 + 0x1c);
  bVar1 = *(byte *)(param_1 + 0x28);
  bVar2 = bVar16 & 4;
  bVar4 = bVar16 & 4;
  bVar5 = bVar16 & 4;
  bVar6 = bVar16 & 4;
  if (*(int *)(param_1 + 0x20) == 0) {
LAB_ram_4205d8d8:
    do {
      iVar7 = *(int *)(iVar12 + 0x10);
      uVar13 = (*(int **)(iVar12 + 8))[1];
      uVar11 = uVar13 - iVar7;
      if (uVar11 < 0x10000) {
        uVar9 = uVar11 & 0xffff;
      }
      else {
        bVar16 = bVar16 | 2;
        uVar9 = 0xffff;
      }
      uVar14 = (uint)*(ushort *)(*(int *)(param_1 + 8) + 0x68);
      if (uVar14 < uVar9) {
        uVar9 = uVar14;
        if ((bVar1 & 2) == 0 && bVar2 == 0) {
          bVar16 = bVar16 | 2;
        }
        else if (uVar14 == 0) {
          iVar7 = (-(uint)(*(int *)(iVar12 + 0x18) != 0) & 7) - 7;
          goto LAB_ram_4205d91a;
        }
      }
      if (uVar13 < iVar7 + uVar9) goto LAB_ram_4205d856;
      if (((uVar9 == 0xffff) && (0xffff < uVar11)) ||
         ((bVar3 = false, uVar9 == (uVar11 & 0xffff) && (1 < *(ushort *)(iVar12 + 0xc))))) {
        bVar16 = bVar16 | 2;
        bVar3 = true;
      }
      iVar12 = FUN_ram_42057568(*(int *)(param_1 + 8),**(int **)(iVar12 + 8) + iVar7,uVar9,bVar16);
      if (iVar12 != 0) {
        if (1 < (iVar12 + 1U & 0xff)) goto LAB_ram_4205d8ae;
        iVar7 = -1;
        break;
      }
      iVar12 = *(int *)(param_1 + 0x2c);
      *(uint *)(iVar12 + 0x18) = *(int *)(iVar12 + 0x18) + uVar9;
      iVar15 = uVar9 + *(int *)(iVar12 + 0x10);
      iVar7 = *(int *)(*(int *)(iVar12 + 8) + 4);
      *(int *)(iVar12 + 0x10) = iVar15;
      if ((iVar15 == iVar7) &&
         (sVar10 = *(short *)(iVar12 + 0xc) + -1, *(short *)(iVar12 + 0xc) = sVar10, sVar10 != 0)) {
        *(int *)(iVar12 + 8) = *(int *)(iVar12 + 8) + 8;
        *(undefined4 *)(iVar12 + 0x10) = 0;
      }
      iVar7 = 0;
    } while (bVar3);
    if ((bVar1 & 2) == 0 && bVar4 == 0) {
LAB_ram_4205d9e2:
      if (((*(ushort *)(*(int *)(param_1 + 8) + 0x68) < 0xb42) ||
          (7 < *(ushort *)(*(int *)(param_1 + 8) + 0x6a))) &&
         (*(code **)(param_1 + 0x30) != (code *)0x0)) {
        (**(code **)(param_1 + 0x30))(param_1,3,0);
      }
    }
    else {
LAB_ram_4205d91a:
      if (*(uint *)(*(int *)(param_1 + 0x2c) + 0x14) <= *(uint *)(*(int *)(param_1 + 0x2c) + 0x18))
      goto LAB_ram_4205d9e2;
      if (*(code **)(param_1 + 0x30) != (code *)0x0) {
        (**(code **)(param_1 + 0x30))(param_1,3,0);
      }
      *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x10;
    }
    if (iVar7 == 0) {
      iVar15 = *(int *)(*(int *)(param_1 + 0x2c) + 0x18);
      iVar12 = *(int *)(*(int *)(param_1 + 0x2c) + 0x14);
      iVar7 = FUN_ram_42057e96(*(undefined4 *)(param_1 + 8));
      if (iVar7 == -4) {
LAB_ram_4205d952:
        iVar12 = -4;
        goto LAB_ram_4205d8ae;
      }
      if (((bVar1 & 2) == 0 && bVar6 == 0) && (iVar15 != iVar12)) {
        return;
      }
      goto LAB_ram_4205da2c;
    }
    if (iVar7 == -1) {
      iVar12 = FUN_ram_42057e96(*(undefined4 *)(param_1 + 8));
      if (iVar12 == -4) goto LAB_ram_4205d952;
      if ((bVar1 & 2) == 0 && bVar5 == 0) {
        return;
      }
      iVar12 = *(int *)(param_1 + 0x2c);
      goto LAB_ram_4205d8a6;
    }
  }
  else {
    iVar7 = FUN_ram_4205c954();
    iVar12 = *(int *)(param_1 + 0x2c);
    if (iVar7 - *(int *)(iVar12 + 0x20) < *(int *)(param_1 + 0x20)) goto LAB_ram_4205d8d8;
LAB_ram_4205d8a6:
    if (*(int *)(iVar12 + 0x18) != 0) {
LAB_ram_4205da2c:
      iVar12 = 0;
      goto LAB_ram_4205d8ae;
    }
  }
  iVar12 = -7;
LAB_ram_4205d8ae:
  iVar7 = *(int *)(param_1 + 0x2c);
  *(char *)(iVar7 + 4) = (char)iVar12;
  uVar8 = *(undefined4 *)(iVar7 + 0x24);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_ram_4205c6fa(uVar8);
  return;
}

