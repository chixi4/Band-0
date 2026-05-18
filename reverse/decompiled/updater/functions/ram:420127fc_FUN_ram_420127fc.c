
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420127fc(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  FUN_ram_40390ff2(0x3fcb6620);
  if (_DAT_ram_3fcb6630 != 0 || _DAT_ram_3fcb6634 != 0) {
    FUN_ram_4201264c();
    _DAT_ram_3fcb6630 = 0;
    _DAT_ram_3fcb6634 = 0;
  }
  FUN_ram_4039100a(0x3fcb6620);
  uVar5 = *param_1;
  uVar6 = param_1[1];
  uVar4 = uVar5 * 1000000;
  uVar1 = param_1[2];
  uVar2 = uVar1 + uVar4;
  uVar7 = FUN_ram_420129cc();
  uVar3 = uVar2 - (int)uVar7;
  FUN_ram_420129fe(uVar3,(((uint)(uVar2 < uVar4) +
                          uVar6 * 1000000 + (int)((ulonglong)uVar5 * 1000000 >> 0x20) +
                          ((int)uVar1 >> 0x1f)) - (int)((ulonglong)uVar7 >> 0x20)) -
                         (uint)(uVar2 < uVar3));
  return;
}

