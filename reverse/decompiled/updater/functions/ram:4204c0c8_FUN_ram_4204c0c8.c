
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204c0c8(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(&DAT_ram_3fcb08fc + param_1 * 4);
  *(undefined4 *)(&DAT_ram_3fcb08fc + param_1 * 4) = 0;
  _DAT_ram_3fcb0908 = _DAT_ram_3fcb0908 ^ uVar1;
  return;
}

