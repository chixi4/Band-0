
void FUN_ram_420b3e64(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1[1];
  iVar3 = *param_1;
  FUN_ram_40396966();
  iVar2 = iVar1 * 4 + iVar3;
  iVar1 = *(int *)(iVar2 + 0x60) + -1;
  *(int *)(iVar2 + 0x60) = iVar1;
  if (iVar1 != 0) {
    FUN_ram_40396994();
    return;
  }
  if (*(int *)(iVar2 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  *(undefined4 *)(iVar2 + 0x5c) = 0;
  FUN_ram_40396994();
  thunk_FUN_ram_40390634(param_1);
  FUN_ram_420b3dd0(iVar3);
  return;
}

