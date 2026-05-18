
undefined4 FUN_ram_403975e0(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int aiStack_34 [3];
  undefined1 auStack_28 [16];
  
  aiStack_34[0] = param_2;
  if (((param_1 == (int *)0x0) || (param_1[0x10] != 0)) ||
     ((iVar2 = FUN_ram_403989f4(), iVar2 == 0 && (aiStack_34[0] != 0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  bVar1 = false;
  iVar2 = 0;
  while( true ) {
    FUN_ram_40396966();
    if (param_1[0xe] != 0) {
      param_1[0xe] = param_1[0xe] + -1;
      if (*param_1 == 0) {
        iVar2 = FUN_ram_40398c7c();
        param_1[2] = iVar2;
      }
      if ((param_1[4] != 0) && (iVar2 = FUN_ram_40398762(param_1 + 4), iVar2 != 0)) {
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
    if ((char)param_1[0x11] == -1) {
      *(undefined1 *)(param_1 + 0x11) = 0;
    }
    if (*(char *)((int)param_1 + 0x45) == -1) {
      *(undefined1 *)((int)param_1 + 0x45) = 0;
    }
    FUN_ram_40396994();
    iVar3 = FUN_ram_40398938(auStack_28,aiStack_34);
    if (iVar3 == 0) {
      iVar3 = FUN_ram_40396d88(param_1);
      if (iVar3 == 0) {
        FUN_ram_40396eca(param_1);
        FUN_ram_40398348();
      }
      else {
        if (*param_1 == 0) {
          FUN_ram_40396966();
          iVar2 = FUN_ram_40398a10(param_1[2]);
          FUN_ram_40396994();
        }
        FUN_ram_403986d4(param_1 + 9,aiStack_34[0]);
        FUN_ram_40396eca(param_1);
        iVar3 = FUN_ram_40398348();
        if (iVar3 == 0) {
          FUN_ram_403969de();
        }
      }
    }
    else {
      FUN_ram_40396eca(param_1);
      FUN_ram_40398348();
      iVar3 = FUN_ram_40396d88(param_1);
      if (iVar3 != 0) {
        if (iVar2 == 0) {
          return 0;
        }
        FUN_ram_40396966();
        iVar2 = 0;
        if (param_1[9] != 0) {
          iVar2 = 0x19 - *(int *)param_1[0xc];
        }
        FUN_ram_40398b96(param_1[2],iVar2);
        break;
      }
    }
    bVar1 = true;
  }
  FUN_ram_40396994();
  return 0;
}

