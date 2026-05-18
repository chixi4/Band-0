
undefined4 FUN_ram_4205f732(int param_1,undefined4 *param_2)

{
  if ((param_1 != 0) && ((*(uint *)(param_1 + 0x54) & 2) == 0)) {
    *param_2 = *(undefined4 *)(param_1 + 0x3c);
    return 0;
  }
  return 0x102;
}

