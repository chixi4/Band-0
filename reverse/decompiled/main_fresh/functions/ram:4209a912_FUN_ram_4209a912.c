
void FUN_ram_4209a912(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(ushort *)(param_1 + 0x1b4) =
       *(ushort *)(param_1 + 0x1b4) & 0xfffe | (ushort)(*(int *)(param_1 + 0x18) == 0);
  *(undefined4 *)(param_1 + 0x134) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    *(int *)(*(int *)(param_1 + 4) + 0xc) = *(int *)(*(int *)(param_1 + 4) + 0xc) + -1;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (*(int *)(param_1 + 0x1fc) == 1) {
    *(undefined4 *)(param_1 + 0x19c) = 0;
  }
  *(undefined4 *)(param_1 + 0x138) = 1;
  FUN_ram_4209a8be(param_1);
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}

