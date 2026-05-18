
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42073b26(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)&SUB_ram_4001220c)((int)_DAT_ram_3fcb0a9e - (int)_DAT_ram_3fcb0c94);
  if ((0x13 < iVar1) && (DAT_ram_3fcb0cd9 == '\0')) {
    DAT_ram_3fcb0cd9 = 1;
    (**(code **)(_DAT_ram_3fcb640c + 0x18))();
    uVar2 = (*(code *)&SUB_ram_400124b4)(DAT_ram_3fcb0aa7);
    if (param_1 != 0) {
      FUN_ram_42076e98(0x3fcb10bc,(int)_DAT_ram_3fcb0a9e,(int)_DAT_ram_3fcb0c94,uVar2);
    }
    _DAT_ram_3fcb0c94 = _DAT_ram_3fcb0a9e;
    (**(code **)(_DAT_ram_3fcb640c + 0x14))();
    DAT_ram_3fcb0cd9 = '\0';
  }
  return;
}

