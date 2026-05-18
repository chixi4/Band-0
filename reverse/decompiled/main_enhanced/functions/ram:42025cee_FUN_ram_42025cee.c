
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42025cee(void)

{
  (*(code *)&SUB_ram_40010aec)(0x42015bcc,0,0x42015bcc,0);
  if (_DAT_ram_3fcb6b54 != 0) {
    (**(code **)(_DAT_ram_3fcb6b54 + 8))();
  }
  _DAT_ram_3fcb6b50 = 0;
  _DAT_ram_3fcb6b54 = 0;
  return;
}

