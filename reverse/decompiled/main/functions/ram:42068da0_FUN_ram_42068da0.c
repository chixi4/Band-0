
int FUN_ram_42068da0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_420685b4(param_3,0);
  if (iVar1 < 0) {
    return -10;
  }
  iVar2 = FUN_ram_420689c6(0,param_1,param_2,param_3);
  iVar1 = iVar2;
  while( true ) {
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_ram_420685b4(param_1,0);
    if (-1 < iVar1) break;
    iVar1 = FUN_ram_420687ea(param_1,param_1,param_3);
  }
  do {
    iVar1 = FUN_ram_42068514(param_1,param_3);
    if (iVar1 < 0) {
      return iVar2;
    }
    iVar1 = FUN_ram_420687f0(param_1,param_1,param_3);
  } while (iVar1 == 0);
  return iVar1;
}

