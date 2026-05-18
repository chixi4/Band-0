
void FUN_ram_42054dd4(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    while (param_2 != (int *)0x0) {
      iVar1 = *param_2;
      param_2 = (int *)param_2[3];
      if (iVar1 == *param_1) {
        FUN_ram_42054db2();
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

