
void FUN_ram_4205a698(int param_1)

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
  int iVar10;
  short sVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  
  iVar10 = *(int *)(param_1 + 0x2c);
  bVar15 = *(byte *)(iVar10 + 0x1c);
  bVar1 = *(byte *)(param_1 + 0x28);
  bVar2 = bVar15 & 4;
  bVar4 = bVar15 & 4;
  bVar5 = bVar15 & 4;
  bVar6 = bVar15 & 4;
  if (*(int *)(param_1 + 0x20) == 0) {
LAB_ram_4205a70c:
    do {
      uVar12 = (*(int **)(iVar10 + 8))[1] - *(int *)(iVar10 + 0x10);
      if (uVar12 < 0x10000) {
        uVar14 = uVar12 & 0xffff;
      }
      else {
        bVar15 = bVar15 | 2;
        uVar14 = 0xffff;
      }
      uVar9 = (uint)*(ushort *)(*(int *)(param_1 + 8) + 0x68);
      if (uVar9 < uVar14) {
        if ((bVar1 & 2) == 0 && bVar2 == 0) {
          bVar15 = bVar15 | 2;
        }
        else if (uVar9 == 0) {
          iVar7 = (-(uint)(*(int *)(iVar10 + 0x18) != 0) & 7) - 7;
          goto LAB_ram_4205a748;
        }
LAB_ram_4205a79e:
        bVar3 = false;
        if (((uVar12 & 0xffff) == uVar9) && (1 < *(ushort *)(iVar10 + 0xc))) goto LAB_ram_4205a7b0;
      }
      else {
        uVar9 = uVar14;
        if ((uVar14 != 0xffff) || (uVar12 < 0x10000)) goto LAB_ram_4205a79e;
LAB_ram_4205a7b0:
        bVar15 = bVar15 | 2;
        bVar3 = true;
      }
      iVar10 = FUN_ram_42054aac(*(int *)(param_1 + 8),
                                **(int **)(iVar10 + 8) + *(int *)(iVar10 + 0x10),uVar9,bVar15);
      if (iVar10 != 0) {
        if (1 < (iVar10 + 1U & 0xff)) goto LAB_ram_4205a6e2;
        iVar7 = -1;
        break;
      }
      iVar10 = *(int *)(param_1 + 0x2c);
      *(uint *)(iVar10 + 0x18) = *(int *)(iVar10 + 0x18) + uVar9;
      iVar13 = uVar9 + *(int *)(iVar10 + 0x10);
      iVar7 = *(int *)(*(int *)(iVar10 + 8) + 4);
      *(int *)(iVar10 + 0x10) = iVar13;
      if ((iVar13 == iVar7) &&
         (sVar11 = *(short *)(iVar10 + 0xc) + -1, *(short *)(iVar10 + 0xc) = sVar11, sVar11 != 0)) {
        *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + 8;
        *(undefined4 *)(iVar10 + 0x10) = 0;
      }
      iVar7 = 0;
    } while (bVar3);
    if ((bVar1 & 2) == 0 && bVar4 == 0) {
LAB_ram_4205a80c:
      if (((*(ushort *)(*(int *)(param_1 + 8) + 0x68) < 0xb42) ||
          (7 < *(ushort *)(*(int *)(param_1 + 8) + 0x6a))) &&
         (*(code **)(param_1 + 0x30) != (code *)0x0)) {
        (**(code **)(param_1 + 0x30))(param_1,3,0);
      }
    }
    else {
LAB_ram_4205a748:
      if (*(uint *)(*(int *)(param_1 + 0x2c) + 0x14) <= *(uint *)(*(int *)(param_1 + 0x2c) + 0x18))
      goto LAB_ram_4205a80c;
      if (*(code **)(param_1 + 0x30) != (code *)0x0) {
        (**(code **)(param_1 + 0x30))(param_1,3,0);
      }
      *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x10;
    }
    if (iVar7 == 0) {
      iVar13 = *(int *)(*(int *)(param_1 + 0x2c) + 0x18);
      iVar10 = *(int *)(*(int *)(param_1 + 0x2c) + 0x14);
      iVar7 = FUN_ram_420552e2(*(undefined4 *)(param_1 + 8));
      if (iVar7 == -4) {
LAB_ram_4205a780:
        iVar10 = -4;
        goto LAB_ram_4205a6e2;
      }
      if (((bVar1 & 2) == 0 && bVar6 == 0) && (iVar13 != iVar10)) {
        return;
      }
      goto LAB_ram_4205a858;
    }
    if (iVar7 == -1) {
      iVar10 = FUN_ram_420552e2(*(undefined4 *)(param_1 + 8));
      if (iVar10 == -4) goto LAB_ram_4205a780;
      if ((bVar1 & 2) == 0 && bVar5 == 0) {
        return;
      }
      iVar10 = *(int *)(*(int *)(param_1 + 0x2c) + 0x18);
      goto LAB_ram_4205a6dc;
    }
  }
  else {
    iVar7 = FUN_ram_420599aa();
    iVar10 = *(int *)(param_1 + 0x2c);
    if (iVar7 - *(int *)(iVar10 + 0x20) < *(int *)(param_1 + 0x20)) goto LAB_ram_4205a70c;
    iVar10 = *(int *)(iVar10 + 0x18);
LAB_ram_4205a6dc:
    if (iVar10 != 0) {
LAB_ram_4205a858:
      iVar10 = 0;
      goto LAB_ram_4205a6e2;
    }
  }
  iVar10 = -7;
LAB_ram_4205a6e2:
  iVar7 = *(int *)(param_1 + 0x2c);
  *(char *)(iVar7 + 4) = (char)iVar10;
  uVar8 = *(undefined4 *)(iVar7 + 0x24);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  thunk_FUN_ram_4205973a(uVar8);
  return;
}

