
int FUN_ram_42025ed4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_30 = 0;
  uStack_2c = 1;
  uStack_28 = 0;
  uStack_24 = 1;
  iVar1 = FUN_ram_42025604(&local_30,param_3,param_2);
  if ((iVar1 == 0) && (iVar1 = FUN_ram_4202595e(&uStack_28,&local_30,&local_30,param_2), iVar1 == 0)
     ) {
    iVar2 = FUN_ram_42024dea(&uStack_28,1);
    iVar1 = -0xe;
    if (iVar2 == 0) {
      iVar2 = FUN_ram_42025088(&local_30,&local_30,param_3);
      iVar1 = -0x10;
      if (((iVar2 == 0) && (iVar1 = FUN_ram_4202505a(&local_30,&local_30,1), iVar1 == 0)) &&
         (iVar1 = FUN_ram_420251fc(&uStack_28,0,&local_30,param_2), iVar1 == 0)) {
        iVar1 = FUN_ram_42025026(param_1,param_3,&uStack_28);
      }
    }
  }
  FUN_ram_42024774(&local_30);
  FUN_ram_42024774(&uStack_28);
  return iVar1;
}

