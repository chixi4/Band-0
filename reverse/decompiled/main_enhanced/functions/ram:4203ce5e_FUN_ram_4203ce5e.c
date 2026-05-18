
void FUN_ram_4203ce5e(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s1;
  int in_a4;
  int in_a5;
  int unaff_s2;
  
  if ((in_a4 < 0) &&
     (((*(char *)(in_a5 + 0x29) == '\0' || (unaff_s1 - *(int *)(in_a5 + 0x30) < 0)) &&
      (param_1 == 0)))) {
    (*UNRECOVERED_JUMPTABLE)();
                    /* WARNING: Could not recover jumptable at 0x4203ce9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(unaff_s2 + -0x130) + 0x530))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4203ce72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

