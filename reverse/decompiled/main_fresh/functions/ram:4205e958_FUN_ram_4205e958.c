
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4205e958(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = (undefined4 *)FUN_ram_4039c08e(1,8);
  puVar1 = _DAT_ram_3fcc536c;
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0x101;
  }
  else {
    _DAT_ram_3fcc536c = puVar2;
    *puVar2 = param_1;
    puVar2[1] = puVar1;
    uVar3 = 0;
    _DAT_ram_3fcc5368 = _DAT_ram_3fcc5368 + 1;
  }
  return uVar3;
}

