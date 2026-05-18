
void FUN_ram_4202733a(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (param_1[0x10] != 0) {
      FUN_ram_420293c8(param_1[0x10],0x24);
    }
    if (param_1[0xf] != 0) {
      (**(code **)(*(int *)((*(byte *)(*param_1 + 7) & 0x7c) + 0x3c077be0) + 0x28))();
    }
    FUN_ram_420293a6(param_1,0x44);
    return;
  }
  return;
}

