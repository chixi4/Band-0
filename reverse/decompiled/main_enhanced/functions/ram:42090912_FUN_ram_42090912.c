
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42090912(undefined4 param_1,undefined4 param_2)

{
  if (DAT_ram_3fcc440f != '\0') {
    FUN_ram_4209081e();
    if (DAT_ram_3fcc440e == '\0') {
      return 0;
    }
    if (DAT_ram_3fcc4416 != '\0') {
      _DAT_ram_3fcc43f8 = param_1;
      _DAT_ram_3fcc43fc = param_2;
      return 1;
    }
    if (DAT_ram_3fcc4401 != '\0') {
      return 0;
    }
    FUN_ram_4207a038(6,0x1000,1,&DAT_ram_3c0ff5d4);
  }
  return 2;
}

