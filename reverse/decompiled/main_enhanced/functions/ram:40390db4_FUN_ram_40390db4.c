
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40390db4(int param_1)

{
  if (_DAT_ram_3fcb8294 == param_1) {
    FUN_ram_40394a58();
    _DAT_ram_3fcb8298 = _DAT_ram_3fcb8298 | _DAT_ram_60008038;
    _DAT_ram_60008038 = _DAT_ram_60008038 & _DAT_ram_3fcb829c;
    FUN_ram_40394a68();
    return;
  }
  return;
}

