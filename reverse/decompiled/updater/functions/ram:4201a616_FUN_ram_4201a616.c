
void FUN_ram_4201a616(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while( true ) {
    if (param_1[1] <= iVar1) break;
    iVar2 = iVar1 * 4;
    iVar1 = iVar1 + 1;
    FUN_ram_4201a3fe(*(undefined4 *)(*param_1 + iVar2));
  }
  thunk_FUN_ram_40390608();
  thunk_FUN_ram_40390608(param_1);
  return;
}

