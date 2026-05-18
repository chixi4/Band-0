
uint FUN_ram_420561c0(int param_1,int param_2,undefined4 param_3)

{
  *(char *)(param_2 + param_1) = (char)((uint)param_3 >> 8);
  *(char *)(param_2 + (param_1 + 1U & 0xffff)) = (char)param_3;
  return param_1 + 2U & 0xffff;
}

