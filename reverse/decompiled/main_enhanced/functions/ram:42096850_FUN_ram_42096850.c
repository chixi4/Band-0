
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42096850(int param_1,uint param_2)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = _DAT_ram_600470cc & 0xffff00ff | 0xff;
  }
  else {
    uVar1 = _DAT_ram_600470cc & 0xffff0000 | 0x78f8;
    if ((param_2 & 0x40) != 0) {
      uVar1 = _DAT_ram_600470cc & 0xffff0000 | 0x41f8;
    }
  }
  _DAT_ram_600470cc = uVar1;
  return;
}

