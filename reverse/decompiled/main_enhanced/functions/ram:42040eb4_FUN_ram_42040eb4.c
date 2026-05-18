
void FUN_ram_42040eb4(void)

{
  int unaff_s0;
  ushort *unaff_s1;
  int in_a3;
  code *in_a4;
  int in_a5;
  int unaff_s2;
  int unaff_s3;
  
  while( true ) {
    unaff_s0 = unaff_s0 + 1;
    (*in_a4)(*(undefined4 *)(in_a5 + in_a3));
    if ((int)(uint)*unaff_s1 <= unaff_s0) break;
    in_a3 = unaff_s0 * 4;
    in_a5 = *(int *)(*(int *)(unaff_s3 + -0x9c) + 0x1c);
    in_a4 = *(code **)(*(int *)(unaff_s2 + -0x134) + 0x3d4);
  }
                    /* WARNING: Could not recover jumptable at 0x42040ede. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(unaff_s2 + -0x134) + 0xbfc))(0);
  return;
}

