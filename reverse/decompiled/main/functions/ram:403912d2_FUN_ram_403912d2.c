
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403912d2(void)

{
  _DAT_ram_3fcc4e48 = _DAT_ram_3fcc4e48 + -1;
  if (_DAT_ram_3fcc4e48 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  if (_DAT_ram_3fcc4e48 == 0) {
    thunk_FUN_ram_4039621c(0,_DAT_ram_3fcc4e44);
    return;
  }
  return;
}

