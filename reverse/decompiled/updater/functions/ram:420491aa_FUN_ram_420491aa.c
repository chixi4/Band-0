
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420491aa(void)

{
  int iVar1;
  
  _DAT_ram_3fcb5494 = 0;
  FUN_ram_42048fbe(0);
  iVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
  if (iVar1 != 0) {
    FUN_ram_420485d6();
  }
  _DAT_ram_3fcb5494 = _DAT_ram_3fcb5494 + 1;
  if (DAT_ram_3fcb5491 != '\0') {
    (*(code *)&SUB_ram_40011d4c)();
    DAT_ram_3fcb537f = 1;
    DAT_ram_3fcb5491 = 2;
    DAT_ram_3fcb5380 = 0;
    DAT_ram_3fcb54fc = 0;
    FUN_ram_40392eec(3,1);
    FUN_ram_40392eec(4,1);
    FUN_ram_40392eec(5,0);
    (*(code *)&SUB_ram_40011f70)();
    return;
  }
  return;
}

