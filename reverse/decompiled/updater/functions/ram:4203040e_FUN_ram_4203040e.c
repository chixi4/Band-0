
undefined4 FUN_ram_4203040e(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_4202f906();
  if (iVar1 == 2) {
    iVar1 = FUN_ram_42024ae6(param_2,0);
    if ((iVar1 == 0) && (iVar1 = FUN_ram_42024ae6(param_2,1), iVar1 == 0)) {
      iVar1 = FUN_ram_42024bac(param_2);
      if (iVar1 == *(int *)(param_1 + 0x40) + 1) {
        if (*(int *)(param_1 + 0x40) != 0xfe) {
          return 0;
        }
        iVar1 = FUN_ram_42024ae6(param_2,2);
        if (iVar1 == 0) {
          return 0;
        }
      }
    }
  }
  else {
    if (iVar1 != 1) {
      return 0xffffb080;
    }
    iVar1 = FUN_ram_42024dea(param_2,1);
    if ((-1 < iVar1) && (iVar1 = FUN_ram_42024d4a(param_2,param_1 + 0x34), iVar1 < 0)) {
      return 0;
    }
  }
  return 0xffffb380;
}

