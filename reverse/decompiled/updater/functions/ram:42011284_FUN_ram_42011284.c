
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_ram_42011284(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  
  FUN_ram_40394d2c();
  FUN_ram_40394d60();
  uVar1 = _DAT_ram_6000804c;
  uVar9 = FUN_ram_40394466();
  uVar4 = (uint)(uVar9 >> 0x20);
  uVar5 = uVar4 * uVar1;
  uVar6 = uVar5 * 0x2000;
  uVar2 = (uint)((ulonglong)uVar1 * (uVar9 & 0xffffffff) >> 0x20);
  uVar8 = (uVar1 * (int)uVar9 >> 0x13 | uVar2 << 0xd) + uVar6;
  uVar3 = uVar8 + _DAT_ram_600080b8;
  iVar7 = (uint)(uVar8 < uVar6) +
          ((int)((ulonglong)uVar4 * (ulonglong)uVar1 >> 0x20) << 0xd | uVar5 >> 0x13) +
          (uVar2 >> 0x13) + _DAT_ram_60008048;
  FUN_ram_40394d2c();
  FUN_ram_40394d8e();
  return CONCAT44((uint)(uVar3 < uVar8) + iVar7,uVar3);
}

