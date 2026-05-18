
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42091bb2(void)

{
  int iVar1;
  
  _DAT_ram_3fcc4524 = 0;
  FUN_ram_420919c6(0);
  iVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
  if (iVar1 != 0) {
    FUN_ram_42090fde();
  }
  _DAT_ram_3fcc4524 = _DAT_ram_3fcc4524 + 1;
  if (DAT_ram_3fcc4521 != '\0') {
    (*(code *)&SUB_ram_40011d4c)();
    DAT_ram_3fcc440f = 1;
    DAT_ram_3fcc4521 = 2;
    DAT_ram_3fcc4410 = 0;
    DAT_ram_3fcc458c = 0;
    FUN_ram_40393cee(3,1);
    FUN_ram_40393cee(4,1);
    FUN_ram_40393cee(5,0);
    (*(code *)&SUB_ram_40011f70)();
    return;
  }
  return;
}

