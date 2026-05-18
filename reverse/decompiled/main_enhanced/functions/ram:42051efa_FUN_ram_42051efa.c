
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42051efa(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if ((param_3 != (int *)0x0) && (*param_3 != 0)) {
    if (_DAT_ram_3fcc52b4 != 0) {
      local_20 = 0;
      uStack_1c = param_1;
      uStack_18 = param_2;
      FUN_ram_4205c7d0(&DAT_ram_3fcc52b4,&local_20);
      FUN_ram_4205c742(param_3,0);
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

