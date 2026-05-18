
undefined4 FUN_ram_420a34f2(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x28) = param_2;
    return 0;
  }
  return 0xffffffff;
}

