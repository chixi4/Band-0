
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403952da(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_1 >> 0x15 & 1;
  if ((param_1 & 1) != 0) {
    FUN_ram_40395558(0xff);
  }
  if ((param_1 & 0xc0000) == 0x80000) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  FUN_ram_40394b98(0x6d,0,5,4,0,param_1 >> 9 & 0x1f);
  FUN_ram_40394b98(0x6d,0,7,4,0,param_1 >> 4 & 0x1f);
  uVar2 = (param_1 >> 0xe & 0xf) << 0x12;
  uVar3 = (param_1 >> 0x12 & 1) << 0x10;
  uVar4 = (param_1 >> 0x13 & 1) << 0xe;
  if ((param_1 & 4) == 0) {
    _DAT_ram_60008070 = uVar4 | uVar3 | uVar2 | _DAT_ram_60008070 & 0xfc003f00 | 0x1fe;
    _DAT_ram_6000807c = _DAT_ram_6000807c & 0x7fffffff;
  }
  else {
    _DAT_ram_60008070 = uVar4 | uVar3 | uVar2 | _DAT_ram_60008070 & 0xfc003fff;
    FUN_ram_40394b98(0x61,0,0,2,2,0);
    _DAT_ram_6000807c = _DAT_ram_6000807c | 0x80000000;
    _DAT_ram_6000802c = _DAT_ram_6000802c & 0x27ffffff;
    _DAT_ram_60008000 = _DAT_ram_60008000 & 0xffffff7f;
  }
  _DAT_ram_60008074 = (param_1 >> 0x16) << 0x1f | _DAT_ram_60008074 & 0x7fffffff;
  if ((param_1 & 2) == 0) {
    _DAT_ram_60008068 = _DAT_ram_60008068 | 0x4010000;
  }
  else {
    _DAT_ram_60008068 = _DAT_ram_60008068 & 0xfbfeffff;
  }
  _DAT_ram_6000807c = (param_1 & 0xffdfffff) >> 0x11 & 8 | _DAT_ram_6000807c & 0xfffffff3;
  _DAT_ram_60008060 =
       (param_1 >> 0x18 & 1) << 0x1e | (param_1 >> 0x17) << 0x1f | _DAT_ram_60008060 & 0x3fffffff;
  _DAT_ram_60008000 = _DAT_ram_60008000 & 0xffffdfff | uVar1 << 0xd;
  _DAT_ram_60008068 = _DAT_ram_60008068 & 0xefffffff | uVar1 << 0x1c;
  return;
}

