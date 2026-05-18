
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42020cde(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = (undefined4 *)FUN_ram_40399d1a(1,8);
  puVar1 = _DAT_ram_3fcb6748;
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0x101;
  }
  else {
    _DAT_ram_3fcb6748 = puVar2;
    *puVar2 = param_1;
    puVar2[1] = puVar1;
    uVar3 = 0;
    _DAT_ram_3fcb6744 = _DAT_ram_3fcb6744 + 1;
  }
  return uVar3;
}

