
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40398116(int param_1,undefined4 *param_2,int *param_3)

{
  if ((param_2 != (undefined4 *)0x0) && (param_3 != (int *)0x0)) {
    if (param_1 == 0) {
      param_1 = _DAT_ram_3fcc4e9c;
    }
    if (*(char *)(param_1 + 0x14d) == '\x02') {
      *param_2 = *(undefined4 *)(param_1 + 0x30);
      *param_3 = param_1;
    }
    else {
      if (*(char *)(param_1 + 0x14d) != '\x01') {
        return 0;
      }
      *param_2 = *(undefined4 *)(param_1 + 0x30);
      *param_3 = 0;
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

