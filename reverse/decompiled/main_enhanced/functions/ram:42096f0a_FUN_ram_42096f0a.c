
void FUN_ram_42096f0a(int param_1,undefined4 *param_2,int param_3)

{
  param_1 = param_1 + param_3 * 8;
  *(undefined4 *)(param_1 + 0xc) = *param_2;
  *(undefined4 *)(param_1 + 0x10) = param_2[1];
  return;
}

