
int FUN_ram_4205d02a(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    FUN_ram_4205c96c();
    iVar1 = (int)*(char *)(param_1 + 0xc);
    *(undefined1 *)(param_1 + 0xc) = 0;
    FUN_ram_4205c996();
  }
  return iVar1;
}

