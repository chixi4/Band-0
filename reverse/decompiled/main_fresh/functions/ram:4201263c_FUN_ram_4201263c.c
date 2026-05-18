
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4201263c(uint *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_ram_403917e0(0x3fcc4ec0);
    FUN_ram_420123e4();
    iVar1 = _DAT_ram_3fcc4ecc;
    uVar2 = _DAT_ram_3fcc4ec8;
    if (_DAT_ram_3fcc4ed0 == 0 && _DAT_ram_3fcc4ed4 == 0) {
      uVar10 = 0;
      uVar4 = 0;
    }
    else {
      uVar10 = (*(code *)&SUB_ram_400108f8)(_DAT_ram_3fcc4ec8,_DAT_ram_3fcc4ecc,1000000,0);
      uVar4 = (*(code *)&SUB_ram_40010980)(uVar2,iVar1,1000000,0);
    }
    *(undefined4 *)(param_2 + 1) = uVar4;
    *param_2 = uVar10;
    FUN_ram_403917f8(0x3fcc4ec0);
  }
  if (param_1 != (uint *)0x0) {
    uVar2 = param_1[1];
    uVar9 = *param_1;
    uVar3 = param_1[2];
    uVar7 = (int)uVar2 >> 0x1f;
    uVar6 = (uVar7 ^ uVar9) - uVar7;
    uVar8 = (uint)((uVar7 ^ uVar9) < uVar6);
    uVar7 = (uVar7 ^ uVar2) - uVar7;
    if ((0 < (int)(uVar7 - uVar8)) || ((uVar7 == uVar8 && (0x862 < uVar6)))) {
      puVar5 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
      *puVar5 = 0x16;
      return 0xffffffff;
    }
    FUN_ram_403917e0(0x3fcc4ec0);
    FUN_ram_420123e4();
    _DAT_ram_3fcc4ed0 = FUN_ram_420b617c();
    _DAT_ram_3fcc4ec8 = uVar3 + uVar9 * 1000000;
    _DAT_ram_3fcc4ecc =
         (uint)(_DAT_ram_3fcc4ec8 < uVar9 * 1000000) +
         uVar2 * 1000000 + (int)((ulonglong)uVar9 * 1000000 >> 0x20) + ((int)uVar3 >> 0x1f);
    FUN_ram_403917f8(0x3fcc4ec0);
  }
  return 0;
}

