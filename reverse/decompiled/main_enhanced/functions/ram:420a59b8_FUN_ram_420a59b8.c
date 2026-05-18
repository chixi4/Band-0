
void FUN_ram_420a59b8(int param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x94) != 0) {
      FUN_ram_4206d7fc(*(int *)(param_1 + 0x94),0x93d);
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
    if (*(int *)(param_1 + 0x58) != 0) {
      FUN_ram_4206d7fc(*(int *)(param_1 + 0x58),0x213d);
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    if (*(int *)(param_1 + 0x44) != 0) {
      FUN_ram_420a5152();
      FUN_ram_4206d7d4(*(undefined4 *)(param_1 + 0x44));
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_ram_420a593e(param_1);
      FUN_ram_4206d7d4(*(undefined4 *)(param_1 + 0x38));
      FUN_ram_420a5152(*(undefined4 *)(param_1 + 0x48));
      FUN_ram_4206d7d4(*(undefined4 *)(param_1 + 0x48));
      FUN_ram_420a5988(*(undefined4 *)(param_1 + 0x34));
      FUN_ram_4206d7d4(*(undefined4 *)(param_1 + 0x34));
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_ram_420a5988();
      FUN_ram_4206d7d4(*(undefined4 *)(param_1 + 0x30));
    }
    FUN_ram_420a52d6(param_1);
    FUN_ram_4206d7da(param_1,0xd8);
    return;
  }
  return;
}

