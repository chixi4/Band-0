
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420490d0(void)

{
  int iVar1;
  
  if (((DAT_ram_3fcb537e == '\0') || (DAT_ram_3fcb54d8 == '\0')) || (DAT_ram_3fcb5544 != '\0')) {
    return;
  }
  if ((code *)*_DAT_ram_3fcb1020 != (code *)0x0) {
    (*(code *)*_DAT_ram_3fcb1020)();
  }
  if (((code *)_DAT_ram_3fcb1020[3] != (code *)0x0) &&
     (iVar1 = (*(code *)_DAT_ram_3fcb1020[3])(), iVar1 != 0)) {
    FUN_ram_42048288();
    return;
  }
  return;
}

