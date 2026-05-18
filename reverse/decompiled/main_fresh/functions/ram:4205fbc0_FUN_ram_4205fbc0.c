
undefined4
FUN_ram_4205fbc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_1 == 0) {
    return 0x5002;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    local_20 = param_2;
    uStack_1c = param_3;
    uStack_18 = param_4;
    uStack_14 = param_5;
    uVar1 = FUN_ram_4205edde(0x4204f936,param_1,&local_20);
    return uVar1;
  }
  return 0x5002;
}

