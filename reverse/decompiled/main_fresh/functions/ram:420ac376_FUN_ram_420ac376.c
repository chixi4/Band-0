
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420ac376(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)&SUB_ram_4001220c)((int)_DAT_ram_3fcb8130 - (int)_DAT_ram_3fcb7efa);
  if (param_1 <= iVar1) {
    FUN_ram_420af06c(&DAT_ram_3fcb7fb4,0xf,0x20,0,4);
    (**(code **)(_DAT_ram_3fcc4c78 + 0x1e8))(DAT_ram_3fcb8082,0);
    _DAT_ram_3fcb8130 = _DAT_ram_3fcb7efa;
    if (param_2 != 0) {
      FUN_ram_420af7f6(0x3fcb8548,(int)_DAT_ram_3fcb7efa);
      return;
    }
  }
  return;
}

