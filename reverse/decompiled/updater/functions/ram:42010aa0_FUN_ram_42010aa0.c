
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42010aa0(undefined4 param_1,byte param_2)

{
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  byte bStack_14;
  
  FUN_ram_4207b0d4();
  FUN_ram_4207b160();
  (*(code *)&SUB_ram_40010488)(&uStack_34,0,0x24);
  _DAT_ram_3fcb6588 = param_1;
  FUN_ram_4207b062(10000);
  FUN_ram_4207b02c();
  FUN_ram_4039d97a();
  uStack_30 = 4;
  uStack_34 = 0;
  uStack_24 = 0;
  uStack_2c = 0x3c07029c;
  bStack_14 = FUN_ram_42010ba4(param_1,&uStack_34);
  bStack_14 = param_2 | bStack_14;
  if (bStack_14 == 0) {
    FUN_ram_42010c56(param_1,&uStack_34);
  }
  else {
    FUN_ram_42010bd6(param_1,&uStack_34);
  }
  uStack_20 = 0x42000b32;
  uStack_18 = param_1;
  FUN_ram_4207b184(&uStack_34);
  return;
}

