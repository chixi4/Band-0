
void FUN_ram_4203dc14(int param_1)

{
  FUN_ram_420492cc(0,*(ushort *)(param_1 + 0x26) & 0x3fff,param_1 + 4,
                   *(undefined2 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x20),
                   *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  FUN_ram_42047b06(*(undefined2 *)(param_1 + 0x332));
  return;
}

