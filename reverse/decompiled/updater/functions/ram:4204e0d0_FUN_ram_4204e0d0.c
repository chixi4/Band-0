
void FUN_ram_4204e0d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_4 != 0x30) {
    uVar1 = param_4 == 0x20;
  }
  FUN_ram_4204e062(uVar1);
  FUN_ram_4204e024();
  FUN_ram_4204dfc0(2,param_1,param_4);
  FUN_ram_4204dfc0(0,param_2,param_4);
  FUN_ram_4204dfc0(1,param_3,param_4);
  return;
}

