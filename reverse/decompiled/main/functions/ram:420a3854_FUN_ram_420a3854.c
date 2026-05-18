
int FUN_ram_420a3854(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_ram_420a33e2();
  if (iVar1 != 0) {
    iVar2 = FUN_ram_420a3d8a();
    *(int *)(iVar1 + 0x38) = iVar2;
    if (iVar2 != 0) {
      iVar3 = FUN_ram_4039c08e(1,0x74);
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 0x70) = 0xffffffff;
        *(int *)(iVar1 + 8) = iVar3;
        return iVar1;
      }
      thunk_FUN_ram_40390634(iVar2);
    }
    thunk_FUN_ram_40390634(iVar1);
  }
  return 0;
}

