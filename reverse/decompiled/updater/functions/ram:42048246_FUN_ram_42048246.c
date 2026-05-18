
void FUN_ram_42048246(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4039c15a();
  if ((iVar1 != 0) && (DAT_ram_3fcb5371 != '\x02')) {
    FUN_ram_420479e0(1);
    if (DAT_ram_3fcb5386 == '\0') {
      FUN_ram_42047c2a(1);
      return;
    }
  }
  return;
}

