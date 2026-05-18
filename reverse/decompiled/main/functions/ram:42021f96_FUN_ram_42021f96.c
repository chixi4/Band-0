
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42021f96(undefined4 *param_1)

{
  int iVar1;
  undefined4 auStack_1c [5];
  
  if (DAT_ram_3fcc516c != '\0') {
    iVar1 = 0x102;
    if (((param_1 != (undefined4 *)0x0) && (_DAT_ram_3fcc5160 != 0)) &&
       (iVar1 = FUN_ram_4205f8ee(_DAT_ram_3fcc5160,auStack_1c), iVar1 == 0)) {
      *param_1 = auStack_1c[0];
    }
    return iVar1;
  }
  return 0x102;
}

