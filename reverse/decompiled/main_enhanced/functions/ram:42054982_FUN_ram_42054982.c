
void FUN_ram_42054982(int param_1,undefined4 param_2,undefined1 param_3)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x14) == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf1e();
    }
    *(undefined4 *)(param_1 + 0x90) = param_2;
    *(undefined1 *)(param_1 + 0x21) = param_3;
  }
  return;
}

