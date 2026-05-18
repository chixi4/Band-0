
undefined4 FUN_ram_420481aa(int param_1,uint param_2)

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
    FUN_ram_42047cfe(param_1);
LAB_ram_420481f2:
    FUN_ram_42047c24(param_1);
  }
  else {
    if (param_2 == 3) {
      FUN_ram_42047d6c(param_1);
    }
    else {
      if (param_2 != 1) {
        FUN_ram_42047d6c();
        goto LAB_ram_420481f2;
      }
      FUN_ram_42047cfe(param_1);
    }
    FUN_ram_42047c92(param_1);
  }
  return 0;
}

