
void FUN_ram_4039666c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)&DAT_ram_3fcc1d50;
  do {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 != (undefined4 *)&DAT_ram_3fcc1d70);
  return;
}

