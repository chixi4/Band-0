
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40390a34(void)

{
  uint uVar1;
  
  FUN_ram_4039691e();
  FUN_ram_40396966();
  uVar1 = mstatus;
  if (DAT_ram_3fcc4e24 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  DAT_ram_3fcc4e24 = 0;
  mstatus = mstatus & 0xfffffff7;
  (*(code *)&SUB_ram_400107d4)(_DAT_ram_3fcc4e28);
  mstatus = mstatus | uVar1 & 8;
  FUN_ram_40390df8(0);
  FUN_ram_4039691e();
  FUN_ram_40396994();
  return;
}

