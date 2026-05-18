
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403909c8(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_ram_4039691e();
  FUN_ram_40396966();
  uVar3 = mstatus;
  uVar2 = _DAT_ram_600c20b8;
  uVar1 = _DAT_ram_3fcc4e2c;
  if (DAT_ram_3fcc4e24 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  DAT_ram_3fcc4e24 = 1;
  mstatus = mstatus & 0xfffffff7;
  (*(code *)&SUB_ram_400107d8)(_DAT_ram_3fcc4e2c);
  mstatus = mstatus | uVar3 & 8;
  FUN_ram_40390db4(0);
  _DAT_ram_3fcc4e28 = uVar1 & uVar2;
  FUN_ram_4039691e();
  FUN_ram_40396994();
  return;
}

