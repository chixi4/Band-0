
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204095e(int param_1)

{
  (**(code **)(_DAT_ram_3fcdfec4 + 0x60))
            (param_1 + 0x114,*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10,
             *(undefined4 *)(_DAT_ram_3fcdfecc + 0x344),param_1,_DAT_ram_3fcdfecc,
             *(code **)(_DAT_ram_3fcdfec4 + 0x60));
  (**(code **)(_DAT_ram_3fcdfec4 + 0x60))
            (param_1 + 0xf0,*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10,
             *(undefined4 *)(_DAT_ram_3fcdfecc + 0x448),param_1,_DAT_ram_3fcdfecc,
             *(code **)(_DAT_ram_3fcdfec4 + 0x60));
  (**(code **)(_DAT_ram_3fcdfec4 + 0x60))
            (param_1 + 0xf4,*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10,
             *(undefined4 *)(_DAT_ram_3fcdfed0 + 0x224),param_1,_DAT_ram_3fcdfed0,
             *(code **)(_DAT_ram_3fcdfec4 + 0x60));
  (**(code **)(_DAT_ram_3fcdfec4 + 0x60))
            (param_1 + 0x1fc,*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10,
             *(undefined4 *)(_DAT_ram_3fcdfecc + 0xa98),param_1,*(code **)(_DAT_ram_3fcdfec4 + 0x60)
            );
                    /* WARNING: Could not recover jumptable at 0x42040a12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfed0 + 0x1bc))(param_1);
  return;
}

