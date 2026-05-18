
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4209da36(void)

{
  uint uVar1;
  
  (*(code *)&SUB_ram_40010488)(0x3fcc4924,0,0x330);
  DAT_ram_3fcc4b40 = 1;
  uVar1 = FUN_ram_4207f522(0);
  DAT_ram_3fcc4c46 = (byte)(uVar1 >> 0xb) & 1;
  DAT_ram_3fcc4c45 = (byte)(uVar1 >> 10) & 1;
  FUN_ram_4209d7a8(2);
  _DAT_ram_3fcc4ae0 = FUN_ram_4209d138(0x4208d172,0x3fcc4924,0x3fcc4924);
  return _DAT_ram_3fcc4ae0 != 0;
}

