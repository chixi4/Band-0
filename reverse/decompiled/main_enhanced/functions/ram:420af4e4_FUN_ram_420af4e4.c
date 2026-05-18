
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420af4e4(void)

{
  (*(code *)&SUB_ram_40012630)();
  _DAT_ram_60046844 = 0xe00000;
  (*(code *)&SUB_ram_40012600)(0x50);
  (*(code *)&SUB_ram_4001260c)();
  (*(code *)&SUB_ram_40012610)();
  (*(code *)&SUB_ram_40012614)();
  (*(code *)&SUB_ram_40012618)();
  (*(code *)&SUB_ram_4001261c)();
  (*(code *)&SUB_ram_40012620)();
  (*(code *)&SUB_ram_40012624)();
  (*(code *)&SUB_ram_40012628)();
  (*(code *)&SUB_ram_4001262c)();
  _DAT_ram_6004684c = _DAT_ram_6004684c & 0xf7ffffff;
  _DAT_ram_600468a4 = _DAT_ram_600468a4 & 0xffe07fff | 0x38000;
  _DAT_ram_60046020 = _DAT_ram_60046020 & 0xffffc3ff | 0x1800;
  _DAT_ram_600468bc = _DAT_ram_600468bc & 0xfffffebf;
  _DAT_ram_60026010 = _DAT_ram_60026010 | 0xf000b;
  return;
}

