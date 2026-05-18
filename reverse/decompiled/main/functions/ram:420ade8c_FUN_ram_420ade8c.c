
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420ade8c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)&SUB_ram_4001220c)((int)_DAT_ram_3fcb80f4 - (int)_DAT_ram_3fcb7efa);
  if (param_1 <= iVar1) {
    iVar1 = (int)DAT_ram_3fcb8082;
    iVar2 = (int)DAT_ram_3fcb8084;
    if (param_2 != 0) {
      FUN_ram_420af7f6(0x3fcb8568,(int)_DAT_ram_3fcb80f4,(int)_DAT_ram_3fcb7efa);
    }
    _DAT_ram_6002600c = _DAT_ram_6002600c & 0xfffffffd;
    _DAT_ram_3fcb7fb0 = _DAT_ram_3fcb7fb0 & 0xfffffcff;
    FUN_ram_420adcc6(0x985,0,1,1);
    (**(code **)(_DAT_ram_3fcc4c78 + 0x118))();
    _DAT_ram_3fcb80f4 = _DAT_ram_3fcb7efa;
    (*(code *)&SUB_ram_400124c8)(iVar1,iVar2);
    return;
  }
  return;
}

