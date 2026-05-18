
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40394e4c(int param_1)

{
  if (param_1 == 0) {
    _DAT_ram_60008068 = _DAT_ram_60008068 & 0xdfffffff;
  }
  else {
    if (param_1 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf1e();
    }
    _DAT_ram_60008068 = _DAT_ram_60008068 | 0x20000000;
  }
  (*(code *)&SUB_ram_40010044)(3);
  return;
}

