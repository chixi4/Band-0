
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42048fbe(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    iVar1 = (*(code *)&SUB_ram_40011f6c)();
    param_1 = (uint)(iVar1 != 0) << 6;
  }
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x1ac))(0,0xffff);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x1b0))(0,param_1);
  _DAT_ram_3fcb5504 = param_1;
  if ((param_1 & 0xffffffbf) == 0) {
    uVar2 = 1000;
    UNRECOVERED_JUMPTABLE = *(code **)(_DAT_ram_3fcdfdd8 + 0x1b4);
  }
  else if (param_1 == 1) {
    uVar2 = 100;
    UNRECOVERED_JUMPTABLE = *(code **)(_DAT_ram_3fcdfdd8 + 0x1b4);
  }
  else {
    if (param_1 == 2) {
      uVar3 = 100;
      if (DAT_ram_3fcb5539 == '\0') {
        uVar3 = 0xf0;
      }
                    /* WARNING: Could not recover jumptable at 0x4204905a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x1b4))(uVar3);
      return;
    }
    if (param_1 != 4) {
      return;
    }
    uVar2 = _DAT_ram_3fcb53a4 / 100;
    UNRECOVERED_JUMPTABLE = *(code **)(_DAT_ram_3fcdfdd8 + 0x1b4);
  }
                    /* WARNING: Could not recover jumptable at 0x42049020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}

