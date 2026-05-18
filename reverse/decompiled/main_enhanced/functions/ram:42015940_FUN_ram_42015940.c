
void FUN_ram_42015940(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     int param_5)

{
  char cVar1;
  int unaff_s0;
  int unaff_s1;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  if (unaff_s1 == 0) {
    *(undefined1 *)(unaff_s0 + -0x90) = 0;
  }
  else {
    cVar1 = *(char *)(unaff_s0 + -0x90);
    *(char *)(unaff_s0 + -0x90) = cVar1 + '\x01';
    if (1 < (byte)(cVar1 + 1U)) {
      *(undefined4 *)(param_5 + -0x88) = param_1;
      *(undefined4 *)(param_5 + -0x84) = param_2;
      *(undefined1 *)(unaff_s0 + -0x90) = 0;
      FUN_ram_42014a46();
      in_stack_00000008 = 0;
      in_stack_0000000c = 0;
      in_stack_00000004 = 2;
      FUN_ram_42018d20(&stack0x00000004);
    }
  }
  return;
}

