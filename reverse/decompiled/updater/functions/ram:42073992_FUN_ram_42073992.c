
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_ram_42073992(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (DAT_ram_3fcb6888 == '\0') {
    puVar1 = (undefined4 *)0x3fcb688c;
  }
  else {
    puVar1 = (undefined4 *)FUN_ram_42012eee(_DAT_ram_3fcb6884);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)thunk_FUN_ram_4039047a(8);
      puVar2 = puVar1;
      if (puVar1 != (undefined4 *)0x0) goto LAB_ram_420739c4;
      do {
        puVar2 = (undefined4 *)FUN_ram_42073a5e();
LAB_ram_420739c4:
        iVar3 = FUN_ram_42012f1e(_DAT_ram_3fcb6884,puVar2);
      } while (iVar3 != 0);
      *puVar1 = 0;
      puVar1[1] = 0;
    }
  }
  return puVar1;
}

