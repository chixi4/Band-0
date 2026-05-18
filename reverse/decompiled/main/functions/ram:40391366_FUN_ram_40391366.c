
undefined4 FUN_ram_40391366(undefined4 param_1,int param_2,uint *param_3)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    FUN_ram_40390e2c();
    uVar1 = FUN_ram_40391352(param_1,*param_3 & 1);
    return uVar1;
  }
  FUN_ram_403912ae();
  uVar1 = FUN_ram_40391352(param_1,*param_3 & 1);
  FUN_ram_403912d2();
  return uVar1;
}

