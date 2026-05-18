
void FUN_ram_420a301c(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_420a2fbc();
    if ((*(char *)(param_1 + 0x788) != '\0') && (*(int *)(param_1 + 0x428) != -1)) {
      FUN_ram_420a72ee(param_1 + 0x428);
      *(undefined4 *)(param_1 + 0x768) = 0xffffffff;
    }
    return;
  }
  return;
}

