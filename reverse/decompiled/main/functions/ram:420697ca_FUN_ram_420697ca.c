
int FUN_ram_420697ca(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar1 = param_2;
    param_2 = iVar1 + -1;
    if (param_2 < 0) {
      return 0;
    }
  } while (*(int *)(param_2 * 4 + param_1) == 0);
  iVar2 = (*(code *)&SUB_ram_400108e0)();
  return iVar1 * 0x20 - iVar2;
}

