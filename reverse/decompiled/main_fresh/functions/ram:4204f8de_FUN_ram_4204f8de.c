
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204f8de(void)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  bVar1 = (_DAT_ram_3fcc529c & 1) != 0;
  uVar3 = _DAT_ram_3fcc5290;
  if (bVar1) {
    uVar3 = FUN_ram_403919ae();
  }
  _DAT_ram_3fcc5294 = (undefined4)((ulonglong)uVar3 >> 0x20);
  _DAT_ram_3fcc5290 = (undefined4)uVar3;
  if ((_DAT_ram_3fcc529c & 6) == 0) {
    if (!bVar1) {
      return;
    }
    uVar2 = 0;
  }
  else {
    _DAT_ram_3fcc5290 = uVar3;
    _DAT_ram_3fcc5288 = FUN_ram_403919ae();
    uVar2 = 1;
    uVar3 = _DAT_ram_3fcc5290;
  }
  _DAT_ram_3fcc5290 = uVar3;
  FUN_ram_420ac3fa(bVar1,uVar2);
  return;
}

