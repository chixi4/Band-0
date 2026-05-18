
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40394796(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  FUN_ram_4039691e();
  FUN_ram_40396966();
  uVar1 = _DAT_ram_6000804c;
  if (_DAT_ram_6000804c != 0) {
    uVar9 = FUN_ram_40395a66();
    uVar2 = (uint)(uVar9 >> 0x20);
    uVar5 = (uint)((ulonglong)uVar1 * (uVar9 & 0xffffffff) >> 0x20);
    uVar4 = uVar1 * (int)uVar9 >> 0x13 | uVar5 << 0xd;
    uVar6 = uVar1 * uVar2 * 0x2000 + uVar4;
    uVar8 = _DAT_ram_600080b8 + uVar6;
    uVar3 = (uint)((ulonglong)param_1 * (uVar9 & 0xffffffff) >> 0x20);
    uVar7 = uVar8 - (param_1 * (int)uVar9 >> 0x13 | uVar3 << 0xd);
    _DAT_ram_600080b8 = uVar7 + param_1 * uVar2 * -0x2000;
    _DAT_ram_60008048 =
         (((((uint)(uVar8 < uVar6) +
            (uint)(uVar6 < uVar4) +
            (uVar5 >> 0x13) +
            (uVar1 * uVar2 >> 0x13 | (int)((ulonglong)uVar1 * (ulonglong)uVar2 >> 0x20) << 0xd) +
            _DAT_ram_60008048) - (uVar3 >> 0x13)) - (uint)(uVar8 < uVar7)) -
         ((int)((ulonglong)param_1 * (ulonglong)uVar2 >> 0x20) << 0xd | param_1 * uVar2 >> 0x13)) -
         (uint)(uVar7 < _DAT_ram_600080b8);
  }
  FUN_ram_4039691e();
  FUN_ram_40396994();
  _DAT_ram_6000804c = param_1;
  return;
}

