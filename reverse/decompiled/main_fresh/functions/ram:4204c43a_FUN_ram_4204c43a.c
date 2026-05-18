
void FUN_ram_4204c43a(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xfe;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0;
  FUN_ram_4204eefe(param_1 + 0x11);
  param_1[0x14] = 0;
  return;
}

