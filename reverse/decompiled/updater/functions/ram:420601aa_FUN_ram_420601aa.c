
void FUN_ram_420601aa(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_42060102();
    FUN_ram_4206636c(*(undefined4 *)(param_1 + 0x68),0);
    FUN_ram_4206636c(*(undefined4 *)(param_1 + 0x6c),0);
    (*(code *)&SUB_ram_40010488)(param_1,0,0x80);
    return;
  }
  return;
}

