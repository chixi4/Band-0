
undefined4 FUN_ram_42015b02(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 1) {
    uVar1 = 0x3c0a86fc;
  }
  else if (param_1 == 2) {
    uVar1 = 0x3c0a870c;
  }
  else {
    if (param_1 != 0) {
      return 0x102;
    }
    uVar1 = 0x3c0a8704;
  }
  if (4 < param_2) {
    return 0x102;
  }
  (*(code *)&SUB_ram_400106ac)(param_3,0x10,0x3c0a8714,uVar1);
  return 0;
}

