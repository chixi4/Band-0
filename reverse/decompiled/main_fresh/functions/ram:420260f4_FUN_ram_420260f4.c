
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420260f4(void)

{
  int *piVar1;
  
  FUN_ram_4203290e();
  if (_DAT_ram_3fcb6b64 != (int *)0x0) {
    piVar1 = _DAT_ram_3fcb6b64;
    if (*_DAT_ram_3fcb6b64 != 0) {
      FUN_ram_403a5e1e();
      piVar1 = _DAT_ram_3fcb6b64;
      *_DAT_ram_3fcb6b64 = 0;
    }
    FUN_ram_403a5e1e(piVar1);
    _DAT_ram_3fcb6b64 = (int *)0x0;
  }
  return;
}

