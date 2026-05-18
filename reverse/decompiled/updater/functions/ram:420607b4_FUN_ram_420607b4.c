
void FUN_ram_420607b4(int *param_1)

{
  int iVar1;
  
  while (param_1 != (int *)0x0) {
    FUN_ram_4205e51c(param_1[3],1);
    FUN_ram_4206636c(param_1[5],1);
    FUN_ram_4205e466(param_1[2]);
    iVar1 = *param_1;
    thunk_FUN_ram_40390608(param_1);
    param_1 = (int *)iVar1;
  }
  return;
}

