
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204faee(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = _DAT_ram_3fcc1eb0 & 0xf;
  uVar2 = 1;
  uVar1 = _DAT_ram_3fcc1eb0 >> 4 & 0xf;
  uVar3 = uVar1;
  if ((_DAT_ram_3fcc1ea4 == 1) || (uVar3 = uVar5, uVar4 = uVar1, _DAT_ram_3fcc1ea4 != 2)) {
    uVar2 = 0;
    uVar4 = uVar3;
  }
  if (_DAT_ram_3fcc1eac != 1) {
    uVar1 = uVar5;
  }
  (*(code *)&SUB_ram_40012254)(_DAT_ram_3fcc1ea8 == 1);
  FUN_ram_420ac506(uVar1);
  FUN_ram_420ac528(uVar2,uVar3,uVar4);
  return;
}

