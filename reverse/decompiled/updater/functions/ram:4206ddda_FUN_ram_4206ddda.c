
undefined4 FUN_ram_4206ddda(int param_1,undefined1 param_2,int *param_3,undefined4 *param_4)

{
  *param_3 = *(int *)(param_1 + 0xa8) + 4;
  *param_4 = 0xffc;
  *(undefined4 *)(param_1 + 0xac) = 0x16;
  **(undefined1 **)(param_1 + 0xa8) = param_2;
  return 0;
}

