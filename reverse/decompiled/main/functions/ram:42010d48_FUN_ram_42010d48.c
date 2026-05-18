
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42010d48(void)

{
  FUN_ram_40390b18(0x1b);
  _DAT_ram_600c0000 = _DAT_ram_600c0000 | 0x40;
  _DAT_ram_600c0004 = _DAT_ram_600c0004 & 0xffffffbf;
  (*(code *)&SUB_ram_400107e4)(0,0x28,0x1b);
  (*(code *)&SUB_ram_400107dc)(0x1b,0);
  (*(code *)&SUB_ram_400107cc)(0x1b,4);
  _DAT_ram_600ce008 = _DAT_ram_600ce008 | 3;
  FUN_ram_40390a80(0x1b);
  return 0;
}

