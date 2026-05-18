
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40395558(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  _DAT_ram_6000807c = (param_1 & 1) << 5 | _DAT_ram_6000807c & 0xffffffdf;
  uVar2 = param_1 >> 5 & 1;
  _DAT_ram_6002609c = _DAT_ram_6002609c & 0xffffffea | uVar2 << 4 | uVar2 << 2 | uVar2;
  uVar1 = param_1 >> 3 & 1;
  _DAT_ram_6001d054 = uVar1 << 1 | _DAT_ram_6001d054 & 0xfffffff5 | uVar1 << 3;
  uVar1 = param_1 >> 4 & 1;
  _DAT_ram_6001ccd4 = uVar1 << 1 | _DAT_ram_6001ccd4 & 0xffffffd5 | uVar1 << 5 | uVar1 << 3;
  _DAT_ram_60006090 = _DAT_ram_60006090 & 0xffffffdf | uVar2 << 5;
  _DAT_ram_600050f0 = uVar2 << 10 | _DAT_ram_600050f0 & 0xfffffbff;
  if ((param_1 & 0x40) == 0) {
    _DAT_ram_600260ac = _DAT_ram_600260ac & 0xffffff87;
  }
  else {
    _DAT_ram_600260ac = _DAT_ram_600260ac | 0x78;
  }
  if ((char)param_1 < '\0') {
    _DAT_ram_600260ac = _DAT_ram_600260ac | 7;
  }
  else {
    _DAT_ram_600260ac = _DAT_ram_600260ac & 0xfffffff8;
  }
  return;
}

