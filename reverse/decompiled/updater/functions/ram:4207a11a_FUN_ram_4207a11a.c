
undefined4 FUN_ram_4207a11a(int param_1,int param_2,int param_3,int *param_4,char param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int *piStack_28;
  char cStack_24;
  
  if (param_2 == 0) {
    if (param_3 != -1) {
      return 0x102;
    }
    param_2 = 0x3c071420;
  }
  iStack_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  piStack_28 = param_4;
  cStack_24 = param_5;
  iVar2 = FUN_ram_403958fa(*(undefined4 *)(param_1 + 0x10),0);
  if (iVar2 == 1) {
    uVar3 = FUN_ram_42079802(&iStack_34);
    FUN_ram_40395514(*(undefined4 *)(param_1 + 0x10),0,0,0);
    return uVar3;
  }
  FUN_ram_40395a18(*(undefined4 *)(param_1 + 0x10),0xffffffff);
  piVar1 = piStack_28;
  iVar2 = iStack_34;
  puVar9 = (undefined4 *)0x0;
  for (puVar6 = *(undefined4 **)(iStack_34 + 0x14); puVar6 != (undefined4 *)0x0;
      puVar6 = (undefined4 *)puVar6[2]) {
    for (puVar7 = (undefined4 *)*puVar6; puVar7 != (undefined4 *)0x0;
        puVar7 = (undefined4 *)puVar7[1]) {
      if (cStack_24 == '\0') {
        if (piStack_28 == (int *)*puVar7) goto LAB_ram_4207a1b8;
      }
      else if (*(int *)*puVar7 == *piStack_28) goto LAB_ram_4207a1b8;
    }
    puVar7 = puVar9;
    if (puVar9 != (undefined4 *)0x0) goto LAB_ram_4207a1b8;
    for (piVar4 = (int *)puVar6[1]; puVar7 = puVar9, piVar4 != (int *)0x0; piVar4 = (int *)piVar4[3]
        ) {
      if (*piVar4 == iStack_30) {
        for (puVar7 = (undefined4 *)piVar4[1]; puVar7 != (undefined4 *)0x0;
            puVar7 = (undefined4 *)puVar7[1]) {
          if (cStack_24 == '\0') {
            if ((int *)*puVar7 == piStack_28) goto LAB_ram_4207a254;
          }
          else if (*(int *)*puVar7 == *piStack_28) goto LAB_ram_4207a254;
        }
        puVar7 = puVar9;
        if (puVar9 != (undefined4 *)0x0) break;
        for (piVar5 = (int *)piVar4[2]; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[2]) {
          puVar7 = puVar9;
          if (*piVar5 == iStack_2c) {
            for (puVar8 = (undefined4 *)piVar5[1]; puVar7 = puVar9, puVar8 != (undefined4 *)0x0;
                puVar8 = (undefined4 *)puVar8[1]) {
              puVar7 = puVar8;
              if (cStack_24 == '\0') {
                if ((int *)*puVar8 == piStack_28) break;
              }
              else if (*(int *)*puVar8 == *piStack_28) break;
            }
          }
          puVar9 = puVar7;
        }
      }
    }
LAB_ram_4207a254:
    puVar9 = puVar7;
  }
  uVar3 = 0x105;
  puVar7 = puVar9;
  if (puVar9 != (undefined4 *)0x0) {
LAB_ram_4207a1b8:
    uVar3 = 0;
    if (*(char *)(puVar7 + 2) == '\0') {
      *(undefined1 *)(puVar7 + 2) = 1;
      if (cStack_24 != '\0') {
        piVar4 = (int *)FUN_ram_40399d1a(1,8);
        uVar3 = 0x101;
        if (piVar4 == (int *)0x0) goto LAB_ram_4207a1fc;
        piVar4[1] = piVar1[1];
        *piVar4 = *piVar1;
        piStack_28 = piVar4;
      }
      uVar3 = FUN_ram_4207a004(iVar2,0x3c071424,0,&iStack_34,0x14,0xffffffff);
    }
  }
LAB_ram_4207a1fc:
  FUN_ram_4039566c(*(undefined4 *)(param_1 + 0x10));
  return uVar3;
}

