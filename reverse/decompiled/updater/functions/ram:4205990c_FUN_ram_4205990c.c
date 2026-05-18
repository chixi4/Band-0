
void FUN_ram_4205990c(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
      FUN_ram_40395ad4(*(undefined4 *)*param_1);
      FUN_ram_40395af2(*(undefined4 *)*param_1);
      thunk_FUN_ram_40390608(*param_1);
      *param_1 = 0;
    }
    return;
  }
  return;
}

