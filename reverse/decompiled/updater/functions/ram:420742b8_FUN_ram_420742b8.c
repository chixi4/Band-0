
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420742b8(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = _DAT_ram_60008844;
  uVar1 = _DAT_ram_60008840;
  param_1[5] = (char)_DAT_ram_60008840;
  *param_1 = (char)((uint)uVar2 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x18);
  param_1[1] = (char)uVar2;
  param_1[3] = (char)((uint)uVar1 >> 0x10);
  param_1[4] = (char)((uint)uVar1 >> 8);
  param_1[6] = (char)((uint)uVar2 >> 0x18);
  param_1[7] = (char)((uint)uVar2 >> 0x10);
  return;
}

