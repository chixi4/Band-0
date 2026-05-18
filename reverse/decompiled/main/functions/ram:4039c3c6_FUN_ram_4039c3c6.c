
uint FUN_ram_4039c3c6(uint *param_1,uint param_2)

{
  uint uVar1;
  
  FUN_ram_4039693c();
  uVar1 = *param_1;
  *param_1 = uVar1 | param_2;
  FUN_ram_40396956();
  return uVar1;
}

