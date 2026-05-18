
void FUN_ram_403939e2(void)

{
  char cVar1;
  
  FUN_ram_40394d2c();
  FUN_ram_40394d60();
  cVar1 = DAT_ram_3fcb172a;
  if (DAT_ram_3fcb172a == '\0') {
    FUN_ram_4207acc4();
  }
  DAT_ram_3fcb172a = cVar1 + '\x01';
  FUN_ram_40394d2c();
  FUN_ram_40394d8e();
  return;
}

