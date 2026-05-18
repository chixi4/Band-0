
undefined4 FUN_ram_42046d24(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 1);
  *(undefined2 *)((int)param_2 + 6) = *(undefined2 *)((int)param_1 + 6);
  param_2[2] = param_1[9];
  param_2[3] = param_1[0xd];
  param_2[4] = param_1[0xf];
  param_2[5] = param_1[0x14];
  return 0;
}

