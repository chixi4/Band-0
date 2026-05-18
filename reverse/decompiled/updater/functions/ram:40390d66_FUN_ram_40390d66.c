
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40390d66(int param_1)

{
  if (_DAT_ram_3fcb0de4 == param_1) {
    FUN_ram_4039398a();
    _DAT_ram_3fcb0de8 = _DAT_ram_3fcb0de8 | _DAT_ram_60008038;
    _DAT_ram_60008038 = _DAT_ram_60008038 & _DAT_ram_3fcb0dec;
    FUN_ram_4039399a();
    return;
  }
  return;
}

