
uint FUN_ram_40399ffa(uint *param_1,uint param_2)

{
  uint uVar1;
  
  FUN_ram_40394d36();
  uVar1 = *param_1;
  *param_1 = uVar1 | param_2;
  FUN_ram_40394d50();
  return uVar1;
}

