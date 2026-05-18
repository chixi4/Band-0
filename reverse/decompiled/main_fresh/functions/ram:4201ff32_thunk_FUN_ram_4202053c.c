
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_ram_4202053c(void)

{
  FUN_ram_420201c4();
  FUN_ram_420201f0();
  FUN_ram_42020236();
  FUN_ram_420203ae();
  DAT_ram_3fcc5146 = 0;
  DAT_ram_3fcc5145 = 0;
  DAT_ram_3fcc5144 = 0;
  if (_DAT_ram_3fcc5148 == 0) {
    _DAT_ram_3fcc5148 = thunk_FUN_ram_403904a6(5000);
    if (_DAT_ram_3fcc5148 == 0) {
      return;
    }
  }
  (*(code *)&SUB_ram_40010488)(_DAT_ram_3fcc5148,0,5000);
  return;
}

