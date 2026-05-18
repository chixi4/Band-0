
undefined4 FUN_ram_42021a14(int param_1,int param_2)

{
  if (param_2 == 1) {
    return *(undefined4 *)(param_1 + 0x44);
  }
  if (param_2 != 2) {
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 0x48);
}

