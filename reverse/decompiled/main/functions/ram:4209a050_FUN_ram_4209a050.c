
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_ram_4209a050(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar2 = (undefined4 *)FUN_ram_4039c08e(1,0x218);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_ram_4039c11e(puVar2 + 2,param_2,6);
    uVar1 = _DAT_ram_3fcc53d8;
    puVar2[1] = *param_1;
    *puVar2 = param_1;
    uVar3 = 0;
    do {
      if ((uVar1 >> (uVar3 & 0x1f) & 1) == 0) {
        *(undefined4 **)(uVar3 * 4 + 0x3fcc48b4) = puVar2;
        _DAT_ram_3fcc53d8 = 1 << (uVar3 & 0x1f) | uVar1;
        puVar2[0x84] = uVar3;
        return puVar2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x10);
  }
  return puVar2;
}

