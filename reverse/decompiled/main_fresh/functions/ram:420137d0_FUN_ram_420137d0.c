
uint FUN_ram_420137d0(int param_1,uint param_2)

{
  if ((param_1 != 0) && (param_2 < 0x40)) {
    return (uint)*(byte *)(gp + param_2 * 3 + -0x59e);
  }
  return 0xffffffff;
}

