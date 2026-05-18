
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_42010954(void)

{
  return (_DAT_ram_600c408c & 0x3f) != 0 || (_DAT_ram_600c4080 & 0x23) != 0;
}

