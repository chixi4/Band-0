
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420ac2f8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)&SUB_ram_4001220c)((int)_DAT_ram_3fcb8132 - (int)_DAT_ram_3fcb7efa);
  if (param_1 <= iVar1) {
    _DAT_ram_3fcb7fb0 = _DAT_ram_3fcb7fb0 & 0xffffefff;
    (*(code *)&SUB_ram_40012588)();
    (**(code **)(_DAT_ram_3fcc4c78 + 0x1ec))();
    _DAT_ram_3fcb8132 = _DAT_ram_3fcb7efa;
    if (param_2 != 0) {
      FUN_ram_420af7f6(0x3fcb8520,(int)_DAT_ram_3fcb7efa);
      return;
    }
  }
  return;
}

