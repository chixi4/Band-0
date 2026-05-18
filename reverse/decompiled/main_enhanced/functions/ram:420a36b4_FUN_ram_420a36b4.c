
undefined4 FUN_ram_420a36b4(void)

{
  int unaff_s0;
  undefined4 uVar1;
  int in_a5;
  
  uVar1 = 0xffffffff;
  if (-1 < in_a5) {
    uVar1 = FUN_ram_420b1020(in_a5);
    *(undefined4 *)(unaff_s0 + 0x70) = 0xffffffff;
  }
  return uVar1;
}

