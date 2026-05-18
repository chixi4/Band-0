
undefined4 FUN_ram_42050770(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    bVar1 = *(byte *)(param_1 + iVar2);
    if ((bVar1 != *(byte *)(param_2 + iVar2)) &&
       ((0x19 < (byte)((bVar1 | 0x20) + 0x9f) ||
        ((bVar1 | 0x20) != (*(byte *)(param_2 + iVar2) | 0x20))))) break;
    if ((iVar2 == param_3 + -1) || (iVar2 = iVar2 + 1, bVar1 == 0)) {
      return 0;
    }
  }
  return 1;
}

