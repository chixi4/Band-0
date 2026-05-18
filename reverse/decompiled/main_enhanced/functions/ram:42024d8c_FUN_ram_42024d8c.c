
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42024d8c(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_42048b76(0,0,"steadier.",&DAT_ram_3fcb6940);
  if (iVar1 == 0) {
    FUN_ram_420b4cb4();
    iVar1 = FUN_ram_420b4a0e(FUN_ram_40395d9a);
    if (iVar1 == 0) {
      return 0;
    }
  }
  FUN_ram_420b4cc4();
  FUN_ram_420b4a40(FUN_ram_40395d9a);
  if (_DAT_ram_3fcb6940 != 0) {
    FUN_ram_42048c0a();
    _DAT_ram_3fcb6940 = 0;
  }
  return iVar1;
}

