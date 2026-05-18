
void FUN_ram_42020360(void)

{
  if (DAT_ram_3fcc5144 == '\0') {
    FUN_ram_4201fe18(100);
    FUN_ram_4201fe48(2);
    FUN_ram_420201f0();
    FUN_ram_4201fe48(7);
    FUN_ram_4201fe50(0xa5);
    DAT_ram_3fcc5146 = 0;
    DAT_ram_3fcc5145 = 0;
    DAT_ram_3fcc5144 = '\x01';
  }
  return;
}

