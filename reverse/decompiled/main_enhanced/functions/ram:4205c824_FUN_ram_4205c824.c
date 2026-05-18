
undefined4 FUN_ram_4205c824(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  undefined4 local_14 [4];
  
  if (param_2 == (undefined4 *)0x0) {
    param_2 = local_14;
  }
  if (param_3 == 0) {
    iVar1 = FUN_ram_403974ca(*(undefined4 *)*param_1,param_2,0xffffffff);
  }
  else {
    iVar1 = FUN_ram_403974ca(*(undefined4 *)*param_1,param_2,param_3 / 10);
    if (iVar1 == 0) {
      *param_2 = 0;
      return 0xffffffff;
    }
  }
  if (iVar1 == 1) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

