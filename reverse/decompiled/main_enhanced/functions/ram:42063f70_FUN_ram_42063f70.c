
int FUN_ram_42063f70(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined *puVar9;
  undefined4 uVar10;
  
  iVar2 = FUN_ram_4039c08e(1,0xe0);
  if (iVar2 == 0) goto LAB_ram_420643be;
  iVar3 = FUN_ram_4039c08e(1,0x20);
  *(int *)(iVar2 + 0x10) = iVar3;
  if (iVar3 == 0) goto LAB_ram_420643be;
  iVar3 = FUN_ram_4039c08e(1,0x28);
  *(int *)(iVar2 + 0x14) = iVar3;
  if (iVar3 == 0) goto LAB_ram_420643be;
  iVar3 = FUN_ram_4039c08e(1,0x30);
  *(int *)(iVar2 + 0x2c) = iVar3;
  if (iVar3 == 0) goto LAB_ram_420643be;
  piVar4 = (int *)FUN_ram_4039c08e(1,0x30);
  *(int **)(iVar2 + 0x20) = piVar4;
  if (piVar4 == (int *)0x0) goto LAB_ram_420643be;
  iVar3 = FUN_ram_420647da();
  *piVar4 = iVar3;
  if (iVar3 == 0) goto LAB_ram_420643be;
  iVar8 = *(int *)(iVar2 + 0x20);
  iVar3 = FUN_ram_4039c08e(1,0x18);
  *(int *)(iVar8 + 4) = iVar3;
  if (iVar3 == 0) goto LAB_ram_420643be;
  piVar4 = (int *)FUN_ram_4039c08e(1,0x30);
  *(int **)(iVar2 + 0x24) = piVar4;
  if (piVar4 == (int *)0x0) goto LAB_ram_420643be;
  iVar3 = FUN_ram_420647da();
  *piVar4 = iVar3;
  if (iVar3 == 0) goto LAB_ram_420643be;
  iVar8 = *(int *)(iVar2 + 0x24);
  iVar3 = FUN_ram_4039c08e(1,0x18);
  *(int *)(iVar8 + 4) = iVar3;
  if (iVar3 == 0) goto LAB_ram_420643be;
  iVar3 = FUN_ram_420a332e();
  *(int *)(iVar2 + 0x18) = iVar3;
  if ((((iVar3 == 0) || (iVar3 = FUN_ram_420a3cde(), iVar3 == 0)) ||
      (iVar8 = FUN_ram_420a34e6(iVar3,0x50), iVar8 != 0)) ||
     (iVar8 = FUN_ram_420a3348(*(undefined4 *)(iVar2 + 0x18),iVar3,&DAT_ram_3c0c2d24), iVar8 != 0))
  goto LAB_ram_420643be;
  uVar10 = 0;
  if (param_1[0x25] != 0) {
    if (param_1[0x25] != 2) goto LAB_ram_420643be;
    uVar10 = 1;
  }
  FUN_ram_420a3bfa(iVar3,uVar10);
  iVar3 = FUN_ram_4206341e(iVar2,param_1,iVar3);
  if (((iVar3 == 0) || (iVar3 = FUN_ram_420a3c6c(), iVar3 == 0)) ||
     ((iVar8 = FUN_ram_420a34e6(iVar3,0x1bb), iVar8 != 0 ||
      (iVar8 = FUN_ram_420a3348(*(undefined4 *)(iVar2 + 0x18),iVar3,&DAT_ram_3c0c2d34), iVar8 != 0))
     )) goto LAB_ram_420643be;
  FUN_ram_420a3bfa(iVar3,uVar10);
  iVar8 = FUN_ram_4206341e(iVar2,param_1,iVar3);
  if (iVar8 == 0) goto LAB_ram_420643be;
  if (param_1[0x1e] == 0) {
    if (*(char *)((int)param_1 + 0x71) == '\0') {
      iVar8 = param_1[8];
      if (iVar8 != 0) {
        if (param_1[9] == 0) {
          uVar10 = (*(code *)&SUB_ram_400104a8)(iVar8);
          FUN_ram_420a3bd2(iVar3,iVar8,uVar10);
        }
        else {
          FUN_ram_420a3be0(iVar3);
        }
      }
    }
    else {
      FUN_ram_420a3bb0(iVar3);
    }
  }
  iVar8 = param_1[10];
  if (iVar8 != 0) {
    if (param_1[0xb] == 0) {
      uVar10 = (*(code *)&SUB_ram_400104a8)(iVar8);
      FUN_ram_420a3bec(iVar3,iVar8,uVar10);
    }
    else {
      FUN_ram_420a3c04(iVar3);
    }
  }
  FUN_ram_420a3bc8(iVar3,param_1[0x10]);
  if (param_1[0x26] == 1) {
    FUN_ram_420a3bbe(iVar3);
  }
  iVar8 = param_1[0xc];
  if (iVar8 != 0) {
    if (param_1[0xd] == 0) {
      uVar10 = (*(code *)&SUB_ram_400104a8)(iVar8);
      FUN_ram_420a3c10(iVar3,iVar8,uVar10);
    }
    else {
      FUN_ram_420a3c2a(iVar3);
    }
  }
  if ((param_1[0xe] != 0) && (param_1[0xf] != 0)) {
    FUN_ram_420a3c1e(iVar3);
  }
  if (*(char *)((int)param_1 + 0x72) != '\0') {
    FUN_ram_420a3c40(iVar3);
  }
  if (param_1[0x1d] != 0) {
    FUN_ram_420a3c4e(iVar3);
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
    iVar3 = 0x3c0a85ec;
  }
  iVar3 = (*(code *)&SUB_ram_40010510)(iVar3);
  *(int *)(iVar2 + 0x60) = iVar3;
  if (iVar3 == 0) goto LAB_ram_420643be;
  if (param_1[1] == 0) {
LAB_ram_420641dc:
    if (param_1[7] != 0) {
      iVar3 = (*(code *)&SUB_ram_40010510)();
      *(int *)(iVar2 + 100) = iVar3;
      if (iVar3 == 0) goto LAB_ram_420643b8;
    }
    if (param_1[3] != 0) {
      iVar3 = (*(code *)&SUB_ram_40010510)();
      *(int *)(iVar2 + 0x58) = iVar3;
      if (iVar3 == 0) goto LAB_ram_420643b8;
    }
    if (param_1[4] != 0) {
      iVar3 = (*(code *)&SUB_ram_40010510)();
      *(int *)(iVar2 + 0x5c) = iVar3;
      if (iVar3 == 0) goto LAB_ram_420643b8;
    }
    if (param_1[0x18] == 2) {
      iVar3 = FUN_ram_42064adc(iVar2 + 0x4c,&DAT_ram_3c0c2d34,0xffffffff);
      if (iVar3 == 0) goto LAB_ram_420643b8;
      if (*(int *)(iVar2 + 0x54) == 0) {
        uVar10 = 0x1bb;
LAB_ram_42064210:
        *(undefined4 *)(iVar2 + 0x54) = uVar10;
      }
    }
    else {
      iVar3 = FUN_ram_42064adc(iVar2 + 0x4c,&DAT_ram_3c0c2d24,0xffffffff);
      if (iVar3 == 0) goto LAB_ram_420643b8;
      if (*(int *)(iVar2 + 0x54) == 0) {
        uVar10 = 0x50;
        goto LAB_ram_42064210;
      }
    }
    if (*(int *)(iVar2 + 0x88) == 0) {
      *(undefined4 *)(iVar2 + 0x88) = 5000;
    }
    if ((char)param_1[0x1c] != '\0') {
      *(undefined1 *)(iVar2 + 0xc4) = 1;
    }
    piVar4 = *(int **)(*(int *)(iVar2 + 0x20) + 4);
    iVar3 = thunk_FUN_ram_403904a6(*(undefined4 *)(iVar2 + 0x90));
    *piVar4 = iVar3;
    if (iVar3 != 0) {
      piVar4 = *(int **)(*(int *)(iVar2 + 0x24) + 4);
      iVar3 = thunk_FUN_ram_403904a6(*(undefined4 *)(iVar2 + 0x8c));
      *piVar4 = iVar3;
      if (iVar3 != 0) {
        puVar9 = (undefined *)param_1[0x11];
        if (puVar9 == (undefined *)0x0) {
          puVar9 = &DAT_ram_3c0c2d3c;
        }
        if ((param_1[1] == 0) || (param_1[6] == 0)) {
          if ((*param_1 != 0) &&
             (((iVar3 = FUN_ram_42063d84(iVar2), iVar3 == 0 && (*(int *)(iVar2 + 0x50) != 0)) &&
              (iVar3 = FUN_ram_420634c8(*(int *)(iVar2 + 0x50),*(undefined4 *)(iVar2 + 0x54)),
              iVar3 != 0)))) {
            iVar8 = FUN_ram_420637b0(iVar2,"ucture often strengthens the work.",puVar9);
            bVar1 = false;
            if (iVar8 == 0) {
              iVar8 = FUN_ram_420637b0(iVar2,&DAT_ram_3c0c2d2c,iVar3);
              bVar1 = iVar8 == 0;
            }
            thunk_FUN_ram_40390634(iVar3);
            if (bVar1) goto LAB_ram_420642c4;
          }
        }
        else if ((*(int *)(iVar2 + 0x50) != 0) &&
                (iVar3 = FUN_ram_420634c8(*(int *)(iVar2 + 0x50),*(undefined4 *)(iVar2 + 0x54)),
                iVar3 != 0)) {
          iVar8 = FUN_ram_420637b0(iVar2,"ucture often strengthens the work.",puVar9);
          bVar1 = false;
          if (iVar8 == 0) {
            iVar8 = FUN_ram_420637b0(iVar2,&DAT_ram_3c0c2d2c,iVar3);
            bVar1 = iVar8 == 0;
          }
          thunk_FUN_ram_40390634(iVar3);
          if (bVar1) {
LAB_ram_420642c4:
            *(byte *)(iVar2 + 0xdc) = *(byte *)(iVar2 + 0xdc) | 1;
            puVar7 = *(undefined4 **)(iVar2 + 0x14);
            *puVar7 = 0x420532f4;
            puVar7[1] = 0x42053304;
            puVar7[2] = 0x42053562;
            puVar7[3] = 0x4205365a;
            puVar7[4] = 0x42053366;
            puVar7[5] = 0x42053688;
            puVar7[6] = 0x420536ce;
            puVar7[7] = 0x42053308;
            puVar7[9] = 0x42053314;
            puVar7[8] = 0x42053318;
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
    if (iVar3 != 0) goto LAB_ram_420641dc;
LAB_ram_420643b8:
    FUN_ram_42063566(iVar2);
  }
LAB_ram_420643be:
  FUN_ram_42063c2c(iVar2);
  return 0;
}

