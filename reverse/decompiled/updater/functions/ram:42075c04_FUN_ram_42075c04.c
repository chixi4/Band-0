
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42075c04(void)

{
  _DAT_ram_6004a02c = _DAT_ram_6004a02c & 0xffffff | 0x46800000;
  (*(code *)&SUB_ram_40010044)(1);
  _DAT_ram_6004a02c = _DAT_ram_6004a02c & 0xff7fffff;
  return;
}

