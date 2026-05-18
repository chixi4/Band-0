
int FUN_ram_42029306(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return -0x5100;
  }
  if ((*param_1 != 0) && (iVar2 = param_1[2], iVar2 != 0)) {
    iVar1 = FUN_ram_42029004();
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar2 = FUN_ram_4202905e(param_1,iVar2,*(undefined1 *)(*param_1 + 5));
    return iVar2;
  }
  return -0x5100;
}

