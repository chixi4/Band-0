
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4201746c(void)

{
  if (DAT_ram_3fcc4fc2 == '\0') {
    _DAT_ram_3fcc4fc4 = FUN_ram_420491d0(1,0xff,0x3c0a8acc);
    if (_DAT_ram_3fcc4fc4 == 0) {
      return 0x105;
    }
    DAT_ram_3fcc4fc2 = '\x01';
  }
  return 0;
}

