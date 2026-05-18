
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4202df90(void)

{
  int *piVar1;
  
  piVar1 = _DAT_ram_3fcb6b9c;
  if (*_DAT_ram_3fcb6b9c != 0) {
    FUN_ram_403a5e1e();
    piVar1 = _DAT_ram_3fcb6b9c;
    *_DAT_ram_3fcb6b9c = 0;
  }
  FUN_ram_403a5e1e(piVar1);
  _DAT_ram_3fcb6b9c = (int *)0x0;
  return;
}

