
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203cdc8(void)

{
  (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0xa000,0);
  (**(code **)(_DAT_ram_3fcdfed0 + 0x534))();
                    /* WARNING: Could not recover jumptable at 0x4203ce08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfecc + 0xac0))(5);
  return;
}

