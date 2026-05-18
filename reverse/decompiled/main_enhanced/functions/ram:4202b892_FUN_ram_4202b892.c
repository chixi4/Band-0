
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4202b892(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4202b87e();
  if (iVar1 == 0) {
    (**(code **)(_DAT_ram_3fcb6a44 + 0x68))();
                    /* WARNING: Could not recover jumptable at 0x4202b8d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcb6a44 + 0x6c))(_DAT_ram_3fcb6b8c + 0x14);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4202b8de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcb6a44 + 100))(_DAT_ram_3fcb6b8c + 0x14,param_1);
  return;
}

