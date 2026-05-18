
uint FUN_ram_42061d8a(byte *param_1)

{
  return (uint)param_1[2] << 8 |
         (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[3];
}

