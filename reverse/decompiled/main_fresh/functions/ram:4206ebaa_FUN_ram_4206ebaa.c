
int FUN_ram_4206ebaa(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = FUN_ram_4206e970();
  if (iVar1 == 0) {
    if (*param_3 != 0) {
      *param_3 = *param_3 + -1;
      if (*(char *)*param_1 == '\0') {
        *param_1 = (char *)*param_1 + 1;
        return 0;
      }
    }
    iVar1 = -0x68;
  }
  return iVar1;
}

