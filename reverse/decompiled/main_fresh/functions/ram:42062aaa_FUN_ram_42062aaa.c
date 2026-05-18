
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42062aaa(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0x102;
    if (param_2 < 6) {
      uVar1 = 0x103;
      if (_DAT_ram_3fcc53a8 != 0) {
        FUN_ram_4039691e(0x103);
        FUN_ram_40396966();
        FUN_ram_420623f6(param_2);
        FUN_ram_4039691e();
        FUN_ram_40396994();
        uVar1 = 0;
      }
    }
    return uVar1;
  }
  return 0x102;
}

