
int FUN_ram_4202e8ec(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  
  if (1 < param_3) {
    return -0x4f80;
  }
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = FUN_ram_4202e7e8();
    if (iVar1 != 0) {
      return -0x4e80;
    }
  }
  else if (*param_2 != *(int *)(param_1 + 4)) {
    return -0x4f80;
  }
  if (*(int *)(param_1 + 8) != 1) {
    return -0x4f80;
  }
  if (param_3 == 1) {
    iVar1 = FUN_ram_4202fa5c(param_1 + 0x8c,param_2 + 0x1a);
    return iVar1;
  }
  iVar1 = FUN_ram_4202fa5c(param_1 + 0x74,param_2 + 0x1a);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_420249f4(param_1 + 0x6c,param_2 + 0x18);
    return iVar1;
  }
  return iVar1;
}

