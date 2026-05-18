
void FUN_ram_420a6086(int param_1)

{
  undefined4 uVar1;
  
  FUN_ram_420a593e();
  FUN_ram_4206d7d4(*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_ram_420a5152();
    FUN_ram_4206d7d4(*(undefined4 *)(param_1 + 0x44));
  }
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  return;
}

