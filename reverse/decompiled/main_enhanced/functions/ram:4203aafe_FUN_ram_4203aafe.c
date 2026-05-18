
void FUN_ram_4203aafe(void)

{
  undefined1 *unaff_s0;
  undefined4 unaff_s1;
  undefined1 uVar1;
  int in_a4;
  undefined1 unaff_s2;
  int unaff_s3;
  undefined4 in_stack_00000008;
  code *in_stack_0000000c;
  
  tp = tp + 2;
  (**(code **)(in_a4 + 0x110))(0x815,&DAT_ram_3c0f5914);
  *unaff_s0 = 0xe;
  unaff_s0[1] = in_stack_00000008._3_1_ + '\x04';
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

