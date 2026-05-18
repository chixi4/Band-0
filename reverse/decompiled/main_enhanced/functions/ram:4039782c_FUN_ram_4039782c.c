
void FUN_ram_4039782c(int param_1)

{
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_40396f58();
  }
  if (*(char *)(param_1 + 0x46) == '\0') {
    thunk_FUN_ram_40390634();
    return;
  }
  return;
}

