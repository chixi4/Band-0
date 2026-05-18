
undefined4 FUN_ram_42035eac(int param_1)

{
  if (param_1 != 0) {
    thunk_EXT_FUN_ram_40010488(param_1,0,0x10);
    thunk_EXT_FUN_ram_40010488(param_1 + 0x30,0,0x10);
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0x10000;
    return 1;
  }
  return 0;
}

