
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40392412(int param_1,uint param_2)

{
  if (0 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  FUN_ram_40396966();
  *(uint *)(&DAT_ram_3fcc51f4 + param_1 * 4) = *(uint *)(&DAT_ram_3fcc51f4 + param_1 * 4) | param_2;
  FUN_ram_40396994();
  _DAT_ram_600c0028 = 1;
  return;
}

