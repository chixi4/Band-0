
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42091956(void)

{
  bool bVar1;
  
  FUN_ram_420904ae();
  if (((DAT_ram_3fcc440e != '\0') && (DAT_ram_3fcc440f != '\0')) && (DAT_ram_3fcc4410 == '\0')) {
    DAT_ram_3fcc45e8 = 1;
    if (_DAT_ram_3fcc4424 == 0) {
      FUN_ram_420914ca(0,0);
      return;
    }
    bVar1 = DAT_ram_3fcc4401 != '\0';
    if (bVar1) {
      FUN_ram_4039e2da(0);
    }
    FUN_ram_42090632(bVar1);
    return;
  }
  return;
}

