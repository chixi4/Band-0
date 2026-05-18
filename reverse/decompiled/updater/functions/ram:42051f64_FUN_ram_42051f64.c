
void FUN_ram_42051f64(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_420599c2();
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    FUN_ram_420599ec();
    return;
  }
  return;
}

