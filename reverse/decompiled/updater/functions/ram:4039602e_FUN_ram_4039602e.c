
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039602e(void)

{
  int iVar1;
  
  do {
    while (_DAT_ram_3fcb65f0 == 0) {
      FUN_ram_4207afcc();
    }
    FUN_ram_40394d60();
    iVar1 = *(int *)(_DAT_ram_3fcb1788 + 0xc);
    FUN_ram_40395174(iVar1 + 4);
    _DAT_ram_3fcb65ec = _DAT_ram_3fcb65ec + -1;
    _DAT_ram_3fcb65f0 = _DAT_ram_3fcb65f0 + -1;
    FUN_ram_40394d8e();
    FUN_ram_40395ff0(iVar1);
  } while( true );
}

