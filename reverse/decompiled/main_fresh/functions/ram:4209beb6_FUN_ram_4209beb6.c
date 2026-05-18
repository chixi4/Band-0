
void FUN_ram_4209beb6(int param_1,int param_2)

{
  param_1 = param_1 + (*(byte *)(param_2 + 0xd) & 0xf) * 4;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = param_2;
  return;
}

