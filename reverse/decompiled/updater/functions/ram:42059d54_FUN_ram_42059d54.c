
int FUN_ram_42059d54(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_ram_42059a40();
  *(int **)(param_2 + 0x24) = piVar1;
  if (piVar1 == (int *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = -1;
    if ((*piVar1 != 0) && (iVar2 = FUN_ram_4205067e(param_1,param_2,piVar1), iVar2 == 0)) {
      iVar2 = (int)*(char *)(param_2 + 4);
    }
  }
  return iVar2;
}

