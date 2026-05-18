
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4204a1c8(uint param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  if (param_1 == 0) {
    return 0x102;
  }
  FUN_ram_403917e0(0x3fcc1d4c);
  if (((_DAT_ram_3fcc1d20 == 0) || (param_1 = param_1 & 0x1fffff, param_1 < _DAT_ram_3fcc1d34)) ||
     (puVar5 = _DAT_ram_3fcc1d44, _DAT_ram_3fcc1d2c <= param_1)) {
LAB_ram_4204a206:
    FUN_ram_403917f8(0x3fcc1d4c);
    uVar2 = 0x105;
  }
  else {
    do {
      puVar1 = puVar5;
      if (puVar1 == (uint *)0x0) goto LAB_ram_4204a206;
      puVar5 = (uint *)puVar1[9];
    } while (((puVar1 == _DAT_ram_3fcc1d44) ||
             ((uint *)**(undefined4 **)(_DAT_ram_3fcc1d48 + 4) == puVar1)) || (*puVar1 != param_1));
    uVar6 = *puVar5 - *(int *)(**(int **)(puVar1[10] + 4) + 4);
    if (uVar6 < _DAT_ram_3fcc1d38) {
      uVar6 = _DAT_ram_3fcc1d38;
    }
    puVar5[10] = puVar1[10];
    uVar4 = puVar1[4];
    uVar3 = puVar1[2];
    _DAT_ram_3fcc1d38 = uVar6;
    *(uint **)puVar1[10] = puVar5;
    FUN_ram_4039208e(uVar3,uVar4);
    thunk_FUN_ram_40390634(puVar1);
    FUN_ram_403917f8(0x3fcc1d4c);
    uVar2 = 0;
  }
  return uVar2;
}

