
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4206c69c(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  if ((char)param_3[0xf] == '\0') {
    iVar2 = param_3[0xe];
    if (iVar2 != 0) {
      param_2 = (*(code *)&SUB_ram_400104a8)(iVar2);
      param_1 = iVar2;
    }
    iVar2 = (*(code *)&SUB_ram_40010534)(param_1,param_2);
    if (iVar2 == 0) {
      return 0x101;
    }
    iVar1 = FUN_ram_4206ef30(param_4,iVar2);
    if (iVar1 != 0) {
      FUN_ram_4206c2a6(*(undefined4 *)(param_4 + 0x790),2,-iVar1);
      thunk_FUN_ram_40390608(iVar2);
      return 0x8012;
    }
    thunk_FUN_ram_40390608(iVar2);
  }
  else {
    FUN_ram_4206ef30(param_4,0);
  }
  iVar1 = param_4 + 0x3bc;
  iVar2 = FUN_ram_4206f408(iVar1,0,0,0);
  if (iVar2 != 0) {
    FUN_ram_4206c2a6(*(undefined4 *)(param_4 + 0x790),2,-iVar2);
    return 0x8013;
  }
  if ((*param_3 != 0) && (iVar2 = FUN_ram_4206efb2(iVar1), iVar2 != 0)) {
    FUN_ram_4206c2a6(*(undefined4 *)(param_4 + 0x790),2,-iVar2);
    return 0x8014;
  }
  if (param_3[0x11] != 0) {
    return 0x103;
  }
  if ((char)param_3[0xd] == '\0') {
    if (param_3[1] != 0) {
      iVar2 = FUN_ram_4206c448(param_4,param_3[1],param_3[2]);
      if (iVar2 != 0) {
        return 0x8015;
      }
      goto LAB_ram_4206c78a;
    }
    FUN_ram_4206ee72(iVar1,0);
  }
  else {
    if (_DAT_ram_3fcb6874 == 0) {
      return 0x103;
    }
    *(int *)(param_4 + 0x5c4) = _DAT_ram_3fcb6874;
    FUN_ram_4206ee72(iVar1,2);
LAB_ram_4206c78a:
    FUN_ram_4206ee94(iVar1,*(undefined4 *)(param_4 + 0x5c4),0);
  }
  if (*(char *)((int)param_3 + 0x2d) != '\0') {
    return -1;
  }
  if (param_3[0x12] != 0) {
    return -1;
  }
  if ((char)param_3[9] != '\0') {
    return -1;
  }
  iVar2 = param_3[5];
  if (param_3[3] == 0) {
    if (iVar2 == 0) goto LAB_ram_4206c7dc;
  }
  else if (iVar2 != 0) {
    iStack_1c = param_3[6];
    iStack_24 = param_3[4];
    iStack_18 = param_3[7];
    local_30 = param_4 + 0x5c8;
    iStack_14 = param_3[8];
    iStack_2c = param_4 + 0x760;
    iStack_28 = param_3[3];
    iStack_20 = iVar2;
    iVar2 = FUN_ram_4206c4a6(param_4,&local_30);
    if (iVar2 != 0) {
      return iVar2;
    }
LAB_ram_4206c7dc:
    if (((int *)param_3[0x16] != (int *)0x0) && (*(int *)param_3[0x16] != 0)) {
      FUN_ram_4206ee88(iVar1);
    }
    return 0;
  }
  return 0x103;
}

