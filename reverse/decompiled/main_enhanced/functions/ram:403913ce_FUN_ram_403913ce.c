
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403913ce(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0) {
    FUN_ram_4039100a();
  }
  else {
    puVar1 = (undefined4 *)&DAT_ram_3fcb8c58;
    do {
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)();
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined4 *)&DAT_ram_3fcb8c64);
  }
  if (_DAT_ram_3fcb8c34 == 0) {
    FUN_ram_40395aea();
    return;
  }
  return;
}

