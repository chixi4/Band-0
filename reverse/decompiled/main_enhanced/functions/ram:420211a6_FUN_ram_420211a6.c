
void FUN_ram_420211a6(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      thunk_FUN_ram_40390634();
      *param_1 = 0;
      *(undefined1 *)((int)param_1 + 6) = 0;
    }
    return;
  }
  return;
}

