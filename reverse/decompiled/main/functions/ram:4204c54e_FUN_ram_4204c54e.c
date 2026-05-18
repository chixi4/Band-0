
undefined4 FUN_ram_4204c54e(int param_1,undefined4 *param_2)

{
  if ((*(int *)(param_1 + 0xc) - 1U < 0xfffffffe) && (*(int *)(param_1 + 0xc) != -0x10)) {
    *param_2 = *(undefined4 *)(param_1 + 0x10);
    return 0;
  }
  return 0x1101;
}

