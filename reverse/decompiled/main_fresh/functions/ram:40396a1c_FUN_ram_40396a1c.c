
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40396a1c(void)

{
  _DAT_ram_3fcc4eb4 = 0;
  _DAT_ram_3fcc4eb0 = 0;
  _DAT_ram_3fcc4eb8 = 0;
  _DAT_ram_3fcc4ea4 = &DAT_ram_3fcb94c0;
  _DAT_ram_3fcc4ea0 = 0x3fcb8ec0;
  thunk_FUN_ram_40396b2e();
  (*(code *)&SUB_ram_400107d0)(1);
  mstatus = mstatus | 8;
  FUN_ram_403969de();
  return 1;
}

