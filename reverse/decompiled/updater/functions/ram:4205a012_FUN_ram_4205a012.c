
int FUN_ram_4205a012(uint *param_1,undefined4 *param_2,byte param_3)

{
  int iVar1;
  int *piVar2;
  char cStack_15;
  int *piStack_14;
  
  piStack_14 = (int *)0x0;
  if ((param_2 == (undefined4 *)0x0) || (*param_2 = 0, param_1 == (uint *)0x0)) {
    return -0x10;
  }
  if ((param_1[4] != 0) && ((param_1[10] & 8) == 0)) {
    FUN_ram_420599c2();
    param_1[6] = param_1[6] + 1;
    FUN_ram_420599ec();
    if (((param_1[10] & 3) == 0 && (param_3 & 4) == 0) && ((char)param_1[3] == '\0')) {
      iVar1 = FUN_ram_420598a0(param_1 + 4,&piStack_14,param_1[9]);
      if (iVar1 == -1) {
        FUN_ram_420599c2();
        param_1[6] = param_1[6] - 1;
        FUN_ram_420599ec();
        return -3;
      }
    }
    else {
      iVar1 = FUN_ram_420598dc(param_1 + 4,&piStack_14);
      if (iVar1 == -1) {
        FUN_ram_420599c2();
        param_1[6] = param_1[6] - 1;
        FUN_ram_420599ec();
        iVar1 = FUN_ram_42059fe8(param_1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if ((param_1[10] & 1) != 0) {
          return -0xb;
        }
        return -7;
      }
    }
    FUN_ram_420599c2();
    param_1[6] = param_1[6] - 1;
    FUN_ram_420599ec();
    if (((param_1[10] & 8) != 0) && (iVar1 = FUN_ram_4205aad2(piStack_14), iVar1 != 0)) {
      return -0xb;
    }
    if ((*param_1 & 0xf0) == 0x10) {
      iVar1 = FUN_ram_4205aae2(piStack_14,&cStack_15);
      piVar2 = piStack_14;
      if (iVar1 != 0) {
        if (cStack_15 == -0xf) {
          return 0;
        }
        return (int)cStack_15;
      }
    }
    else {
      piVar2 = (int *)*piStack_14;
    }
    if ((code *)param_1[0xc] != (code *)0x0) {
      (*(code *)param_1[0xc])(param_1,1,*(undefined2 *)(piVar2 + 2));
    }
    *param_2 = piStack_14;
    return 0;
  }
  iVar1 = FUN_ram_42059fe8(param_1);
  if (iVar1 == 0) {
    return -0xb;
  }
  return iVar1;
}

