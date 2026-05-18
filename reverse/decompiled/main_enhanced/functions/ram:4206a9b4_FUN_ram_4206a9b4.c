
void FUN_ram_4206a9b4(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (param_1[0x10] != 0) {
      FUN_ram_4206d7fc(param_1[0x10],0x24);
    }
    if (param_1[0xf] != 0) {
      (**(code **)(*(int *)(&DAT_ram_3c0f9944 + (*(byte *)(*param_1 + 7) & 0x7c)) + 0x28))();
    }
    FUN_ram_4206d7da(param_1,0x44);
    return;
  }
  return;
}

