
void FUN_ram_42015bbe(void)

{
  int iVar1;
  
  if (DAT_ram_3fcc4f98 == '\0') {
    iVar1 = FUN_ram_4204be36(0);
    if ((iVar1 == 0x110d) || (iVar1 == 0x1110)) {
      iVar1 = FUN_ram_4204c3c4();
      if (iVar1 != 0) {
        FUN_ram_4039bf1e();
      }
      iVar1 = FUN_ram_4204be36();
    }
    if (iVar1 == 0) {
      DAT_ram_3fcc4f98 = '\x01';
    }
  }
  return;
}

