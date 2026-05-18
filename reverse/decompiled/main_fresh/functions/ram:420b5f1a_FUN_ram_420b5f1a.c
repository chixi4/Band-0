
void FUN_ram_420b5f1a(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*param_2 == 0) {
    uVar1 = 0x6003f000;
  }
  *param_1 = uVar1;
  param_1[2] = 0x403892a8;
  param_1[3] = 0x403892f2;
  param_1[4] = 0x403891c6;
  param_1[5] = 0x40389274;
  param_1[6] = 0x420a5d68;
  param_1[7] = 0x420a5eaa;
  param_1[8] = 0x420a5d98;
  param_1[9] = 0x420a5dcc;
  param_1[0xb] = 0x420a5e18;
  param_1[0xd] = 0x420a5e78;
  param_1[0xe] = 0x403891f8;
  param_1[0xf] = 0x40389244;
  param_1[0xc] = 0x420a5e6e;
  param_1[0x10] = 0x40389216;
  param_1[1] = gp + -0x72c;
  return;
}

