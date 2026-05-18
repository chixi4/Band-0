
int FUN_ram_4202bf7e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [16];
  
  uStack_34 = 0;
  uStack_30 = 0;
  iVar1 = FUN_ram_42028dc8(param_6);
  if (iVar1 == 0) {
    iVar1 = -0x4080;
  }
  else {
    FUN_ram_42028e32(auStack_2c);
    iVar1 = FUN_ram_42028f3c(auStack_2c,iVar1,0);
    if ((((iVar1 == 0) && (iVar1 = FUN_ram_42029004(auStack_2c), iVar1 == 0)) &&
        (iVar1 = FUN_ram_4202905e(auStack_2c,&uStack_34,8), iVar1 == 0)) &&
       ((iVar1 = FUN_ram_4202905e(auStack_2c,param_1,param_2), iVar1 == 0 &&
        (iVar1 = FUN_ram_4202905e(auStack_2c,param_3,param_4), iVar1 == 0)))) {
      iVar1 = FUN_ram_420290a6(auStack_2c,param_5);
    }
    FUN_ram_42028e3e(auStack_2c);
  }
  return iVar1;
}

