
void FUN_ram_42054ba6(int param_1)

{
  if (param_1 != 0) {
    if ((1 < *(uint *)(param_1 + 0x14)) && (*(uint *)(param_1 + 0x14) != 10)) {
      FUN_ram_4205455a();
      if (*(int *)(param_1 + 0x7c) != 0) {
        FUN_ram_42053ac4();
        *(undefined4 *)(param_1 + 0x7c) = 0;
      }
      if (*(int *)(param_1 + 0x78) != 0) {
        FUN_ram_42054b8a(param_1);
      }
      *(undefined2 *)(param_1 + 0x34) = 0xffff;
      FUN_ram_420548c6(*(undefined4 *)(param_1 + 0x70));
      FUN_ram_420548c6(*(undefined4 *)(param_1 + 0x74));
      *(undefined4 *)(param_1 + 0x70) = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(undefined2 *)(param_1 + 0x6c) = 0;
    }
    return;
  }
  return;
}

