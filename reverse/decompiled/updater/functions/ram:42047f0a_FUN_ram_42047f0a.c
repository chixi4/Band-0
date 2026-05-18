
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42047f0a(undefined4 param_1,undefined4 param_2)

{
  if (DAT_ram_3fcb537f != '\0') {
    FUN_ram_42047e16();
    if (DAT_ram_3fcb537e == '\0') {
      return 0;
    }
    if (DAT_ram_3fcb5386 != '\0') {
      _DAT_ram_3fcb5368 = param_1;
      _DAT_ram_3fcb536c = param_2;
      return 1;
    }
    if (DAT_ram_3fcb5371 != '\0') {
      return 0;
    }
    FUN_ram_42033fd8(6,0x1000,1,0x3c07ddbc);
  }
  return 2;
}

