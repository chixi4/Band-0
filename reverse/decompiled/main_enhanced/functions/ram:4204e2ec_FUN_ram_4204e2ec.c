
int FUN_ram_4204e2ec(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int unaff_s1;
  int iVar1;
  int unaff_s3;
  uint uStack0000000c;
  undefined4 in_stack_00000010;
  
  do {
    if (unaff_s1 == 0) {
      return 0;
    }
    uStack0000000c = 0;
    do {
      iVar1 = FUN_ram_4204cd30(unaff_s1,param_2,0xff,0,&stack0x0000000c,&stack0x00000010,0xff);
      if (iVar1 == unaff_s3 + 0x102) break;
      if (iVar1 != 0) {
        return iVar1;
      }
      *param_3 = *param_3 + (uint)in_stack_00000010._2_1_;
      uStack0000000c = in_stack_00000010._2_1_ + uStack0000000c;
    } while (uStack0000000c < 0x7e);
    unaff_s1 = *(int *)(unaff_s1 + 4);
  } while( true );
}

