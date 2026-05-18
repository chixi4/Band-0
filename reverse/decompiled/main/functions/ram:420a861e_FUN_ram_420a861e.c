
undefined4 FUN_ram_420a861e(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0xffffc180;
  }
  uVar1 = 0xffffc180;
  if (*param_1 == 0) {
    if (*(code **)(param_2 + 0x24) != (code *)0x0) {
      iVar2 = (**(code **)(param_2 + 0x24))(0xffffc180);
      param_1[1] = iVar2;
      if (iVar2 == 0) {
        return 0xffffc080;
      }
    }
    *param_1 = param_2;
    uVar1 = 0;
  }
  return uVar1;
}

