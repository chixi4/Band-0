
void FUN_ram_4204b08a(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != 0x30) {
    uVar1 = param_3 == 0x20;
  }
  FUN_ram_4204afa2(uVar1);
  FUN_ram_4204af64();
  FUN_ram_4204af00(0,param_1,param_3);
  FUN_ram_4204af00(1,param_2,param_3);
  return;
}

