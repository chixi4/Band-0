
void FUN_ram_4204f196(undefined4 *param_1)

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
  
  puVar1 = (uint *)param_1[3];
  uVar8 = param_1[2];
  iVar9 = param_1[1];
  auStack_24[0] = 0;
  piVar2 = (int *)FUN_ram_4204ed40(*param_1);
  uVar5 = 9;
  if (piVar2 == (int *)0x0) goto LAB_ram_4204f2c6;
  iVar3 = FUN_ram_420596de(piVar2,iVar9,uVar8,puVar1,param_1 + 4,auStack_24);
  if (iVar3 == 0) {
    if (iVar9 == 6) {
      if (((3 < (uint)param_1[4]) && (puVar7 = (uint *)*piVar2, puVar7 != (uint *)0x0)) &&
         (uVar6 = puVar7[2], uVar6 != 0)) {
        if ((*puVar7 & 0xf0) != 0x10) goto LAB_ram_4204f2f4;
        if (*(int *)(uVar6 + 0x14) != 1) {
          if (uVar8 == 3) {
            uVar8 = *(uint *)(uVar6 + 0x94);
LAB_ram_4204f4ae:
            uVar8 = uVar8 / 1000;
          }
          else if ((int)uVar8 < 4) {
            if (uVar8 == 1) {
              uVar8 = (uint)(*(ushort *)(uVar6 + 0x1e) >> 6);
LAB_ram_4204f3aa:
              uVar8 = uVar8 & 1;
            }
            else {
              if (uVar8 != 2) goto LAB_ram_4204f242;
              uVar8 = *(uint *)(uVar6 + 0x94);
            }
          }
          else {
            if (uVar8 == 4) {
              uVar8 = *(uint *)(uVar6 + 0x98);
              goto LAB_ram_4204f4ae;
            }
            if (uVar8 != 5) goto LAB_ram_4204f242;
            uVar8 = *(uint *)(uVar6 + 0x9c);
          }
          goto LAB_ram_4204f33a;
        }
      }
    }
    else if (iVar9 == 0xfff) {
      if (uVar8 == 0x1006) {
        if ((0xf < (uint)param_1[4]) && (*piVar2 != 0)) {
          uVar8 = *(uint *)(*piVar2 + 0x24);
LAB_ram_4204f26a:
          puVar1[1] = 0;
          *puVar1 = uVar8 / 1000;
          puVar1[2] = (uVar8 % 1000) * 1000;
          goto LAB_ram_4204f1d6;
        }
      }
      else if ((int)uVar8 < 0x1007) {
        if (uVar8 == 8) {
LAB_ram_4204f320:
          if (((3 < (uint)param_1[4]) && (*piVar2 != 0)) &&
             (iVar9 = *(int *)(*piVar2 + 8), iVar9 != 0)) {
            uVar8 = *(byte *)(iVar9 + 9) & uVar8;
            goto LAB_ram_4204f33a;
          }
        }
        else if ((int)uVar8 < 9) {
          if (uVar8 != 2) {
            if (uVar8 != 4) goto LAB_ram_4204f242;
            goto LAB_ram_4204f320;
          }
          if (((3 < (uint)param_1[4]) && (puVar7 = (uint *)*piVar2, puVar7 != (uint *)0x0)) &&
             (puVar7[2] != 0)) {
            if ((*puVar7 & 0xf0) == 0x10) {
              uVar8 = *(uint *)(puVar7[2] + 0x14);
              uVar8 = uVar8 & -(uint)(uVar8 == 1);
LAB_ram_4204f310:
              *puVar1 = uVar8;
              goto LAB_ram_4204f1d6;
            }
LAB_ram_4204f2f4:
            FUN_ram_4204ecbc(piVar2);
            uVar5 = 0x6d;
            goto LAB_ram_4204f2c6;
          }
        }
        else {
          if (uVar8 == 0x20) {
            if ((*(uint *)*piVar2 & 0xf0) != 0x20) goto LAB_ram_4204f2f4;
            goto LAB_ram_4204f320;
          }
          if (uVar8 != 0x1005) goto LAB_ram_4204f242;
          if ((0xf < (uint)param_1[4]) && (*piVar2 != 0)) {
            uVar8 = *(uint *)(*piVar2 + 0x20);
            goto LAB_ram_4204f26a;
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
            if (uVar6 != 0x10) goto LAB_ram_4204f310;
            uVar8 = 1;
          }
          goto LAB_ram_4204f33a;
        }
      }
      else if (uVar8 == 0x100a) {
        if (((3 < (uint)param_1[4]) && (puVar7 = (uint *)*piVar2, puVar7 != (uint *)0x0)) &&
           (puVar7[2] != 0)) {
          if ((*puVar7 & 0xf0) == 0x20) {
            uVar8 = (uint)*(byte *)(puVar7[2] + 0x10);
            goto LAB_ram_4204f3aa;
          }
          goto LAB_ram_4204f2f4;
        }
      }
      else {
        if (uVar8 != 0x1007) goto LAB_ram_4204f242;
        if (3 < (uint)param_1[4]) {
          FUN_ram_42059fe8(*piVar2);
          uVar8 = FUN_ram_4205b1bc();
          *puVar1 = uVar8;
          goto LAB_ram_4204f1d6;
        }
      }
    }
    else {
      if (iVar9 != 0) {
LAB_ram_4204f242:
        auStack_24[0] = 0x6d;
        goto LAB_ram_4204f1d6;
      }
      if (uVar8 == 5) {
        if (((param_1[4] != 0) && (puVar7 = (uint *)*piVar2, puVar7 != (uint *)0x0)) &&
           (puVar7[2] != 0)) {
          if ((*puVar7 & 0xf0) != 0x20) goto LAB_ram_4204f2f4;
          uVar4 = *(undefined1 *)(puVar7[2] + 0x1d);
LAB_ram_4204f41a:
          *(undefined1 *)puVar1 = uVar4;
          goto LAB_ram_4204f1d6;
        }
      }
      else {
        if ((int)uVar8 < 6) {
          if (uVar8 == 1) {
            if ((((uint)param_1[4] < 4) || (*piVar2 == 0)) ||
               (iVar9 = *(int *)(*piVar2 + 8), iVar9 == 0)) goto LAB_ram_4204f2be;
            uVar8 = (uint)*(byte *)(iVar9 + 10);
          }
          else {
            if (uVar8 != 2) goto LAB_ram_4204f242;
            if ((((uint)param_1[4] < 4) || (*piVar2 == 0)) ||
               (iVar9 = *(int *)(*piVar2 + 8), iVar9 == 0)) goto LAB_ram_4204f2be;
            uVar8 = (uint)*(byte *)(iVar9 + 0xb);
          }
LAB_ram_4204f33a:
          *puVar1 = uVar8;
          goto LAB_ram_4204f1d6;
        }
        if (uVar8 == 6) {
          if (((3 < (uint)param_1[4]) && (puVar7 = (uint *)*piVar2, puVar7 != (uint *)0x0)) &&
             (puVar7[2] != 0)) {
            if ((*puVar7 & 0xf0) != 0x20) goto LAB_ram_4204f2f4;
            uVar8 = *(uint *)(puVar7[2] + 0x18);
            goto LAB_ram_4204f33a;
          }
        }
        else {
          if (uVar8 != 7) goto LAB_ram_4204f242;
          if (((param_1[4] != 0) && (*piVar2 != 0)) && (iVar9 = *(int *)(*piVar2 + 8), iVar9 != 0))
          {
            if ((*(byte *)(iVar9 + 0x10) & 8) == 0) {
              *(undefined1 *)puVar1 = 0;
              goto LAB_ram_4204f1d6;
            }
            uVar4 = 1;
            goto LAB_ram_4204f41a;
          }
        }
      }
    }
LAB_ram_4204f2be:
    FUN_ram_4204ecbc(piVar2);
    uVar5 = 0x16;
  }
  else {
LAB_ram_4204f1d6:
    FUN_ram_4204ecbc(piVar2);
    uVar5 = auStack_24[0];
  }
LAB_ram_4204f2c6:
  param_1[5] = uVar5;
  thunk_FUN_ram_4205973a(param_1[6]);
  return;
}

