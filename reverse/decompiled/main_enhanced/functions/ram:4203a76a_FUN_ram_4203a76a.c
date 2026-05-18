
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4203a76a(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                     undefined4 param_5,uint param_6)

{
  uint uVar1;
  
  if (param_3 <= param_6) {
    return (uint)(param_3 != 0x49);
  }
  if (param_3 != 0x7b) {
    if (param_3 == 0x7c) {
                    /* WARNING: Could not recover jumptable at 0x4203a792. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x17c))(param_1,param_2,param_4,param_5);
      return uVar1;
    }
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x4203a826. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x15c))(param_1,param_2,param_4,param_5);
  return uVar1;
}

