
void FUN_ram_40394ae2(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)&DAT_ram_3fcb3558;
  do {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 != (undefined4 *)&DAT_ram_3fcb3578);
  return;
}

