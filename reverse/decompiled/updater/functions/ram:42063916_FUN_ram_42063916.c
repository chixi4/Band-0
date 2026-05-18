
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_42063916(void)

{
  uint uVar1;
  
  (*(code *)&SUB_ram_40010488)(0x3fcb5ffc,0,0x33c);
  DAT_ram_3fcb6218 = 1;
  uVar1 = FUN_ram_420392c8(0);
  DAT_ram_3fcb631e = (byte)(uVar1 >> 0xb) & 1;
  DAT_ram_3fcb631d = (byte)(uVar1 >> 10) & 1;
  FUN_ram_42063688(2);
  _DAT_ram_3fcb61b8 = FUN_ram_42062ff6(0x42053030,0x3fcb5ffc,0x3fcb5ffc);
  return _DAT_ram_3fcb61b8 != 0;
}

