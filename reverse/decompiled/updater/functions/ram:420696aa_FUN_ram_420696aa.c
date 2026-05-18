
uint FUN_ram_420696aa(uint *param_1)

{
  uint uVar1;
  
  if (((short)param_1[4] == 0) || (*(short *)((int)param_1 + 0x12) == 0)) {
    if ((*param_1 >> 2 & 2) != 0) goto LAB_ram_420696ce;
  }
  else if ((*param_1 >> 2 & 4) == 0) {
LAB_ram_420696ce:
    uVar1 = FUN_ram_4206965e();
    return uVar1 ^ 1;
  }
  return 0;
}

