
void FUN_ram_4205c8ac(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
      iVar1 = FUN_ram_403977fa(*(undefined4 *)*param_1);
      if (iVar1 != 0) {
        FUN_ram_4039bf1e();
      }
      FUN_ram_4039782c(*(undefined4 *)*param_1);
      thunk_FUN_ram_40390634(*param_1);
      *param_1 = 0;
    }
    return;
  }
  return;
}

