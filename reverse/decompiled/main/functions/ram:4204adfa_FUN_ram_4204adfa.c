
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4204adfa(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = _DAT_ram_60008068 >> 0x1e;
  if (uVar2 == 1) {
    return 0x8000;
  }
  if (uVar2 == 2) {
    uVar1 = 0x10b07;
  }
  else {
    uVar1 = 0x21340;
    if (uVar2 != 0) {
      FUN_ram_4039bf1e(0x21340);
      return 0x8000;
    }
  }
  return uVar1;
}

