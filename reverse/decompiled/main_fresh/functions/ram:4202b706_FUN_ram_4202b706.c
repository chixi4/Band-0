
undefined4 FUN_ram_4202b706(int param_1)

{
  int iVar1;
  int iStack_14;
  
  do {
    iStack_14 = *(int *)(param_1 + 0x4c);
    if (iStack_14 == 0) {
      return 0;
    }
    iVar1 = *(int *)(iStack_14 + 4);
    *(int *)(param_1 + 0x4c) = iVar1;
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x50) = param_1 + 0x4c;
    }
    iStack_14 = iStack_14 + -0x10;
    iVar1 = FUN_ram_420334da(param_1,&iStack_14);
  } while (iVar1 != 1);
  iVar1 = *(int *)(param_1 + 0x4c);
  *(int *)(iStack_14 + 0x14) = iVar1;
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x50) = iStack_14 + 0x14;
  }
  *(int *)(param_1 + 0x4c) = iStack_14 + 0x10;
  return 1;
}

