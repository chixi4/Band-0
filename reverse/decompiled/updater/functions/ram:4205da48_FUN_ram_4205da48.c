
undefined4 FUN_ram_4205da48(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  uVar1 = FUN_ram_420652da(param_1,param_2,&uStack_34);
  *param_3 = uStack_34;
  uVar2 = FUN_ram_4206318e(uStack_30);
  param_3[1] = uVar2;
  uVar2 = FUN_ram_4206318e(uStack_2c);
  param_3[2] = uVar2;
  param_3[3] = uStack_28;
  param_3[4] = uStack_24;
  param_3[6] = uStack_1c;
  uVar2 = FUN_ram_4206318e(uStack_18);
  param_3[7] = uVar2;
  *(undefined1 *)(param_3 + 8) = uStack_14;
  return uVar1;
}

