
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42091ad8(void)

{
  int iVar1;
  
  if (((DAT_ram_3fcc440e == '\0') || (DAT_ram_3fcc4568 == '\0')) || (DAT_ram_3fcc45d4 != '\0')) {
    return;
  }
  if ((code *)*_DAT_ram_3fcb84cc != (code *)0x0) {
    (*(code *)*_DAT_ram_3fcb84cc)();
  }
  if (((code *)_DAT_ram_3fcb84cc[3] != (code *)0x0) &&
     (iVar1 = (*(code *)_DAT_ram_3fcb84cc[3])(), iVar1 != 0)) {
    FUN_ram_42090c90();
    return;
  }
  return;
}

