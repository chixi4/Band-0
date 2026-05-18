
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42051efa(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int *unaff_s0;
  undefined4 local_20;
  undefined8 uStack_1c;
  
  uStack_1c = CONCAT44(param_2,param_1);
  if ((param_3 != (int *)0x0) && (unaff_s0 = param_3, *param_3 != 0)) goto LAB_ram_42051f10;
  do {
    uStack_1c = FUN_ram_4039bf1e();
LAB_ram_42051f10:
  } while (_DAT_ram_3fcc52b4 == 0);
  local_20 = 0;
  FUN_ram_4205c7d0(&DAT_ram_3fcc52b4,&local_20);
  FUN_ram_4205c742(unaff_s0,0);
  return 0;
}

