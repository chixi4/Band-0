
undefined4 FUN_ram_420825fc(int param_1)

{
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_ram_42088ee6();
  }
  else {
    if (*(char *)(param_1 + 8) != '\x01') {
      return 0x102;
    }
    FUN_ram_42076bc0(*(undefined4 *)(param_1 + 0xc));
  }
  return 0;
}

