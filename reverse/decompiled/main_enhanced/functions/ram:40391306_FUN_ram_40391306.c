
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40391306(undefined4 param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
    param_1 = 0;
    param_2 = 0;
  }
  lVar1 = FUN_ram_403959b6(param_1,param_2,*(undefined4 *)(gp + -0x6b8));
  lVar1 = lVar1 + *(longlong *)(gp + -0x6b0);
  _DAT_ram_60008004 = (int)lVar1;
  _DAT_ram_60008044 = _DAT_ram_60008044 | 0x400;
  _DAT_ram_60008008 = (uint)((ulonglong)lVar1 >> 0x20) | 0x10000;
  return;
}

