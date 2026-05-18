
void FUN_ram_4204e3b6(undefined4 *param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)*param_1;
  puVar1[2] = puVar1[2] & 0xfff7ffff | (param_2 & 1) << 0x13;
  *puVar1 = *puVar1 | 0x800000;
  do {
  } while ((int)(*puVar1 << 8) < 0);
  return;
}

