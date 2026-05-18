
void FUN_ram_42039054(void)

{
  if (*(char *)(*(int *)(gp + -0x2b8) + 0x416) != '\0') {
    DAT_ram_3fcb51c9 = 1;
    FUN_ram_42033fd8(1,4,4,0x3c07b2e8,*(int *)(gp + -0x2b8) + 8);
    return;
  }
  FUN_ram_42033fd8(1,4,4,0x3c07b32c);
  return;
}

