
uint FUN_ram_42011566(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    return *(ushort *)(*param_1 + 2) & 1;
  }
  return 0xffffffff;
}

