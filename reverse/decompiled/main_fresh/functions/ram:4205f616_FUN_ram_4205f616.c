
undefined4 FUN_ram_4205f616(int param_1,undefined4 *param_2)

{
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    *(undefined4 *)(param_1 + 0x28) = *param_2;
    *(undefined4 *)(param_1 + 0x2c) = param_2[1];
    *(undefined4 *)(param_1 + 0x30) = param_2[2];
    *(undefined4 *)(param_1 + 0x34) = param_2[3];
    *(undefined4 *)(param_1 + 0x38) = param_2[4];
    return 0;
  }
  return 0x5001;
}

