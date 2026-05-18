
undefined4 FUN_ram_42059ed4(uint *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint *apuStack_38 [2];
  undefined4 uStack_30;
  
  if (param_1 == (uint *)0x0) {
    return 0xfffffff0;
  }
  if ((*param_1 & 0xf0) == 0x10) {
    apuStack_38[0] = param_1;
    uStack_30 = param_2;
    uVar1 = FUN_ram_42059d54(0x4204af66,apuStack_38);
    return uVar1;
  }
  return 0xfffffff0;
}

