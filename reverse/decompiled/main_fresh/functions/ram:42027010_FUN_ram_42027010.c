
void FUN_ram_42027010(int param_1)

{
  if ((*(byte *)(param_1 + 8) & 0x10) != 0) {
    FUN_ram_42030b16();
    return;
  }
  FUN_ram_4202d10c();
  return;
}

