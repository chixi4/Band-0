
void FUN_ram_420624dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,uint param_6)

{
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [36];
  
  FUN_ram_40399daa(auStack_4c,0x3c079528,0xc);
  uStack_58 = 0x3c07338c;
  uStack_54 = param_3;
  uStack_50 = param_4;
  if ((param_6 & 0xc18580) == 0) {
    FUN_ram_42021bb4(param_1,param_2,3,&uStack_58,auStack_4c,auStack_40);
  }
  else {
    FUN_ram_42021b5c();
  }
  FUN_ram_40399daa(param_5,auStack_40,0x10);
  return;
}

