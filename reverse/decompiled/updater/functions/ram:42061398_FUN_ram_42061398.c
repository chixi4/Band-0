
undefined4 FUN_ram_42061398(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_2;
  if (param_2 != (int *)0x0) {
    do {
      iVar1 = *piVar2;
      if (iVar1 < 1) {
        if (iVar1 != param_3) {
          return 0x4d;
        }
        break;
      }
      piVar2 = piVar2 + 1;
    } while (iVar1 != param_3);
  }
  if (*param_1 == 1) {
    if (param_3 != param_1[0x1c]) {
      return 0x4d;
    }
  }
  else if ((param_3 != param_1[0x1c]) && (iVar1 = FUN_ram_420601e0(param_1), iVar1 == -1)) {
    return 0x4d;
  }
  if (param_1[0x1f] == 0) {
    return 1;
  }
  if (*(int *)(param_1[0x1f] + 0x6c) != 0) {
    if (param_2 == (int *)0x0) {
      return 0x4d;
    }
    return 0;
  }
  return 0;
}

