
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403919ae(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = _DAT_ram_3fcb9578;
  (*(code *)&SUB_ram_400102ac)(&DAT_ram_3fcb9574,0);
                    /* WARNING: Could not recover jumptable at 0x403919d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

