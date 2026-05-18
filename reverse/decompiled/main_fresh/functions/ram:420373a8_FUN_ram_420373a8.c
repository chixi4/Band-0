
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420373a8(undefined4 param_1)

{
  undefined4 in_a4;
  
  if (*(code **)(_DAT_ram_3fcdfed8 + 0x44) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x420373ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfed8 + 0x44))(param_1,*(undefined4 *)(_DAT_ram_3fcdfed8 + 0x48));
    return;
  }
  (**(code **)(_DAT_ram_3fcdfecc + 0x110))
            (0x110,&DAT_ram_3c0f5778,0,0,in_a4,*(code **)(_DAT_ram_3fcdfecc + 0x110));
                    /* WARNING: Could not recover jumptable at 0x42037402. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfed8 + 0x44))(param_1,*(undefined4 *)(_DAT_ram_3fcdfed8 + 0x48));
  return;
}

