
void FUN_ram_40394a78(void)

{
  bool bVar1;
  char cVar2;
  
  FUN_ram_4039691e();
  FUN_ram_40396966();
  cVar2 = DAT_ram_3fcb8c1a + -1;
  bVar1 = DAT_ram_3fcb8c1a == '\x01';
  DAT_ram_3fcb8c1a = cVar2;
  if (bVar1) {
    FUN_ram_420b46f4();
  }
  FUN_ram_4039691e();
  FUN_ram_40396994();
  return;
}

