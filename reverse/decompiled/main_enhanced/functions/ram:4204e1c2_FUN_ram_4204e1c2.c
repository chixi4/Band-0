
int FUN_ram_4204e1c2(undefined4 param_1,undefined4 param_2)

{
  int unaff_s0;
  int iVar1;
  int unaff_s2;
  
  do {
    if (unaff_s0 == 0) {
      return 0;
    }
    while (iVar1 = FUN_ram_4204d0c6(unaff_s0,param_2,0xff,0,0xff), iVar1 != unaff_s2 + 0x102) {
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    unaff_s0 = *(int *)(unaff_s0 + 4);
  } while( true );
}

