
void FUN_ram_4202be46(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_ram_4202be34((param_2 ^ param_1) >> 0x1f);
  FUN_ram_4202be34((uVar1 & param_2 | param_1 - param_2 & ~uVar1) >> 0x1f);
  return;
}

