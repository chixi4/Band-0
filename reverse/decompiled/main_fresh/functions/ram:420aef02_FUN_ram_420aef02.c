
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420aef02(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(_DAT_ram_3fcc4c78 + 0x58))
            (0x6b,0,0xb,5,4,param_2,*(code **)(_DAT_ram_3fcc4c78 + 0x58));
  (**(code **)(_DAT_ram_3fcc4c78 + 0x58))(0x6b,0,8,7,3,param_3,*(code **)(_DAT_ram_3fcc4c78 + 0x58))
  ;
                    /* WARNING: Could not recover jumptable at 0x420aef64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcc4c78 + 0x58))(0x6b,0,0xd,5,2,param_1);
  return;
}

