
int FUN_ram_42023a80(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_4039c08e(1,0x2c);
  if (iVar1 == 0) {
    iVar2 = -1;
  }
  else {
    if (param_2 == 1) {
      iVar2 = FUN_ram_4202433e(iVar1,param_1,param_3);
      if (iVar2 == 0) {
        *(undefined4 *)(iVar1 + 4) = 1;
        *param_4 = iVar1;
        return 0;
      }
    }
    else {
      iVar2 = -1;
    }
    thunk_FUN_ram_40390634(iVar1);
  }
  return iVar2;
}

