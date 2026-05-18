
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203de52(void)

{
  undefined4 uVar1;
  
  if ((_DAT_ram_3fcb516c & 1) == 0) {
    uVar1 = 0x3c07b64c;
  }
  else if (_DAT_ram_3fcb4f84 == 0) {
    uVar1 = 0x3c07b740;
  }
  else {
    if (*(int *)(_DAT_ram_3fcb4f84 + 0x98) != 5) {
      FUN_ram_42033fd8(1,8,4,0x3c07b858);
      return 0;
    }
    if (*(int *)(_DAT_ram_3fcb4f84 + 0xe4) != 0) {
      return 1;
    }
    uVar1 = 0x3c07b930;
  }
  FUN_ram_42033fd8(1,8,4,uVar1);
  return 0;
}

