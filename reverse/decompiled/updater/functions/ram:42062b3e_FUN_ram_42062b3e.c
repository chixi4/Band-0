
void FUN_ram_42062b3e(int *param_1)

{
  uint uVar1;
  int local_20 [5];
  
  FUN_ram_4205f052(0x42052b8e,param_1,0);
  if (*param_1 != 0) {
    FUN_ram_420221d2(local_20);
    uVar1 = *(int *)(*param_1 + 0x58) - local_20[0];
    FUN_ram_4205ef06((uVar1 & (int)~uVar1 >> 0x1f) + 1,0,0x42052b8e,param_1,0);
  }
  return;
}

