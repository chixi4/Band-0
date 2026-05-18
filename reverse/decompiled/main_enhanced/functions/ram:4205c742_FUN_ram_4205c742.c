
undefined4 FUN_ram_4205c742(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = FUN_ram_403975e0(*param_1,0xffffffff);
  }
  else {
    iVar1 = FUN_ram_403975e0(*param_1,(param_2 + 9U) / 10 + 1);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
  }
  if (iVar1 == 1) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

