
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204afa2(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    _DAT_ram_6003e01c = _DAT_ram_6003e01c & 0xfffffffb;
  }
  else {
    if (param_1 != 1) {
      iVar1 = FUN_ram_4039bf1e();
      if (iVar1 == 2) {
        _DAT_ram_6003e01c = _DAT_ram_6003e01c & 0xffffff1f | 0x40;
      }
      else if (iVar1 == 3) {
        _DAT_ram_6003e01c = _DAT_ram_6003e01c & 0xffffff1f | 0x60;
      }
      else {
        if (iVar1 != 0) {
          FUN_ram_4039bf1e();
          _DAT_ram_6003e018 = _DAT_ram_6003e018 | 1;
          _DAT_ram_6003e01c = _DAT_ram_6003e01c | 1;
          return;
        }
        _DAT_ram_6003e01c = _DAT_ram_6003e01c & 0xffffff1f;
      }
      return;
    }
    _DAT_ram_6003e01c = _DAT_ram_6003e01c | 4;
  }
  return;
}

