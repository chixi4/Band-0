
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420365be(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = _DAT_ram_3fcb6be4;
  if (_DAT_ram_3fcb6be4 == param_1) {
    _DAT_ram_3fcb6be4 = (undefined4 *)*param_1;
    return;
  }
  do {
    puVar1 = puVar2;
    puVar2 = (undefined4 *)*puVar1;
  } while (puVar2 != param_1);
  *puVar1 = *param_1;
  return;
}

