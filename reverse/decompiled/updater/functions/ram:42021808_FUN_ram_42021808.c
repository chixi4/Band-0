
undefined4 FUN_ram_42021808(int param_1,undefined4 *param_2)

{
  if ((param_1 != 0) && ((*(uint *)(param_1 + 0x50) & 2) == 0)) {
    *param_2 = *(undefined4 *)(param_1 + 0x38);
    return 0;
  }
  return 0x102;
}

