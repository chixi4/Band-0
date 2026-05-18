
void FUN_ram_420afbd4(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  *(undefined2 *)(param_1 + 3) = param_2;
  *(undefined2 *)((int)param_1 + 0xe) = param_3;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0x19] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  (*(code *)&SUB_ram_40010488)(param_1 + 0x17,0,8);
  param_1[9] = 0x4209ffc8;
  param_1[10] = 0x4209fffa;
  param_1[0xb] = 0x420a004c;
  param_1[0xc] = 0x420a0084;
  param_1[8] = param_1;
  if (((param_1 != (undefined4 *)0x3fcc4ca8) && (param_1 != (undefined4 *)0x3fcc4d10)) &&
     (param_1 != (undefined4 *)0x3fcc4d78)) {
    return;
  }
  FUN_ram_40391808(param_1 + 0x16);
  return;
}

