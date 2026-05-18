
uint FUN_ram_42020c1e(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  FUN_ram_42048144(6,1);
  FUN_ram_42020bd0();
  FUN_ram_42048144(6,0);
  FUN_ram_42020bd0();
  iVar2 = 8;
  uVar1 = 0;
  do {
    FUN_ram_42048144(6,1);
    FUN_ram_42020bd0();
    uVar1 = (uVar1 & 0x7f) << 1;
    iVar3 = FUN_ram_42048196(7);
    if (iVar3 != 0) {
      uVar1 = uVar1 | 1;
    }
    FUN_ram_42048144(6,0);
    iVar2 = iVar2 + -1;
    FUN_ram_42020bd0();
  } while (iVar2 != 0);
  return uVar1;
}

