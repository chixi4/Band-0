
int FUN_ram_4201d37e(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x102;
  }
  uVar2 = param_1[10];
  if (uVar2 == 0) {
    return -1;
  }
  if (uVar2 < 4) {
    iVar1 = 0;
    if (uVar2 != 1) {
      iVar1 = FUN_ram_42018e8e(*param_1);
    }
LAB_ram_4201d3ac:
    if (param_1[5] != 0) {
      thunk_FUN_ram_40390608();
    }
    iVar3 = param_1[4];
    if (iVar3 != 0) {
      FUN_ram_4205bd42(iVar3);
      FUN_ram_4205be46(iVar3);
    }
  }
  else {
    iVar1 = 0;
    if (uVar2 == 4) goto LAB_ram_4201d3ac;
  }
  if (*(int *)(param_1[2] + 4) == 0 && iVar1 == 0) {
    if (param_1[10] == 3) {
      if ((*(int *)(param_1[2] + 8) - 0x10U < 0x10) &&
         (iVar1 = FUN_ram_42018f42(param_1[1]), iVar1 != 0)) goto LAB_ram_4201d3e8;
      FUN_ram_4201cc96(7,param_1[2] + 8,4);
    }
    iVar1 = 0;
  }
LAB_ram_4201d3e8:
  thunk_FUN_ram_40390608(param_1);
  FUN_ram_4201cc96(8,0,0);
  return iVar1;
}

