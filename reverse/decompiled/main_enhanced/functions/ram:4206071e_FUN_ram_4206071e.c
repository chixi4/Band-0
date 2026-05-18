
undefined4 FUN_ram_4206071e(int param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = param_2;
  while( true ) {
    if (puVar1 == param_2 + param_3) {
      return 0;
    }
    iVar2 = FUN_ram_420606e0(param_1);
    if (iVar2 == -1) break;
    param_1 = param_1 + 2;
    *puVar1 = (char)iVar2;
    puVar1 = puVar1 + 1;
  }
  return 0xffffffff;
}

