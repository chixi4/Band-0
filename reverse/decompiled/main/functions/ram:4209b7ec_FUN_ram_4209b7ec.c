
int FUN_ram_4209b7ec(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                    int param_5,int param_6)

{
  int iVar1;
  
  *param_1 = 0xdd;
  param_1[1] = (char)param_6 + '\x04' + (char)param_4;
  param_1[2] = (char)((uint)param_2 >> 0x18);
  param_1[3] = (char)((uint)param_2 >> 0x10);
  param_1[5] = (char)param_2;
  param_1[4] = (char)((uint)param_2 >> 8);
  iVar1 = FUN_ram_4039c11e(param_1 + 6,param_3,param_4);
  iVar1 = iVar1 + param_4;
  if (param_5 != 0) {
    iVar1 = FUN_ram_4039c11e(iVar1,param_5,param_6);
    iVar1 = iVar1 + param_6;
  }
  return iVar1;
}

