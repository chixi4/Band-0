
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204e078(int param_1)

{
  if (param_1 == 2) {
    _DAT_ram_6003e01c = _DAT_ram_6003e01c & 0xffffff1f | 0x40;
  }
  else if (param_1 == 3) {
    _DAT_ram_6003e01c = _DAT_ram_6003e01c & 0xffffff1f | 0x60;
  }
  else {
    _DAT_ram_6003e01c = _DAT_ram_6003e01c & 0xffffff1f;
  }
  return;
}

