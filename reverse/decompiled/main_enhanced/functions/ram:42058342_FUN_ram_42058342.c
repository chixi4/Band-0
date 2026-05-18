
void FUN_ram_42058342(int param_1)

{
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  if (*(char *)(param_1 + 0x46) != -1) {
    *(char *)(param_1 + 0x46) = *(char *)(param_1 + 0x46) + '\x01';
  }
  FUN_ram_42057e96();
  return;
}

