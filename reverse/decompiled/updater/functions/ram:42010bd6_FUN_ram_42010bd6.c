
void FUN_ram_42010bd6(int *param_1,int *param_2)

{
  int iVar1;
  
  param_2[2] = 0x3c0702a4;
  param_2[6] = *param_1;
  iVar1 = param_1[0x22];
  if (iVar1 == 0x19) {
    iVar1 = FUN_ram_42010a00();
    param_2[2] = 0x3c0702b4;
    *param_2 = iVar1;
    iVar1 = 0x42000b8e;
  }
  else {
    if (iVar1 == 0x18) {
      param_2[1] = 1;
      *param_2 = 0;
      param_2[2] = 0x3c0702c0;
      return;
    }
    if (iVar1 != 0x1b) {
      return;
    }
    iVar1 = FUN_ram_42010d3a();
    if (iVar1 == -1) {
      iVar1 = 0;
    }
    param_2[2] = 0x3c0702e0;
    *param_2 = iVar1;
    iVar1 = 0x42000b56;
  }
  param_2[4] = iVar1;
  return;
}

