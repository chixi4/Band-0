
undefined4 FUN_ram_420a5270(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    FUN_ram_420a5254(*param_1);
    *param_1 = 0;
  }
  else {
    piVar1 = (int *)FUN_ram_4206d7ce(1,0xc);
    if (piVar1 == (int *)0x0) {
      return 0xffff8100;
    }
    piVar1[2] = 0;
    iVar2 = *param_1;
    *piVar1 = param_2;
    piVar1[1] = param_3;
    if (iVar2 == 0) {
      *param_1 = (int)piVar1;
    }
    else {
      do {
        iVar3 = iVar2;
        iVar2 = *(int *)(iVar3 + 8);
      } while (iVar2 != 0);
      *(int **)(iVar3 + 8) = piVar1;
    }
  }
  return 0;
}

