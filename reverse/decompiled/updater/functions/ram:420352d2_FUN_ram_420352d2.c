
undefined1 * FUN_ram_420352d2(undefined1 *param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  do {
    uVar1 = param_3;
    if (0xfa < param_3) {
      uVar1 = 0xfa;
    }
    uVar1 = uVar1 & 0xffff;
    param_1[1] = (char)uVar1 + '\x05';
    *param_1 = 0xdd;
    FUN_ram_40399daa(param_1 + 2,0x3fcb0a08,3);
    param_1[6] = ((int)uVar1 < (int)param_3) << 4 | 2;
    param_1[5] = 4;
    FUN_ram_40399daa(param_1 + 7,param_2,uVar1);
    param_3 = param_3 - uVar1 & 0xffff;
    param_1 = param_1 + uVar1 + 7;
    param_2 = param_2 + uVar1;
  } while (param_3 != 0);
  return param_1;
}

