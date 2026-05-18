
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40394622(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_ram_6004608c;
  iVar1 = _DAT_ram_60046084;
  if ((_DAT_ram_60046084 << 0x12 < 0) && (_DAT_ram_6004608c << 0x12 < 0)) {
    FUN_ram_40394254(0);
    _DAT_ram_60046090 = _DAT_ram_60046090 | 0x2000;
  }
  if ((iVar1 << 0x11 < 0) && (iVar2 << 0x11 < 0)) {
    FUN_ram_40394254(1);
    _DAT_ram_60046090 = _DAT_ram_60046090 | 0x4000;
  }
  return;
}

