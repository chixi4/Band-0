
void FUN_ram_4209bc98(int param_1)

{
  uint uVar1;
  int local_20 [5];
  
  FUN_ram_420992a6(0x4208bd58,param_1,0);
  if (*(int *)(param_1 + 0x200) != 0) {
    FUN_ram_4206031c(local_20);
    uVar1 = *(int *)(*(int *)(param_1 + 0x200) + 0x60) - local_20[0];
    FUN_ram_4209915a((uVar1 & (int)~uVar1 >> 0x1f) + 1,0,0x4208bd58,param_1,0);
  }
  return;
}

