
undefined4 FUN_ram_40397156(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int aiStack_34 [3];
  undefined1 auStack_28 [8];
  
  aiStack_34[0] = param_3;
  if ((((param_1 == 0) || ((param_2 == 0 && (*(int *)(param_1 + 0x40) != 0)))) ||
      ((param_4 == 2 && (*(int *)(param_1 + 0x3c) != 1)))) ||
     ((iVar2 = FUN_ram_403989f4(), iVar2 == 0 && (aiStack_34[0] != 0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  bVar1 = false;
  while ((FUN_ram_40396966(), *(uint *)(param_1 + 0x3c) <= *(uint *)(param_1 + 0x38) &&
         (param_4 != 2))) {
    if (aiStack_34[0] == 0) {
      FUN_ram_40396994();
      return 0;
    }
    if (!bVar1) {
      FUN_ram_40398922(auStack_28);
    }
    FUN_ram_40396994();
    FUN_ram_403980c6();
    FUN_ram_40396966();
    if (*(char *)(param_1 + 0x44) == -1) {
      *(undefined1 *)(param_1 + 0x44) = 0;
    }
    if (*(char *)(param_1 + 0x45) == -1) {
      *(undefined1 *)(param_1 + 0x45) = 0;
    }
    FUN_ram_40396994();
    iVar2 = FUN_ram_40398938(auStack_28,aiStack_34);
    if (iVar2 != 0) {
      FUN_ram_40396eca(param_1);
      FUN_ram_40398348();
      return 0;
    }
    FUN_ram_40396966();
    if (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 0x3c)) {
      FUN_ram_40396994();
      FUN_ram_403986d4(param_1 + 0x10,aiStack_34[0]);
      FUN_ram_40396eca(param_1);
      iVar2 = FUN_ram_40398348();
      if (iVar2 == 0) {
        FUN_ram_403969de();
      }
    }
    else {
      FUN_ram_40396994();
      FUN_ram_40396eca(param_1);
      FUN_ram_40398348();
    }
    bVar1 = true;
  }
  iVar3 = *(int *)(param_1 + 0x38);
  iVar2 = FUN_ram_40396da6(param_1,param_2,param_4);
  if (*(int *)(param_1 + 0x48) == 0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      iVar2 = FUN_ram_40398762(param_1 + 0x24);
    }
  }
  else {
    if ((param_4 == 2) && (iVar3 != 0)) goto LAB_ram_403971d2;
    iVar2 = FUN_ram_40396e48(param_1);
  }
  if (iVar2 != 0) {
    FUN_ram_403969de();
  }
LAB_ram_403971d2:
  FUN_ram_40396994();
  return 1;
}

