
void FUN_ram_420530f0(uint param_1)

{
  if ((param_1 != 0) && (param_1 == (param_1 + 3 & 0xfffffffc))) {
    thunk_FUN_ram_40390634();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

