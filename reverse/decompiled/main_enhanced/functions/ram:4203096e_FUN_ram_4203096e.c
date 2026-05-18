
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203096e(void)

{
  int *piVar1;
  
  if (_DAT_ram_3fcb6bac != (int *)0x0) {
    piVar1 = _DAT_ram_3fcb6bac;
    if (*_DAT_ram_3fcb6bac != 0) {
      FUN_ram_403a5e1e();
      piVar1 = _DAT_ram_3fcb6bac;
      *_DAT_ram_3fcb6bac = 0;
    }
    (*(code *)&SUB_ram_40010488)(piVar1 + 1,0,0x1c);
    FUN_ram_4202df90();
    FUN_ram_42029290();
    FUN_ram_403a5e1e(_DAT_ram_3fcb6bac);
    _DAT_ram_3fcb6bac = (int *)0x0;
  }
  return;
}

