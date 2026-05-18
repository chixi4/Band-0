
undefined4
FUN_ram_42061c68(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 100;
  while ((((iVar1 = FUN_ram_420619e8(param_2,param_1), iVar1 == 0 ||
           (iVar1 = FUN_ram_420619e8(param_3,param_1), iVar1 == 0)) ||
          (iVar1 = FUN_ram_42066436(param_2,param_3,param_4), iVar1 != 0)) ||
         (((iVar1 = FUN_ram_42066454(param_4,param_1,param_4), iVar1 != 0 ||
           (iVar1 = FUN_ram_420665b0(param_4), iVar1 != 0)) ||
          (iVar1 = FUN_ram_420665c4(param_4), iVar1 != 0))))) {
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return 0xffffffff;
    }
  }
  return 0;
}

