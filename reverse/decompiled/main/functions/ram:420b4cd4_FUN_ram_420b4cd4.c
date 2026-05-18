
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_420b4cd4(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (*(code *)&SUB_ram_40010018)(0);
  if ((iVar1 == 5) || (uVar2 = 0, DAT_ram_3fcc4e4c != '\0')) {
    uVar2 = 4;
    if (((_DAT_ram_600080e4 & 8) == 0) &&
       (((uVar2 = 7, (_DAT_ram_600080e4 & 4) == 0 && (uVar2 = 8, (_DAT_ram_600080e4 & 0xc0) == 0))
        && (uVar2 = 0xb, (_DAT_ram_600080e4 & 0x20) == 0)))) {
      uVar2 = (int)(_DAT_ram_600080e4 << 0x15) >> 0x1f & 0xe;
    }
  }
  return uVar2;
}

