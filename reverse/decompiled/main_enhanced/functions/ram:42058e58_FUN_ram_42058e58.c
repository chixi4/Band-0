
uint FUN_ram_42058e58(int param_1,int param_2,undefined1 param_3,int param_4)

{
  if (0x45 < (uint)(param_4 + 2 + param_1)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  *(undefined1 *)(param_2 + param_1) = param_3;
  *(char *)(param_2 + (param_1 + 1U & 0xffff)) = (char)param_4;
  return param_1 + 2U & 0xffff;
}

