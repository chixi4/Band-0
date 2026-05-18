
undefined4 FUN_ram_40397042(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  if (param_3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_40396f58();
  }
  uVar1 = 0;
  if (*(char *)((int)param_1 + 0x46) == '\x01') {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *param_1;
    }
    *param_3 = (int)param_1;
    uVar1 = 1;
  }
  return uVar1;
}

