
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42074136(void)

{
  if (-1 < (int)(_DAT_ram_3fcb0b54 << 0xf)) {
    FUN_ram_42074a1e();
    _DAT_ram_3fcb0b54 = _DAT_ram_3fcb0b54 | 0x10000;
  }
  if (-1 < (int)(_DAT_ram_3fcb0b54 << 0xc)) {
    (*(code *)&SUB_ram_40012594)(&DAT_ram_3fcb0b58,0xf,0x20,0);
    _DAT_ram_3fcb0b54 = _DAT_ram_3fcb0b54 | 0x80000;
  }
  FUN_ram_403935e6();
  (*(code *)&SUB_ram_400125a4)();
  (*(code *)&SUB_ram_400125ac)();
  (*(code *)&SUB_ram_400125b4)(0);
  (*(code *)&SUB_ram_40012590)();
  (**(code **)(_DAT_ram_3fcb640c + 0x134))();
  (*(code *)&SUB_ram_400125fc)();
  FUN_ram_42075578(0,&DAT_ram_3fcb0b54);
  FUN_ram_420758d2();
  FUN_ram_42076332(0);
  FUN_ram_42076374();
  FUN_ram_4207565e(0x985,0,1,1);
  FUN_ram_42076332(1);
  (*(code *)&SUB_ram_4001232c)();
  FUN_ram_42075af0(1);
  (**(code **)(_DAT_ram_3fcb640c + 0xec))();
  _DAT_ram_3fcb0b98 = 0xfe80;
  _DAT_ram_3fcb0c2c = 0xfe80;
  (*(code *)&SUB_ram_400124c8)(0xb,0);
  if (DAT_ram_3fcb0cda != '\0') {
    FUN_ram_403936aa(0);
    return;
  }
  return;
}

