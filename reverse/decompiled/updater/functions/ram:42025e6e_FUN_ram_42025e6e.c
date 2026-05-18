
int FUN_ram_42025e6e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_20 = 0;
  uStack_1c = 1;
  uStack_18 = 0;
  uStack_14 = 1;
  iVar1 = FUN_ram_42025604(&uStack_20);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_ram_4202595e(&uStack_18,&uStack_20,&uStack_20,param_3), iVar1 == 0)) {
    iVar2 = FUN_ram_42024dea(&uStack_18,1);
    iVar1 = -0xe;
    if ((iVar2 == 0) && (iVar2 = FUN_ram_420249f4(param_1,&uStack_20), iVar1 = 0, iVar2 != 0)) {
      iVar1 = -0x10;
    }
  }
  FUN_ram_42024774(&uStack_20);
  FUN_ram_42024774(&uStack_18);
  return iVar1;
}

