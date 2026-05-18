
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42062d1c(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x102;
  if ((param_1 == 0) && (uVar1 = 0x102, param_2 < 6)) {
    uVar1 = 0x103;
    if (_DAT_ram_3fcc53a8 != 0) {
      FUN_ram_4206253e();
      FUN_ram_40396966();
      FUN_ram_40393bec(param_2,0xffffffff,param_3,1,1,1,0);
      FUN_ram_40396994();
      FUN_ram_420622e8(0,param_2);
      uVar1 = 0;
    }
  }
  return uVar1;
}

