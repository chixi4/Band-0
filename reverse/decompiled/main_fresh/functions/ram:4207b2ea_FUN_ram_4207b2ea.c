
undefined1 *
FUN_ram_4207b2ea(undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  *param_1 = 0xdd;
  param_1[1] = param_4;
  FUN_ram_4039c11e(param_1 + 2,0x3fcb7e64,3);
  param_1[5] = param_2;
  param_1[6] = param_3;
  return param_1 + 7;
}

