
int FUN_ram_4206f114(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return -0x7100;
  }
  iVar1 = -0x7100;
  if (*param_1 != 0) {
    do {
      if (param_1[1] == 0x1b) {
        return 0;
      }
      iVar1 = FUN_ram_4206f090(param_1);
    } while (iVar1 == 0);
  }
  return iVar1;
}

