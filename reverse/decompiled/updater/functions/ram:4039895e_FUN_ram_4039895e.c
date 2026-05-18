
void FUN_ram_4039895e(undefined4 *param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)*param_1;
  *puVar1 = *puVar1 | 0x800000;
  do {
  } while ((int)(*puVar1 << 8) < 0);
  *puVar1 = *puVar1 | 0x1000000;
  return;
}

