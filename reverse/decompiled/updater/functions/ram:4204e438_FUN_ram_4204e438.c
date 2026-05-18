
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204e438(uint param_1)

{
  FUN_ram_4039398a();
  _DAT_ram_600c0014 = _DAT_ram_600c0014 & 0xfffffffb | (param_1 & 1) << 2;
  if (param_1 != 0) {
    _DAT_ram_600c001c = _DAT_ram_600c001c & 0xfffffffb;
  }
  FUN_ram_4039399a();
  return;
}

