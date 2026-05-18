
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42051f3c(undefined4 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  undefined4 local_20;
  undefined8 uStack_1c;
  undefined4 uStack_14;
  
  uStack_1c = CONCAT44(param_2,param_1);
  if (_DAT_ram_3fcc52b4 == 0) {
    uStack_1c = FUN_ram_4039bf1e();
  }
  uVar1 = (ulonglong)uStack_1c >> 0x20;
  local_20 = 1;
  uStack_14 = FUN_ram_4205c9ea();
  FUN_ram_4205c7d0(&DAT_ram_3fcc52b4,&local_20);
  FUN_ram_4205c742(uStack_14,0);
  return (int)*(char *)uVar1;
}

