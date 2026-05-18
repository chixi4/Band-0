
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42048300(int param_1)

{
  if (param_1 == 0) {
    _DAT_ram_3fcb5398 = _DAT_ram_6004d000;
    if (DAT_ram_3fcb5382 == '\0') {
      if (DAT_ram_3fcb537f == '\0') {
        _DAT_ram_3fcb5398 = _DAT_ram_6004d000;
        return;
      }
      if (DAT_ram_3fcb5380 != '\0') {
        _DAT_ram_3fcb5398 = _DAT_ram_6004d000;
        return;
      }
      FUN_ram_4204dcba(_DAT_ram_3fcb538c);
      FUN_ram_4204dc6c();
      return;
    }
  }
  else if ((uint)(_DAT_ram_6004d000 - _DAT_ram_3fcb5398) <= *(uint *)(gp + 0xd0)) {
    return;
  }
  FUN_ram_4204dc98();
  return;
}

