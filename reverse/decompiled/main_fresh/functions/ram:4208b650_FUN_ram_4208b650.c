
void FUN_ram_4208b650(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x40000;
  thunk_FUN_ram_42092c00(0x42063c42,2,0);
  return;
}

