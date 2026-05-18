
undefined4 FUN_ram_4204c578(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0xc) == -1) {
    *(undefined4 *)(param_1 + 0x10) = param_2;
    return 0;
  }
  return 0x110b;
}

