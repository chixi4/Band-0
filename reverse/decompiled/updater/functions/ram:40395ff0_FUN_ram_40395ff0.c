
void FUN_ram_40395ff0(int param_1)

{
  FUN_ram_40394eae();
  FUN_ram_42077a38(param_1 + 0x58);
  if (*(char *)(param_1 + 0x14d) == '\0') {
    thunk_FUN_ram_40390608(*(undefined4 *)(param_1 + 0x30));
  }
  else if (*(char *)(param_1 + 0x14d) != '\x01') {
    return;
  }
  thunk_FUN_ram_40390608(param_1);
  return;
}

