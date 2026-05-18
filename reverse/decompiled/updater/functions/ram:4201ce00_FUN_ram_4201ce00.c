
int FUN_ram_4201ce00(int param_1)

{
  int iVar1;
  int iVar2;
  int aiStack_24 [2];
  
  while( true ) {
    aiStack_24[0] = 0;
    iVar1 = FUN_ram_4205c954(*(undefined4 *)(param_1 + 0x10),aiStack_24);
    iVar2 = FUN_ram_4205c8b4(*(undefined4 *)(param_1 + 0x10),iVar1);
    if (iVar2 != 0) {
      return iVar2;
    }
    if (iVar1 != 0) {
      for (; 0 < iVar1; iVar1 = iVar1 - iVar2) {
        iVar2 = FUN_ram_4205bcec(*(undefined4 *)(param_1 + 0x10),aiStack_24[0],iVar1);
        if (iVar2 < 0) {
          return -1;
        }
        aiStack_24[0] = aiStack_24[0] + iVar2;
      }
    }
    iVar1 = FUN_ram_4205bc48(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 < 0) break;
    iVar1 = FUN_ram_4205c962(*(undefined4 *)(param_1 + 0x10));
    iVar2 = FUN_ram_4201cbf6(param_1,iVar1);
    if (iVar2 != 0) {
      return iVar2;
    }
    if (iVar1 < 0x135) {
      if ((iVar1 < 0x133) && (2 < iVar1 - 0x12dU)) {
        return 0;
      }
    }
    else if (iVar1 != 0x191) {
      return 0;
    }
  }
  return iVar1;
}

