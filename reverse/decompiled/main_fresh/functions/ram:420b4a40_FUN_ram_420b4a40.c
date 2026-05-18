
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420b4a40(int param_1)

{
  int iVar1;
  
  if (param_1 == _DAT_ram_3fcc4e5c) {
    iVar1 = 0;
  }
  else {
    if (param_1 != _DAT_ram_3fcc4e60) {
      return 0x103;
    }
    iVar1 = 1;
  }
  *(undefined4 *)(&DAT_ram_3fcc4e5c + iVar1 * 4) = 0;
  return 0;
}

