
int FUN_ram_420209b0(int *param_1,int *param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  uint uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_48 [28];
  
  if (param_2 == (int *)0x0) {
    iVar5 = 0x102;
  }
  else {
    param_1[7] = param_3;
    param_1[8] = param_4;
    piVar11 = param_1 + 3;
    FUN_ram_42020892();
    FUN_ram_42020892(piVar11);
    iVar5 = -1;
    if (param_4 < 0x1861862) {
      iVar5 = param_4 * 0x54 + 4;
    }
    puVar6 = (uint *)thunk_FUN_ram_4039047a(iVar5);
    puVar2 = puVar6;
    if (puVar6 != (uint *)0x0) {
      puVar2 = puVar6 + 1;
      *puVar6 = param_4;
      puVar6 = puVar2;
      uVar12 = param_4;
      while (uVar12 = uVar12 - 1, -1 < (int)uVar12) {
        FUN_ram_4201f73e(puVar6);
        puVar6 = puVar6 + 0x15;
      }
    }
    iVar5 = param_1[6];
    param_1[6] = (int)puVar2;
    if (iVar5 != 0) {
      for (iVar3 = *(int *)(iVar5 + -4) * 0x54 + iVar5; iVar5 != iVar3; iVar3 = iVar3 + -0x54) {
        thunk_FUN_ram_4201f662(iVar3 + -0x10);
      }
      thunk_FUN_ram_40390608(iVar5 + -4);
    }
    if (param_1[6] == 0) {
      iVar5 = 0x101;
    }
    else {
      for (uVar12 = 0; uVar12 != param_4; uVar12 = uVar12 + 1) {
        iVar3 = uVar12 * 0x54;
        iVar5 = FUN_ram_42020702(param_1[6] + iVar3,param_2,uVar12 + param_3);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = FUN_ram_4201f852(param_1[6] + iVar3,&uStack_54);
        uVar1 = uStack_54;
        if (iVar5 == 0) {
          for (piVar4 = (int *)*param_1; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
            iVar5 = FUN_ram_4201f852(piVar4,&uStack_50);
            if ((iVar5 == 0) && (uVar1 < uStack_50)) {
              iVar7 = param_1[2];
              iVar5 = *piVar4;
              piVar10 = (int *)(param_1[6] + iVar3);
              if (iVar5 == 0) {
                puVar9 = (undefined4 *)*param_1;
                *piVar10 = 0;
                piVar10[1] = (int)puVar9;
                if (puVar9 != (undefined4 *)0x0) {
                  *puVar9 = piVar10;
                }
                *param_1 = (int)piVar10;
                if (param_1[1] == 0) {
                  param_1[1] = (int)piVar10;
                }
              }
              else {
                *(int **)(iVar5 + 4) = piVar10;
                *piVar4 = (int)piVar10;
                piVar10[1] = (int)piVar4;
                *piVar10 = iVar5;
              }
              param_1[2] = iVar7 + 1;
              goto LAB_ram_42020ac4;
            }
          }
          iVar5 = param_1[6];
          piVar4 = param_1;
        }
        else {
          iVar5 = param_1[6];
          piVar4 = piVar11;
        }
        FUN_ram_4202085a(piVar4,iVar5 + iVar3);
LAB_ram_42020ac4:
      }
      if (param_1[2] == 0) {
        param_1[9] = 0;
        iVar5 = FUN_ram_420208ae(param_1);
        return iVar5;
      }
      iVar5 = FUN_ram_4201f852(param_1[1],&uStack_50);
      if (iVar5 == 0) {
        param_1[9] = uStack_50 + 1;
        iVar3 = (**(code **)(*param_2 + 0x28))(param_2);
        if (iVar3 == 0) {
          iVar3 = param_1[1];
          uStack_54 = 0;
          uVar12 = 0xffffffff;
          while (iVar7 = FUN_ram_42020034(iVar3,0xff,0xff,0,&uStack_54,&uStack_50,0xff), iVar7 == 0)
          {
            uStack_54 = (uStack_50 >> 0x10 & 0xff) + uStack_54;
            uVar12 = uStack_54;
          }
          if (uVar12 != 0xffffffff) {
            for (iVar7 = *param_1; iVar3 != iVar7; iVar7 = *(int *)(iVar7 + 4)) {
              if (*(int *)(iVar7 + 0xc) != -8) {
                iVar8 = FUN_ram_420203ca(iVar7,uStack_50 & 0xff,uStack_50._1_1_,auStack_48,
                                         uStack_50._3_1_,0xff);
                if (iVar8 == 0) goto LAB_ram_42020bc4;
              }
            }
            if (uStack_50._1_1_ == 'H') {
              for (iVar3 = *param_1; iVar7 != iVar3; iVar3 = *(int *)(iVar3 + 4)) {
                if (*(int *)(iVar3 + 0xc) != -8) {
                  iVar8 = FUN_ram_420203ca(iVar3,uStack_50 & 0xff,0x41,auStack_48,uStack_50._3_1_,
                                           0xff);
                  if (iVar8 == 0) break;
                }
              }
            }
          }
LAB_ram_42020bc4:
          for (iVar3 = *param_1; iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
            if (*(int *)(iVar3 + 0xc) == -8) {
              iVar7 = param_1[1];
              if (*(int *)(iVar7 + 0xc) == -2) {
                iVar8 = FUN_ram_4201f892(iVar7);
                if (iVar8 != 0) {
                  return iVar8;
                }
                FUN_ram_42020876(param_1,iVar7);
                FUN_ram_4202085a(piVar11,iVar7);
              }
              iVar7 = FUN_ram_420208ae(param_1);
              if (iVar7 != 0) {
                return iVar7;
              }
              iVar7 = FUN_ram_4201fab2(iVar3,param_1[1]);
              if ((iVar7 != 0) && (iVar7 != 0x1102)) {
                return iVar7;
              }
              iVar7 = FUN_ram_4201f892(iVar3);
              if (iVar7 != 0) {
                return iVar7;
              }
              FUN_ram_42020876(param_1,iVar3);
              FUN_ram_4202085a(piVar11,iVar3);
              break;
            }
          }
          if (param_1[5] == 0) {
            iVar5 = 0x110d;
          }
        }
      }
    }
  }
  return iVar5;
}

