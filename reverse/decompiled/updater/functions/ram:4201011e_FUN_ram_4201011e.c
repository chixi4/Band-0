
int FUN_ram_4201011e(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (param_1 != (int *)0x0) {
    while( true ) {
      iVar2 = *param_1;
      param_1 = param_1 + 1;
      if (iVar2 == 0) break;
      iVar1 = iVar1 + (uint)*(ushort *)(iVar2 + 2);
    }
    return iVar1;
  }
  return iVar1;
}

