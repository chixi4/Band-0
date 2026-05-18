
int FUN_ram_4201c7e4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(gp + -0x7b4 + param_1 * 4);
  if (iVar1 != 0) {
    iVar1 = iVar1 + 0x10;
  }
  return iVar1;
}

