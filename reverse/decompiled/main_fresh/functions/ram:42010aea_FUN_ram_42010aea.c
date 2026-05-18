
void FUN_ram_42010aea(void)

{
  undefined4 *puVar1;
  
  FUN_ram_42010a9c(0);
  for (puVar1 = &DAT_ram_3c0fba2c; puVar1 < &DAT_ram_3c0fba2c; puVar1 = puVar1 + 1) {
    (*(code *)*puVar1)();
  }
  puVar1 = (undefined4 *)&DAT_ram_3c0fba48;
  while (puVar1 = puVar1 + -1, &UNK_ram_3c0fba2b < puVar1) {
    (*(code *)*puVar1)();
  }
  FUN_ram_42010a9c(1);
  FUN_ram_420b5a82();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

