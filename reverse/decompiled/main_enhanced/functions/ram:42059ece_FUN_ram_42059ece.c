
void FUN_ram_42059ece(int param_1)

{
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 7) & 2) == 0) {
      FUN_ram_420530f0();
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}

