
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204c2c2(void)

{
  if (_DAT_ram_3fcb56f0 != 0) {
    return;
  }
  _DAT_ram_3fcb56f0 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x158))(0xab8);
  if (_DAT_ram_3fcb56f0 == 0) {
    FUN_ram_42033fd8(6,0x1000,2,&DAT_ram_3c080108,0);
    return;
  }
  FUN_ram_42033fd8(6,0x1000,3,0x3c07ee6c,_DAT_ram_3fcb56f0);
  return;
}

