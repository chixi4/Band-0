
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42080692(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  if (_DAT_ram_3fcc4014 == 0) {
    puVar3 = &DAT_ram_3c0fc6a0;
    uVar2 = 4;
  }
  else {
    if (*(char *)(_DAT_ram_3fcc4014 + 0x128) != '\x01') {
      if (*(char *)(_DAT_ram_3fcc4014 + 0x128) == '\x05') {
        FUN_ram_4207a038(1,4,2,"/////w==");
        return 0;
      }
      (*(code *)&SUB_ram_40011d44)();
      FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fc6bc,*(undefined1 *)(_DAT_ram_3fcc4014 + 0x128),0);
      *(undefined1 *)(_DAT_ram_3fcc4014 + 0x128) = 0;
      if (1 < *(int *)(*(int *)(gp + -0xb4) + 4) + 1U) {
        iVar1 = FUN_ram_4208589e(0);
        if (iVar1 == 0) {
          return 0;
        }
        (*(code *)&SUB_ram_40011d48)();
        return iVar1;
      }
      (*(code *)&SUB_ram_40011d48)();
      FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fc6d4);
      return 0x300a;
    }
    puVar3 = &DAT_ram_3c0fe9ec;
    uVar2 = 1;
  }
  FUN_ram_4207a038(1,4,uVar2,puVar3);
  return 0x3007;
}

