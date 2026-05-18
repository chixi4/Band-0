
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40391242(void)

{
  if (((_DAT_ram_600c0018 & 4) == 0) && ((_DAT_ram_600c0010 & 4) != 0)) {
    (*(code *)&SUB_ram_40010074)(0);
    if (((_DAT_ram_600c0018 & 0x20) != 0) || ((_DAT_ram_600c0010 & 0x20) == 0)) {
      return;
    }
  }
  else if (((_DAT_ram_600c0018 & 0x20) != 0) || ((_DAT_ram_600c0010 & 0x20) == 0)) {
    return;
  }
  (*(code *)&SUB_ram_40010074)(1);
  return;
}

