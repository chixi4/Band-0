
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203ad10(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _DAT_ram_3fcdff60 + 0xc;
  iVar2 = (**(code **)(_DAT_ram_3fcdfec4 + 0x30))(iVar1);
  if (iVar2 != 0) {
    (**(code **)(_DAT_ram_3fcdfec4 + 0x34))(iVar1);
    (**(code **)(_DAT_ram_3fcdfecc + 0x34))();
  }
                    /* WARNING: Could not recover jumptable at 0x4203ad46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfecc + 0x768))();
  return;
}

