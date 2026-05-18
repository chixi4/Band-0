
void FUN_ram_4039fd48(undefined4 param_1,int param_2)

{
  int extraout_a1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  if (param_2 == 0) {
    FUN_ram_4039fd38();
    param_2 = extraout_a1;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_2 * 8 + 0x3fcc1bd0);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4039fd78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)(param_2 * 8 + 0x3fcc1bd4));
    return;
  }
  return;
}

