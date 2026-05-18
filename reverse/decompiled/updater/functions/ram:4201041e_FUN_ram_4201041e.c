
undefined4 FUN_ram_4201041e(void)

{
  undefined1 *puVar1;
  
  puVar1 = &DAT_ram_3fcb16bc;
  do {
    if (*(code **)(puVar1 + 0x10) != (code *)0x0) {
      (**(code **)(puVar1 + 0x10))();
    }
    puVar1 = puVar1 + -4;
  } while (puVar1 != (undefined1 *)0x3fcb16a8);
  FUN_ram_40396232();
  FUN_ram_40394b22();
  FUN_ram_40390890();
  return 0;
}

