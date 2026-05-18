
void FUN_ram_42051554(int param_1)

{
  if ((((*(byte *)(param_1 + 0x39) & 5) == 5) && (*(int *)(param_1 + 4) != 0)) &&
     ((*(byte *)(param_1 + 0x39) & 0x20) != 0)) {
    FUN_ram_420585be();
    return;
  }
  return;
}

