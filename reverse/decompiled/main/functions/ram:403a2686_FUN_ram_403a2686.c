
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_403a2686(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(_DAT_ram_3fcdfebc + 0xb4) != 0) {
    uVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0xf4))();
                    /* WARNING: Could not recover jumptable at 0x403a26ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(_DAT_ram_3fcdfebc + 0xb4))(uVar1,param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}

