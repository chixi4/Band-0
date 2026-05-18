
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42073d12(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)&SUB_ram_4001220c)((int)_DAT_ram_3fcb0cd4 - (int)_DAT_ram_3fcb0a9e);
  if (param_1 <= iVar1) {
    FUN_ram_42076a04(&DAT_ram_3fcb0b58,0xf,0x20,0,4);
    (**(code **)(_DAT_ram_3fcb640c + 0x1e8))(DAT_ram_3fcb0c26,0);
    _DAT_ram_3fcb0cd4 = _DAT_ram_3fcb0a9e;
    if (param_2 != 0) {
      FUN_ram_42076e98(0x3fcb10d4,(int)_DAT_ram_3fcb0a9e);
      return;
    }
  }
  return;
}

