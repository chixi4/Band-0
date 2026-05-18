
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40391212(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = _DAT_ram_3fcb2078;
  (*(code *)&SUB_ram_400102ac)(0x3fcb2074,0);
                    /* WARNING: Could not recover jumptable at 0x40391238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

