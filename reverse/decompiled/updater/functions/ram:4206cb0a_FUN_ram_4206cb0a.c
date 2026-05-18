
undefined4 FUN_ram_4206cb0a(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x28) = param_2;
    return 0;
  }
  return 0xffffffff;
}

