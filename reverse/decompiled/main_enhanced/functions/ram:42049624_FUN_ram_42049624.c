
int FUN_ram_42049624(int param_1,int param_2)

{
  int iVar1;
  
  if (*(short *)(param_1 + 0xc) != 0xc) {
    return -1;
  }
  if ((param_2 != 1) && (param_2 != 0)) {
    return 0;
  }
  iVar1 = FUN_ram_4204951c();
  return iVar1 + -1;
}

