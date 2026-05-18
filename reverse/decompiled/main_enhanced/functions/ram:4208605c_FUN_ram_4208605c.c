
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4208605c(void)

{
  int iVar1;
  
  FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fcb00,_DAT_ram_6004d000);
  if (_DAT_ram_3fcc4200 == 1) {
    _DAT_ram_3fcc4200 = 0;
    if ((_DAT_ram_3fcc417c != 0) && (*(code **)(_DAT_ram_3fcc417c + 0x10) != (code *)0x0)) {
      (**(code **)(_DAT_ram_3fcc417c + 0x10))();
    }
  }
  FUN_ram_42089514(&DAT_ram_3fcc4004,0,0xcc00);
  iVar1 = FUN_ram_4207fec0();
  if (iVar1 != 0) {
    FUN_ram_42085f52();
    return;
  }
  return;
}

