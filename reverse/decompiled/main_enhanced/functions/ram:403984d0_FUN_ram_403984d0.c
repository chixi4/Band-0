
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403984d0(void)

{
  uint uVar1;
  int iVar2;
  
  while( true ) {
    do {
      while (_DAT_ram_3fcc4e90 != 0) {
        FUN_ram_40396966();
        iVar2 = *(int *)(_DAT_ram_3fcb8c84 + 0xc);
        FUN_ram_40396d62(iVar2 + 4);
        _DAT_ram_3fcc4e8c = _DAT_ram_3fcc4e8c + -1;
        _DAT_ram_3fcc4e90 = _DAT_ram_3fcc4e90 + -1;
        FUN_ram_40396994();
        FUN_ram_40397e0a(iVar2);
      }
      FUN_ram_40396626();
      uVar1 = FUN_ram_40397d9c();
    } while (uVar1 < 3);
    FUN_ram_403980c6();
    if (_DAT_ram_3fcc4e6c < _DAT_ram_3fcc4e88) break;
    uVar1 = FUN_ram_40397d9c();
    if (2 < uVar1) {
      FUN_ram_403962e2();
    }
    FUN_ram_40398348();
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

