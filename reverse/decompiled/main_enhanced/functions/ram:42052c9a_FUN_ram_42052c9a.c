
void FUN_ram_42052c9a(void)

{
  undefined1 *puVar1;
  
  FUN_ram_420526da(0);
  FUN_ram_420526da(1);
  FUN_ram_420526da(2);
  FUN_ram_420526da(3);
  puVar1 = (undefined1 *)0x3fcc207c;
  do {
    if (puVar1[0xc] != '\0') {
      FUN_ram_420585b0(1000,0x42042d02,0);
      return;
    }
    puVar1 = puVar1 + 0x114;
  } while (puVar1 != &DAT_ram_3fcc24cc);
  FUN_ram_42058690(0x42042d02,0);
  DAT_ram_3fcc52cb = 0;
  return;
}

