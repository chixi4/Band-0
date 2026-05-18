
void FUN_ram_4205493c(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x14) == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf1e();
    }
    *(undefined4 *)(param_1 + 0x84) = param_2;
  }
  return;
}

