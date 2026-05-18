
undefined4 FUN_ram_420616aa(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = (param_2 + 0xffb) / 0xffc;
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  uVar2 = FUN_ram_42010f1e(4,1,iVar1 * 0xc,0x808);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  iVar3 = FUN_ram_42010f1e(4,1,iVar1 * 0xc,0x808);
  *(int *)(param_1 + 0x20) = iVar3;
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x18) = iVar1;
      *param_3 = iVar1 * 0xffc;
      return 0;
    }
    thunk_FUN_ram_40390634();
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    thunk_FUN_ram_40390634();
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return 0x101;
}

