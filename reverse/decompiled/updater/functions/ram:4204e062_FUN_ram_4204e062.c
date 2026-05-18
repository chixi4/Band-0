
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204e062(int param_1)

{
  if (param_1 == 0) {
    _DAT_ram_6003e01c = _DAT_ram_6003e01c & 0xfffffffb;
  }
  else {
    _DAT_ram_6003e01c = _DAT_ram_6003e01c | 4;
  }
  return;
}

