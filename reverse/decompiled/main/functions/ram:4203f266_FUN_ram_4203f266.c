
void FUN_ram_4203f266(int param_1)

{
  FUN_ram_4203eff0();
  *(undefined2 *)(param_1 + 0x204) = 0;
  *(undefined2 *)(param_1 + 0x202) = 0;
  *(byte *)(param_1 + 0x200) = *(byte *)(param_1 + 0x200) & 0xfc;
  return;
}

