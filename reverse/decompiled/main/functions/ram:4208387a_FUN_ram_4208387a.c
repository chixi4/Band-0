
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4208387a(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4208353e();
  uVar2 = 0;
  if (iVar1 == 0) {
    if (_DAT_ram_3fcdfac0 == 3) {
      FUN_ram_42083512();
      uVar2 = 1;
    }
    else {
      FUN_ram_42083512();
      uVar2 = 0;
    }
  }
  return uVar2;
}

