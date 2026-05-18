
void FUN_ram_4202e842(undefined1 *param_1)

{
  if (param_1 != (undefined1 *)0x0) {
    if (*(int *)(param_1 + 8) == 1) {
      FUN_ram_4202f9c2(param_1 + 0xc);
      FUN_ram_42024774(param_1 + 0x6c);
      FUN_ram_4202f9ba(param_1 + 0x74);
      FUN_ram_4202f9ba(param_1 + 0x8c);
      FUN_ram_42024774(param_1 + 0xa4);
    }
    *param_1 = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  }
  return;
}

