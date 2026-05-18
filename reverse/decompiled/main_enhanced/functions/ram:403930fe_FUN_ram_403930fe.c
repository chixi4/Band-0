
bool FUN_ram_403930fe(int *param_1)

{
  if (param_1 != (int *)0x0) {
    return *param_1 != 0 || param_1[1] != 0;
  }
  return false;
}

