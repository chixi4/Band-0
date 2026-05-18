
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_40391dcc(uint param_1,int param_2,undefined4 param_3,int param_4,uint param_5,
                     undefined4 param_6,uint param_7)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  uVar4 = _DAT_ram_60002020;
  uVar3 = _DAT_ram_6000201c;
  uVar2 = _DAT_ram_60002018;
  uVar1 = _DAT_ram_60002008;
  uStack_34 = param_6;
  if ((param_5 < 0x21) && (param_7 < 0x21)) {
    _DAT_ram_60002008 = 0x200000;
    uVar7 = (param_2 + -1) * 0x4000000;
    uStack_28 = _DAT_ram_60002020 & 0xffff0000 | param_1;
    _DAT_ram_60002020 = uStack_28 & 0xfffffff | 0x70000000;
    if (param_7 != 0) {
      param_4 = param_4 + (uint)*(byte *)(_DAT_ram_3fcdfff0 + 0x19);
    }
    uVar5 = _DAT_ram_6000201c & 0x3ffffff | uVar7;
    if (param_4 != 0) {
      uVar5 = _DAT_ram_6000201c & 0x3ffffc0 | uVar7 | param_4 - 1U & 0x3f;
    }
    _DAT_ram_6000201c = uVar5;
    _DAT_ram_60002018 =
         (uint)(param_2 != 0) << 0x1e | _DAT_ram_60002018 & 0x97ffffff | 0x80000000 |
         (uint)(param_4 != 0) << 0x1d | (uint)(param_5 != 0) << 0x1b;
    uVar7 = 0;
    if (param_5 != 0) {
      uVar7 = param_5 - 1 & 0x3ff;
    }
    _DAT_ram_60002024 = _DAT_ram_60002024 & 0xfffffc00 | uVar7;
    _DAT_ram_60002004 = param_3;
    uStack_24 = _DAT_ram_60002020;
    if ((param_5 >> 3) + 3 >> 2 == 1) {
      uStack_2c = 0;
      FUN_ram_4039c11e(&uStack_2c,&uStack_34);
      _DAT_ram_60002058 = uStack_2c;
    }
    uVar7 = 0;
    if (param_7 != 0) {
      uVar7 = param_7 - 1 & 0x3ff;
    }
    _DAT_ram_60002028 = _DAT_ram_60002028 & 0xfffffc00 | uVar7;
    _DAT_ram_60002000 = _DAT_ram_60002000 | 0x40000;
    do {
    } while (_DAT_ram_60002000 != 0);
    uStack_30 = 0;
    if ((param_7 >> 3 & 3) == 0) {
      puVar6 = (undefined4 *)&DAT_ram_60002058;
    }
    else {
      uStack_2c = _DAT_ram_60002058;
      puVar6 = &uStack_2c;
    }
    _DAT_ram_60002008 = uVar1;
    _DAT_ram_60002018 = uVar2;
    _DAT_ram_6000201c = uVar3;
    _DAT_ram_60002020 = uVar4;
    FUN_ram_4039c11e(&uStack_30,puVar6);
    if (param_7 != 0x20) {
      uStack_30 = uStack_30 & ~(-1 << (param_7 & 0x1f));
    }
    return uStack_30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

