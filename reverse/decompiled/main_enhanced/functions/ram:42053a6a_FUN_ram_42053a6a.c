
undefined4 FUN_ram_42053a6a(int param_1,uint param_2)

{
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  if (0xffff < param_2) {
    return 1;
  }
  if (param_2 != 0) {
    if ((uint)*(ushort *)(param_1 + 10) < (param_2 & 0xffff)) {
      return 1;
    }
    *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) - (short)param_2;
    *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) + param_2;
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) - (short)param_2;
  }
  return 0;
}

