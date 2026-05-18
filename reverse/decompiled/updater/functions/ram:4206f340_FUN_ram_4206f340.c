
int FUN_ram_4206f340(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[1];
  *param_1 = (int)param_2;
  if (iVar1 != 0x303) {
    return -0x5e80;
  }
  if (*param_2 != 0x303) {
    return -0x5e80;
  }
  if (param_2[7] == 0) {
    return -0x7400;
  }
  param_1[2] = 0x303;
  param_1[0x25] = 0;
  iVar1 = FUN_ram_4202939a(1,0x414d);
  param_1[0x16] = iVar1;
  if (iVar1 != 0) {
    iVar1 = FUN_ram_4202939a(1,0x114d);
    param_1[0x25] = iVar1;
    if (iVar1 != 0) {
      FUN_ram_4206e564(param_1);
      FUN_ram_4206e56e(param_1);
      iVar1 = FUN_ram_4206f262(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      goto LAB_ram_4206f388;
    }
  }
  iVar1 = -0x7f00;
LAB_ram_4206f388:
  FUN_ram_420293a0(param_1[0x16]);
  FUN_ram_420293a0(param_1[0x25]);
  *param_1 = 0;
  param_1[0x16] = 0;
  param_1[0x25] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  return iVar1;
}

