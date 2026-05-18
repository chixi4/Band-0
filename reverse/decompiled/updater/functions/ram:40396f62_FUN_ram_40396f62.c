
undefined4 FUN_ram_40396f62(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_1 + 0xbe000000U < 0x200000) {
    uVar1 = param_1 + param_2 + 0xbdffffff;
  }
  else {
    if (0x1fffff < param_1 + 0xc4000000U) {
      return 0;
    }
    uVar1 = param_1 + param_2 + 0xc3ffffff;
  }
  if (0x1fffff < uVar1) {
    return 0;
  }
  (*(code *)&SUB_ram_4001070c)();
  return 1;
}

