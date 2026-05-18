
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403915d8(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 auStack_24 [4];
  
  thunk_FUN_ram_403945e6();
  auStack_24[0] = 0;
  FUN_ram_403972da(0,param_1,param_2,param_3,param_4,auStack_24);
  uVar1 = 8;
  if (0x41ffffff < param_2) {
    uVar1 = 1;
  }
  _DAT_ram_600c4004 = ~(uVar1 >> 2) & ~(uVar1 & 1) & _DAT_ram_600c4004;
  FUN_ram_403915b8(param_2,param_4);
  thunk_FUN_ram_403945fc();
  return;
}

