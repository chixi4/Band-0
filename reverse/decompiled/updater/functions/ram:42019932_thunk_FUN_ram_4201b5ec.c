
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_ram_4201b5ec(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4039d97a();
  if (iVar1 == 0) {
    _pmpaddr1 = 0x100e3e24;
    pmpcfg0 = pmpcfg0 | 0x8d80;
    _pmpaddr2 = 0xff2be24;
  }
  else {
    iVar1 = FUN_ram_4039d97a();
    if (iVar1 == 0) {
      (*(code *)&SUB_ram_40010088)();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar1 = FUN_ram_4039d97a();
    if (iVar1 == 0) {
      (*(code *)&SUB_ram_40010088)();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar1 = FUN_ram_4039d97a();
    if (iVar1 == 0) {
      (*(code *)&SUB_ram_40010088)();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _pmpaddr1 = 0x100f0000;
    pmpcfg0 = pmpcfg0 | 0x8f80;
    _pmpaddr2 = 0xff28000;
  }
  _pmpaddr0 = 0x100e0000;
  pmpcfg0 = pmpcfg0 | 0x8b800000;
  pmpcfg1 = pmpcfg1 | 0x8980999f;
  pmpcfg2 = pmpcfg2 | 0x9b9d8d80;
  pmpcfg3 = pmpcfg3 | 0x8880909c;
  return;
}

