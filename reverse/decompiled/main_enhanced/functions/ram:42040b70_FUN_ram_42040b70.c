
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42040b70(void)

{
  int iVar1;
  
  if (_DAT_ram_3fcdff64 != 0) {
    (**(code **)(_DAT_ram_3fcdfed0 + 0x1c8))();
    (**(code **)(_DAT_ram_3fcdfecc + 0xb08))();
    iVar1 = _DAT_ram_3fcdff64;
    if (*(int *)(_DAT_ram_3fcdff64 + 0x1c) != 0) {
      (**(code **)(_DAT_ram_3fcdfec8 + 0x10))();
      iVar1 = _DAT_ram_3fcdff64;
      *(undefined4 *)(_DAT_ram_3fcdff64 + 0x1c) = 0;
    }
    if (*(int *)(iVar1 + 0x18) != 0) {
      (**(code **)(_DAT_ram_3fcdfec8 + 0x10))();
      iVar1 = _DAT_ram_3fcdff64;
      *(undefined4 *)(_DAT_ram_3fcdff64 + 0x18) = 0;
    }
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(iVar1 + 0xc);
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(_DAT_ram_3fcdff64 + 8);
                    /* WARNING: Could not recover jumptable at 0x42040c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(&DAT_ram_3fcdff64);
    return;
  }
  return;
}

