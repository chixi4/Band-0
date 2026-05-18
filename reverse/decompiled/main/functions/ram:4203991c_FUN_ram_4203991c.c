
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203991c(void)

{
  int iVar1;
  
  if (_DAT_ram_3fcdff68 != 0) {
    iVar1 = _DAT_ram_3fcdff68;
    if (*(int *)(_DAT_ram_3fcdff68 + 8) != 0) {
      (**(code **)(_DAT_ram_3fcdfec8 + 0x10))();
      iVar1 = _DAT_ram_3fcdff68;
      *(undefined4 *)(_DAT_ram_3fcdff68 + 8) = 0;
    }
    if (*(int *)(iVar1 + 4) != 0) {
      (**(code **)(_DAT_ram_3fcdfec8 + 0x10))();
      iVar1 = _DAT_ram_3fcdff68;
      *(undefined4 *)(_DAT_ram_3fcdff68 + 4) = 0;
    }
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(iVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x4203998e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(&DAT_ram_3fcdff68);
    return;
  }
  return;
}

