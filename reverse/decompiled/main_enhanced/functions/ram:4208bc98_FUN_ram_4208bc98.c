
undefined4
FUN_ram_4208bc98(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 *param_4,
                undefined4 param_5,uint param_6)

{
  undefined4 uVar1;
  
  if ((param_6 & 1) != 0) {
    uVar1 = FUN_ram_4208bbc4(param_1,1,*param_4);
    return uVar1;
  }
  return 0xffffffff;
}

