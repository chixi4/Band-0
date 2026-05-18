
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203e9b0(void)

{
  int iVar1;
  
  if (_DAT_ram_3fcdff6c != 0) {
    iVar1 = *(int *)(_DAT_ram_3fcdff6c + 0x1c);
    (**(code **)(_DAT_ram_3fcdfed0 + 0x2cc))();
    (**(code **)(_DAT_ram_3fcdfec4 + 0x28))(iVar1 + 0x20);
    (**(code **)(_DAT_ram_3fcdfec4 + 0x28))(iVar1 + 0x2c);
    (**(code **)(_DAT_ram_3fcdfec4 + 0x28))(iVar1 + 0x30);
    (**(code **)(_DAT_ram_3fcdfec4 + 0x6c))(*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x34);
    (**(code **)(_DAT_ram_3fcdfed0 + 0x52c))();
    (**(code **)(_DAT_ram_3fcdfecc + 0x750))();
    (**(code **)(_DAT_ram_3fcdfecc + 0x644))();
    (**(code **)(_DAT_ram_3fcdfecc + 0x524))();
    (**(code **)(_DAT_ram_3fcdfecc + 0x29c))();
    (**(code **)(_DAT_ram_3fcdfed0 + 0x37c))();
    (**(code **)(_DAT_ram_3fcdfecc + 0x3a4))();
    (**(code **)(_DAT_ram_3fcdfecc + 0x878))();
    (**(code **)(_DAT_ram_3fcdfed0 + 0x4cc))();
    (**(code **)(_DAT_ram_3fcdfecc + 0x1ac))();
    (**(code **)(_DAT_ram_3fcdfed0 + 0x41c))();
    (**(code **)(_DAT_ram_3fcdfed0 + 0x32c))();
    (**(code **)(_DAT_ram_3fcdfecc + 0x7ec))();
                    /* WARNING: Could not recover jumptable at 0x4203eab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfec4 + 0xc))(iVar1 + 0x10);
    return;
  }
  return;
}

