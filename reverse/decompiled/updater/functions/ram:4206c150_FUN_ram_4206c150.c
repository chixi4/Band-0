
int FUN_ram_4206c150(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_40399d1a(1,0x794);
  if (iVar1 != 0) {
    iVar2 = FUN_ram_4206c2dc();
    *(int *)(iVar1 + 0x790) = iVar2;
    if (iVar2 != 0) {
      FUN_ram_42070f80(iVar1 + 0x428);
      *(undefined4 *)(iVar1 + 0x768) = 0xffffffff;
      return iVar1;
    }
    thunk_FUN_ram_40390608(iVar1);
  }
  return 0;
}

