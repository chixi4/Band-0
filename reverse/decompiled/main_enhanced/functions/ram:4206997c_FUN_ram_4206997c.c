
undefined4 FUN_ram_4206997c(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  if ((uint)((param_4 & 3) != 0) + (param_4 >> 2) <= param_2) {
    if (param_2 != 0) {
      (*(code *)&SUB_ram_40010488)(param_1,0,param_2 * 4);
      if (param_4 != 0) {
        FUN_ram_4039c11e((param_2 * 4 - param_4) + param_1,param_3,param_4);
      }
      FUN_ram_42069804(param_1,param_2);
    }
    return 0;
  }
  return 0xfffffff8;
}

