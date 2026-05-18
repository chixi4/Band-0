
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203cee6(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  if (*(char *)(iVar1 + 0x5a) != '\0') {
    DAT_ram_3fcdffc0 = 0;
    _DAT_ram_3fcdff7c = 0;
    _DAT_ram_3fcdff80 = (**(code **)(_DAT_ram_3fcdfecc + 0x10c))(_DAT_ram_3fcdfe4e);
    DAT_ram_3fcdff9c = 0;
    (**(code **)(_DAT_ram_3fcdfed0 + 0x570))
              (0x3fcdff84,*(undefined4 *)(_DAT_ram_3fcdfed0 + 0x55c),0);
    (**(code **)(_DAT_ram_3fcdfec4 + 0x24))(0x3fcdffb4,*(undefined4 *)(_DAT_ram_3fcdfed0 + 0x548),0)
    ;
                    /* WARNING: Could not recover jumptable at 0x4203cf8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfec4 + 0x24))
              (_DAT_ram_3fcb6a40,*(undefined4 *)(_DAT_ram_3fcdfed0 + 0x588),0);
    return;
  }
  return;
}

