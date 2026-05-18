
undefined4 FUN_ram_420666cc(int param_1,uint param_2,undefined4 param_3)

{
  if ((param_1 != 0) && (param_2 < 0xd)) {
    *(undefined4 *)(*(int *)(param_1 + 0x400) + param_2 * 4) = param_3;
    return 0;
  }
  return 0x102;
}

