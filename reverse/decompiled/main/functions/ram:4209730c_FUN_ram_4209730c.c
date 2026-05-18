
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4209730c(uint param_1)

{
  FUN_ram_40394a58();
  _DAT_ram_600c0014 = _DAT_ram_600c0014 & 0xfffffffd | (param_1 & 1) << 1;
  if (param_1 != 0) {
    _DAT_ram_600c001c = _DAT_ram_600c001c & 0xfffffffd;
  }
  FUN_ram_40394a68();
  return;
}

