
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40390dde(void)

{
  int iVar1;
  
  _DAT_ram_60008044 = _DAT_ram_60008044 | 0x200;
  if (_DAT_ram_3fcb65b0 != (code *)0x0) {
    (*_DAT_ram_3fcb65b0)();
  }
  FUN_ram_4207b17e(9);
  iVar1 = FUN_ram_4039e35c();
  if (iVar1 != 0) {
    FUN_ram_4039153e();
  }
  if (((_DAT_ram_600c0018 & 4) == 0) && ((_DAT_ram_600c0010 & 4) != 0)) {
    (*(code *)&SUB_ram_40010074)(0);
  }
  if (((_DAT_ram_600c0018 & 0x20) == 0) && ((_DAT_ram_600c0010 & 0x20) != 0)) {
    (*(code *)&SUB_ram_40010074)(1);
  }
  (*(code *)&SUB_ram_40010088)();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

