
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42018dd8(void)

{
  int iVar1;
  
  if ((((_DAT_ram_3fcb97b8 != 0) && (*(int *)(_DAT_ram_3fcb97b8 + 0x14) != 0)) &&
      (DAT_ram_3fcb97bc != '\0')) && (iVar1 = FUN_ram_4201f03c(), iVar1 == 0)) {
    DAT_ram_3fcb97bc = 0;
                    /* WARNING: Could not recover jumptable at 0x42018e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcb97b8 + 0x14))();
    return;
  }
  return;
}

