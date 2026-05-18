
undefined4 FUN_ram_420b3a4a(int param_1,char *param_2,int param_3,int *param_4,char param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iStack_34;
  char *pcStack_30;
  int iStack_2c;
  int *piStack_28;
  char cStack_24;
  
  if ((param_1 == 0) || (param_4 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  if (param_2 == (char *)0x0) {
    if (param_3 != -1) {
      return 0x102;
    }
    param_2 = "scope, not add features.";
  }
  iStack_34 = param_1;
  pcStack_30 = param_2;
  iStack_2c = param_3;
  piStack_28 = param_4;
  cStack_24 = param_5;
  iVar2 = FUN_ram_403975e0(*(undefined4 *)(param_1 + 0x10),0);
  if (iVar2 == 1) {
    uVar3 = FUN_ram_420b2f52(&iStack_34);
    FUN_ram_40397156(*(undefined4 *)(param_1 + 0x10),0,0,0);
    return uVar3;
  }
  FUN_ram_4039771c(*(undefined4 *)(param_1 + 0x10),0xffffffff);
  piVar1 = piStack_28;
  iVar2 = iStack_34;
  puVar9 = (undefined4 *)0x0;
  for (puVar5 = *(undefined4 **)(iStack_34 + 0x14); puVar5 != (undefined4 *)0x0;
      puVar5 = (undefined4 *)puVar5[2]) {
    for (puVar6 = (undefined4 *)*puVar5; puVar6 != (undefined4 *)0x0;
        puVar6 = (undefined4 *)puVar6[1]) {
      if (cStack_24 == '\0') {
        if ((int *)*puVar6 == piStack_28) goto LAB_ram_420b3afc;
      }
      else if (*(int *)*puVar6 == *piStack_28) goto LAB_ram_420b3afc;
    }
    puVar6 = puVar9;
    if (puVar9 != (undefined4 *)0x0) goto LAB_ram_420b3afc;
    for (puVar6 = (undefined4 *)puVar5[1]; puVar7 = puVar9, puVar6 != (undefined4 *)0x0;
        puVar6 = (undefined4 *)puVar6[3]) {
      if ((char *)*puVar6 == pcStack_30) {
        for (puVar7 = (undefined4 *)puVar6[1]; puVar7 != (undefined4 *)0x0;
            puVar7 = (undefined4 *)puVar7[1]) {
          if (cStack_24 == '\0') {
            if ((int *)*puVar7 == piStack_28) goto LAB_ram_420b3b98;
          }
          else if (*(int *)*puVar7 == *piStack_28) goto LAB_ram_420b3b98;
        }
        puVar7 = puVar9;
        if (puVar9 != (undefined4 *)0x0) break;
        for (piVar4 = (int *)puVar6[2]; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
          puVar7 = puVar9;
          if (*piVar4 == iStack_2c) {
            for (puVar8 = (undefined4 *)piVar4[1]; puVar7 = puVar9, puVar8 != (undefined4 *)0x0;
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
LAB_ram_420b3b98:
    puVar9 = puVar7;
  }
  uVar3 = 0x105;
  puVar6 = puVar9;
  if (puVar9 != (undefined4 *)0x0) {
LAB_ram_420b3afc:
    uVar3 = 0;
    if (*(char *)(puVar6 + 2) == '\0') {
      *(undefined1 *)(puVar6 + 2) = 1;
      if (cStack_24 != '\0') {
        piVar4 = (int *)FUN_ram_4039c08e(1,8);
        uVar3 = 0x101;
        if (piVar4 == (int *)0x0) goto LAB_ram_420b3b40;
        piVar4[1] = piVar1[1];
        *piVar4 = *piVar1;
        piStack_28 = piVar4;
      }
      uVar3 = FUN_ram_420b392e(iVar2,"e, not add features.",0,&iStack_34,0x14,0xffffffff);
    }
  }
LAB_ram_420b3b40:
  FUN_ram_403972dc(*(undefined4 *)(param_1 + 0x10));
  return uVar3;
}

