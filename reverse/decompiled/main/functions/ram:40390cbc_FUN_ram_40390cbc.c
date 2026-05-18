
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40390cbc(void)

{
  char cVar1;
  char cVar2;
  
  FUN_ram_4039691e();
  FUN_ram_40396966();
  cVar1 = DAT_ram_3fcb8c19;
  _DAT_ram_60026014 = _DAT_ram_60026014 | 0xc0400000;
  if (DAT_ram_3fcb8c19 == '\0') {
    FUN_ram_420b4810(9);
  }
  cVar2 = DAT_ram_3fcb8c1a;
  DAT_ram_3fcb8c19 = cVar1 + '\x01';
  if (DAT_ram_3fcb8c1a == '\0') {
    FUN_ram_420b46f4();
  }
  cVar1 = DAT_ram_3fcb8c1b;
  DAT_ram_3fcb8c1a = cVar2 + '\x01';
  if (DAT_ram_3fcb8c1b == '\0') {
    FUN_ram_420b4810(0xb);
  }
  DAT_ram_3fcb8c1b = cVar1 + '\x01';
  FUN_ram_4039691e();
  FUN_ram_40396994();
  return;
}

