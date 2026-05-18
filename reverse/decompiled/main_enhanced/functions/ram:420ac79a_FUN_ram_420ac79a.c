
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420ac79a(void)

{
  if (-1 < (int)(_DAT_ram_3fcb7fb0 << 0xf)) {
    FUN_ram_420ad082();
    _DAT_ram_3fcb7fb0 = _DAT_ram_3fcb7fb0 | 0x10000;
  }
  if (-1 < (int)(_DAT_ram_3fcb7fb0 << 0xc)) {
    (*(code *)&SUB_ram_40012594)(&DAT_ram_3fcb7fb4,0xf,0x20,0);
    _DAT_ram_3fcb7fb0 = _DAT_ram_3fcb7fb0 | 0x80000;
  }
  FUN_ram_40394414();
  (*(code *)&SUB_ram_400125a4)();
  (*(code *)&SUB_ram_400125ac)();
  (*(code *)&SUB_ram_400125b4)(0);
  (*(code *)&SUB_ram_40012590)();
  (**(code **)(_DAT_ram_3fcc4c78 + 0x134))();
  (*(code *)&SUB_ram_400125fc)();
  FUN_ram_420adbe0(0,&DAT_ram_3fcb7fb0);
  FUN_ram_420adf3a();
  FUN_ram_420ae99a(0);
  FUN_ram_420ae9dc();
  FUN_ram_420adcc6(0x985,0,1,1);
  FUN_ram_420ae99a(1);
  (*(code *)&SUB_ram_4001232c)();
  FUN_ram_420ae158(1);
  (**(code **)(_DAT_ram_3fcc4c78 + 0xec))();
  _DAT_ram_3fcb7ff4 = 0xfe80;
  _DAT_ram_3fcb8088 = 0xfe80;
  (*(code *)&SUB_ram_400124c8)(0xb,0);
  if (DAT_ram_3fcb8136 != '\0') {
    FUN_ram_403944d8(0);
    return;
  }
  return;
}

