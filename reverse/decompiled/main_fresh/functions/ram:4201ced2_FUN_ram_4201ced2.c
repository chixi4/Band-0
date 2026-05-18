
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201ced2(void)

{
  int iVar1;
  
  if (DAT_ram_3fcc50e9 != '\0') {
    FUN_ram_42023a06();
    DAT_ram_3fcc50e9 = '\0';
  }
  _DAT_ram_3fcc50ec = 0;
  _DAT_ram_3fcbb2c4 = 0;
  _DAT_ram_3fcbb2c8 = 0;
  _DAT_ram_3fcbb2cc = 0xffffffff;
  DAT_ram_3fcc50ea = 0;
  DAT_ram_3fcc50e8 = 0;
  iVar1 = FUN_ram_42021a4c();
  if (iVar1 != 4) {
    iVar1 = FUN_ram_42021a4c();
    if (iVar1 != 3) {
      return;
    }
  }
  FUN_ram_42022110();
  return;
}

