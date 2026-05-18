
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4201ee6a(void)

{
  int iVar1;
  
  iVar1 = _DAT_ram_3fcc5138;
  if (_DAT_ram_3fcc5138 == 0) {
    iVar1 = FUN_ram_40390474(5000,4);
    _DAT_ram_3fcc5138 = iVar1;
    if (iVar1 != 0) {
      (*(code *)&SUB_ram_40010488)(iVar1,0xff,5000);
    }
  }
  return iVar1;
}

