
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203d786(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(_DAT_ram_3fcdfecc + 0xafc);
  if (_DAT_ram_3fcdff70 != 0) {
    (*UNRECOVERED_JUMPTABLE)();
    UNRECOVERED_JUMPTABLE = *(code **)(_DAT_ram_3fcdfecc + 0xafc);
  }
                    /* WARNING: Could not recover jumptable at 0x4203d7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(&DAT_ram_3fcdff70);
  return;
}

