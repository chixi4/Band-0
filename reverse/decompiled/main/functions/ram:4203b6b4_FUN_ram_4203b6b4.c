
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203b6b4(void)

{
  (**(code **)(_DAT_ram_3fcdfecc + 0x98))(*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x4203b6f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfec4 + 0x18))
            (*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10,*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x14);
  return;
}

