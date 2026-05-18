
undefined4 FUN_ram_4204891c(int param_1,uint param_2)

{
  uint uVar1;
  
  if (param_1 < 0) {
    return 0x102;
  }
  uVar1 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,param_1);
  if ((uVar1 & 1) == 0) {
    return 0x102;
  }
  if (3 < param_2) {
    return 0x102;
  }
  if (param_2 == 2) {
    FUN_ram_42047af6(param_1);
LAB_ram_42048964:
    FUN_ram_42047b98(param_1);
  }
  else {
    if (param_2 == 3) {
      FUN_ram_42047aa6(param_1);
    }
    else {
      if (param_2 != 1) {
        FUN_ram_42047aa6();
        goto LAB_ram_42048964;
      }
      FUN_ram_42047af6(param_1);
    }
    FUN_ram_42047b48(param_1);
  }
  return 0;
}

