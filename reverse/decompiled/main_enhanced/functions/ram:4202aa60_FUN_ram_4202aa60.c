
undefined4 FUN_ram_4202aa60(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 auStack_14 [3];
  
  auStack_14[0] = param_2;
  uVar1 = FUN_ram_4202997c(0xffff,param_1,auStack_14,0);
  (*(code *)&SUB_ram_40011a08)(auStack_14[0]);
  return uVar1;
}

