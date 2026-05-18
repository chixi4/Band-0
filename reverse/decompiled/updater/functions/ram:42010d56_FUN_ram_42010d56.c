
bool FUN_ram_42010d56(uint *param_1,uint param_2)

{
  if (param_1[7] != 0) {
    return ((*param_1 | param_1[1] | param_1[2]) & param_2) == param_2;
  }
  return false;
}

