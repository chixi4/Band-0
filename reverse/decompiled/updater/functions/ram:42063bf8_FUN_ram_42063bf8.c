
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42063bf8(int param_1)

{
  _DAT_ram_3fcb6208 = param_1 + 2;
  _DAT_ram_3fcb620c = 0x2c;
  if (_DAT_ram_3fcb622c == 1) {
    _DAT_ram_3fcb620c = 0x2e;
  }
  FUN_ram_4205dc40(_DAT_ram_3fcb622c & 0xff,param_1);
  return;
}

