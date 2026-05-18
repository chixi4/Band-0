
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4201771a(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (DAT_ram_3fcc4fc2 != '\0') {
    DAT_ram_3fcc4fc1 = 0;
    DAT_ram_3fcc4fc0 = 0;
    _DAT_ram_3fcc4fbc = 0;
    uVar2 = *(uint *)(_DAT_ram_3fcc4fc4 + 0x10);
    if (0x1000 < uVar2) {
      uVar2 = 0x1000;
    }
    uVar1 = FUN_ram_4204930a(_DAT_ram_3fcc4fc4,0,uVar2);
    return uVar1;
  }
  return 0x103;
}

