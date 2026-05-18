
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42090d08(int param_1)

{
  if (param_1 == 0) {
    _DAT_ram_3fcc4428 = _DAT_ram_6004d000;
    if (DAT_ram_3fcc4412 == '\0') {
      if (DAT_ram_3fcc440f == '\0') {
        _DAT_ram_3fcc4428 = _DAT_ram_6004d000;
        return;
      }
      if (DAT_ram_3fcc4410 != '\0') {
        _DAT_ram_3fcc4428 = _DAT_ram_6004d000;
        return;
      }
      FUN_ram_42096778(_DAT_ram_3fcc441c);
      FUN_ram_4209672a();
      return;
    }
  }
  else if ((uint)(_DAT_ram_6004d000 - _DAT_ram_3fcc4428) <= *(uint *)(gp + 0x204)) {
    return;
  }
  FUN_ram_42096756();
  return;
}

