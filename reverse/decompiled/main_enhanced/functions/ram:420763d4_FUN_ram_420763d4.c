
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420763d4(void)

{
  uint uVar1;
  
  if (DAT_ram_3fcc2740 != '\0') {
    if (_DAT_ram_3fcc2738 != 0) {
      uVar1 = **(uint **)(_DAT_ram_3fcc2738 + 0x24);
      if ((uVar1 & 0x800000) == 0) {
        (*(code *)&SUB_ram_40011fa4)();
      }
      else {
        **(uint **)(_DAT_ram_3fcc2738 + 0x24) = uVar1 & 0xff7fffff;
      }
      _DAT_ram_3fcc2738 = 0;
    }
    if (_DAT_ram_3fcc273c != 0) {
      uVar1 = **(uint **)(_DAT_ram_3fcc273c + 0x24);
      if ((uVar1 & 0x800000) == 0) {
        (*(code *)&SUB_ram_40011fa4)();
      }
      else {
        **(uint **)(_DAT_ram_3fcc273c + 0x24) = uVar1 & 0xff7fffff;
      }
      _DAT_ram_3fcc273c = 0;
    }
    DAT_ram_3fcc2740 = '\0';
  }
  return;
}

