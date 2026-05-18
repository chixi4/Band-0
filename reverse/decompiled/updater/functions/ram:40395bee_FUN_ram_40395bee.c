
uint FUN_ram_40395bee(uint *param_1,uint param_2)

{
  uint uVar1;
  
  FUN_ram_40394d60();
  uVar1 = *param_1;
  *param_1 = ~param_2 & uVar1;
  FUN_ram_40394d8e();
  return uVar1;
}

