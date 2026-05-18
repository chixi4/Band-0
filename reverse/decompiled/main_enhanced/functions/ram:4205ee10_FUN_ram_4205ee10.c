
void FUN_ram_4205ee10(int param_1)

{
  if ((*(char *)(param_1 + 0x44) == '\0') && (*(int *)(param_1 + 0x10) != 0)) {
    *(undefined1 *)(param_1 + 0x44) = 1;
    FUN_ram_420585b0(120000,0x4204eec4,param_1);
    return;
  }
  return;
}

