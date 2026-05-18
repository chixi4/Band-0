
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403a4734(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  if (*(char *)(iVar1 + 0x5a) != '\0') {
    uVar2 = (**(code **)(_DAT_ram_3fcdfec4 + 0xa0))();
    (**(code **)(_DAT_ram_3fcdfec4 + 0x18))(*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10,0x3fcdffb4);
    (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0xa003,_DAT_ram_3fcdff7c);
    if (_DAT_ram_3fcdff7c != 0) {
      (**(code **)(_DAT_ram_3fcdfec4 + 0x14))(*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10,0x3fcdffb4);
    }
                    /* WARNING: Could not recover jumptable at 0x403a47d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfec4 + 0xa4))(uVar2);
    return;
  }
  return;
}

