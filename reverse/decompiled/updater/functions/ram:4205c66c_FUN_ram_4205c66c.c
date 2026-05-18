
int FUN_ram_4205c66c(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = 0x102;
    if ((param_1[0xd] != 0) && (iVar1 = FUN_ram_4205bf9e(), iVar1 == 0)) {
      *param_1 = *param_1 + 1;
      param_1[3] = 1;
    }
    return iVar1;
  }
  return 0x102;
}

