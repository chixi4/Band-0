
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_42022130(int param_1)

{
  uint uVar1;
  
  if (DAT_ram_3fcc516c != '\0') {
    uVar1 = 0xffffffff;
    if (param_1 != 0) {
      uVar1 = (uint)(param_1 * 100) / 1000;
    }
    uVar1 = FUN_ram_4039788e(_DAT_ram_3fcc5164,3,0,0,uVar1);
    return uVar1 & 1;
  }
  return 0;
}

