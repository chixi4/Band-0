
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420b5092(int param_1)

{
  int iVar1;
  
  FUN_ram_403917e0(0x3fcc51bc);
  if (param_1 != _DAT_ram_3fcc51c4) {
    if (_DAT_ram_3fcc51c4 == 0) {
      iVar1 = 0;
    }
    else {
      if (param_1 == _DAT_ram_3fcc51c8) goto LAB_ram_420b50ea;
      if (_DAT_ram_3fcc51c8 != 0) {
        FUN_ram_403917f8(0x3fcc51bc);
        return 0x101;
      }
      iVar1 = 1;
    }
    *(int *)(&DAT_ram_3fcc51c4 + iVar1 * 4) = param_1;
  }
LAB_ram_420b50ea:
  FUN_ram_403917f8(0x3fcc51bc);
  return 0;
}

