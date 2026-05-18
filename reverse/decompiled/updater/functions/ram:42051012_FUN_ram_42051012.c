
void FUN_ram_42051012(void)

{
  undefined1 *puVar1;
  
  FUN_ram_42050a5c(0);
  FUN_ram_42050a5c(1);
  FUN_ram_42050a5c(2);
  FUN_ram_42050a5c(3);
  puVar1 = (undefined1 *)0x3fcb5828;
  do {
    if (puVar1[0xc] != '\0') {
      FUN_ram_4205598a(1000,0x4204107a,0);
      return;
    }
    puVar1 = puVar1 + 0x114;
  } while (puVar1 != &DAT_ram_3fcb5c78);
  FUN_ram_42055a5a(0x4204107a,0);
  DAT_ram_3fcb679e = 0;
  return;
}

