
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4202c538(int param_1)

{
  int iVar1;
  
  while (iVar1 = FUN_ram_4202c4f6(param_1), iVar1 != 0) {
    (*(code *)&SUB_ram_40011a08)();
  }
                    /* WARNING: Could not recover jumptable at 0x4202c55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcb6a44 + 0x28))(param_1 + 8);
  return;
}

