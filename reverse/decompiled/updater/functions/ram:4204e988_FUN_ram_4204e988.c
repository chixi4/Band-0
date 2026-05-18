
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204e988(int *param_1)

{
  FUN_ram_420599c2();
  *param_1 = (int)_DAT_ram_3fcb6788;
  if (_DAT_ram_3fcb6788 != (int *)0x0) {
    *(int **)((int)_DAT_ram_3fcb6788 + 4) = param_1;
  }
  _DAT_ram_3fcb678c = _DAT_ram_3fcb678c + 1;
  _DAT_ram_3fcb6788 = param_1;
  FUN_ram_420599ec();
  return;
}

