
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42011c84(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = 0x3f;
  do {
    iVar2 = (*(code *)&SUB_ram_40010918)(uVar1);
    uVar3 = iVar2 - 1;
    uVar4 = 0x80000000 >> (uVar3 & 0x1f);
    if ((_DAT_ram_600080fc & uVar4) != 0) {
      _DAT_ram_600080fc = uVar3 * 3 - 0x18 & ~uVar4 & _DAT_ram_600080fc;
      _DAT_ram_600080c4 = ~(1 << (uVar3 & 0x1f)) & _DAT_ram_600080c4;
    }
    uVar1 = uVar1 & ~(1 << (uVar3 & 0x1f));
  } while (uVar1 != 0);
  return;
}

