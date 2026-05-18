
void FUN_ram_42020eda(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    if ((*(byte *)(*(int *)(param_1 + 0x10) + 0x39) & 1) != 0) {
      FUN_ram_42051a34();
    }
    FUN_ram_42051a78(*(undefined4 *)(param_1 + 0x10));
    if ((*(uint *)(param_1 + 0x50) & 8) != 0) {
      FUN_ram_42055a5a(0x42010f26,*(undefined4 *)(param_1 + 0x10));
    }
    if ((*(uint *)(param_1 + 0x50) & 1) != 0) {
      FUN_ram_42057234(*(undefined4 *)(param_1 + 0x10));
      return;
    }
  }
  return;
}

