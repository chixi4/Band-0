
void FUN_ram_42026fce(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_3 = 0x407;
  *(undefined1 *)(param_3 + 1) = 7;
  *(byte *)(param_3 + 5) = *(byte *)(param_3 + 5) | 0x10;
  return;
}

