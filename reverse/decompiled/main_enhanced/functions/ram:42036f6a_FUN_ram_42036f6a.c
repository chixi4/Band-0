
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42036f6a(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_a4;
  
  if (_DAT_ram_3fcb6bec == 0) {
    _DAT_ram_3fcb6bec = FUN_ram_403a5e02(1,0x18);
    if (_DAT_ram_3fcb6bec == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf9e(0,0,0,0);
    }
  }
  iVar1 = _DAT_ram_3fcb6bec;
  uVar2 = FUN_ram_403a687a();
                    /* WARNING: Could not recover jumptable at 0x42036fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcb6a44 + 0x60))
            (iVar1 + 0x14,uVar2,0x42026e06,0,extraout_a4,*(code **)(_DAT_ram_3fcb6a44 + 0x60));
  return;
}

