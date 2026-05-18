
int FUN_ram_420718e6(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_14;
  
  iVar1 = FUN_ram_4207272e(&uStack_14,param_2,param_3 - *param_2);
  if (iVar1 == 0) {
    iVar2 = FUN_ram_4207183e(param_1,uStack_14);
    iVar1 = -0x4e80;
    if ((iVar2 == 0) && (iVar1 = -0x4f80, *(int *)(param_1 + 8) == 1)) {
      iVar1 = FUN_ram_420726c0(param_1 + 0xc,param_1 + 0x8c,param_2,param_3 - *param_2);
    }
  }
  return iVar1;
}

