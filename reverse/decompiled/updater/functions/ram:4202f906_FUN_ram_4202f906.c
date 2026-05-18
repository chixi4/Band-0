
char FUN_ram_4202f906(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    return (*(int *)(param_1 + 0x24) == 0) + '\x01';
  }
  return '\0';
}

