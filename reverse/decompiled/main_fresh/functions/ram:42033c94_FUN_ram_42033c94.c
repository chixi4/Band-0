
void FUN_ram_42033c94(int param_1)

{
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    FUN_ram_4202d766(param_1 + 0x18,0x10);
  }
  if ((*(byte *)(param_1 + 0x39) & 1) != 0) {
    FUN_ram_4202d766(param_1 + 0x29,0x10);
  }
  if ((*(byte *)(param_1 + 0x4a) & 1) != 0) {
    FUN_ram_4202d766(param_1 + 0x3a,0x10);
    return;
  }
  return;
}

