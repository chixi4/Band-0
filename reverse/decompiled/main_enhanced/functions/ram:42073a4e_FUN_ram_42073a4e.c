
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_ram_42073a4e(undefined1 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0x5dc;
  if (*(char *)(param_2 + 0x2fa) != '\0') {
    uVar1 = (uint)(_DAT_ram_6004d000 - *(int *)(param_2 + 0x3a0)) >> 10;
    iVar2 = 100;
    if (uVar1 < 0x5dd) {
      iVar2 = 0x5dc - uVar1;
    }
  }
  *param_1 = 0x38;
  param_1[1] = 5;
  param_1[2] = 3;
  param_1[3] = (char)iVar2;
  param_1[4] = (char)((uint)iVar2 >> 8);
  param_1[5] = (char)((uint)iVar2 >> 0x10);
  param_1[6] = (char)((uint)iVar2 >> 0x18);
  return param_1 + 7;
}

