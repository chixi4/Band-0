
void FUN_ram_4205de78(int param_1)

{
  if (*(int *)(param_1 + 8) == 0) {
    FUN_ram_4205dea0();
    if ((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0x14) == 0)) {
      FUN_ram_420531f8(6);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

