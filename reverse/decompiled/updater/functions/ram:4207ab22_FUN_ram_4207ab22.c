
undefined4 FUN_ram_4207ab22(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 != 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(param_1 + 0x18);
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_1 + 0x1c);
    }
    return 0;
  }
  return 0x102;
}

