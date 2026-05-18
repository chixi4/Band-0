
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42076276(void)

{
  int unaff_s1;
  byte in_a4;
  byte *in_a5;
  
  if ((in_a4 & 2) != 0) {
    *in_a5 = in_a4 & 0xfc;
    if (*(code **)(_DAT_ram_3fcdfb24 + 0x280) != (code *)0x0) {
      (**(code **)(_DAT_ram_3fcdfb24 + 0x280))();
      FUN_ram_42076252();
      return;
    }
  }
  if (((unaff_s1 != 0) && (*(int *)(unaff_s1 + 0xec) != 0)) && (DAT_ram_3fcc2734 != '\0')) {
    FUN_ram_42079c4c(*(int *)(unaff_s1 + 0xec),0);
    return;
  }
  return;
}

