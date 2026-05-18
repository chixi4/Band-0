
void FUN_ram_4206c664(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_4206c604();
    if ((*(char *)(param_1 + 0x788) != '\0') && (*(int *)(param_1 + 0x428) != -1)) {
      FUN_ram_4207105a(param_1 + 0x428);
      *(undefined4 *)(param_1 + 0x768) = 0xffffffff;
    }
    return;
  }
  return;
}

