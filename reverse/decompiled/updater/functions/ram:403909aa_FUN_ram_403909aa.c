
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403909aa(void)

{
  uint uVar1;
  int iVar2;
  int extraout_a5;
  
  FUN_ram_40394d2c();
  FUN_ram_40394d60();
  iVar2 = 0x3fcb6000;
  if (DAT_ram_3fcb659c == '\0') {
    FUN_ram_40399b58(_DAT_ram_3fcb65a0);
    iVar2 = extraout_a5;
  }
  uVar1 = mstatus;
  *(undefined1 *)(iVar2 + 0x59c) = 0;
  mstatus = mstatus & 0xfffffff7;
  (*(code *)&SUB_ram_400107d4)();
  mstatus = mstatus | uVar1 & 8;
  FUN_ram_40390daa(0);
  FUN_ram_40394d2c();
  FUN_ram_40394d8e();
  return;
}

