
undefined4 FUN_ram_4201ccac(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0x400;
  do {
    while( true ) {
      iVar2 = FUN_ram_4205ba70(*(undefined4 *)(param_1 + 0x10));
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      iVar2 = FUN_ram_4205ba92(*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 0x14) + iVar1,
                               iVar3);
      if (-1 < iVar2) break;
      if (iVar2 != -0x7007) {
        return 0xffffffff;
      }
    }
    iVar3 = iVar3 - iVar2;
    iVar1 = iVar1 + iVar2;
  } while (0 < iVar3);
  *(int *)(param_1 + 0x1c) = iVar1;
  return 0;
}

