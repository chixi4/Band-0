
uint FUN_ram_42065c62(byte *param_1)

{
  return (uint)(param_1[2] >> 5) | (uint)*param_1 << 0xb | (uint)param_1[1] << 3;
}

