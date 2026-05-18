
void FUN_ram_4207ae18(int param_1)

{
  char cVar1;
  
  FUN_ram_40394d2c();
  FUN_ram_40394d60();
  cVar1 = *(char *)(param_1 + 0x3fcb1720);
  if (cVar1 == '\0') {
    FUN_ram_4207adcc(param_1);
  }
  *(char *)(param_1 + 0x3fcb1720) = cVar1 + '\x01';
  FUN_ram_40394d2c();
  FUN_ram_40394d8e();
  return;
}

