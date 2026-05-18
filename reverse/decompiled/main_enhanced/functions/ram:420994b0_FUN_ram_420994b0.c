
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420994b0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  fence();
  fence();
  if (DAT_ram_3fcc48ac != '\0') {
    fence();
    DAT_ram_3fcc48ac = 0;
    fence();
    while( true ) {
      fence();
      fence();
      if (DAT_ram_3fcc48ad == '\0') break;
      FUN_ram_40398498(10);
    }
    puVar1 = _DAT_ram_3fcc4890;
    puVar2 = (undefined4 *)*_DAT_ram_3fcc4890;
    while (puVar1 != (undefined4 *)&DAT_ram_3fcc4890) {
      if ((code *)puVar1[8] != (code *)0x0) {
        (*(code *)puVar1[8])(puVar1[6],puVar1[7]);
      }
      FUN_ram_42099046(puVar1);
      puVar1 = puVar2;
      puVar2 = (undefined4 *)*puVar2;
    }
    if (_DAT_ram_3fcc53d4 != 0) {
      (**(code **)(_DAT_ram_3fcc53c4 + 0x50))();
      _DAT_ram_3fcc53d4 = 0;
    }
    if (_DAT_ram_3fcc48b0 != 0) {
      (**(code **)(_DAT_ram_3fcc53c4 + 0x38))();
      _DAT_ram_3fcc48b0 = 0;
    }
    FUN_ram_42099030();
    (**(code **)(_DAT_ram_3fcc53c4 + 0xe8))(0x3fcc4898);
    (*(code *)&SUB_ram_40010488)(&DAT_ram_3fcc4890,0,0x24);
    return;
  }
  return;
}

