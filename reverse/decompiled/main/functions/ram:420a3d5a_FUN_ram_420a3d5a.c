
int * FUN_ram_420a3d5a(int param_1,int *param_2)

{
  if (param_1 != -1) {
    param_2[1] = param_1 / 1000 >> 0x1f;
    *param_2 = param_1 / 1000;
    param_2[2] = (param_1 % 1000) * 1000;
    return param_2;
  }
  return (int *)0x0;
}

