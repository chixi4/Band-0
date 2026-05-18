
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42029290(void)

{
  int *piVar1;
  
  if (_DAT_ram_3fcb6b7c != (int *)0x0) {
    piVar1 = _DAT_ram_3fcb6b7c;
    if (*_DAT_ram_3fcb6b7c != 0) {
      FUN_ram_403a5e1e();
      piVar1 = _DAT_ram_3fcb6b7c;
      *_DAT_ram_3fcb6b7c = 0;
    }
    FUN_ram_403a5e1e(piVar1);
    _DAT_ram_3fcb6b7c = (int *)0x0;
  }
  FUN_ram_420314f6();
  if (_DAT_ram_3fcb6b80 != 0) {
    FUN_ram_403a5e1e();
    _DAT_ram_3fcb6b80 = 0;
  }
  return;
}

