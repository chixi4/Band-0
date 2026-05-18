
void FUN_ram_42010c6e(int *param_1,int *param_2)

{
  int iVar1;
  
  param_2[2] = 0x3c0a82b8;
  param_2[6] = *param_1;
  iVar1 = param_1[0x22];
  if (iVar1 == 0x19) {
    iVar1 = FUN_ram_42010a98();
    param_2[2] = 0x3c0a82c8;
    *param_2 = iVar1;
    iVar1 = 0x42000c26;
  }
  else {
    if (iVar1 == 0x18) {
      param_2[1] = 1;
      *param_2 = 0;
      param_2[2] = 0x3c0a82d4;
      return;
    }
    if (iVar1 != 0x1b) {
      return;
    }
    iVar1 = FUN_ram_42010dd2();
    if (iVar1 == -1) {
      iVar1 = 0;
    }
    param_2[2] = 0x3c0a82f4;
    *param_2 = iVar1;
    iVar1 = 0x42000bee;
  }
  param_2[4] = iVar1;
  return;
}

