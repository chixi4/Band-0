
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42014f3a(void)

{
  int iVar1;
  undefined1 auStack_4c [4];
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_34;
  undefined1 auStack_30 [32];
  
  iVar1 = 0;
  if (DAT_ram_3fcc4f66 == '\0') {
    if ((_DAT_ram_3fcc4f5c == 0) &&
       (_DAT_ram_3fcc4f5c = FUN_ram_4039731c(1), _DAT_ram_3fcc4f5c == 0)) {
      return 0x101;
    }
    if ((_DAT_ram_3fcc4f48 == 0) &&
       (iVar1 = FUN_ram_42048b76(0,0,0x3c0a86c4,&DAT_ram_3fcc4f48), iVar1 != 0)) {
      _DAT_ram_3fcc4f48 = 0;
    }
    (*(code *)&SUB_ram_40010488)(auStack_4c,0,0x18);
    uStack_48 = 10;
    uStack_40 = 0x4b0;
    iVar1 = FUN_ram_42062980(auStack_4c);
    if (iVar1 == 0) {
      (*(code *)&SUB_ram_40010488)(auStack_30,0);
      uStack_34 = 10;
      iVar1 = FUN_ram_42062b74(&uStack_34);
      if (iVar1 == 0) {
        FUN_ram_420486e0(10,3);
        DAT_ram_3fcc4f66 = '\x01';
      }
    }
  }
  return iVar1;
}

