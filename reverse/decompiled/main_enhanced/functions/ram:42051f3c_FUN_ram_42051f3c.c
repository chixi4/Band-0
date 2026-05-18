
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42051f3c(undefined4 param_1,char *param_2)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  char *pcStack_18;
  undefined4 uStack_14;
  
  if (_DAT_ram_3fcc52b4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  local_20 = 1;
  uStack_1c = param_1;
  pcStack_18 = param_2;
  uStack_14 = FUN_ram_4205c9ea();
  FUN_ram_4205c7d0(&DAT_ram_3fcc52b4,&local_20);
  FUN_ram_4205c742(uStack_14,0);
  return (int)*param_2;
}

