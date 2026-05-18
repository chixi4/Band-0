
void FUN_ram_42090c4e(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4039e52e();
  if ((iVar1 != 0) && (DAT_ram_3fcc4401 != '\x02')) {
    FUN_ram_420903e8(1);
    if (DAT_ram_3fcc4416 == '\0') {
      FUN_ram_42090632(1);
      return;
    }
  }
  return;
}

