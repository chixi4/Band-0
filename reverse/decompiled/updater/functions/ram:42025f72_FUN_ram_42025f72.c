
int FUN_ram_42025f72(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar1 = FUN_ram_42024dea(param_3,1);
  if (iVar1 < 1) {
    iVar1 = -4;
  }
  else {
    iVar1 = FUN_ram_42024ae6(param_3,0);
    if (iVar1 == 1) {
      iVar1 = FUN_ram_42025e6e(param_1,param_2,param_3);
      return iVar1;
    }
    iStack_24 = FUN_ram_42024ae6(param_2,0);
    iVar1 = -0xe;
    if (iStack_24 == 1) {
      uStack_28 = 0;
      iVar1 = FUN_ram_42025604(&uStack_28,param_2,param_3);
      if (iVar1 == 0) {
        iVar2 = FUN_ram_42024dea(&uStack_28,1);
        iVar1 = -0xe;
        if (-1 < iVar2) {
          if (iVar2 == 0) {
            iVar2 = FUN_ram_42024a98(param_1,1);
            iVar1 = 0;
            if (iVar2 != 0) {
              iVar1 = -0x10;
            }
          }
          else {
            iVar1 = FUN_ram_42025ed4(param_1,&uStack_28,param_3);
          }
        }
      }
      FUN_ram_42024774(&uStack_28);
    }
  }
  return iVar1;
}

