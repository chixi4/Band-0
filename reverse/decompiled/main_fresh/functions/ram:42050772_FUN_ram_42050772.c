
void FUN_ram_42050772(undefined4 *param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 auStack_24 [3];
  
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)FUN_ram_4039bf1e();
  }
  iVar9 = param_1[1];
  uVar8 = param_1[2];
  puVar1 = (uint *)param_1[3];
  auStack_24[0] = 0;
  piVar2 = (int *)FUN_ram_4205030e(*param_1);
  uVar5 = 9;
  if (piVar2 == (int *)0x0) goto LAB_ram_420508ac;
  iVar3 = FUN_ram_4205c5e6(piVar2,iVar9,uVar8,puVar1,param_1 + 4,auStack_24);
  if (iVar3 == 0) {
    if (iVar9 == 6) {
      if (((3 < (uint)param_1[4]) && (puVar7 = (uint *)*piVar2, puVar7 != (uint *)0x0)) &&
         (uVar6 = puVar7[2], uVar6 != 0)) {
        if ((*puVar7 & 0xf0) != 0x10) goto LAB_ram_420508da;
        if (*(int *)(uVar6 + 0x14) != 1) {
          if (uVar8 == 3) {
            uVar8 = *(uint *)(uVar6 + 0x98);
LAB_ram_42050a96:
            uVar8 = uVar8 / 1000;
          }
          else if ((int)uVar8 < 4) {
            if (uVar8 == 1) {
              uVar8 = (uint)(*(ushort *)(uVar6 + 0x1e) >> 6);
LAB_ram_42050990:
              uVar8 = uVar8 & 1;
            }
            else {
              if (uVar8 != 2) goto LAB_ram_42050828;
              uVar8 = *(uint *)(uVar6 + 0x98);
            }
          }
          else {
            if (uVar8 == 4) {
              uVar8 = *(uint *)(uVar6 + 0x9c);
              goto LAB_ram_42050a96;
            }
            if (uVar8 != 5) goto LAB_ram_42050828;
            uVar8 = *(uint *)(uVar6 + 0xa0);
          }
          goto LAB_ram_42050920;
        }
      }
    }
    else if (iVar9 == 0xfff) {
      if (uVar8 == 0x1006) {
        if ((0xf < (uint)param_1[4]) && (*piVar2 != 0)) {
          uVar8 = *(uint *)(*piVar2 + 0x24);
LAB_ram_42050850:
          puVar1[1] = 0;
          *puVar1 = uVar8 / 1000;
          puVar1[2] = (uVar8 % 1000) * 1000;
          goto LAB_ram_420507bc;
        }
      }
      else if ((int)uVar8 < 0x1007) {
        if (uVar8 == 8) {
LAB_ram_42050906:
          if (((3 < (uint)param_1[4]) && (*piVar2 != 0)) &&
             (iVar9 = *(int *)(*piVar2 + 8), iVar9 != 0)) {
            uVar8 = *(byte *)(iVar9 + 9) & uVar8;
            goto LAB_ram_42050920;
          }
        }
        else if ((int)uVar8 < 9) {
          if (uVar8 != 2) {
            if (uVar8 != 4) goto LAB_ram_42050828;
            goto LAB_ram_42050906;
          }
          if (((3 < (uint)param_1[4]) && (puVar7 = (uint *)*piVar2, puVar7 != (uint *)0x0)) &&
             (puVar7[2] != 0)) {
            if ((*puVar7 & 0xf0) == 0x10) {
              uVar8 = *(uint *)(puVar7[2] + 0x14);
              uVar8 = uVar8 & -(uint)(uVar8 == 1);
LAB_ram_420508f6:
              *puVar1 = uVar8;
              goto LAB_ram_420507bc;
            }
LAB_ram_420508da:
            FUN_ram_4205027e(piVar2);
            uVar5 = 0x6d;
            goto LAB_ram_420508ac;
          }
        }
        else {
          if (uVar8 == 0x20) {
            if ((*(uint *)*piVar2 & 0xf0) != 0x20) goto LAB_ram_420508da;
            goto LAB_ram_42050906;
          }
          if (uVar8 != 0x1005) goto LAB_ram_42050828;
          if ((0xf < (uint)param_1[4]) && (*piVar2 != 0)) {
            uVar8 = *(uint *)(*piVar2 + 0x20);
            goto LAB_ram_42050850;
          }
        }
      }
      else if (uVar8 == 0x1008) {
        if ((3 < (uint)param_1[4]) && ((uint *)*piVar2 != (uint *)0x0)) {
          uVar8 = *(uint *)*piVar2;
          uVar6 = uVar8 & 0xf0;
          if (uVar6 == 0x20) {
            uVar8 = 2;
          }
          else if (uVar6 == 0x40) {
            uVar8 = 3;
          }
          else {
            if (uVar6 != 0x10) goto LAB_ram_420508f6;
            uVar8 = 1;
          }
          goto LAB_ram_42050920;
        }
      }
      else if (uVar8 == 0x100a) {
        if (((3 < (uint)param_1[4]) && (puVar7 = (uint *)*piVar2, puVar7 != (uint *)0x0)) &&
           (puVar7[2] != 0)) {
          if ((*puVar7 & 0xf0) == 0x20) {
            uVar8 = (uint)*(byte *)(puVar7[2] + 0x10);
            goto LAB_ram_42050990;
          }
          goto LAB_ram_420508da;
        }
      }
      else {
        if (uVar8 != 0x1007) goto LAB_ram_42050828;
        if (3 < (uint)param_1[4]) {
          FUN_ram_4205d02a(*piVar2);
          uVar8 = FUN_ram_4205e6c6();
          *puVar1 = uVar8;
          goto LAB_ram_420507bc;
        }
      }
    }
    else {
      if (iVar9 != 0) {
LAB_ram_42050828:
        auStack_24[0] = 0x6d;
        goto LAB_ram_420507bc;
      }
      if (uVar8 == 5) {
        if (((param_1[4] != 0) && (puVar7 = (uint *)*piVar2, puVar7 != (uint *)0x0)) &&
           (puVar7[2] != 0)) {
          if ((*puVar7 & 0xf0) != 0x20) goto LAB_ram_420508da;
          uVar4 = *(undefined1 *)(puVar7[2] + 0x1d);
LAB_ram_42050a00:
          *(undefined1 *)puVar1 = uVar4;
          goto LAB_ram_420507bc;
        }
      }
      else {
        if ((int)uVar8 < 6) {
          if (uVar8 == 1) {
            if ((((uint)param_1[4] < 4) || (*piVar2 == 0)) ||
               (iVar9 = *(int *)(*piVar2 + 8), iVar9 == 0)) goto LAB_ram_420508a4;
            uVar8 = (uint)*(byte *)(iVar9 + 10);
          }
          else {
            if (uVar8 != 2) goto LAB_ram_42050828;
            if ((((uint)param_1[4] < 4) || (*piVar2 == 0)) ||
               (iVar9 = *(int *)(*piVar2 + 8), iVar9 == 0)) goto LAB_ram_420508a4;
            uVar8 = (uint)*(byte *)(iVar9 + 0xb);
          }
LAB_ram_42050920:
          *puVar1 = uVar8;
          goto LAB_ram_420507bc;
        }
        if (uVar8 == 6) {
          if (((3 < (uint)param_1[4]) && (puVar7 = (uint *)*piVar2, puVar7 != (uint *)0x0)) &&
             (puVar7[2] != 0)) {
            if ((*puVar7 & 0xf0) != 0x20) goto LAB_ram_420508da;
            uVar8 = *(uint *)(puVar7[2] + 0x18);
            goto LAB_ram_42050920;
          }
        }
        else {
          if (uVar8 != 7) goto LAB_ram_42050828;
          if (((param_1[4] != 0) && (*piVar2 != 0)) && (iVar9 = *(int *)(*piVar2 + 8), iVar9 != 0))
          {
            if ((*(byte *)(iVar9 + 0x10) & 8) == 0) {
              *(undefined1 *)puVar1 = 0;
              goto LAB_ram_420507bc;
            }
            uVar4 = 1;
            goto LAB_ram_42050a00;
          }
        }
      }
    }
LAB_ram_420508a4:
    FUN_ram_4205027e(piVar2);
    uVar5 = 0x16;
  }
  else {
LAB_ram_420507bc:
    FUN_ram_4205027e(piVar2);
    uVar5 = auStack_24[0];
  }
LAB_ram_420508ac:
  param_1[5] = uVar5;
  FUN_ram_4205c6fa(param_1[6]);
  return;
}

