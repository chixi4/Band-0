
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42075824(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)&SUB_ram_4001220c)((int)_DAT_ram_3fcb0c98 - (int)_DAT_ram_3fcb0a9e);
  if (param_1 <= iVar1) {
    iVar1 = (int)DAT_ram_3fcb0c26;
    iVar2 = (int)DAT_ram_3fcb0c28;
    if (param_2 != 0) {
      FUN_ram_42076e98(0x3fcb10f4,(int)_DAT_ram_3fcb0c98,(int)_DAT_ram_3fcb0a9e);
    }
    _DAT_ram_6002600c = _DAT_ram_6002600c & 0xfffffffd;
    _DAT_ram_3fcb0b54 = _DAT_ram_3fcb0b54 & 0xfffffcff;
    FUN_ram_4207565e(0x985,0,1,1);
    (**(code **)(_DAT_ram_3fcb640c + 0x118))();
    _DAT_ram_3fcb0c98 = _DAT_ram_3fcb0a9e;
    (*(code *)&SUB_ram_400124c8)(iVar1,iVar2);
    return;
  }
  return;
}

