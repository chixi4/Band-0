
undefined4 FUN_ram_42097fd8(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x40) = param_2;
    *(undefined4 *)(param_1 + 0x44) = param_3;
    return 0;
  }
  return 0xfffffff0;
}

