
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4202b994(void)

{
  int iVar1;
  
  *_DAT_ram_3fcb6b88 = '\x01';
  iVar1 = FUN_ram_4202d768();
  *_DAT_ram_3fcb6b88 = (iVar1 == 0) << 1;
  (**(code **)(_DAT_ram_3fcb6a44 + 0x90))(100);
  FUN_ram_4202b8e0();
  if (iVar1 == 0) {
    FUN_ram_420315c6();
    if (_DAT_ram_3fcb69c8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4202b9ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*_DAT_ram_3fcb69c8)();
      return;
    }
  }
  return;
}

