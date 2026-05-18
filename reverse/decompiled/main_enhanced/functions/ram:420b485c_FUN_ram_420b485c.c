
void FUN_ram_420b485c(uint param_1)

{
  char cVar1;
  
  if (0x19 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  FUN_ram_4039691e();
  FUN_ram_40396966();
  cVar1 = *(char *)(param_1 + 0x3fcb8c10);
  if (cVar1 == '\0') {
    FUN_ram_420b4810(param_1);
  }
  *(char *)(param_1 + 0x3fcb8c10) = cVar1 + '\x01';
  FUN_ram_4039691e();
  FUN_ram_40396994();
  return;
}

