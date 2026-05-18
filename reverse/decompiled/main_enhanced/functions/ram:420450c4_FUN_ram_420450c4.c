
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420450c4(void)

{
  int *piVar1;
  
  if (_DAT_ram_3fcdfec0 != (int *)0x0) {
    piVar1 = _DAT_ram_3fcdfec0;
    if (_DAT_ram_3fcdfec0[1] != 0) {
      (**(code **)(_DAT_ram_3fcdfec8 + 0x10))();
      piVar1 = _DAT_ram_3fcdfec0;
      _DAT_ram_3fcdfec0[1] = 0;
    }
    if (*piVar1 != 0) {
      (**(code **)(_DAT_ram_3fcdfec8 + 0x10))();
      *_DAT_ram_3fcdfec0 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x4204511e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(&DAT_ram_3fcdfec0);
    return;
  }
  return;
}

