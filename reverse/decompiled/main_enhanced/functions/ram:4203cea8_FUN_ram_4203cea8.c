
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203cea8(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  if (*(char *)(iVar1 + 0x5a) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x4203cedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(&DAT_ram_3fcb6a40);
    return;
  }
  return;
}

