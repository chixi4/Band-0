
undefined1 FUN_ram_4205ba70(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (*(char *)(iVar1 + 0x2c) != '\0') {
    return *(undefined1 *)(param_1 + 0x7c);
  }
  return *(int *)(iVar1 + 0x20) == *(int *)(iVar1 + 0x10) &&
         *(int *)(iVar1 + 0x14) == *(int *)(iVar1 + 0x24);
}

