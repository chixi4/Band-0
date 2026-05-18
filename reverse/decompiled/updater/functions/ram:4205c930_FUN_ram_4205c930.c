
undefined4 FUN_ram_4205c930(int param_1)

{
  if (param_1 == 0) {
    return 0x102;
  }
  if ((*(int *)(param_1 + 0x24) != 0) && (*(int *)(*(int *)(param_1 + 0x24) + 4) != 0)) {
    FUN_ram_4205b4ca();
    return 0;
  }
  return 0;
}

