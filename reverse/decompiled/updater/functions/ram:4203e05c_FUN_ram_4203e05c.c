
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203e05c(void)

{
  int iVar1;
  
  iVar1 = _DAT_ram_3fcb4f84;
  FUN_ram_42033fd8(1,4,4,0x3c07b628);
  if (iVar1 == 0) {
    FUN_ram_42033fd8(1,4,4,0x3c07b638);
    return;
  }
  if (*(int *)(iVar1 + 0x98) != 0) {
    DAT_ram_3fcb4f16 = 1;
    FUN_ram_42040fac(&DAT_ram_3fcb4f74,0,0x2700);
    DAT_ram_3fcb4f16 = 0;
  }
  FUN_ram_4203dc98(0);
  return;
}

