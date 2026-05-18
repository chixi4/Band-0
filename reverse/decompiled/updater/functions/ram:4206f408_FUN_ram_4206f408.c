
undefined4 FUN_ram_4206f408(int *param_1,int param_2,undefined1 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  *(char *)(param_1 + 2) = (char)param_2;
  *(undefined1 *)((int)param_1 + 9) = param_3;
  if (param_2 == 0) {
    *(undefined1 *)((int)param_1 + 10) = 2;
  }
  *(undefined1 *)((int)param_1 + 0xd) = 1;
  *(undefined1 *)((int)param_1 + 0xe) = 1;
  param_1[1] = 0x303;
  *param_1 = 0x303;
  if (param_4 == 2) {
    param_1[4] = 0x3c07a7c4;
    param_1[0x10] = 0x3c07a7d8;
    iVar2 = 0x3c07a798;
    iVar1 = 0x3c07a794;
  }
  else {
    iVar2 = FUN_ram_4206d430();
    param_1[0x10] = 0x3c07a7e8;
    param_1[4] = iVar2;
    if ((param_1[1] == 0x303) && (*param_1 == 0x303)) {
      iVar2 = 0x3c07a7a0;
    }
    else {
      iVar2 = 0x3c07a7b4;
    }
    iVar1 = 0x3c07a7d0;
  }
  param_1[0x14] = iVar2;
  param_1[0x15] = iVar1;
  return 0;
}

