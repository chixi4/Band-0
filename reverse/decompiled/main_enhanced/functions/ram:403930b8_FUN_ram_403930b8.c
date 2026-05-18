
undefined4 FUN_ram_403930b8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = 0x102;
    if (param_2 != (undefined4 *)0x0) {
      uVar1 = 0x106;
      if ((param_1[3] & 0xffffff) == 0 && param_1[2] == 0) {
        FUN_ram_40392b7e(0x106);
        uVar1 = param_1[1];
        *param_2 = *param_1;
        param_2[1] = uVar1;
        FUN_ram_40392b6e();
        uVar1 = 0;
      }
    }
    return uVar1;
  }
  return 0x102;
}

