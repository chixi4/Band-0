
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403a2e48(int param_1)

{
  if (*(int *)(_DAT_ram_3fcdfed8 + 0x2c) == 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x110))
              (0x105,&DAT_ram_3c0f575c,0,0,0,*(code **)(_DAT_ram_3fcdfecc + 0x110));
  }
  (**(code **)(_DAT_ram_3fcdfecc + 0xb60))(0,1);
  (**(code **)(_DAT_ram_3fcdfecc + 0xb54))(0xb002,*(byte *)(param_1 + 1) + 2,param_1);
  (**(code **)(_DAT_ram_3fcdfecc + 0xb60))(0,0);
                    /* WARNING: Could not recover jumptable at 0x403a2eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfed8 + 0x2c))(param_1,*(undefined4 *)(_DAT_ram_3fcdfed8 + 0x30));
  return;
}

