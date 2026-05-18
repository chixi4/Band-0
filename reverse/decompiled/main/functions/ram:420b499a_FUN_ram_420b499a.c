
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420b499a(void)

{
  int iVar1;
  int extraout_a5;
  
  FUN_ram_4039691e();
  FUN_ram_40396966();
  iVar1 = _DAT_ram_3fcc4e38 + -1;
  _DAT_ram_3fcc4e38 = iVar1;
  if (iVar1 < 0) {
    FUN_ram_40396994();
    FUN_ram_4039bf1e();
    iVar1 = extraout_a5;
  }
  if (iVar1 == 0) {
    _DAT_ram_60040000 = _DAT_ram_60040000 & 0xe7ffffff | 0x40;
  }
  FUN_ram_40394bf4();
  FUN_ram_4039691e();
  FUN_ram_40396994();
  return;
}

