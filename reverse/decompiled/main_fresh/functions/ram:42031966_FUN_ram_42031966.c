
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42031966(void)

{
  if (_DAT_ram_3fcb6bbc != 0) {
    FUN_ram_403a5e1e();
    _DAT_ram_3fcb6bbc = 0;
  }
  if (_DAT_ram_3fcb6bb8 != (undefined4 *)0x0) {
    *_DAT_ram_3fcb6bb8 = 0;
  }
  return;
}

