
void FUN_ram_403939aa(void)

{
  bool bVar1;
  char cVar2;
  
  FUN_ram_40394d2c();
  FUN_ram_40394d60();
  cVar2 = DAT_ram_3fcb172a + -1;
  bVar1 = DAT_ram_3fcb172a == '\x01';
  DAT_ram_3fcb172a = cVar2;
  if (bVar1) {
    FUN_ram_4207acc4();
  }
  FUN_ram_40394d2c();
  FUN_ram_40394d8e();
  return;
}

