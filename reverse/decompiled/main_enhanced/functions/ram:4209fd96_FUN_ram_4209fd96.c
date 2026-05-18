
uint FUN_ram_4209fd96(uint *param_1)

{
  uint uVar1;
  
  if (((short)param_1[4] == 0) || (*(short *)((int)param_1 + 0x12) == 0)) {
    if ((*param_1 >> 2 & 2) != 0) goto LAB_ram_4209fdba;
  }
  else if ((*param_1 >> 2 & 4) == 0) {
LAB_ram_4209fdba:
    uVar1 = FUN_ram_4209fd4a();
    return uVar1 ^ 1;
  }
  return 0;
}

