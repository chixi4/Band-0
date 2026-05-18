
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4205178c(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  *param_1 = param_2;
  puVar1 = param_1;
  param_1[1] = _DAT_ram_3fcb67b0;
  _DAT_ram_3fcb67b0 = puVar1;
  return;
}

