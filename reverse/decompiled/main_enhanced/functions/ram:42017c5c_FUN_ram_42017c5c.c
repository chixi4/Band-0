
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42017c5c(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  iVar1 = FUN_ram_42048196(8);
  uVar5 = FUN_ram_403919ae();
  if (iVar1 == 0) {
    if (DAT_ram_3fcc4fc8 == '\0') {
      DAT_ram_3fcc4fc8 = '\x01';
    }
    else {
      uVar4 = (uint)uVar5 - _DAT_ram_3fcc4fd0;
      uVar2 = (uint)((uint)uVar5 < uVar4);
      uVar3 = (int)((ulonglong)uVar5 >> 0x20) - _DAT_ram_3fcc4fd4;
      if (0 < (int)(uVar3 - uVar2)) {
        return 1;
      }
      uVar5 = CONCAT44(_DAT_ram_3fcc4fd4,_DAT_ram_3fcc4fd0);
      if ((uVar3 == uVar2) &&
         (uVar5 = CONCAT44(_DAT_ram_3fcc4fd4,_DAT_ram_3fcc4fd0), 799999 < uVar4)) {
        return 1;
      }
    }
  }
  else {
    DAT_ram_3fcc4fc8 = '\0';
    uVar5 = 0;
  }
  _DAT_ram_3fcc4fd0 = uVar5;
  return 0;
}

