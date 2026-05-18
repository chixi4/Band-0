
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4209ebd0(int param_1,int param_2)

{
  thunk_FUN_ram_40390634(_DAT_ram_3fcc4b64);
  if ((param_1 == 0) || (param_2 == 0)) {
    _DAT_ram_3fcc4b64 = 0;
    _DAT_ram_3fcc4b70 = 0;
  }
  else {
    _DAT_ram_3fcc4b64 = FUN_ram_42060aee(param_1,param_2);
    if (_DAT_ram_3fcc4b64 == 0) {
      return 0xffffffff;
    }
    _DAT_ram_3fcc4b70 = param_2;
    _DAT_ram_3fcc4b24 = FUN_ram_4207f0b6(0);
  }
  return 0;
}

