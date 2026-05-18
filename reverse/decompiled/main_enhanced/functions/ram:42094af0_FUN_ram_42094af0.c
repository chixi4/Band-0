
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42094af0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(&DAT_ram_3fcb7d90 + param_1 * 4);
  *(undefined4 *)(&DAT_ram_3fcb7d90 + param_1 * 4) = 0;
  _DAT_ram_3fcb7d9c = _DAT_ram_3fcb7d9c ^ uVar1;
  return;
}

