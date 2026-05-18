
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4202bb54(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = _DAT_ram_3fcb6b8c;
  _DAT_ram_3fcb6b8c[10] = param_1;
  FUN_ram_403a67de(*puVar1,puVar1 + 2);
  return;
}

