
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42010a0e(void)

{
  FUN_ram_40390b18(0x19);
  (*(code *)&SUB_ram_400107e4)(0,0x19);
  (*(code *)&SUB_ram_400107e4)(0,0x2a,0x19);
  (*(code *)&SUB_ram_400107dc)(0x19,0);
  (*(code *)&SUB_ram_400107cc)(0x19,4);
  _DAT_ram_600c4088 = _DAT_ram_600c4088 | 0x3f;
  _DAT_ram_600c4084 = _DAT_ram_600c4084 | 0x3f;
  _DAT_ram_600c407c = _DAT_ram_600c407c | 0x23;
  _DAT_ram_600c4078 = _DAT_ram_600c4078 | 0x23;
  FUN_ram_40390a80(0x19);
  return;
}

