
void FUN_ram_42048288(void)

{
  DAT_ram_3fcb5382 = 1;
  if (*(char *)(gp + 0xce) != '\0') {
    FUN_ram_4204dc98();
    return;
  }
  return;
}

