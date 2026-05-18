
void FUN_ram_4205323e(int param_1)

{
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  if ((((*(byte *)(param_1 + 0x39) & 5) == 5) && (*(int *)(param_1 + 4) != 0)) &&
     ((*(byte *)(param_1 + 0x39) & 0x20) != 0)) {
    FUN_ram_4205b3c8();
    return;
  }
  return;
}

