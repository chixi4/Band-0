
void FUN_ram_42065b30(int *param_1,code *param_2)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      if (param_2 == (code *)0x0) {
        thunk_FUN_ram_40390634();
      }
      else {
        (*param_2)();
      }
      *param_1 = 0;
    }
    return;
  }
  return;
}

