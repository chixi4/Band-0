
void FUN_ram_4209cc88(int *param_1)

{
  uint uVar1;
  int local_20 [5];
  
  FUN_ram_420992a6(0x4208ccd8,param_1,0);
  if (*param_1 != 0) {
    FUN_ram_4206031c(local_20);
    uVar1 = *(int *)(*param_1 + 0x58) - local_20[0];
    FUN_ram_4209915a((uVar1 & (int)~uVar1 >> 0x1f) + 1,0,0x4208ccd8,param_1,0);
  }
  return;
}

