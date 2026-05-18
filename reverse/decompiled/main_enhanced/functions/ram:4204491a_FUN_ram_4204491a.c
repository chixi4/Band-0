
int FUN_ram_4204491a(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int iVar2;
  uint in_a5;
  int unaff_s2;
  
  while( true ) {
    if ((in_a5 & 4) != 0) {
      return -1;
    }
    if (in_a5 != 0) break;
    iVar1 = (**(code **)(*(int *)(unaff_s1 + -0x134) + 0x114))();
    iVar2 = unaff_s0 * 4;
    if ((int)(uint)*(byte *)(iVar1 + 0xb) <= unaff_s0) {
      return 0;
    }
    unaff_s0 = unaff_s0 + 1;
    in_a5 = (uint)**(byte **)(*(int *)(*(int *)(unaff_s2 + -0x124) + 0x14) + iVar2);
  }
  return unaff_s0;
}

