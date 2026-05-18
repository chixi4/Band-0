
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_403a2f40(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  code *pcVar6;
  int iVar7;
  
  uVar1 = (**(code **)(_DAT_ram_3fcdfec4 + 0xa0))();
  if (((param_1 == (int *)0x0) || (param_1[5] != 0)) || (param_1[1] == 0)) {
    (**(code **)(_DAT_ram_3fcdfec4 + 0xa4))(uVar1);
    return 0x16;
  }
  iVar7 = *param_1;
  param_1[3] = param_2;
  iVar2 = _DAT_ram_3fcdfecc;
  piVar5 = param_1 + 4;
  iVar3 = *(int *)(iVar7 + 0x14);
  if (iVar3 == 0) {
    param_1[4] = 0;
    pcVar6 = *(code **)(iVar2 + 0x984);
    *(int **)(iVar7 + 0x18) = piVar5;
    *(int **)(iVar7 + 0x14) = param_1;
    param_1[5] = iVar7 + 0x14;
    (*pcVar6)();
  }
  else {
    do {
      if (param_2 - *(int *)(iVar3 + 0xc) < 0) {
        iVar2 = *(int *)(iVar3 + 0x14);
        param_1[4] = iVar3;
        param_1[5] = iVar2;
        **(int **)(iVar3 + 0x14) = (int)param_1;
        *(int **)(iVar3 + 0x14) = piVar5;
        piVar5 = *(int **)(iVar7 + 0x14);
        goto joined_r0x403a2fee;
      }
      iVar3 = *(int *)(iVar3 + 0x10);
    } while (iVar3 != 0);
    piVar4 = *(int **)(iVar7 + 0x18);
    param_1[4] = 0;
    param_1[5] = (int)piVar4;
    *piVar4 = (int)param_1;
    *(int **)(iVar7 + 0x18) = piVar5;
  }
  piVar5 = *(int **)(iVar7 + 0x14);
joined_r0x403a2fee:
  if (piVar5 == param_1) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x898))(iVar7,param_1[3]);
  }
  (**(code **)(_DAT_ram_3fcdfec4 + 0xa4))(uVar1);
  return 0;
}

