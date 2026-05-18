
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40397b12(undefined4 param_1)

{
  if ((_DAT_ram_3fcd4eb8 != 0) &&
     ((_DAT_ram_3fcd4eb4 == 0 ||
      (_DAT_ram_3fcd4eb4 = _DAT_ram_3fcd4eb4 + -1, _DAT_ram_3fcd4eb4 == 0)))) {
    if (_DAT_ram_3fcd4ea8 != 0) {
      FUN_ram_4039856c();
      _DAT_ram_3fcd4ea8 = 0;
    }
    _DAT_ram_600ce014 = *(undefined4 *)(_DAT_ram_3fcd4e9c + 0x44);
    _DAT_ram_600ce010 = *(undefined4 *)(_DAT_ram_3fcd4e9c + 0x30);
    _DAT_ram_600ce000 = _DAT_ram_600ce000 & 0xfffffffc | 3;
  }
  return param_1;
}

