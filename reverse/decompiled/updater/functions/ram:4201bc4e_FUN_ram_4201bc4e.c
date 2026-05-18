
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201bc4e(void)

{
  FUN_ram_40394d60();
  _DAT_ram_3fcb6718 = _DAT_ram_3fcb6718 + 1;
  if (_DAT_ram_3fcb6718 == 1) {
    FUN_ram_4039398a();
    _DAT_ram_600c0010 = _DAT_ram_600c0010 | 0x10000000;
    _DAT_ram_600c0018 = _DAT_ram_600c0018 & 0xefffffff;
    FUN_ram_4039399a();
  }
  FUN_ram_40394d8e();
  return;
}

