
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204e9be(int *param_1)

{
  int *piVar1;
  
  FUN_ram_420599c2();
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    piVar1[1] = param_1[1];
  }
  if (_DAT_ram_3fcb6788 != param_1) {
    *(int **)param_1[1] = piVar1;
    piVar1 = _DAT_ram_3fcb6788;
  }
  _DAT_ram_3fcb6788 = piVar1;
  _DAT_ram_3fcb678c = _DAT_ram_3fcb678c + 1;
  FUN_ram_420599ec();
  return;
}

