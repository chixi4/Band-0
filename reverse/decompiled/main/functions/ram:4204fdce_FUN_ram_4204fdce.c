
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204fdce(int *param_1)

{
  FUN_ram_4205c96c();
  *param_1 = (int)_DAT_ram_3fcc52ac;
  if (_DAT_ram_3fcc52ac != (int *)0x0) {
    *(int **)((int)_DAT_ram_3fcc52ac + 4) = param_1;
  }
  _DAT_ram_3fcc52b0 = _DAT_ram_3fcc52b0 + 1;
  _DAT_ram_3fcc52ac = param_1;
  FUN_ram_4205c996();
  return;
}

