
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4209238e(void)

{
  _DAT_ram_3fcc4614 = _DAT_ram_3fcc4614 + 1;
  if (*(code **)(_DAT_ram_3fcb84cc + 0x24) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x420923ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcb84cc + 0x24))();
    return;
  }
  return;
}

