
undefined4
FUN_ram_4202215e(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4,int param_5,
                int param_6,int param_7)

{
  undefined4 uVar1;
  
  if (param_4 < 0x21) {
    uVar1 = 0xffffffff;
    if (((param_2 < 0x40) && (param_5 == 0x1000)) && (param_7 == 0x20)) {
      FUN_ram_42021f94();
      FUN_ram_40399daa(param_6 + 0x14,param_6,0xc);
      FUN_ram_42021f94(param_1,param_2,param_3,param_4,1,param_6);
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0xffffffff;
}

