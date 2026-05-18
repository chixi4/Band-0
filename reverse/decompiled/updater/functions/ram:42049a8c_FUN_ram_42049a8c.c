
undefined4
FUN_ram_42049a8c(undefined1 *param_1,uint *param_2,uint *param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (*(code *)&SUB_ram_40011e1c)(param_5,param_6,param_7,&uStack_2c);
  *param_1 = (undefined1)uStack_2c;
  *param_2 = uStack_2c >> 8 & 0xff;
  *param_3 = uStack_2c >> 0x10 & 0xff;
  FUN_ram_40399daa(param_4,(int)&uStack_2c + 3,6);
  return 0;
}

