
uint FUN_ram_420299fc(int *param_1,int param_2)

{
  if (*param_1 != 0) {
    return param_1[1] - param_2 & ~(param_1[1] - param_2) >> 0x1f;
  }
  return 0x7fffffff;
}

