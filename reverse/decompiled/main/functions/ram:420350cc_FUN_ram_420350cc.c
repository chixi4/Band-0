
int FUN_ram_420350cc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (param_2 + -1) * 0x1000000 >> 0x18;
  do {
    iVar2 = iVar1;
    if ((char)iVar2 < '\0') break;
    iVar1 = iVar2 + -1;
  } while (*(int *)((iVar2 + -1) * 4 + param_1 + 4) == 0);
  iVar2 = (iVar2 + 1) * 0x1000000 >> 0x18;
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = 0;
    for (uVar3 = *(uint *)(param_1 + iVar2 * 4 + -4); uVar3 != 0; uVar3 = uVar3 >> 1) {
      iVar1 = iVar1 + 1;
    }
    iVar1 = ((iVar2 + -1) * 0x20 + iVar1) * 0x10000 >> 0x10;
  }
  return iVar1;
}

