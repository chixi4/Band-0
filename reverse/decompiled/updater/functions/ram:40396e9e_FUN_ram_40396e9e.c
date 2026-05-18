
undefined4 FUN_ram_40396e9e(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = thunk_FUN_ram_40394ee8();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (param_2 != (int *)0x0) {
      iVar1 = *param_1;
      *param_2 = (int)param_1;
      uVar2 = 1;
      param_2[1] = iVar1;
      param_2[2] = param_1[0x11];
    }
  }
  return uVar2;
}

