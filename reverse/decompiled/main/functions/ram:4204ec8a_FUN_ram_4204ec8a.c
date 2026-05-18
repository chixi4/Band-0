
undefined4 FUN_ram_4204ec8a(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  while( true ) {
    if (iVar1 == 0) {
      return 0x1107;
    }
    if (param_2 == iVar1) break;
    iVar1 = *(int *)(iVar1 + 8);
  }
  FUN_ram_4204ec6e(param_1 + 4);
  return 0;
}

