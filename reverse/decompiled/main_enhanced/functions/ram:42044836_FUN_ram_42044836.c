
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42044836(void)

{
  int iVar1;
  
  if (_DAT_ram_3fcdfedc != 0) {
    iVar1 = _DAT_ram_3fcdfedc;
    if (*(int *)(_DAT_ram_3fcdfedc + 8) != 0) {
      (**(code **)(_DAT_ram_3fcdfec8 + 0x10))();
      iVar1 = _DAT_ram_3fcdfedc;
      *(undefined4 *)(_DAT_ram_3fcdfedc + 8) = 0;
    }
    if (*(int *)(iVar1 + 4) != 0) {
      (**(code **)(_DAT_ram_3fcdfec8 + 0x10))();
      iVar1 = _DAT_ram_3fcdfedc;
      *(undefined4 *)(_DAT_ram_3fcdfedc + 4) = 0;
    }
    if (*(int *)(iVar1 + 0x14) != 0) {
      (**(code **)(_DAT_ram_3fcdfec8 + 0x10))();
      iVar1 = _DAT_ram_3fcdfedc;
      *(undefined4 *)(_DAT_ram_3fcdfedc + 0x14) = 0;
    }
    if (*(int *)(iVar1 + 0x10) != 0) {
      (**(code **)(_DAT_ram_3fcdfec8 + 0x10))();
      iVar1 = _DAT_ram_3fcdfedc;
      *(undefined4 *)(_DAT_ram_3fcdfedc + 0x10) = 0;
    }
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(iVar1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x420448d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(&DAT_ram_3fcdfedc);
    return;
  }
  return;
}

