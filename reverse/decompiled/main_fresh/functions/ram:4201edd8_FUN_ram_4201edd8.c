
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4201edd8(void)

{
  int iVar1;
  
  if (DAT_ram_3fcc5114 == '\0') {
    _DAT_ram_3fcc5124 = FUN_ram_4039731c(1);
    if (_DAT_ram_3fcc5124 != 0) {
      _DAT_ram_3fcc5128 = FUN_ram_40397076(1,0,3);
      if (_DAT_ram_3fcc5128 != 0) {
        iVar1 = thunk_FUN_ram_420204d8();
        if (iVar1 != 0) {
          FUN_ram_4039782c(_DAT_ram_3fcc5124);
          FUN_ram_4039782c(_DAT_ram_3fcc5128);
          return iVar1;
        }
        DAT_ram_3fcc5114 = '\x01';
        goto LAB_ram_4201ee62;
      }
      FUN_ram_4039782c(_DAT_ram_3fcc5124);
    }
    iVar1 = 0x101;
  }
  else {
LAB_ram_4201ee62:
    iVar1 = 0;
  }
  return iVar1;
}

