
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420b4a0e(int param_1)

{
  int iVar1;
  
  if (param_1 != _DAT_ram_3fcc4e5c) {
    if (_DAT_ram_3fcc4e5c == 0) {
      iVar1 = 0;
    }
    else {
      if (param_1 == _DAT_ram_3fcc4e60) {
        return 0;
      }
      if (_DAT_ram_3fcc4e60 != 0) {
        return 0x101;
      }
      iVar1 = 1;
    }
    *(int *)(&DAT_ram_3fcc4e5c + iVar1 * 4) = param_1;
  }
  return 0;
}

