
int FUN_ram_42048ca0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_18;
  int iStack_14;
  
  iVar2 = FUN_ram_420491d0(1,0,0);
  if (iVar2 != 0) {
    iStack_14 = 0;
    iVar3 = FUN_ram_42049360(iVar2,0,*(undefined4 *)(iVar2 + 0x10),0,&iStack_14,&uStack_18);
    iVar1 = iStack_14;
    if (iVar3 == 0) {
      FUN_ram_4039c11e(param_1,iStack_14,0x20);
      FUN_ram_4039c11e(param_1 + 0x20,*(int *)(iVar2 + 0x14) + iVar1);
      thunk_FUN_ram_4204a3e0(uStack_18);
      return iVar2;
    }
  }
  return 0;
}

