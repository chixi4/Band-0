
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4205f25c(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  fence();
  fence();
  if (DAT_ram_3fcb5fc4 != '\0') {
    fence();
    DAT_ram_3fcb5fc4 = 0;
    fence();
    while( true ) {
      fence();
      fence();
      if (DAT_ram_3fcb5fc5 == '\0') break;
      FUN_ram_40396524(10);
    }
    puVar1 = _DAT_ram_3fcb5fa8;
    puVar2 = (undefined4 *)*_DAT_ram_3fcb5fa8;
    while (puVar1 != (undefined4 *)&DAT_ram_3fcb5fa8) {
      if ((code *)puVar1[8] != (code *)0x0) {
        (*(code *)puVar1[8])(puVar1[6],puVar1[7]);
      }
      FUN_ram_4205edf2(puVar1);
      puVar1 = puVar2;
      puVar2 = (undefined4 *)*puVar2;
    }
    if (_DAT_ram_3fcb6870 != 0) {
      (**(code **)(_DAT_ram_3fcb6854 + 0x50))();
      _DAT_ram_3fcb6870 = 0;
    }
    if (_DAT_ram_3fcb5fc8 != 0) {
      (**(code **)(_DAT_ram_3fcb6854 + 0x38))();
      _DAT_ram_3fcb5fc8 = 0;
    }
    FUN_ram_4205eddc();
    (**(code **)(_DAT_ram_3fcb6854 + 0xe8))(0x3fcb5fb0);
    (*(code *)&SUB_ram_40010488)(&DAT_ram_3fcb5fa8,0,0x24);
    return;
  }
  return;
}

