
undefined4 FUN_ram_420a2bf8(int param_1,undefined4 *param_2)

{
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    *param_2 = *(undefined4 *)(param_1 + 0x768);
    return 0;
  }
  return 0x102;
}

