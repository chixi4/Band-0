
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42053190(undefined *param_1,uint param_2)

{
  if ((param_2 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  FUN_ram_4205c96c();
  if (param_1 == &DAT_ram_3c0f753c) {
    _DAT_ram_3fcc52cc = _DAT_ram_3fcc52cc + -1;
  }
  FUN_ram_4205c996();
  FUN_ram_420530f0(param_2);
  return;
}

