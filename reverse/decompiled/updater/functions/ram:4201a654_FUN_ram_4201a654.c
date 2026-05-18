
uint FUN_ram_4201a654(int param_1)

{
  undefined4 uVar1;
  uint auStack_14 [4];
  
  if (param_1 == 1) {
    uVar1 = 9;
  }
  else {
    uVar1 = 0x12;
  }
  auStack_14[0] = 0;
  FUN_ram_4201a0cc(uVar1,1,auStack_14);
  return auStack_14[0] >> 0xf;
}

