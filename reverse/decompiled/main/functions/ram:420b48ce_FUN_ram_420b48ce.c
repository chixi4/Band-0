
void FUN_ram_420b48ce(uint param_1)

{
  char cVar1;
  
  if (0x19 < param_1) {
    param_1 = FUN_ram_420b4706();
  }
  FUN_ram_4039691e();
  FUN_ram_40396966();
  cVar1 = *(char *)(param_1 + 0x3fcb8c10);
  *(char *)(param_1 + 0x3fcb8c10) = cVar1 + -1;
  if (cVar1 == '\x01') {
    FUN_ram_420b47c4(param_1);
  }
  FUN_ram_4039691e();
  FUN_ram_40396994();
  return;
}

