
undefined8 FUN_ram_4039a028(uint *param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  
  FUN_ram_40394d36();
  uVar1 = *(undefined8 *)param_1;
  *param_1 = *param_1 | param_2;
  param_1[1] = param_1[1] | param_3;
  FUN_ram_40394d50();
  return uVar1;
}

