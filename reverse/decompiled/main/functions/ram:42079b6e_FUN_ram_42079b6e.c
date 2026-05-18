
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42079b6e(void)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(_DAT_ram_3fcc4018 + 0x10c) < *(int *)(_DAT_ram_3fcc4018 + 0x108)) {
    return 1;
  }
  iVar1 = *(int *)(_DAT_ram_3fcc4018 + 0xec);
  iVar2 = FUN_ram_42079998();
  if ((iVar2 != 0) && (*(int *)(iVar1 + 0x108) < *(int *)(iVar2 + 0x108))) {
    FUN_ram_42079a86();
    return 1;
  }
  FUN_ram_42079aec(iVar1);
  return 1;
}

