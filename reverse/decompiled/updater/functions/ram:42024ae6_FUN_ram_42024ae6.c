
uint FUN_ram_42024ae6(int *param_1,uint param_2)

{
  if (param_2 < (uint)*(ushort *)((int)param_1 + 6) << 5) {
    return *(uint *)(*param_1 + (param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1;
  }
  return 0;
}

