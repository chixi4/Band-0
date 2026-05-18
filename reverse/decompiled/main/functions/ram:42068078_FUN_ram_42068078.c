
void FUN_ram_42068078(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      FUN_ram_4206d7fc(*param_1,(uint)*(ushort *)((int)param_1 + 6) << 2);
    }
    param_1[1] = 1;
    *param_1 = 0;
    return;
  }
  return;
}

