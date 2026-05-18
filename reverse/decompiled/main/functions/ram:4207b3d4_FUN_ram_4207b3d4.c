
undefined1 * FUN_ram_4207b3d4(undefined1 *param_1,undefined4 param_2,int param_3,int param_4)

{
  param_1[1] = (char)param_4 + '\b';
  *param_1 = 0xdd;
  FUN_ram_4039c11e(param_1 + 2,0x3fcb7e64,3);
  param_1[5] = 0xdd;
  param_1[6] = 1;
  FUN_ram_4039c11e(param_1 + 7,param_2,3);
  if ((param_4 != 0) && (param_3 != 0)) {
    FUN_ram_4039c11e(param_1 + 10,param_3,param_4);
  }
  return param_1 + param_4 + 10;
}

