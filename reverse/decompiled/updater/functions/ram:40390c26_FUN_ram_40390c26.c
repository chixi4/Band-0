
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40390c26(void)

{
  char cVar1;
  char cVar2;
  
  FUN_ram_40394d2c();
  FUN_ram_40394d60();
  cVar1 = DAT_ram_3fcb1729;
  _DAT_ram_60026014 = _DAT_ram_60026014 | 0xc0400000;
  if (DAT_ram_3fcb1729 == '\0') {
    FUN_ram_4207adcc(9);
  }
  cVar2 = DAT_ram_3fcb172a;
  DAT_ram_3fcb1729 = cVar1 + '\x01';
  if (DAT_ram_3fcb172a == '\0') {
    FUN_ram_4207acc4();
  }
  cVar1 = DAT_ram_3fcb172b;
  DAT_ram_3fcb172a = cVar2 + '\x01';
  if (DAT_ram_3fcb172b == '\0') {
    FUN_ram_4207adcc(0xb);
  }
  DAT_ram_3fcb172b = cVar1 + '\x01';
  FUN_ram_40394d2c();
  FUN_ram_40394d8e();
  return;
}

