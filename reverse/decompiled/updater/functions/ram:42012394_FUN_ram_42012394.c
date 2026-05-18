
undefined4 FUN_ram_42012394(uint param_1)

{
  if (param_1 < 8) {
    FUN_ram_40394d2c();
    FUN_ram_40394d60();
    *(undefined4 *)(param_1 * 4 + 0x3fcb173c) = 0;
    FUN_ram_40394d2c();
    FUN_ram_40394d8e();
    return 0;
  }
  return 0x102;
}

