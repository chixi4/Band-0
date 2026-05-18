
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204fa7c(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40392fe4(_DAT_ram_3fcc5298);
  if (iVar1 == 0) goto LAB_ram_4204fa9c;
  do {
    FUN_ram_4039bf1e();
LAB_ram_4204fa9c:
    iVar1 = FUN_ram_4204bc38(_DAT_ram_3fcc5298);
  } while (iVar1 != 0);
  return;
}

