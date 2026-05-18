
void FUN_ram_4203ac06(void)

{
  undefined1 *unaff_s0;
  undefined4 unaff_s1;
  undefined1 uVar1;
  undefined1 in_a5;
  undefined1 unaff_s2;
  int unaff_s3;
  code *in_stack_0000000c;
  
  *unaff_s0 = 0xe;
  unaff_s0[1] = in_a5;
  uVar1 = (**(code **)(*(int *)(unaff_s3 + -0x134) + 0x75c))();
  unaff_s0[2] = uVar1;
  unaff_s0[3] = (char)unaff_s1;
  unaff_s0[4] = (char)((uint)unaff_s1 >> 8);
  unaff_s0[5] = unaff_s2;
  (**(code **)(*(int *)(unaff_s3 + -0x134) + 0x758))();
  if (in_stack_0000000c != (code *)0x0) {
    (*in_stack_0000000c)();
  }
  return;
}

