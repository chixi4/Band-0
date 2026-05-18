
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42023376(undefined4 param_1)

{
  undefined4 auStack_14 [4];
  
  _DAT_ram_3fcc1a58 = param_1;
  if (_DAT_ram_3fcc1abc != (code *)0x0) {
    auStack_14[0] = param_1;
    (*_DAT_ram_3fcc1abc)(0,auStack_14,_DAT_ram_3fcc1ac0);
    return;
  }
  return;
}

