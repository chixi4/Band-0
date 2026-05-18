
void FUN_ram_40390b18(uint param_1)

{
  uint uVar1;
  
  uVar1 = mstatus;
  mstatus = mstatus & 0xfffffff7;
  (*(code *)&SUB_ram_400107d8)(1 << (param_1 & 0x1f));
  mstatus = mstatus | uVar1 & 8;
  return;
}

