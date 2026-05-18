
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42073c94(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)&SUB_ram_4001220c)((int)_DAT_ram_3fcb0cd6 - (int)_DAT_ram_3fcb0a9e);
  if (param_1 <= iVar1) {
    _DAT_ram_3fcb0b54 = _DAT_ram_3fcb0b54 & 0xffffefff;
    (*(code *)&SUB_ram_40012588)();
    (**(code **)(_DAT_ram_3fcb640c + 0x1ec))();
    _DAT_ram_3fcb0cd6 = _DAT_ram_3fcb0a9e;
    if (param_2 != 0) {
      FUN_ram_42076e98(0x3fcb10ac,(int)_DAT_ram_3fcb0a9e);
      return;
    }
  }
  return;
}

