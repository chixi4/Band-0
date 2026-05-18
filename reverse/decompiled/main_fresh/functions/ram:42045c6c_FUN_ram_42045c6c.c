
undefined4 FUN_ram_42045c6c(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  byte *pbVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  code *pcVar16;
  undefined8 uVar17;
  int iStack_34;
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  iVar2 = *param_2;
  if (iVar2 == 0) {
    return 0;
  }
  uVar15 = param_2[2];
  uVar13 = param_2[1];
  uVar14 = uVar15 + 4;
  if ((uVar13 < uVar14) ||
     (iVar5 = FUN_ram_4039c5aa(iVar2 + uVar15,&DAT_ram_3c0c29dc,4), iVar5 != 0)) {
    if ((uVar13 < uVar15 + 5) ||
       (iVar5 = FUN_ram_4039c5aa(iVar2 + uVar15,&DAT_ram_3c0c19c8,5), iVar5 != 0)) {
      if ((uVar13 < uVar14) ||
         (iVar5 = FUN_ram_4039c5aa(iVar2 + uVar15,&DAT_ram_3c0c19c0,4), iVar5 != 0)) {
        if (uVar13 <= uVar15) {
          return 0;
        }
        pbVar9 = (byte *)(iVar2 + uVar15);
        bVar1 = *pbVar9;
        if (bVar1 == 0x22) {
          uVar6 = FUN_ram_4204589c(param_1,param_2);
          return uVar6;
        }
        if ((bVar1 == 0x2d) || ((byte)(bVar1 - 0x30) < 10)) {
          iStack_34 = 0;
          iVar5 = 0;
          for (; (byte *)(iVar2 + uVar13) != pbVar9; pbVar9 = pbVar9 + 1) {
            uVar14 = (uint)*pbVar9;
            if (uVar14 < 0x46) {
              if ((uVar14 < 0x2b) || ((0x4007fedU >> (uVar14 - 0x2b & 0x1f) & 1) == 0)) break;
            }
            else if (uVar14 != 0x65) break;
            iVar5 = iVar5 + 1;
          }
          iVar2 = (*(code *)param_2[4])();
          if (iVar2 == 0) {
            return 0;
          }
          FUN_ram_4039c11e(iVar2,*param_2 + param_2[2],iVar5);
          *(undefined1 *)(iVar5 + iVar2) = 0;
          uVar17 = (*(code *)&SUB_ram_400105c0)(iVar2,&iStack_34);
          iVar5 = iStack_34;
          uVar8 = (undefined4)((ulonglong)uVar17 >> 0x20);
          uVar6 = (undefined4)uVar17;
          pcVar16 = (code *)param_2[5];
          if (iVar2 != iStack_34) {
            iVar7 = (*(code *)&SUB_ram_40010a6c)(uVar6,uVar8,0,0x80208020);
            if (iVar7 < 0) {
              iVar7 = (*(code *)&SUB_ram_40010a7c)(uVar6,uVar8,0x80208020,0x80248020);
              uVar10 = 0x80000000;
              if (0 < iVar7) {
                uVar10 = (*(code *)&SUB_ram_40010a34)(uVar6,uVar8);
              }
            }
            else {
              uVar10 = 0x7fffffff;
            }
            *(undefined4 *)(param_1 + 0x14) = uVar10;
            *(undefined4 *)(param_1 + 0xc) = 8;
            iVar7 = param_2[2];
            *(undefined8 *)(param_1 + 0x18) = uVar17;
            param_2[2] = iVar7 + (iVar5 - iVar2);
            (*pcVar16)(iVar2);
            return 1;
          }
          (*pcVar16)(iVar2);
          return 0;
        }
        if (bVar1 == 0x5b) {
          if (999 < (uint)param_2[3]) {
            return 0;
          }
          param_2[3] = param_2[3] + 1;
          if (*pbVar9 != 0x5b) {
            return 0;
          }
          param_2[2] = uVar15 + 1;
          FUN_ram_42045b0e(param_2);
          uVar14 = param_2[2];
          if (uVar13 <= uVar14) {
LAB_ram_42045ee4:
            param_2[2] = uVar14 - 1;
            return 0;
          }
          if (*(char *)(iVar2 + uVar14) == ']') {
            piVar3 = (int *)0x0;
            piVar11 = (int *)0x0;
          }
          else {
            param_2[2] = uVar14 - 1;
            piVar4 = (int *)0x0;
            piVar12 = (int *)0x0;
            do {
              piVar3 = (int *)FUN_ram_42045bd8(param_2[4]);
              piVar11 = piVar12;
              if (piVar3 == (int *)0x0) goto LAB_ram_4204607a;
              piVar11 = piVar3;
              if (piVar12 != (int *)0x0) {
                *piVar4 = (int)piVar3;
                piVar3[1] = (int)piVar4;
                piVar11 = piVar12;
              }
              param_2[2] = param_2[2] + 1;
              FUN_ram_42045b0e(param_2);
              iVar2 = FUN_ram_42045c6c(piVar3,param_2);
              if (iVar2 == 0) goto LAB_ram_42045f56;
              FUN_ram_42045b0e(param_2);
              uVar14 = param_2[2];
              if ((uint)param_2[1] <= uVar14) goto LAB_ram_42045f56;
              piVar4 = piVar3;
              piVar12 = piVar11;
            } while (*(char *)(*param_2 + uVar14) == ',');
            if (*(char *)(*param_2 + uVar14) != ']') {
LAB_ram_42045f56:
              FUN_ram_42045c02(piVar11);
              return 0;
            }
          }
          param_2[3] = param_2[3] + -1;
          if (piVar11 != (int *)0x0) {
            piVar11[1] = (int)piVar3;
          }
          uVar6 = 0x20;
        }
        else {
          if (bVar1 != 0x7b) {
            return 0;
          }
          if (999 < (uint)param_2[3]) {
            return 0;
          }
          param_2[3] = param_2[3] + 1;
          if (*pbVar9 != 0x7b) {
            return 0;
          }
          param_2[2] = uVar15 + 1;
          FUN_ram_42045b0e(param_2);
          uVar14 = param_2[2];
          if (uVar13 <= uVar14) goto LAB_ram_42045ee4;
          if (*(char *)(iVar2 + uVar14) == '}') {
            piVar3 = (int *)0x0;
            piVar11 = (int *)0x0;
          }
          else {
            param_2[2] = uVar14 - 1;
            piVar4 = (int *)0x0;
            piVar12 = (int *)0x0;
            do {
              piVar3 = (int *)FUN_ram_42045bd8(param_2[4]);
              piVar11 = piVar12;
              if (piVar3 == (int *)0x0) goto LAB_ram_4204607a;
              piVar11 = piVar3;
              if (piVar12 != (int *)0x0) {
                *piVar4 = (int)piVar3;
                piVar3[1] = (int)piVar4;
                piVar11 = piVar12;
              }
              if ((uint)param_2[1] <= param_2[2] + 1U) goto LAB_ram_42045f56;
              param_2[2] = param_2[2] + 1U;
              FUN_ram_42045b0e(param_2);
              iVar2 = FUN_ram_4204589c(piVar3,param_2);
              if (iVar2 == 0) goto LAB_ram_42045f56;
              FUN_ram_42045b0e(param_2);
              iVar2 = piVar3[4];
              uVar14 = param_2[1];
              piVar3[4] = 0;
              piVar3[8] = iVar2;
              uVar13 = param_2[2];
              if ((uVar14 <= uVar13) || (*(char *)(*param_2 + uVar13) != ':'))
              goto LAB_ram_42045f56;
              param_2[2] = uVar13 + 1;
              FUN_ram_42045b0e(param_2);
              iVar2 = FUN_ram_42045c6c(piVar3,param_2);
              if (iVar2 == 0) goto LAB_ram_42045f56;
              FUN_ram_42045b0e(param_2);
              uVar14 = param_2[2];
              if ((uint)param_2[1] <= uVar14) goto LAB_ram_42045f56;
              piVar4 = piVar3;
              piVar12 = piVar11;
            } while (*(char *)(*param_2 + uVar14) == ',');
            if (*(char *)(*param_2 + uVar14) != '}') goto LAB_ram_42045f56;
          }
          param_2[3] = param_2[3] + -1;
          if (piVar11 != (int *)0x0) {
            piVar11[1] = (int)piVar3;
          }
          uVar6 = 0x40;
        }
        *(undefined4 *)(param_1 + 0xc) = uVar6;
        *(int **)(param_1 + 8) = piVar11;
        uVar14 = uVar14 + 1;
      }
      else {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) = 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 1;
      uVar14 = uVar15 + 5;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 4;
  }
  param_2[2] = uVar14;
  return 1;
LAB_ram_4204607a:
  if (piVar11 == (int *)0x0) {
    return 0;
  }
  goto LAB_ram_42045f56;
}

