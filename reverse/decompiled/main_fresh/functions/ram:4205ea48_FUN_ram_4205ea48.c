
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4205ea48(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar1 = _DAT_ram_3fcc536c;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    uVar2 = *puVar1;
    uVar3 = FUN_ram_4205fba4(uVar2);
    iVar4 = FUN_ram_4039c438(param_1,uVar3);
    if (iVar4 == 0) break;
    puVar1 = (undefined4 *)puVar1[1];
  }
  return uVar2;
}

