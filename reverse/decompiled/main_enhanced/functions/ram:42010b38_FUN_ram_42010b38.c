
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42010b38(undefined4 param_1,byte param_2)

{
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  byte bStack_14;
  
  FUN_ram_420b5446();
  FUN_ram_420b54ce();
  (*(code *)&SUB_ram_40010488)(&uStack_34,0,0x24);
  _DAT_ram_3fcc4e10 = param_1;
  FUN_ram_420b53d4(10000);
  FUN_ram_420b539e();
  FUN_ram_4039fd80();
  uStack_30 = 4;
  uStack_34 = 0;
  uStack_24 = 0;
  uStack_2c = 0x3c0a82b0;
  bStack_14 = FUN_ram_42010c3c(param_1,&uStack_34);
  bStack_14 = param_2 | bStack_14;
  if (bStack_14 == 0) {
    FUN_ram_42010cee(param_1,&uStack_34);
  }
  else {
    FUN_ram_42010c6e(param_1,&uStack_34);
  }
  uStack_20 = 0x42000bca;
  uStack_18 = param_1;
  FUN_ram_420b54f2(&uStack_34);
  return;
}

