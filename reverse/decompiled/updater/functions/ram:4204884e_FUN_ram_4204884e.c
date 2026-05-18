
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_ram_4204884e(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (DAT_ram_3fcb5544 != '\0') {
    if (param_1 != 0) {
      FUN_ram_40399aee();
    }
    cVar1 = DAT_ram_3fcb5383;
    if (DAT_ram_3fcb5383 != '\0') {
      DAT_ram_3fcb5383 = 0;
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x19c))(0);
      FUN_ram_4039bbe8();
      return cVar1;
    }
    if ((DAT_ram_3fcb5384 == '\0') && (iVar2 = FUN_ram_4204acb6(1), iVar2 == 0)) {
      if (DAT_ram_3fcb5386 != '\0') {
        return '\0';
      }
      FUN_ram_42047c2a(1);
      return '\0';
    }
  }
  return '\x01';
}

