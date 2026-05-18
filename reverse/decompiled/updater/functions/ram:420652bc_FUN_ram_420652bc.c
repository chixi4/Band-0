
uint FUN_ram_420652bc(byte *param_1)

{
  return (uint)param_1[2] << 8 |
         (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[3];
}

