
uint FUN_ram_4201d364(int param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x2d) == '\0') {
    uVar1 = FUN_ram_4205ba70(*(undefined4 *)(param_1 + 0x10));
    return uVar1;
  }
  return (uint)(*(int *)(param_1 + 0x20) == *(int *)(param_1 + 0x1c));
}

