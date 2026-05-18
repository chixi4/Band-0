
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4201566c(void)

{
  int iVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (DAT_ram_3fcc4f67 == '\0') {
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    iVar1 = FUN_ram_42062de6(&uStack_1c,&DAT_ram_3fcc4f6c);
    if (iVar1 != 0) {
      return iVar1;
    }
    uStack_24 = 3;
    uStack_20 = 0;
    iVar1 = FUN_ram_42062f3c(_DAT_ram_3fcc4f6c,2,&uStack_24);
    if (iVar1 != 0) {
      return iVar1;
    }
    uStack_18 = 3;
    uStack_1c = 0;
    uStack_14 = 0;
    iVar1 = FUN_ram_420631d8(&uStack_1c,&DAT_ram_3fcc4f68);
    if (iVar1 != 0) {
      _DAT_ram_3fcc4f68 = 0;
    }
    DAT_ram_3fcc4f67 = '\x01';
  }
  return 0;
}

