
void FUN_ram_40394ab0(void)

{
  char cVar1;
  
  FUN_ram_4039691e();
  FUN_ram_40396966();
  cVar1 = DAT_ram_3fcb8c1a;
  if (DAT_ram_3fcb8c1a == '\0') {
    FUN_ram_420b46f4();
  }
  DAT_ram_3fcb8c1a = cVar1 + '\x01';
  FUN_ram_4039691e();
  FUN_ram_40396994();
  return;
}

