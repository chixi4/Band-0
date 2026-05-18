
int FUN_ram_420160f4(uint param_1)

{
  int iVar1;
  undefined4 in_stack_0000000c;
  
  iVar1 = 0x102;
  if ((param_1 < 0x10) && (iVar1 = FUN_ram_4204beee(0x3c0a86f0,1,&stack0x0000000c), iVar1 == 0)) {
    iVar1 = FUN_ram_4204bfd0(in_stack_0000000c,0x3c0a876c,param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_4204c0c8(in_stack_0000000c);
      FUN_ram_4204c3d0(in_stack_0000000c);
      if (iVar1 == 0) {
        *(char *)(gp + -0x7b2) = (char)param_1;
        DAT_ram_3fcc4f94 = 1;
      }
    }
    else {
      FUN_ram_4204c3d0();
    }
  }
  return iVar1;
}

