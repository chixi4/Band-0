
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40394044(void)

{
  (**(code **)(_DAT_ram_3fcc4c78 + 0xe8))();
  _DAT_ram_6002600c = _DAT_ram_6002600c & 0xfffffffd;
  _DAT_ram_6000802c = _DAT_ram_6000802c & 0xfffbffff;
  (**(code **)(_DAT_ram_3fcc4c78 + 0x50))
            (0x67,1,2,6,0xfffbffff,*(code **)(_DAT_ram_3fcc4c78 + 0x50));
  _DAT_ram_6000802c = _DAT_ram_6000802c & 0x27ffffff;
  return;
}

