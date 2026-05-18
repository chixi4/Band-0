
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204ba6c(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
  if (iVar1 != 0) {
    DAT_ram_3fcb5539 = 0;
    FUN_ram_42033fd8(6,0x1000,3,0x3c07ee30);
    return;
  }
  return;
}

