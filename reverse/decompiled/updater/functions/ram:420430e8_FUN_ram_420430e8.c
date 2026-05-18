
void FUN_ram_420430e8(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x40000;
  thunk_FUN_ram_4204a1e8(0x42021d8c,2,0);
  return;
}

