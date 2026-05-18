
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_ram_420abff6(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (DAT_ram_3fcc53f0 == '\0') {
    puVar1 = (undefined4 *)0x3fcc53f4;
  }
  else {
    puVar1 = (undefined4 *)FUN_ram_42012cc2(_DAT_ram_3fcc53ec);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)thunk_FUN_ram_403904a6(8);
      puVar2 = puVar1;
      if (puVar1 != (undefined4 *)0x0) goto LAB_ram_420ac028;
      do {
        puVar2 = (undefined4 *)FUN_ram_420ac0c2();
LAB_ram_420ac028:
        iVar3 = FUN_ram_42012cf2(_DAT_ram_3fcc53ec,puVar2);
      } while (iVar3 != 0);
      *puVar1 = 0;
      puVar1[1] = 0;
    }
  }
  return puVar1;
}

