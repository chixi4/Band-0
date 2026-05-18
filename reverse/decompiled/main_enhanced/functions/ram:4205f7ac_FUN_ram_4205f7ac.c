
byte FUN_ram_4205f7ac(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x10) != 0)) {
    return *(byte *)(*(int *)(param_1 + 0x10) + 0x39) & 1;
  }
  return 0;
}

