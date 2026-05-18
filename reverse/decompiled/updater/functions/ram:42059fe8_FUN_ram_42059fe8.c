
int FUN_ram_42059fe8(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    FUN_ram_420599c2();
    iVar1 = (int)*(char *)(param_1 + 0xc);
    *(undefined1 *)(param_1 + 0xc) = 0;
    FUN_ram_420599ec();
  }
  return iVar1;
}

