
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204f986(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  
  bVar4 = false;
  if ((_DAT_ram_3fcc529c & 1) != 0) {
    uVar5 = FUN_ram_403919ae();
    uVar3 = (uint)uVar5 - _DAT_ram_3fcc5290;
    uVar2 = (int)((ulonglong)uVar5 >> 0x20) - _DAT_ram_3fcc5294;
    uVar1 = (uint)((uint)uVar5 < uVar3);
    bVar4 = true;
    if (((int)(uVar2 - uVar1) < 1) && ((uVar2 != uVar1 || (uVar3 < 0xf4241)))) {
      bVar4 = false;
    }
  }
  if ((_DAT_ram_3fcc529c & 6) == 0) {
    if (!bVar4) {
      return;
    }
  }
  else if (!bVar4) {
    uVar5 = FUN_ram_403919ae();
    uVar2 = (int)((ulonglong)uVar5 >> 0x20) - _DAT_ram_3fcc528c;
    uVar3 = (uint)uVar5 - _DAT_ram_3fcc5288;
    uVar1 = (uint)((uint)uVar5 < uVar3);
    if ((int)(uVar2 - uVar1) < 1) {
      if (uVar2 != uVar1) {
        return;
      }
      if (uVar3 < 0xf4241) {
        return;
      }
    }
  }
  FUN_ram_4204f8de();
  return;
}

