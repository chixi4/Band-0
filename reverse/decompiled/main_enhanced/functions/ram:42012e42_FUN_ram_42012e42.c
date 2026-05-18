
uint FUN_ram_42012e42(int param_1)

{
  int in_a5;
  
  return *(uint *)(**(int **)(in_a5 + 0x7a4 + param_1) + 0x1c) & 0x3ff;
}

