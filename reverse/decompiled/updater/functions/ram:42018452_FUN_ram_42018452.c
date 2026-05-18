
uint FUN_ram_42018452(uint param_1)

{
  return (int)(*(uint *)(**(int **)(gp + -0x540) + 0x3c) & 0x1ffffff) >> (param_1 & 0x1f) & 1;
}

