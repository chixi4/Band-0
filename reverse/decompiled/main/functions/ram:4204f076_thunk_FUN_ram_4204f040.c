
void thunk_FUN_ram_4204f040(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    FUN_ram_4204f024(param_1,iVar1);
    thunk_FUN_ram_40390634(iVar1);
    iVar1 = iVar2;
  }
  return;
}

