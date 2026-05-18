
int FUN_ram_4205c18a(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  
  iVar2 = FUN_ram_40399d1a(1,0xe0);
  if (iVar2 == 0) goto LAB_ram_4205c5c8;
  iVar3 = FUN_ram_40399d1a(1,0x20);
  *(int *)(iVar2 + 0x10) = iVar3;
  if (iVar3 == 0) goto LAB_ram_4205c5c8;
  iVar3 = FUN_ram_40399d1a(1,0x28);
  *(int *)(iVar2 + 0x14) = iVar3;
  if (iVar3 == 0) goto LAB_ram_4205c5c8;
  iVar3 = FUN_ram_40399d1a(1,0x30);
  *(int *)(iVar2 + 0x2c) = iVar3;
  if (iVar3 == 0) goto LAB_ram_4205c5c8;
  piVar4 = (int *)FUN_ram_40399d1a(1,0x30);
  *(int **)(iVar2 + 0x20) = piVar4;
  if (piVar4 == (int *)0x0) goto LAB_ram_4205c5c8;
  iVar3 = FUN_ram_4205cde0();
  *piVar4 = iVar3;
  if (iVar3 == 0) goto LAB_ram_4205c5c8;
  iVar8 = *(int *)(iVar2 + 0x20);
  iVar3 = FUN_ram_40399d1a(1,0x18);
  *(int *)(iVar8 + 4) = iVar3;
  if (iVar3 == 0) goto LAB_ram_4205c5c8;
  piVar4 = (int *)FUN_ram_40399d1a(1,0x30);
  *(int **)(iVar2 + 0x24) = piVar4;
  if (piVar4 == (int *)0x0) goto LAB_ram_4205c5c8;
  iVar3 = FUN_ram_4205cde0();
  *piVar4 = iVar3;
  if (iVar3 == 0) goto LAB_ram_4205c5c8;
  iVar8 = *(int *)(iVar2 + 0x24);
  iVar3 = FUN_ram_40399d1a(1,0x18);
  *(int *)(iVar8 + 4) = iVar3;
  if (iVar3 == 0) goto LAB_ram_4205c5c8;
  iVar3 = FUN_ram_4206c946();
  *(int *)(iVar2 + 0x18) = iVar3;
  if ((((iVar3 == 0) || (iVar3 = FUN_ram_4206d304(), iVar3 == 0)) ||
      (iVar8 = FUN_ram_4206cafe(iVar3,0x50), iVar8 != 0)) ||
     (iVar8 = FUN_ram_4206c960(*(undefined4 *)(iVar2 + 0x18),iVar3,0x3c0730a0), iVar8 != 0))
  goto LAB_ram_4205c5c8;
  uVar9 = 0;
  if (param_1[0x25] != 0) {
    if (param_1[0x25] != 2) goto LAB_ram_4205c5c8;
    uVar9 = 1;
  }
  FUN_ram_4206d220(iVar3,uVar9);
  iVar3 = FUN_ram_4205b5c4(iVar2,param_1,iVar3);
  if (((iVar3 == 0) || (iVar3 = FUN_ram_4206d292(), iVar3 == 0)) ||
     ((iVar8 = FUN_ram_4206cafe(iVar3,0x1bb), iVar8 != 0 ||
      (iVar8 = FUN_ram_4206c960(*(undefined4 *)(iVar2 + 0x18),iVar3,0x3c0730b0), iVar8 != 0))))
  goto LAB_ram_4205c5c8;
  FUN_ram_4206d220(iVar3,uVar9);
  iVar8 = FUN_ram_4205b5c4(iVar2,param_1,iVar3);
  if (iVar8 == 0) goto LAB_ram_4205c5c8;
  if (param_1[0x1e] == 0) {
    if (*(char *)((int)param_1 + 0x71) == '\0') {
      iVar8 = param_1[8];
      if (iVar8 != 0) {
        if (param_1[9] == 0) {
          uVar9 = (*(code *)&SUB_ram_400104a8)(iVar8);
          FUN_ram_4206d1f8(iVar3,iVar8,uVar9);
        }
        else {
          FUN_ram_4206d206(iVar3);
        }
      }
    }
    else {
      FUN_ram_4206d1e0(iVar3);
    }
  }
  iVar8 = param_1[10];
  if (iVar8 != 0) {
    if (param_1[0xb] == 0) {
      uVar9 = (*(code *)&SUB_ram_400104a8)(iVar8);
      FUN_ram_4206d212(iVar3,iVar8,uVar9);
    }
    else {
      FUN_ram_4206d22a(iVar3);
    }
  }
  FUN_ram_4206d1ee(iVar3,param_1[0x10]);
  iVar8 = param_1[0xc];
  if (iVar8 != 0) {
    if (param_1[0xd] == 0) {
      uVar9 = (*(code *)&SUB_ram_400104a8)(iVar8);
      FUN_ram_4206d236(iVar3,iVar8,uVar9);
    }
    else {
      FUN_ram_4206d250(iVar3);
    }
  }
  if ((param_1[0xe] != 0) && (param_1[0xf] != 0)) {
    FUN_ram_4206d244(iVar3);
  }
  if (*(char *)((int)param_1 + 0x72) != '\0') {
    FUN_ram_4206d266(iVar3);
  }
  if (param_1[0x1d] != 0) {
    FUN_ram_4206d274(iVar3);
  }
  iVar6 = param_1[0x17];
  iVar5 = param_1[0x1b];
  *(int *)(iVar2 + 0x6c) = param_1[0x12];
  iVar3 = param_1[0x14];
  iVar8 = param_1[0x19];
  *(int *)(iVar2 + 0x54) = param_1[2];
  *(int *)(iVar2 + 0x70) = param_1[5];
  *(int *)(iVar2 + 0x84) = iVar6;
  *(int *)(iVar2 + 0x88) = param_1[0x13];
  iVar6 = param_1[0x16];
  *(int *)(iVar2 + 0x28) = iVar5;
  *(char *)(iVar2 + 0x94) = (char)iVar3;
  *(int *)(iVar2 + 8) = iVar6;
  iVar5 = param_1[0x15];
  iVar3 = param_1[0x1a];
  if (iVar8 == 0) {
    iVar8 = 0x200;
  }
  *(int *)(iVar2 + 0x8c) = iVar8;
  if (iVar3 == 0) {
    iVar3 = 0x200;
  }
  *(int *)(iVar2 + 0x90) = iVar3;
  if (iVar5 == 0) {
    iVar5 = 10;
  }
  *(int *)(iVar2 + 4) = iVar5;
  if (iVar6 == 0) {
    *(undefined4 *)(iVar2 + 8) = 10;
  }
  else if (iVar6 == -1) {
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  iVar3 = param_1[6];
  if (iVar3 == 0) {
    iVar3 = 0x3c070618;
  }
  iVar3 = (*(code *)&SUB_ram_40010510)(iVar3);
  *(int *)(iVar2 + 0x60) = iVar3;
  if (iVar3 == 0) goto LAB_ram_4205c5c8;
  if (param_1[1] == 0) {
LAB_ram_4205c3e6:
    if (param_1[7] != 0) {
      iVar3 = (*(code *)&SUB_ram_40010510)();
      *(int *)(iVar2 + 100) = iVar3;
      if (iVar3 == 0) goto LAB_ram_4205c5c2;
    }
    if (param_1[3] != 0) {
      iVar3 = (*(code *)&SUB_ram_40010510)();
      *(int *)(iVar2 + 0x58) = iVar3;
      if (iVar3 == 0) goto LAB_ram_4205c5c2;
    }
    if (param_1[4] != 0) {
      iVar3 = (*(code *)&SUB_ram_40010510)();
      *(int *)(iVar2 + 0x5c) = iVar3;
      if (iVar3 == 0) goto LAB_ram_4205c5c2;
    }
    if (param_1[0x18] == 2) {
      iVar3 = FUN_ram_4205d0e2(iVar2 + 0x4c,0x3c0730b0,0xffffffff);
      if (iVar3 == 0) goto LAB_ram_4205c5c2;
      if (*(int *)(iVar2 + 0x54) == 0) {
        uVar9 = 0x1bb;
LAB_ram_4205c41a:
        *(undefined4 *)(iVar2 + 0x54) = uVar9;
      }
    }
    else {
      iVar3 = FUN_ram_4205d0e2(iVar2 + 0x4c,0x3c0730a0,0xffffffff);
      if (iVar3 == 0) goto LAB_ram_4205c5c2;
      if (*(int *)(iVar2 + 0x54) == 0) {
        uVar9 = 0x50;
        goto LAB_ram_4205c41a;
      }
    }
    if (*(int *)(iVar2 + 0x88) == 0) {
      *(undefined4 *)(iVar2 + 0x88) = 5000;
    }
    if ((char)param_1[0x1c] != '\0') {
      *(undefined1 *)(iVar2 + 0xc4) = 1;
    }
    piVar4 = *(int **)(*(int *)(iVar2 + 0x20) + 4);
    iVar3 = thunk_FUN_ram_4039047a(*(undefined4 *)(iVar2 + 0x90));
    *piVar4 = iVar3;
    if (iVar3 != 0) {
      piVar4 = *(int **)(*(int *)(iVar2 + 0x24) + 4);
      iVar3 = thunk_FUN_ram_4039047a(*(undefined4 *)(iVar2 + 0x8c));
      *piVar4 = iVar3;
      if (iVar3 != 0) {
        iVar3 = param_1[0x11];
        if (iVar3 == 0) {
          iVar3 = 0x3c0730b8;
        }
        if ((param_1[1] == 0) || (param_1[6] == 0)) {
          if ((*param_1 != 0) &&
             (((iVar8 = FUN_ram_4205bf9e(iVar2), iVar8 == 0 && (*(int *)(iVar2 + 0x50) != 0)) &&
              (iVar8 = FUN_ram_4205b66e(*(int *)(iVar2 + 0x50),*(undefined4 *)(iVar2 + 0x54)),
              iVar8 != 0)))) {
            iVar3 = FUN_ram_4205b9ae(iVar2,0x3c0730d0,iVar3);
            bVar1 = false;
            if (iVar3 == 0) {
              iVar3 = FUN_ram_4205b9ae(iVar2,0x3c0730a8,iVar8);
              bVar1 = iVar3 == 0;
            }
            thunk_FUN_ram_40390608(iVar8);
            if (bVar1) goto LAB_ram_4205c4ce;
          }
        }
        else if ((*(int *)(iVar2 + 0x50) != 0) &&
                (iVar8 = FUN_ram_4205b66e(*(int *)(iVar2 + 0x50),*(undefined4 *)(iVar2 + 0x54)),
                iVar8 != 0)) {
          iVar3 = FUN_ram_4205b9ae(iVar2,0x3c0730d0,iVar3);
          bVar1 = false;
          if (iVar3 == 0) {
            iVar3 = FUN_ram_4205b9ae(iVar2,0x3c0730a8,iVar8);
            bVar1 = iVar3 == 0;
          }
          thunk_FUN_ram_40390608(iVar8);
          if (bVar1) {
LAB_ram_4205c4ce:
            *(byte *)(iVar2 + 0xdc) = *(byte *)(iVar2 + 0xdc) | 1;
            puVar7 = *(undefined4 **)(iVar2 + 0x14);
            *puVar7 = &DAT_ram_4204b49a;
            puVar7[1] = &DAT_ram_4204b4aa;
            puVar7[2] = 0x4204b778;
            puVar7[3] = 0x4204b870;
            puVar7[4] = &LAB_ram_4204b50c;
            puVar7[5] = 0x4204b89e;
            puVar7[6] = 0x4204b8e4;
            puVar7[7] = &DAT_ram_4204b4ae;
            puVar7[9] = &DAT_ram_4204b4ba;
            puVar7[8] = &LAB_ram_4204b4be;
            *(int *)(*(int *)(iVar2 + 0x10) + 0x18) = iVar2;
            *(int *)(iVar2 + 0x9c) = iVar2;
            *(undefined4 *)(iVar2 + 0x80) = 1;
            return iVar2;
          }
        }
      }
    }
  }
  else {
    iVar3 = (*(code *)&SUB_ram_40010510)();
    *(int *)(iVar2 + 0x50) = iVar3;
    if (iVar3 != 0) goto LAB_ram_4205c3e6;
LAB_ram_4205c5c2:
    FUN_ram_4205b77c(iVar2);
  }
LAB_ram_4205c5c8:
  FUN_ram_4205be46(iVar2);
  return 0;
}

