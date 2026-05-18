
void FUN_ram_4206a610(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_ram_4206a5fe((param_2 ^ param_1) >> 0x1f);
  FUN_ram_4206a5fe((uVar1 & param_2 | param_1 - param_2 & ~uVar1) >> 0x1f);
  return;
}

