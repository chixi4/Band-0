
void FUN_ram_4209f520(int param_1)

{
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0xc) & 1) != 0) {
      thunk_FUN_ram_40390634(*(undefined4 *)(param_1 + 8));
    }
    thunk_FUN_ram_40390634(param_1);
    return;
  }
  return;
}

