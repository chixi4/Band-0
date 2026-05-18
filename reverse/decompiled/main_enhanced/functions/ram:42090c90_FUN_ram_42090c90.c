
void FUN_ram_42090c90(void)

{
  DAT_ram_3fcc4412 = 1;
  if (*(char *)(gp + 0x202) != '\0') {
    FUN_ram_42096756();
    return;
  }
  return;
}

