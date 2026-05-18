
int FUN_ram_4207b542(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    piVar3 = (int *)(param_1 + 0x268);
    iVar1 = 0;
    while ((iVar2 = *piVar3, iVar2 == 0 || (param_2 != *(int *)(iVar2 + 0x1c)))) {
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 1;
      if (iVar1 == 8) {
        return -1;
      }
    }
    *param_3 = iVar2;
    return iVar1;
  }
  return -1;
}

