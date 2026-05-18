
undefined4 FUN_ram_4207bb4e(int param_1,byte param_2)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      *(byte *)(*(int *)(param_1 + 0xc) + 4) = param_2 ^ 1;
    }
    return 0;
  }
  return 0x102;
}

