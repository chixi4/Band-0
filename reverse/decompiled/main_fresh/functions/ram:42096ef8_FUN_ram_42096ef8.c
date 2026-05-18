
void FUN_ram_42096ef8(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 8) = param_2[1];
  *(undefined4 *)(param_1 + 0x34) = param_2[2];
  *(undefined4 *)(param_1 + 0x38) = param_2[3];
  return;
}

