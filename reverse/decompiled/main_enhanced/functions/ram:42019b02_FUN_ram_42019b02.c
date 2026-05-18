
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42019b02(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                     uint param_6)

{
  if (param_3 < param_6) {
    if (param_6 != 4) {
      return;
    }
    if (_DAT_ram_3fcc5040 != param_5) {
      return;
    }
  }
  else if (param_6 != param_5) {
    if (param_6 != param_4) {
      return;
    }
    FUN_ram_42018caa(0);
    return;
  }
  FUN_ram_42019a30();
  return;
}

