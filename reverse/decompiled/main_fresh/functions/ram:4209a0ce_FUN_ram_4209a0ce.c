
void FUN_ram_4209a0ce(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  FUN_ram_4207f1d6(param_1 + 8);
  FUN_ram_420992a6(0x4208997e,*(undefined4 *)(param_1 + 0x210),0);
  if ((*(ushort *)(param_1 + 0x1b4) & 2) != 0) {
    *(ushort *)(param_1 + 0x1b4) = *(ushort *)(param_1 + 0x1b4) | 4;
    return;
  }
  FUN_ram_42099692(param_1);
  return;
}

