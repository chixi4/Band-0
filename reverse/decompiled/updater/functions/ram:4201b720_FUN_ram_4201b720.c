
void FUN_ram_4201b720(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 auStack_24 [4];
  
  for (; param_2 != 0; param_2 = param_2 - uVar1) {
    auStack_24[0] = FUN_ram_40391b64();
    uVar1 = param_2;
    if (4 < param_2) {
      uVar1 = 4;
    }
    FUN_ram_40399daa(param_1,auStack_24,uVar1);
    param_1 = param_1 + uVar1;
  }
  return;
}

