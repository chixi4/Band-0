
undefined4 FUN_ram_4204930a(undefined4 *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  if (*(char *)((int)param_1 + 0x2a) == '\0') {
    if (param_2 <= (uint)param_1[4]) {
      if ((param_1[4] - param_2 < param_3) || ((param_3 & 0xfff) != 0)) {
        return 0x104;
      }
      if ((param_2 & 0xfff) == 0) {
        uVar1 = FUN_ram_4039fe40(*param_1,param_2 + param_1[3]);
        return uVar1;
      }
    }
    return 0x102;
  }
  return 0x10d;
}

