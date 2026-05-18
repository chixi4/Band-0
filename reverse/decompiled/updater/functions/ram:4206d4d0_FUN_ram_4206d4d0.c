
uint FUN_ram_4206d4d0(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_ram_4206d4be((param_1 ^ param_2) >> 0x1f);
  uVar1 = FUN_ram_4206d4be((param_1 - param_2 & ~uVar1 | param_2 & uVar1) >> 0x1f);
  return ~uVar1;
}

