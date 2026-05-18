
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40390a34(void)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *extraout_a5;
  
  FUN_ram_4039691e();
  FUN_ram_40396966();
  puVar2 = &DAT_ram_3fcc5000;
  if (DAT_ram_3fcc4e24 == '\0') {
    FUN_ram_4039bf1e(_DAT_ram_3fcc4e28);
    puVar2 = extraout_a5;
  }
  uVar1 = mstatus;
  puVar2[-0x1dc] = 0;
  mstatus = mstatus & 0xfffffff7;
  (*(code *)&SUB_ram_400107d4)();
  mstatus = mstatus | uVar1 & 8;
  FUN_ram_40390df8(0);
  FUN_ram_4039691e();
  FUN_ram_40396994();
  return;
}

