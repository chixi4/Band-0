
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420ac17e(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_4039bf1e();
  iVar2 = (*(code *)&SUB_ram_4001220c)((int)_DAT_ram_3fcb7efa - (int)_DAT_ram_3fcb80f0);
  if ((0x13 < iVar2) && (DAT_ram_3fcb8135 == '\0')) {
    DAT_ram_3fcb8135 = 1;
    (**(code **)(_DAT_ram_3fcc4c78 + 0x18))();
    uVar3 = (*(code *)&SUB_ram_400124b4)(DAT_ram_3fcb7f03);
    if (iVar1 != 0) {
      FUN_ram_420af7f6(0x3fcb8530,(int)_DAT_ram_3fcb7efa,(int)_DAT_ram_3fcb80f0,uVar3);
    }
    _DAT_ram_3fcb80f0 = _DAT_ram_3fcb7efa;
    (**(code **)(_DAT_ram_3fcc4c78 + 0x14))();
    DAT_ram_3fcb8135 = '\0';
  }
  return;
}

