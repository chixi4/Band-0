
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420163e6(void)

{
  int iVar1;
  int iVar2;
  int in_a5;
  undefined4 in_stack_0000000c;
  
  iVar1 = 0x103;
  if (in_a5 != 0) {
    iVar2 = FUN_ram_42016368();
    iVar1 = FUN_ram_4204beee(0x3c0a86f0,1,&stack0x0000000c);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_4204c078(in_stack_0000000c,0x3c0a8784,iVar2 + 1);
      if (iVar1 == 0) {
        iVar1 = FUN_ram_4204c0c8(in_stack_0000000c);
        FUN_ram_4204c3d0(in_stack_0000000c);
        if (iVar1 == 0) {
          DAT_ram_3fcc4f8c = 1;
          _DAT_ram_3fcc4f90 = iVar2 + 1;
        }
      }
      else {
        FUN_ram_4204c3d0();
      }
    }
  }
  return iVar1;
}

