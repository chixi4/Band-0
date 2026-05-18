
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4202510e(int param_1)

{
  int iVar1;
  
  if (param_1 != 1) {
    return 0xffffffff;
  }
  if (_DAT_ram_3fcb6944 == 1) {
    if (DAT_ram_3fcb6a3c == '\0') {
      FUN_ram_40391b3c(_DAT_ram_3fcb6940);
      FUN_ram_4204f82e(2);
      DAT_ram_3fcb6a3c = '\x01';
    }
    FUN_ram_420af746(1);
    iVar1 = FUN_ram_42025242();
    if ((iVar1 == 0) && (iVar1 = FUN_ram_42037a8e(1), iVar1 == 0)) {
      _DAT_ram_3fcb6944 = 2;
      return 0;
    }
    FUN_ram_4202525a();
    if (DAT_ram_3fcb6a3c != '\0') {
      FUN_ram_4204f5ac(2);
      FUN_ram_40391b7a(_DAT_ram_3fcb6940);
      DAT_ram_3fcb6a3c = '\0';
    }
  }
  return 0xffffffff;
}

