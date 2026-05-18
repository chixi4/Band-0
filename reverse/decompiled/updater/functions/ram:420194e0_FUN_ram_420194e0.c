
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420194e0(int *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  
  if (*(char *)((int)param_1 + 0x2a) == '\0') {
    if ((uint)param_1[4] < param_2) {
      uVar1 = 0x102;
    }
    else if (param_1[4] - param_2 < param_4) {
      uVar1 = 0x104;
    }
    else {
      if (*(char *)((int)param_1 + 0x29) == '\0') {
        uVar1 = FUN_ram_4039df2c(*param_1,param_3,param_2 + param_1[3]);
        return uVar1;
      }
      uVar1 = 0x106;
      if (_DAT_ram_3fcb66cc == *param_1) {
        uVar1 = FUN_ram_4039e094(_DAT_ram_3fcb66cc,param_2 + param_1[3]);
        return uVar1;
      }
    }
  }
  else {
    uVar1 = 0x10d;
  }
  return uVar1;
}

