
void FUN_ram_403917a4(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_ram_40396966();
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar2 = FUN_ram_403970d6(iVar1);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf9e(0,0,0,0);
    }
    FUN_ram_4039782c(iVar1);
    *param_1 = 0;
  }
  FUN_ram_40396994();
  return;
}

