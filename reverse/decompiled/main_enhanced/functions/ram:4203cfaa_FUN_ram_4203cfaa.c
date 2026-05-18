
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203cfaa(void)

{
  int iVar1;
  code *in_a5;
  
  iVar1 = (*in_a5)();
  if (*(char *)(iVar1 + 0x5a) != '\0') {
    (**(code **)(_DAT_ram_3fcdfec4 + 0x28))(0x3fcdffb4);
                    /* WARNING: Could not recover jumptable at 0x4203cfde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfec4 + 0x28))(_DAT_ram_3fcb6a40);
    return;
  }
  return;
}

