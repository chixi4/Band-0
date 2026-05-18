
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039ed16(int param_1)

{
  if (_DAT_ram_3fcc45d0 != param_1) {
    if (_DAT_ram_3fcc45d0 == 0) {
      FUN_ram_42091ad8();
    }
    FUN_ram_4207a038(1,0x1000,4,&DAT_ram_3c0fe394,_DAT_ram_3fcc45d0,param_1);
    _DAT_ram_3fcc45d0 = param_1;
  }
  return;
}

