
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420935b6(void)

{
  if (_DAT_ram_3fcc4648 != 0) {
    FUN_ram_4207a038(6,0x20,3,&DAT_ram_3c100804);
    (*(code *)&SUB_ram_40011c1c)(_DAT_ram_3fcc4648);
    _DAT_ram_3fcc4648 = 0;
  }
  return;
}

