
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039093e(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int extraout_a5;
  
  FUN_ram_40394d2c();
  FUN_ram_40394d60();
  uVar1 = _DAT_ram_3fcb65a4;
  iVar4 = 0x3fcb6000;
  if (DAT_ram_3fcb659c != '\0') {
    FUN_ram_40399b58();
    iVar4 = extraout_a5;
  }
  uVar3 = mstatus;
  *(undefined1 *)(iVar4 + 0x59c) = 1;
  uVar2 = _DAT_ram_600c20b8;
  mstatus = mstatus & 0xfffffff7;
  (*(code *)&SUB_ram_400107d8)(uVar1);
  mstatus = mstatus | uVar3 & 8;
  FUN_ram_40390d66(0);
  _DAT_ram_3fcb65a0 = uVar1 & uVar2;
  FUN_ram_40394d2c();
  FUN_ram_40394d8e();
  return;
}

