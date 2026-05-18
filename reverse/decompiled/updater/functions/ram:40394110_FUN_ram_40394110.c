
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_40394110(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (param_1 == 0) {
    iVar3 = FUN_ram_40393c62();
    param_1 = 2;
    if (iVar3 != 1) {
      param_1 = (uint)(iVar3 == 2);
    }
  }
  uVar5 = _DAT_ram_60008068 & 0x100;
  if ((param_1 == 2) && (uVar5 == 0)) {
    _DAT_ram_60008068 = _DAT_ram_60008068 | 0x100;
  }
  uVar1 = _DAT_ram_60008068;
  if (param_1 == 1) {
    FUN_ram_40393b40(1,1);
    _DAT_ram_60008068 = _DAT_ram_60008068 | 0x200;
  }
  uVar2 = _DAT_ram_6001f080;
  if ((int)(_DAT_ram_6001f068 << 0x13) < 0) {
    do {
      uVar2 = _DAT_ram_6001f080 & 0xff;
      if ((int)(_DAT_ram_6001f068 << 0x10) < 0) break;
    } while ((_DAT_ram_6001f080 & 1) == 0);
  }
  _DAT_ram_6001f080 = uVar2;
  if (param_1 == 2) {
    uVar4 = 0x8000;
    _DAT_ram_6001f080 = _DAT_ram_6001f080 & 0x7f | param_2 << 0x13;
  }
  else if (param_1 == 1) {
    _DAT_ram_6001f080 = _DAT_ram_6001f080 & 0x7f | param_2 << 0x13;
    uVar4 = 0x10b07;
  }
  else {
    _DAT_ram_6001f080 = _DAT_ram_6001f080 & 0x7f | param_2 << 0x11;
    uVar4 = 0x21340;
  }
  _DAT_ram_6001f068 =
       (param_2 & 0x7fff) << 0x10 | (param_1 & 3) << 0xd | _DAT_ram_6001f068 & 0x8fff | 0x80000000;
  (*(code *)&SUB_ram_400109f0)
            (param_2 * 1000000,(int)((ulonglong)param_2 * 1000000 >> 0x20),uVar4,0);
  (*(code *)&SUB_ram_40010044)();
  do {
    if ((_DAT_ram_6001f068 & 0x8000) != 0) {
      uVar2 = _DAT_ram_6001f06c >> 7;
      goto LAB_ram_40394268;
    }
  } while ((_DAT_ram_6001f080 & 1) == 0);
  uVar2 = 0;
LAB_ram_40394268:
  _DAT_ram_6001f068 = _DAT_ram_6001f068 & 0x7fffffff;
  if (param_1 == 2) {
    if (uVar5 == 0) {
      _DAT_ram_60008068 = _DAT_ram_60008068 & 0xfffffeff;
    }
  }
  else if (param_1 == 1) {
    _DAT_ram_60008068 = _DAT_ram_60008068 & 0xfffffdff;
    FUN_ram_40393b40(uVar1 >> 6 & 1 ^ 1,uVar1 >> 7 & 1 ^ 1);
  }
  return uVar2;
}

