
undefined4 FUN_ram_403974ca(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int aiStack_34 [3];
  undefined1 auStack_28 [12];
  
  aiStack_34[0] = param_3;
  if (((param_1 != 0) && ((param_2 != 0 || (*(int *)(param_1 + 0x40) == 0)))) &&
     ((iVar2 = FUN_ram_403989f4(), iVar2 != 0 || (aiStack_34[0] == 0)))) {
    bVar1 = false;
    while( true ) {
      FUN_ram_40396966();
      iVar2 = *(int *)(param_1 + 0x38);
      if (iVar2 != 0) {
        FUN_ram_40396e28(param_1,param_2);
        *(int *)(param_1 + 0x38) = iVar2 + -1;
        if ((*(int *)(param_1 + 0x10) != 0) &&
           (iVar2 = FUN_ram_40398762(param_1 + 0x10), iVar2 != 0)) {
          FUN_ram_403969de();
        }
        FUN_ram_40396994();
        return 1;
      }
      if (aiStack_34[0] == 0) break;
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
      if (iVar2 == 0) {
        iVar2 = FUN_ram_40396d88(param_1);
        if (iVar2 == 0) {
          FUN_ram_40396eca(param_1);
          FUN_ram_40398348();
        }
        else {
          FUN_ram_403986d4(param_1 + 0x24,aiStack_34[0]);
          FUN_ram_40396eca(param_1);
          iVar2 = FUN_ram_40398348();
          if (iVar2 == 0) {
            FUN_ram_403969de();
          }
        }
      }
      else {
        FUN_ram_40396eca(param_1);
        FUN_ram_40398348();
        iVar2 = FUN_ram_40396d88(param_1);
        if (iVar2 != 0) {
          return 0;
        }
      }
      bVar1 = true;
    }
    FUN_ram_40396994();
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

