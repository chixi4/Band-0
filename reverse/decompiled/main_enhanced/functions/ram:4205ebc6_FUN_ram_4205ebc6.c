
void FUN_ram_4205ebc6(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    if ((*(byte *)(*(int *)(param_1 + 0x10) + 0x39) & 1) != 0) {
      FUN_ram_4205379a();
    }
    FUN_ram_420537de(*(undefined4 *)(param_1 + 0x10));
    if ((*(uint *)(param_1 + 0x54) & 8) != 0) {
      FUN_ram_42058690(0x4204ec12,*(undefined4 *)(param_1 + 0x10));
    }
    if ((*(uint *)(param_1 + 0x54) & 1) != 0) {
      FUN_ram_42059ece(*(undefined4 *)(param_1 + 0x10));
      return;
    }
  }
  return;
}

