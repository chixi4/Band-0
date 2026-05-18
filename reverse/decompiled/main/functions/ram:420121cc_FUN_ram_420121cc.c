
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420121cc(int param_1)

{
  int iVar1;
  
  if (param_1 != 1) {
    if (param_1 == 2) {
      FUN_ram_403958d4(1,100);
      iVar1 = FUN_ram_40395a7e();
      _DAT_ram_3fcc4e54 = iVar1;
    }
    else {
      iVar1 = 0;
      if ((param_1 == 0) && (iVar1 = _DAT_ram_3fcc4e54, _DAT_ram_3fcc4e54 == 0)) {
        FUN_ram_403958d4(1,100);
        iVar1 = FUN_ram_40395a7e();
        _DAT_ram_3fcc4e54 = iVar1;
      }
    }
    return iVar1;
  }
  return 0x10b07;
}

