
void FUN_ram_4207b89c(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*param_2 == 0) {
    uVar1 = 0x6003f000;
  }
  *param_1 = uVar1;
  param_1[2] = 0x403870ba;
  param_1[3] = 0x40387104;
  param_1[4] = 0x40386fd8;
  param_1[5] = 0x40387086;
  param_1[6] = 0x4206b6ea;
  param_1[7] = 0x4206b82c;
  param_1[8] = 0x4206b71a;
  param_1[9] = 0x4206b74e;
  param_1[0xb] = 0x4206b79a;
  param_1[0xd] = 0x4206b7fa;
  param_1[0xe] = 0x4038700a;
  param_1[0xf] = 0x40387056;
  param_1[0xc] = 0x4206b7f0;
  param_1[0x10] = 0x40387028;
  param_1[1] = gp + -0x790;
  return;
}

