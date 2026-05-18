
void FUN_ram_4206f1c8(int param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x94) != 0) {
      FUN_ram_420293c8(*(int *)(param_1 + 0x94),0x114d);
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
    if (*(int *)(param_1 + 0x58) != 0) {
      FUN_ram_420293c8(*(int *)(param_1 + 0x58),0x414d);
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    if (*(int *)(param_1 + 0x44) != 0) {
      FUN_ram_4206e7ba();
      FUN_ram_420293a0(*(undefined4 *)(param_1 + 0x44));
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_ram_4206f150(param_1);
      FUN_ram_420293a0(*(undefined4 *)(param_1 + 0x38));
      FUN_ram_4206e7ba(*(undefined4 *)(param_1 + 0x48));
      FUN_ram_420293a0(*(undefined4 *)(param_1 + 0x48));
      FUN_ram_4206f19a(*(undefined4 *)(param_1 + 0x34));
      FUN_ram_420293a0(*(undefined4 *)(param_1 + 0x34));
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_ram_4206f19a();
      FUN_ram_420293a0(*(undefined4 *)(param_1 + 0x30));
    }
    FUN_ram_4206eb64(param_1);
    FUN_ram_420293a6(param_1,0xd8);
    return;
  }
  return;
}

