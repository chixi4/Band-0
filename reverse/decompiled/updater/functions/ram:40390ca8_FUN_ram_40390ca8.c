
void FUN_ram_40390ca8(void)

{
  bool bVar1;
  char cVar2;
  
  FUN_ram_40394d2c();
  FUN_ram_40394d60();
  cVar2 = DAT_ram_3fcb172b + -1;
  bVar1 = DAT_ram_3fcb172b == '\x01';
  DAT_ram_3fcb172b = cVar2;
  if (bVar1) {
    FUN_ram_4207ad80(0xb);
  }
  cVar2 = DAT_ram_3fcb172a + -1;
  bVar1 = DAT_ram_3fcb172a == '\x01';
  DAT_ram_3fcb172a = cVar2;
  if (bVar1) {
    FUN_ram_4207acc4();
  }
  DAT_ram_3fcb1729 = DAT_ram_3fcb1729 + -1;
  FUN_ram_40394d2c();
  FUN_ram_40394d8e();
  return;
}

