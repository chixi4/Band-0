
void FUN_ram_42010a52(void)

{
  undefined4 *puVar1;
  
  FUN_ram_42010a04(0);
  for (puVar1 = (undefined4 *)&DAT_ram_3c07aa74; puVar1 < &DAT_ram_3c07aa74; puVar1 = puVar1 + 1) {
    (*(code *)*puVar1)();
  }
  puVar1 = (undefined4 *)0x3c07aa8c;
  while (puVar1 = puVar1 + -1, (undefined4 *)0x3c07aa73 < puVar1) {
    (*(code *)*puVar1)();
  }
  FUN_ram_42010a04(1);
  FUN_ram_4207b5e6();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

