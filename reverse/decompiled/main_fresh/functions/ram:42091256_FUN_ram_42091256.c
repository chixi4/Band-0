
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_ram_42091256(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (DAT_ram_3fcc45d4 != '\0') {
    if (param_1 != 0) {
      FUN_ram_4039beb4();
    }
    cVar1 = DAT_ram_3fcc4413;
    if (DAT_ram_3fcc4413 != '\0') {
      DAT_ram_3fcc4413 = 0;
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x19c))(0);
      FUN_ram_4039dfbc();
      return cVar1;
    }
    if ((DAT_ram_3fcc4414 == '\0') && (iVar2 = FUN_ram_420936ce(1), iVar2 == 0)) {
      if (DAT_ram_3fcc4416 != '\0') {
        return '\0';
      }
      FUN_ram_42090632(1);
      return '\0';
    }
  }
  return '\x01';
}

