
void FUN_ram_4207a450(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1[1];
  iVar3 = *param_1;
  FUN_ram_40394d60();
  iVar2 = iVar1 * 4 + iVar3;
  iVar1 = *(int *)(iVar2 + 0x60) + -1;
  *(int *)(iVar2 + 0x60) = iVar1;
  if (iVar1 != 0) {
    FUN_ram_40394d8e();
    return;
  }
  *(undefined4 *)(iVar2 + 0x5c) = 0;
  FUN_ram_40394d8e();
  thunk_FUN_ram_40390608(param_1);
  FUN_ram_4207a3d0(iVar3);
  return;
}

