
void FUN_ram_40399330(int *param_1,int param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*param_1 + param_2 * 0x14 + param_1[1] * 0x78);
  *puVar1 = *puVar1 | 0x10;
  return;
}

