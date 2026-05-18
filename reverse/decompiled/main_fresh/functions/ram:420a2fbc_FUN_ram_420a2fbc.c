
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420a2fbc(int param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x5c4) != _DAT_ram_3fcc53dc) {
      FUN_ram_420aa2b8();
    }
    *(undefined4 *)(param_1 + 0x5c4) = 0;
    FUN_ram_420aa2b8(param_1 + 0x42c);
    FUN_ram_420aa2b8(param_1 + 0x5c8);
    FUN_ram_420a85ae(param_1 + 0x760);
    FUN_ram_42073554(param_1 + 0xd8);
    FUN_ram_420a5af0(param_1 + 0x3bc);
    FUN_ram_420715d4(param_1 + 0x27c);
    FUN_ram_420a7180(param_1);
    return;
  }
  return;
}

