
void FUN_ram_4206587c(int param_1)

{
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0xc) & 1) != 0) {
      thunk_FUN_ram_40390608(*(undefined4 *)(param_1 + 8));
    }
    thunk_FUN_ram_40390608(param_1);
    return;
  }
  return;
}

