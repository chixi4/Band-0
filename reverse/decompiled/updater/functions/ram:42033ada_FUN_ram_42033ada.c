
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42033ada(int param_1)

{
  if ((param_1 - 1U & 0xff) < 0xe) {
    return (param_1 - 1U) * 0xc + 0x54 + _DAT_ram_3fcdfb1c;
  }
  return 0;
}

