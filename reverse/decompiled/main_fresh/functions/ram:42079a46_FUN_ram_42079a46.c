
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42079a46(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _DAT_ram_3fcc4018;
  iVar2 = param_1[4];
  if (param_1[5] == iVar2) {
    param_1[5] = 0;
    param_1[4] = 0;
    if (iVar2 == 0) {
      return;
    }
  }
  else {
    param_1[4] = *(int *)(iVar2 + 0x20);
    *(undefined4 *)(iVar2 + 0x20) = 0;
  }
  param_1[6] = param_1[6] + -1;
  *param_1 = *param_1 + -1;
  *(int *)(iVar1 + 0x10c) = *(int *)(iVar1 + 0x10c) + -1;
  return;
}

