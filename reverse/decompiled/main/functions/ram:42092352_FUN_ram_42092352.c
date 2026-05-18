
int FUN_ram_42092352(int param_1)

{
  if ((DAT_ram_3fcc4521 < 2) && (DAT_ram_3fcc440e == '\0')) {
    if (param_1 != 0) {
      DAT_ram_3fcc4521 = 1;
      return param_1;
    }
    DAT_ram_3fcc4521 = 0;
    return 1;
  }
  return 0;
}

