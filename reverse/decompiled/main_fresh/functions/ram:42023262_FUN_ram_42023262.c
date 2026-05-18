
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42023262(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  FUN_ram_40398498(0x78);
  _DAT_ram_3fcc5180 = 0;
  FUN_ram_42023218();
  puVar2 = (undefined1 *)0x0;
  if (DAT_ram_3fcc5174 != '\0') {
    puVar2 = &DAT_ram_3fcc5178;
  }
  iVar1 = FUN_ram_42021fd4(0x3fcc190c,0x3fcc18c8,puVar2);
  if ((iVar1 == 0) && (iVar1 = FUN_ram_42022130(15000), iVar1 != 0)) {
    FUN_ram_420221a8(0x3fcc190c,0x3fcc18c8);
  }
  FUN_ram_40397f1c(0);
  return;
}

