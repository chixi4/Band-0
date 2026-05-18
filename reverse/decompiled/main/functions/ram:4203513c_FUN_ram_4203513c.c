
undefined4 FUN_ram_4203513c(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = (param_3 + -1) * 0x1000000 >> 0x18;
  while( true ) {
    if ((char)iVar1 < '\0') {
      return 0;
    }
    uVar2 = *(uint *)(param_1 + iVar1 * 4);
    uVar3 = *(uint *)(iVar1 * 4 + param_2);
    if (uVar3 < uVar2) break;
    iVar1 = iVar1 + -1;
    if (uVar2 < uVar3) {
      return 0xffffffff;
    }
  }
  return 1;
}

