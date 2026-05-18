
void FUN_ram_4201d3b0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_4 == 0) {
    FUN_ram_4201d2a2(param_1,0x14,param_2,0xa0,0x20);
    uVar1 = 3;
  }
  else {
    FUN_ram_4201d342(param_1,0x14,param_2,0xa0);
    uVar1 = 0;
  }
  FUN_ram_4201f3fe((param_2 + 7) * 0x10000 >> 0x10,param_3,uVar1);
  return;
}

