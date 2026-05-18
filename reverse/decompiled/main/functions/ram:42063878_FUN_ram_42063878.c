
int FUN_ram_42063878(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int aiStack_24 [3];
  
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x24) + 4);
  iVar1 = puVar2[4];
  aiStack_24[0] = param_1;
  if (iVar1 != 0) {
    if (param_3 < iVar1) {
      iVar1 = param_3;
    }
    FUN_ram_4039c11e(param_2,puVar2[2],iVar1);
    iVar8 = puVar2[4];
    puVar2[4] = iVar8 - iVar1;
    puVar2[2] = puVar2[2] + iVar1;
    if (iVar8 - iVar1 == 0) {
      FUN_ram_42063324(puVar2);
    }
  }
  param_3 = param_3 - iVar1;
  do {
    if (param_3 < 1) {
      return iVar1;
    }
    iVar8 = *(int *)(aiStack_24[0] + 0x24);
    if (*(char *)(iVar8 + 0x2c) == '\0') {
      if (*(int *)(iVar8 + 0x14) <= *(int *)(iVar8 + 0x24)) {
        if (*(int *)(iVar8 + 0x14) != *(int *)(iVar8 + 0x24)) {
          return iVar1;
        }
        if (*(uint *)(iVar8 + 0x10) <= *(uint *)(iVar8 + 0x20)) {
          return iVar1;
        }
      }
    }
    else if (*(char *)(aiStack_24[0] + 0x7c) != '\0') {
      return iVar1;
    }
    iVar8 = *(int *)(aiStack_24[0] + 0x8c);
    if (param_3 < *(int *)(aiStack_24[0] + 0x8c)) {
      iVar8 = param_3;
    }
    puVar3 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    *puVar3 = 0;
    iVar8 = FUN_ram_420a3480(*(undefined4 *)(aiStack_24[0] + 0x1c),*puVar2,iVar8,
                             *(undefined4 *)(aiStack_24[0] + 0x88));
    if (iVar8 < 1) {
      iVar10 = 2;
      if ((iVar8 == -1) && (*(char *)(*(int *)(aiStack_24[0] + 0x24) + 0x2c) != '\0')) {
        iVar10 = 4;
        FUN_ram_4209fdce(*(undefined4 *)(aiStack_24[0] + 0x10),*(undefined4 *)(aiStack_24[0] + 0x14)
                         ,*puVar2,0);
      }
      piVar4 = (int *)(*(code *)&SUB_ram_40010670)();
      if (*piVar4 != 0) {
        if (iVar10 == 2) {
          uVar5 = FUN_ram_4039b0d6();
          puVar2 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
          uVar9 = *puVar2;
          pcVar7 = "rong about you.";
          uVar6 = 2;
        }
        else {
          uVar5 = FUN_ram_4039b0d6();
          puVar2 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
          uVar9 = *puVar2;
          pcVar7 = "rve a solid block of time for the real goal.";
          uVar6 = 4;
        }
        FUN_ram_4039afce(uVar6,"ing others wrong about you.",pcVar7,uVar5,
                         "ing others wrong about you.",iVar8,uVar9);
      }
      if (iVar8 == 0) {
        if (iVar1 != 0) {
          return iVar1;
        }
        return -0x7007;
      }
      if (iVar8 != -1) {
        FUN_ram_420a359e(iVar8);
      }
      iVar8 = aiStack_24[0];
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = FUN_ram_42063856(aiStack_24[0]);
      if (iVar1 != 0) {
        return 0;
      }
      uVar6 = FUN_ram_420a34fe(*(undefined4 *)(iVar8 + 0x1c));
      FUN_ram_420635ec(iVar8,0,uVar6,0);
      FUN_ram_42063350(0,aiStack_24,4);
      return -1;
    }
    puVar2[5] = param_2 + iVar1;
    FUN_ram_4209fdce(*(undefined4 *)(aiStack_24[0] + 0x10),*(undefined4 *)(aiStack_24[0] + 0x14),
                     *puVar2,iVar8);
    iVar8 = puVar2[4];
    puVar2[5] = 0;
    puVar2[4] = 0;
    iVar1 = iVar1 + iVar8;
    param_3 = param_3 - iVar8;
  } while( true );
}

