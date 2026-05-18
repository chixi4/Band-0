
int FUN_ram_4202e890(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_14;
  
  iVar1 = FUN_ram_4203017e(&uStack_14,param_2,param_3 - *param_2);
  if (iVar1 == 0) {
    iVar2 = FUN_ram_4202e7e8(param_1,uStack_14);
    iVar1 = -0x4e80;
    if ((iVar2 == 0) && (iVar1 = -0x4f80, *(int *)(param_1 + 8) == 1)) {
      iVar1 = FUN_ram_42030110(param_1 + 0xc,param_1 + 0x8c,param_2,param_3 - *param_2);
    }
  }
  return iVar1;
}

