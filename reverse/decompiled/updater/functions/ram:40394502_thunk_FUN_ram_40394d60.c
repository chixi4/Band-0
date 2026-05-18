
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_ram_40394d60(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_40394d36();
  _DAT_ram_3fcb6610 = _DAT_ram_3fcb6610 + 1;
  if (_DAT_ram_3fcb6610 == 1) {
    _DAT_ram_3fcb660c = uVar1;
  }
  return;
}

