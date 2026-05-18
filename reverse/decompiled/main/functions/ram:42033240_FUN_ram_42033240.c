
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42033240(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = _DAT_ram_3fcb6bc4;
  uVar2 = (**(code **)(_DAT_ram_3fcb6a44 + 0xa8))();
                    /* WARNING: Could not recover jumptable at 0x42033270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcb6a44 + 0x44))(uVar1,uVar2);
  return;
}

