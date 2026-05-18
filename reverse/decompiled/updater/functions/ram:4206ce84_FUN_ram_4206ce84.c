
int FUN_ram_4206ce84(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_ram_4206c9fa();
  if (iVar1 != 0) {
    iVar2 = FUN_ram_4206d3b0();
    *(int *)(iVar1 + 0x38) = iVar2;
    if (iVar2 != 0) {
      iVar3 = FUN_ram_40399d1a(1,0x70);
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 0x6c) = 0xffffffff;
        *(int *)(iVar1 + 8) = iVar3;
        return iVar1;
      }
      thunk_FUN_ram_40390608(iVar2);
    }
    thunk_FUN_ram_40390608(iVar1);
  }
  return 0;
}

