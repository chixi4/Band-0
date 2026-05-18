
void FUN_ram_4204bd80(int param_1)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0x24);
  *puVar1 = *puVar1 | 0x2000000;
  puVar1[7] = gp + 0x610;
  return;
}

