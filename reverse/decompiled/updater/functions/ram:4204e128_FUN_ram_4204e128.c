
void FUN_ram_4204e128(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != 0x30) {
    uVar1 = param_3 == 0x20;
  }
  FUN_ram_4204e062(uVar1);
  FUN_ram_4204e024();
  FUN_ram_4204dfc0(0,param_1,param_3);
  FUN_ram_4204dfc0(1,param_2,param_3);
  return;
}

