
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403a2d14(char *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  FUN_ram_403a2b26();
  if (*param_1 != '\x02') {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(_DAT_ram_3fcdfed0 + 0x5ec);
  iVar1 = (**(code **)(_DAT_ram_3fcdfed0 + 0x3d4))();
                    /* WARNING: Could not recover jumptable at 0x403a2d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(iVar1 + *(int *)(param_1 + 8));
  return;
}

