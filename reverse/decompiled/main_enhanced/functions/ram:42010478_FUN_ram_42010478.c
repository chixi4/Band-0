
undefined4 FUN_ram_42010478(void)

{
  undefined1 *puVar1;
  
  puVar1 = &DAT_ram_3fcb8bac;
  do {
    if (*(code **)(puVar1 + 0x10) != (code *)0x0) {
      (**(code **)(puVar1 + 0x10))();
    }
    puVar1 = puVar1 + -4;
  } while (puVar1 != (undefined1 *)0x3fcb8b98);
  FUN_ram_403980c6();
  FUN_ram_403966ac();
  FUN_ram_4039091a();
  return 0;
}

