
undefined8 FUN_ram_4039c3f4(uint *param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  
  FUN_ram_4039693c();
  uVar1 = *(undefined8 *)param_1;
  *param_1 = *param_1 | param_2;
  param_1[1] = param_1[1] | param_3;
  FUN_ram_40396956();
  return uVar1;
}

