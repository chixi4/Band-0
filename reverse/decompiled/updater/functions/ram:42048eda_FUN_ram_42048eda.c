
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42048eda(void)

{
  int iVar1;
  
  _DAT_ram_3fcb56ac = _DAT_ram_3fcb56ac + 1;
  if (((DAT_ram_3fcb537e == '\0') || (DAT_ram_3fcb537f == '\0')) || (DAT_ram_3fcb5380 != '\0')) {
    return;
  }
  if (*(char *)(gp + 0x100) == '\0') {
    if (_DAT_ram_3fcb5394 == 0) {
      FUN_ram_42048ac2(0,0);
      goto LAB_ram_42048f24;
    }
  }
  else if (_DAT_ram_3fcb5394 == 0) {
    return;
  }
  if (DAT_ram_3fcb5371 != '\0') {
    return;
  }
  if ((DAT_ram_3fcb5384 == '\0') && (iVar1 = FUN_ram_4204acb6(1), iVar1 == 0)) {
    FUN_ram_42048246();
    return;
  }
LAB_ram_42048f24:
  (*(code *)&SUB_ram_40011b84)();
  return;
}

