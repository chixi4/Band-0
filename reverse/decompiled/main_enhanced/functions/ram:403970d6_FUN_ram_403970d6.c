
int FUN_ram_403970d6(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_40396f58();
  }
  FUN_ram_40396966();
  iVar1 = 0;
  if (*param_1 == 0) {
    iVar1 = param_1[2];
  }
  FUN_ram_40396994();
  return iVar1;
}

