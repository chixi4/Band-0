
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4207b0d4(void)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (_DAT_ram_3fcb0ddc < 3) {
    uStack_18 = 1;
    uStack_14 = 0x6001f000;
    iVar1 = (*(code *)&SUB_ram_400102a4)(&uStack_18);
    if (iVar1 != 0) {
      (*(code *)&SUB_ram_40010288)(&uStack_18);
      (*(code *)&SUB_ram_4001029c)(&uStack_18);
      (*(code *)&SUB_ram_4001028c)(&uStack_18);
    }
    iVar1 = (*(code *)&SUB_ram_400102a4)(0x3fcaf898);
    if (iVar1 != 0) {
      (*(code *)&SUB_ram_40010288)(0x3fcaf898);
      (*(code *)&SUB_ram_4001029c)(0x3fcaf898);
      (*(code *)&SUB_ram_4001028c)(0x3fcaf898);
    }
    return;
  }
  return;
}

