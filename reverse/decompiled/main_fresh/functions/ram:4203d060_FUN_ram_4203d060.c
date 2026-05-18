
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203d060(void)

{
  int iVar1;
  
  iVar1 = *(int *)(_DAT_ram_3fcdfee0 + 0xc);
  (**(code **)(_DAT_ram_3fcdfec4 + 0x6c))(iVar1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x4203d096. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfec4 + 0x6c))(iVar1 + 0x4c);
  return;
}

