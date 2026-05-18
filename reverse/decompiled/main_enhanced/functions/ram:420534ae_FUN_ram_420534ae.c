
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420534ae(int *param_1,int param_2)

{
  int *piVar1;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    *param_1 = param_2;
    piVar1 = param_1;
    param_1[1] = (int)_DAT_ram_3fcc52dc;
    _DAT_ram_3fcc52dc = piVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

