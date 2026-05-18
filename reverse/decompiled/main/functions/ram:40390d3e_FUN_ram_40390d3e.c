
void FUN_ram_40390d3e(void)

{
  bool bVar1;
  char cVar2;
  
  FUN_ram_4039691e();
  FUN_ram_40396966();
  cVar2 = DAT_ram_3fcb8c1b + -1;
  bVar1 = DAT_ram_3fcb8c1b == '\x01';
  DAT_ram_3fcb8c1b = cVar2;
  if (bVar1) {
    FUN_ram_420b47c4(0xb);
  }
  cVar2 = DAT_ram_3fcb8c1a + -1;
  bVar1 = DAT_ram_3fcb8c1a == '\x01';
  DAT_ram_3fcb8c1a = cVar2;
  if (bVar1) {
    FUN_ram_420b46f4();
  }
  DAT_ram_3fcb8c19 = DAT_ram_3fcb8c19 + -1;
  FUN_ram_4039691e();
  FUN_ram_40396994();
  return;
}

