
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4202ae6e(void)

{
  int *piVar1;
  
  if (_DAT_ram_3fcb6b84 != (int *)0x0) {
    piVar1 = _DAT_ram_3fcb6b84;
    if (*_DAT_ram_3fcb6b84 != 0) {
      FUN_ram_403a5e1e();
      piVar1 = _DAT_ram_3fcb6b84;
      *_DAT_ram_3fcb6b84 = 0;
    }
    (*(code *)&SUB_ram_40010488)(piVar1 + 1,0,0x1c);
    FUN_ram_42029766();
    FUN_ram_403a5e1e(_DAT_ram_3fcb6b84);
    _DAT_ram_3fcb6b84 = (int *)0x0;
  }
  return;
}

