
undefined4 FUN_ram_42065e1e(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uStack_18;
  undefined4 auStack_14 [4];
  
  if (param_1 == 0x20) {
    uStack_18 = param_3;
    auStack_14[0] = param_2;
    uVar1 = FUN_ram_42021b4e(1,auStack_14,&uStack_18);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

