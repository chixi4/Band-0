
undefined4 FUN_ram_4202b91a(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)*param_1;
  if (param_2 - (int)pbVar2 < 1) {
    return 0xffffffa0;
  }
  if (*pbVar2 == param_4) {
    *param_1 = pbVar2 + 1;
    uVar1 = FUN_ram_4202b8a0();
    return uVar1;
  }
  return 0xffffff9e;
}

