
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_403912ca(uint param_1,int param_2,undefined4 param_3,int param_4,uint param_5,
                     undefined4 param_6,uint param_7)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  uint uStack_44;
  
  uVar5 = _DAT_ram_60002020;
  uVar6 = _DAT_ram_6000201c;
  uVar4 = _DAT_ram_60002018;
  uVar1 = _DAT_ram_60002008;
  _DAT_ram_60002008 = 0x200000;
  uStack_48 = _DAT_ram_60002020 & 0xffff0000 | param_1;
  _DAT_ram_60002020 = uStack_48 & 0xfffffff | 0x70000000;
  uVar3 = (param_2 + -1) * 0x4000000;
  if (param_7 != 0) {
    param_4 = param_4 + (uint)*(byte *)(_DAT_ram_3fcdfff0 + 0x19);
  }
  uVar8 = _DAT_ram_6000201c & 0x3ffffff | uVar3;
  if (param_4 != 0) {
    uVar8 = _DAT_ram_6000201c & 0x3ffffc0 | uVar3 | param_4 - 1U & 0x3f;
  }
  _DAT_ram_6000201c = uVar8;
  _DAT_ram_60002018 =
       (uint)(param_2 != 0) << 0x1e | _DAT_ram_60002018 & 0x97ffffff | 0x80000000 |
       (uint)(param_4 != 0) << 0x1d | (uint)(param_5 != 0) << 0x1b;
  uVar3 = 0;
  if (param_5 != 0) {
    uVar3 = param_5 - 1 & 0x3ff;
  }
  param_5 = param_5 >> 3;
  uVar8 = param_5 + 3;
  _DAT_ram_60002024 = _DAT_ram_60002024 & 0xfffffc00 | uVar3;
  puVar9 = &uStack_54;
  _DAT_ram_60002004 = param_3;
  uStack_54 = param_6;
  uStack_44 = _DAT_ram_60002020;
  for (iVar7 = 0; iVar7 < (int)(uVar8 >> 2); iVar7 = iVar7 + 1) {
    uStack_4c = 0;
    uVar3 = param_5;
    if (4 < param_5) {
      uVar3 = 4;
    }
    FUN_ram_40399daa(&uStack_4c,puVar9,uVar3);
    *(undefined4 *)(&DAT_ram_60002008 + (iVar7 + 0x14) * 4) = uStack_4c;
    param_5 = param_5 - uVar3;
    puVar9 = (undefined4 *)((int)puVar9 + uVar3);
  }
  uVar3 = 0;
  if (param_7 != 0) {
    uVar3 = param_7 - 1 & 0x3ff;
  }
  _DAT_ram_60002028 = _DAT_ram_60002028 & 0xfffffc00 | uVar3;
  _DAT_ram_60002000 = _DAT_ram_60002000 | 0x40000;
  do {
  } while (_DAT_ram_60002000 != 0);
  uVar3 = param_7 >> 3;
  uStack_50 = 0;
  _DAT_ram_60002008 = uVar1;
  _DAT_ram_60002018 = uVar4;
  _DAT_ram_6000201c = uVar6;
  _DAT_ram_60002020 = uVar5;
  if ((uVar3 & 3) == 0) {
    FUN_ram_40399daa(&uStack_50,0x60002058);
  }
  else {
    uVar6 = uVar3 + 3;
    puVar2 = &uStack_50;
    uVar4 = 0;
    do {
      uVar5 = uVar3;
      if (4 < uVar3) {
        uVar5 = 4;
      }
      uStack_4c = *(undefined4 *)(&DAT_ram_60002008 + (uVar4 + 0x14) * 4);
      uVar4 = uVar4 + 1;
      iVar7 = FUN_ram_40399daa(puVar2,&uStack_4c,uVar5);
      puVar2 = (uint *)(iVar7 + uVar5);
      uVar3 = uVar3 - uVar5;
    } while (uVar4 != uVar6 >> 2);
  }
  if (param_7 < 0x20) {
    uStack_50 = uStack_50 & ~(-1 << (param_7 & 0x1f));
  }
  return uStack_50;
}

