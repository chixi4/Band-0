
int FUN_ram_42061a14(uint param_1)

{
  if ((2 < param_1 - 0x16) && (param_1 < 0x13)) {
    return ((-0x7c027 >> (param_1 & 0x1f) & 1U) - 1 & 0xffffffd9) + 0x28;
  }
  return 0x28;
}

