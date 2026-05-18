
int FUN_ram_42061ed6(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(gp + -0x74c + param_1 * 4);
  if (iVar1 != 0) {
    iVar1 = iVar1 + 0x10;
  }
  return iVar1;
}

