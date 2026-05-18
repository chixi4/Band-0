
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42015016(void)

{
  int iVar1;
  
  if (DAT_ram_3fcc4f65 != '\0') {
    DAT_ram_3fcc4f64 = 1;
    iVar1 = 0x65;
    while ((DAT_ram_3fcc4f65 != '\0' && (iVar1 = iVar1 + -1, iVar1 != 0))) {
      FUN_ram_40398498(1);
    }
    if ((DAT_ram_3fcc4f65 != '\0') && (_DAT_ram_3fcc4f60 != 0)) {
      FUN_ram_40397f1c();
      _DAT_ram_3fcc4f60 = 0;
    }
    _DAT_ram_3fcc4f54 = 0;
    DAT_ram_3fcc4f65 = 0;
    _DAT_ram_3fcc4f50 = 0;
    DAT_ram_3fcc4f64 = 0;
    _DAT_ram_3fcc4f4c = 0;
    *(undefined2 *)(gp + -0x7b4) = 0x18;
    FUN_ram_42014ff0();
    return;
  }
  return;
}

