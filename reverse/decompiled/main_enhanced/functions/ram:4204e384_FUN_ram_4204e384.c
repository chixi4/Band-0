
void FUN_ram_4204e384(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_ram_4204e34c(param_1 + 0x38);
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 != 0) {
    for (iVar1 = *(int *)(iVar2 + -4) * 0x54 + iVar2; iVar2 != iVar1; iVar1 = iVar1 + -0x54) {
      thunk_FUN_ram_4204f040(iVar1 + -0x10);
    }
    thunk_FUN_ram_40390634(iVar2 + -4);
    return;
  }
  return;
}

