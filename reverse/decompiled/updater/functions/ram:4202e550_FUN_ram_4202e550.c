
void FUN_ram_4202e550(int param_1)

{
  (*(code *)&SUB_ram_40010488)(param_1,0,0x140);
  FUN_ram_420231ac(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 10000;
  return;
}

