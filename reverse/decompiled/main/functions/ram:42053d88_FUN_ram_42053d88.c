
void FUN_ram_42053d88(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_4205c96c();
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    FUN_ram_4205c996();
    if (*(char *)(param_1 + 0xe) == '\0') {
      FUN_ram_4039bf1e();
    }
    return;
  }
  return;
}

