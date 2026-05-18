
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42073af6(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_ram_40399b58();
  FUN_ram_40399b58();
  FUN_ram_40399b58();
  iVar1 = FUN_ram_40399b58();
  iVar2 = (*(code *)&SUB_ram_4001220c)((int)_DAT_ram_3fcb0a9e - (int)_DAT_ram_3fcb0c94);
  if ((0x13 < iVar2) && (DAT_ram_3fcb0cd9 == '\0')) {
    DAT_ram_3fcb0cd9 = 1;
    (**(code **)(_DAT_ram_3fcb640c + 0x18))();
    uVar3 = (*(code *)&SUB_ram_400124b4)(DAT_ram_3fcb0aa7);
    if (iVar1 != 0) {
      FUN_ram_42076e98(0x3fcb10bc,(int)_DAT_ram_3fcb0a9e,(int)_DAT_ram_3fcb0c94,uVar3);
    }
    _DAT_ram_3fcb0c94 = _DAT_ram_3fcb0a9e;
    (**(code **)(_DAT_ram_3fcb640c + 0x14))();
    DAT_ram_3fcb0cd9 = '\0';
  }
  return;
}

