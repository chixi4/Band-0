
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201bcae(void)

{
  FUN_ram_40394d60();
  _DAT_ram_3fcb6718 = _DAT_ram_3fcb6718 + -1;
  if (_DAT_ram_3fcb6718 == 0) {
    FUN_ram_4039398a();
    _DAT_ram_600c0010 = _DAT_ram_600c0010 & 0xefffffff;
    FUN_ram_4039399a();
  }
  else if (_DAT_ram_3fcb6718 < 0) {
    FUN_ram_40394d8e();
    FUN_ram_40399b58();
    if (_DAT_ram_3fcb6720 != 0) {
      FUN_ram_4039614c();
      _DAT_ram_3fcb6720 = 0;
    }
    return;
  }
  FUN_ram_40394d8e();
  return;
}

